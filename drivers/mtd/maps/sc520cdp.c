/* sc520cdp.c -- MTD map driver for AMD SC520 Customer Development Platform
 *
 * Copyright (C) 2001 Sysgo Real-Time Solutions GmbH
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 *
 *
 * The SC520CDP is an evaluation board for the Elan SC520 processor available
 * from AMD. It has two banks of 32-bit Flash ROM, each 8 Megabytes in size,
 * and up to 512 KiB of 8-bit DIL Flash ROM.
 * For details see http://www.amd.com/products/epd/desiging/evalboards/18.elansc520/520_cdp_brief/index.html
 */

#include <linux/module.h>
#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <asm/io.h>
#include <linux/mtd/mtd.h>
#include <linux/mtd/map.h>
#include <linux/mtd/concat.h>

#define REPROGRAM_PAR



#ifdef REPROGRAM_PAR

#define WINDOW_ADDR_0	0x08800000
#define WINDOW_ADDR_1	0x09000000
#define WINDOW_ADDR_2	0x09800000

#define WINDOW_ADDR_0_BIOS	0x08400000
#define WINDOW_ADDR_1_BIOS	0x08c00000
#define WINDOW_ADDR_2_BIOS	0x09400000

#else

#define WINDOW_ADDR_0	0x08400000
#define WINDOW_ADDR_1	0x08C00000
#define WINDOW_ADDR_2	0x09400000

#endif

#define WINDOW_SIZE_0	0x00800000
#define WINDOW_SIZE_1	0x00800000
#define WINDOW_SIZE_2	0x00080000


static struct map_info sc520cdp_map[] = {
	{
		.name = "SC520CDP Flash Bank #0",
		.size = WINDOW_SIZE_0,
		.bankwidth = 4,
		.phys = WINDOW_ADDR_0
	},
	{
		.name = "SC520CDP Flash Bank #1",
		.size = WINDOW_SIZE_1,
		.bankwidth = 4,
		.phys = WINDOW_ADDR_1
	},
	{
		.name = "SC520CDP DIL Flash",
		.size = WINDOW_SIZE_2,
		.bankwidth = 1,
		.phys = WINDOW_ADDR_2
	},
};

#define NUM_FLASH_BANKS	ARRAY_SIZE(sc520cdp_map)

static struct mtd_info *mymtd[NUM_FLASH_BANKS];
static struct mtd_info *merged_mtd;

#ifdef REPROGRAM_PAR

#define SC520_MMCR_BASE		0xFFFEF000
#define SC520_MMCR_EXTENT	0x1000
#define SC520_PAR(x)		((0x88/sizeof(unsigned long)) + (x))
#define NUM_SC520_PAR		16	

#define SC520_PAR_BOOTCS	(0x4<<29)
#define SC520_PAR_ROMCS0	(0x5<<29)
#define SC520_PAR_ROMCS1	(0x6<<29)
#define SC520_PAR_TRGDEV	(0x7<<29)

#define SC520_PAR_WRPROT	(1<<26)	
#define SC520_PAR_NOCACHE	(1<<27)	
#define SC520_PAR_NOEXEC	(1<<28)	


#define SC520_PAR_PG_SIZ4	(0<<25)
#define SC520_PAR_PG_SIZ64	(1<<25)

/*
** Build a value to be written into a PAR register.
** We only need ROM entries, 64K page size:
*/
#define SC520_PAR_ENTRY(trgdev, address, size) \
	((trgdev) | SC520_PAR_NOCACHE | SC520_PAR_PG_SIZ64 | \
	(address) >> 16 | (((size) >> 16) - 1) << 14)

struct sc520_par_table
{
	unsigned long trgdev;
	unsigned long new_par;
	unsigned long default_address;
};

static const struct sc520_par_table par_table[NUM_FLASH_BANKS] =
{
	{	
		SC520_PAR_ROMCS0,
		SC520_PAR_ENTRY(SC520_PAR_ROMCS0, WINDOW_ADDR_0, WINDOW_SIZE_0),
		WINDOW_ADDR_0_BIOS
	},
	{	
		SC520_PAR_ROMCS1,
		SC520_PAR_ENTRY(SC520_PAR_ROMCS1, WINDOW_ADDR_1, WINDOW_SIZE_1),
		WINDOW_ADDR_1_BIOS
	},
	{	
		SC520_PAR_BOOTCS,
		SC520_PAR_ENTRY(SC520_PAR_BOOTCS, WINDOW_ADDR_2, WINDOW_SIZE_2),
		WINDOW_ADDR_2_BIOS
	}
};


static void sc520cdp_setup_par(void)
{
	volatile unsigned long __iomem *mmcr;
	unsigned long mmcr_val;
	int i, j;

	
	mmcr = ioremap_nocache(SC520_MMCR_BASE, SC520_MMCR_EXTENT);
	if(!mmcr) { 
		
		for(i = 0; i < NUM_FLASH_BANKS; i++)
			sc520cdp_map[i].phys = par_table[i].default_address;
		return;
	}

	for(i = 0; i < NUM_FLASH_BANKS; i++) {		
		for(j = 0; j < NUM_SC520_PAR; j++) {	
			mmcr_val = mmcr[SC520_PAR(j)];
			
			if((mmcr_val & SC520_PAR_TRGDEV) == par_table[i].trgdev)
			{
				mmcr[SC520_PAR(j)] = par_table[i].new_par;
				break;
			}
		}
		if(j == NUM_SC520_PAR)
		{	
			printk(KERN_NOTICE "Could not find PAR responsible for %s\n",
				sc520cdp_map[i].name);
			printk(KERN_NOTICE "Trying default address 0x%lx\n",
				par_table[i].default_address);
			sc520cdp_map[i].phys = par_table[i].default_address;
		}
	}
	iounmap(mmcr);
}
#endif


static int __init init_sc520cdp(void)
{
	int i, devices_found = 0;

#ifdef REPROGRAM_PAR
	
	sc520cdp_setup_par();
#endif

	for (i = 0; i < NUM_FLASH_BANKS; i++) {
		printk(KERN_NOTICE "SC520 CDP flash device: 0x%Lx at 0x%Lx\n",
			(unsigned long long)sc520cdp_map[i].size,
			(unsigned long long)sc520cdp_map[i].phys);

		sc520cdp_map[i].virt = ioremap_nocache(sc520cdp_map[i].phys, sc520cdp_map[i].size);

		if (!sc520cdp_map[i].virt) {
			printk("Failed to ioremap_nocache\n");
			return -EIO;
		}

		simple_map_init(&sc520cdp_map[i]);

		mymtd[i] = do_map_probe("cfi_probe", &sc520cdp_map[i]);
		if(!mymtd[i])
			mymtd[i] = do_map_probe("jedec_probe", &sc520cdp_map[i]);
		if(!mymtd[i])
			mymtd[i] = do_map_probe("map_rom", &sc520cdp_map[i]);

		if (mymtd[i]) {
			mymtd[i]->owner = THIS_MODULE;
			++devices_found;
		}
		else {
			iounmap(sc520cdp_map[i].virt);
		}
	}
	if(devices_found >= 2) {
		
		merged_mtd = mtd_concat_create(mymtd, 2, "SC520CDP Flash Banks #0 and #1");
		if(merged_mtd)
			mtd_device_register(merged_mtd, NULL, 0);
	}
	if(devices_found == 3) 
		mtd_device_register(mymtd[2], NULL, 0);
	return(devices_found ? 0 : -ENXIO);
}

static void __exit cleanup_sc520cdp(void)
{
	int i;

	if (merged_mtd) {
		mtd_device_unregister(merged_mtd);
		mtd_concat_destroy(merged_mtd);
	}
	if (mymtd[2])
		mtd_device_unregister(mymtd[2]);

	for (i = 0; i < NUM_FLASH_BANKS; i++) {
		if (mymtd[i])
			map_destroy(mymtd[i]);
		if (sc520cdp_map[i].virt) {
			iounmap(sc520cdp_map[i].virt);
			sc520cdp_map[i].virt = NULL;
		}
	}
}

module_init(init_sc520cdp);
module_exit(cleanup_sc520cdp);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sysgo Real-Time Solutions GmbH");
MODULE_DESCRIPTION("MTD map driver for AMD SC520 Customer Development Platform");
