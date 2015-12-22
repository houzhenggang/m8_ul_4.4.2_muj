/*
 *  linux/include/linux/hfsplus_fs.h
 *
 * Copyright (C) 1999
 * Brad Boyer (flar@pants.nu)
 * (C) 2003 Ardis Technologies <roman@ardistech.com>
 *
 */

#ifndef _LINUX_HFSPLUS_FS_H
#define _LINUX_HFSPLUS_FS_H

#include <linux/fs.h>
#include <linux/mutex.h>
#include <linux/buffer_head.h>
#include <linux/blkdev.h>
#include "hfsplus_raw.h"

#define DBG_BNODE_REFS	0x00000001
#define DBG_BNODE_MOD	0x00000002
#define DBG_CAT_MOD	0x00000004
#define DBG_INODE	0x00000008
#define DBG_SUPER	0x00000010
#define DBG_EXTENT	0x00000020
#define DBG_BITMAP	0x00000040

#if 0
#define DBG_MASK	(DBG_EXTENT|DBG_INODE|DBG_BNODE_MOD)
#define DBG_MASK	(DBG_BNODE_MOD|DBG_CAT_MOD|DBG_INODE)
#define DBG_MASK	(DBG_CAT_MOD|DBG_BNODE_REFS|DBG_INODE|DBG_EXTENT)
#endif
#define DBG_MASK	(0)

#define dprint(flg, fmt, args...) \
	if (flg & DBG_MASK) \
		printk(fmt , ## args)

#define HFSPLUS_DEF_CR_TYPE    0x3F3F3F3F  

#define HFSPLUS_TYPE_DATA 0x00
#define HFSPLUS_TYPE_RSRC 0xFF

typedef int (*btree_keycmp)(const hfsplus_btree_key *,
		const hfsplus_btree_key *);

#define NODE_HASH_SIZE	256

struct hfs_btree {
	struct super_block *sb;
	struct inode *inode;
	btree_keycmp keycmp;

	u32 cnid;
	u32 root;
	u32 leaf_count;
	u32 leaf_head;
	u32 leaf_tail;
	u32 node_count;
	u32 free_nodes;
	u32 attributes;

	unsigned int node_size;
	unsigned int node_size_shift;
	unsigned int max_key_len;
	unsigned int depth;

	struct mutex tree_lock;

	unsigned int pages_per_bnode;
	spinlock_t hash_lock;
	struct hfs_bnode *node_hash[NODE_HASH_SIZE];
	int node_hash_cnt;
};

struct page;

struct hfs_bnode {
	struct hfs_btree *tree;

	u32 prev;
	u32 this;
	u32 next;
	u32 parent;

	u16 num_recs;
	u8 type;
	u8 height;

	struct hfs_bnode *next_hash;
	unsigned long flags;
	wait_queue_head_t lock_wq;
	atomic_t refcnt;
	unsigned int page_offset;
	struct page *page[0];
};

#define HFS_BNODE_LOCK		0
#define HFS_BNODE_ERROR		1
#define HFS_BNODE_NEW		2
#define HFS_BNODE_DIRTY		3
#define HFS_BNODE_DELETED	4


struct hfsplus_vh;
struct hfs_btree;

struct hfsplus_sb_info {
	void *s_vhdr_buf;
	struct hfsplus_vh *s_vhdr;
	void *s_backup_vhdr_buf;
	struct hfsplus_vh *s_backup_vhdr;
	struct hfs_btree *ext_tree;
	struct hfs_btree *cat_tree;
	struct hfs_btree *attr_tree;
	struct inode *alloc_file;
	struct inode *hidden_dir;
	struct nls_table *nls;

	
	u32 blockoffset;
	sector_t part_start;
	sector_t sect_count;
	int fs_shift;

	
	u32 alloc_blksz;
	int alloc_blksz_shift;
	u32 total_blocks;
	u32 data_clump_blocks, rsrc_clump_blocks;

	
	u32 free_blocks;
	struct mutex alloc_mutex;

	
	u32 next_cnid;
	u32 file_count;
	u32 folder_count;
	struct mutex vh_mutex;

	
	u32 creator;
	u32 type;

	umode_t umask;
	uid_t uid;
	gid_t gid;

	int part, session;

	unsigned long flags;
};

#define HFSPLUS_SB_WRITEBACKUP	0
#define HFSPLUS_SB_NODECOMPOSE	1
#define HFSPLUS_SB_FORCE	2
#define HFSPLUS_SB_HFSX		3
#define HFSPLUS_SB_CASEFOLD	4
#define HFSPLUS_SB_NOBARRIER	5

static inline struct hfsplus_sb_info *HFSPLUS_SB(struct super_block *sb)
{
	return sb->s_fs_info;
}


struct hfsplus_inode_info {
	atomic_t opencnt;

	u32 first_blocks;
	u32 clump_blocks;
	u32 alloc_blocks;
	u32 cached_start;
	u32 cached_blocks;
	hfsplus_extent_rec first_extents;
	hfsplus_extent_rec cached_extents;
	unsigned int extent_state;
	struct mutex extents_lock;

	struct inode *rsrc_inode;
	__be32 create_date;

	u32 linkid;

	unsigned long flags;

	sector_t fs_blocks;
	u8 userflags;		
	struct list_head open_dir_list;
	loff_t phys_size;

	struct inode vfs_inode;
};

#define HFSPLUS_EXT_DIRTY	0x0001
#define HFSPLUS_EXT_NEW		0x0002

#define HFSPLUS_I_RSRC		0	
#define HFSPLUS_I_CAT_DIRTY	1	
#define HFSPLUS_I_EXT_DIRTY	2	
#define HFSPLUS_I_ALLOC_DIRTY	3	

#define HFSPLUS_IS_RSRC(inode) \
	test_bit(HFSPLUS_I_RSRC, &HFSPLUS_I(inode)->flags)

static inline struct hfsplus_inode_info *HFSPLUS_I(struct inode *inode)
{
	return list_entry(inode, struct hfsplus_inode_info, vfs_inode);
}

/*
 * Mark an inode dirty, and also mark the btree in which the
 * specific type of metadata is stored.
 * For data or metadata that gets written back by into the catalog btree
 * by hfsplus_write_inode a plain mark_inode_dirty call is enough.
 */
static inline void hfsplus_mark_inode_dirty(struct inode *inode,
		unsigned int flag)
{
	set_bit(flag, &HFSPLUS_I(inode)->flags);
	mark_inode_dirty(inode);
}

struct hfs_find_data {
	
	hfsplus_btree_key *search_key;
	hfsplus_btree_key *key;
	
	struct hfs_btree *tree;
	struct hfs_bnode *bnode;
	
	int record;
	int keyoffset, keylength;
	int entryoffset, entrylength;
};

struct hfsplus_readdir_data {
	struct list_head list;
	struct file *file;
	struct hfsplus_cat_key key;
};

static inline unsigned short hfsplus_min_io_size(struct super_block *sb)
{
	return max_t(unsigned short, bdev_logical_block_size(sb->s_bdev),
		     HFSPLUS_SECTOR_SIZE);
}

#define hfs_btree_open hfsplus_btree_open
#define hfs_btree_close hfsplus_btree_close
#define hfs_btree_write hfsplus_btree_write
#define hfs_bmap_alloc hfsplus_bmap_alloc
#define hfs_bmap_free hfsplus_bmap_free
#define hfs_bnode_read hfsplus_bnode_read
#define hfs_bnode_read_u16 hfsplus_bnode_read_u16
#define hfs_bnode_read_u8 hfsplus_bnode_read_u8
#define hfs_bnode_read_key hfsplus_bnode_read_key
#define hfs_bnode_write hfsplus_bnode_write
#define hfs_bnode_write_u16 hfsplus_bnode_write_u16
#define hfs_bnode_clear hfsplus_bnode_clear
#define hfs_bnode_copy hfsplus_bnode_copy
#define hfs_bnode_move hfsplus_bnode_move
#define hfs_bnode_dump hfsplus_bnode_dump
#define hfs_bnode_unlink hfsplus_bnode_unlink
#define hfs_bnode_findhash hfsplus_bnode_findhash
#define hfs_bnode_find hfsplus_bnode_find
#define hfs_bnode_unhash hfsplus_bnode_unhash
#define hfs_bnode_free hfsplus_bnode_free
#define hfs_bnode_create hfsplus_bnode_create
#define hfs_bnode_get hfsplus_bnode_get
#define hfs_bnode_put hfsplus_bnode_put
#define hfs_brec_lenoff hfsplus_brec_lenoff
#define hfs_brec_keylen hfsplus_brec_keylen
#define hfs_brec_insert hfsplus_brec_insert
#define hfs_brec_remove hfsplus_brec_remove
#define hfs_find_init hfsplus_find_init
#define hfs_find_exit hfsplus_find_exit
#define __hfs_brec_find __hplusfs_brec_find
#define hfs_brec_find hfsplus_brec_find
#define hfs_brec_read hfsplus_brec_read
#define hfs_brec_goto hfsplus_brec_goto
#define hfs_part_find hfsplus_part_find


#define HFSPLUS_IOC_EXT2_GETFLAGS	FS_IOC_GETFLAGS
#define HFSPLUS_IOC_EXT2_SETFLAGS	FS_IOC_SETFLAGS


#define HFSPLUS_IOC_BLESS _IO('h', 0x80)


int hfsplus_block_allocate(struct super_block *, u32, u32, u32 *);
int hfsplus_block_free(struct super_block *, u32, u32);

struct hfs_btree *hfs_btree_open(struct super_block *, u32);
void hfs_btree_close(struct hfs_btree *);
void hfs_btree_write(struct hfs_btree *);
struct hfs_bnode *hfs_bmap_alloc(struct hfs_btree *);
void hfs_bmap_free(struct hfs_bnode *);

void hfs_bnode_read(struct hfs_bnode *, void *, int, int);
u16 hfs_bnode_read_u16(struct hfs_bnode *, int);
u8 hfs_bnode_read_u8(struct hfs_bnode *, int);
void hfs_bnode_read_key(struct hfs_bnode *, void *, int);
void hfs_bnode_write(struct hfs_bnode *, void *, int, int);
void hfs_bnode_write_u16(struct hfs_bnode *, int, u16);
void hfs_bnode_clear(struct hfs_bnode *, int, int);
void hfs_bnode_copy(struct hfs_bnode *, int,
		    struct hfs_bnode *, int, int);
void hfs_bnode_move(struct hfs_bnode *, int, int, int);
void hfs_bnode_dump(struct hfs_bnode *);
void hfs_bnode_unlink(struct hfs_bnode *);
struct hfs_bnode *hfs_bnode_findhash(struct hfs_btree *, u32);
struct hfs_bnode *hfs_bnode_find(struct hfs_btree *, u32);
void hfs_bnode_unhash(struct hfs_bnode *);
void hfs_bnode_free(struct hfs_bnode *);
struct hfs_bnode *hfs_bnode_create(struct hfs_btree *, u32);
void hfs_bnode_get(struct hfs_bnode *);
void hfs_bnode_put(struct hfs_bnode *);

u16 hfs_brec_lenoff(struct hfs_bnode *, u16, u16 *);
u16 hfs_brec_keylen(struct hfs_bnode *, u16);
int hfs_brec_insert(struct hfs_find_data *, void *, int);
int hfs_brec_remove(struct hfs_find_data *);

int hfs_find_init(struct hfs_btree *, struct hfs_find_data *);
void hfs_find_exit(struct hfs_find_data *);
int __hfs_brec_find(struct hfs_bnode *, struct hfs_find_data *);
int hfs_brec_find(struct hfs_find_data *);
int hfs_brec_read(struct hfs_find_data *, void *, int);
int hfs_brec_goto(struct hfs_find_data *, int);

int hfsplus_cat_case_cmp_key(const hfsplus_btree_key *,
		const hfsplus_btree_key *);
int hfsplus_cat_bin_cmp_key(const hfsplus_btree_key *,
		const hfsplus_btree_key *);
void hfsplus_cat_build_key(struct super_block *sb,
		hfsplus_btree_key *, u32, struct qstr *);
int hfsplus_find_cat(struct super_block *, u32, struct hfs_find_data *);
int hfsplus_create_cat(u32, struct inode *, struct qstr *, struct inode *);
int hfsplus_delete_cat(u32, struct inode *, struct qstr *);
int hfsplus_rename_cat(u32, struct inode *, struct qstr *,
		       struct inode *, struct qstr *);
void hfsplus_cat_set_perms(struct inode *inode, struct hfsplus_perm *perms);

extern const struct inode_operations hfsplus_dir_inode_operations;
extern const struct file_operations hfsplus_dir_operations;

int hfsplus_ext_cmp_key(const hfsplus_btree_key *, const hfsplus_btree_key *);
int hfsplus_ext_write_extent(struct inode *);
int hfsplus_get_block(struct inode *, sector_t, struct buffer_head *, int);
int hfsplus_free_fork(struct super_block *, u32,
		struct hfsplus_fork_raw *, int);
int hfsplus_file_extend(struct inode *);
void hfsplus_file_truncate(struct inode *);

extern const struct address_space_operations hfsplus_aops;
extern const struct address_space_operations hfsplus_btree_aops;
extern const struct dentry_operations hfsplus_dentry_operations;

void hfsplus_inode_read_fork(struct inode *, struct hfsplus_fork_raw *);
void hfsplus_inode_write_fork(struct inode *, struct hfsplus_fork_raw *);
int hfsplus_cat_read_inode(struct inode *, struct hfs_find_data *);
int hfsplus_cat_write_inode(struct inode *);
struct inode *hfsplus_new_inode(struct super_block *, umode_t);
void hfsplus_delete_inode(struct inode *);
int hfsplus_file_fsync(struct file *file, loff_t start, loff_t end,
		       int datasync);

long hfsplus_ioctl(struct file *filp, unsigned int cmd, unsigned long arg);
int hfsplus_setxattr(struct dentry *dentry, const char *name,
		     const void *value, size_t size, int flags);
ssize_t hfsplus_getxattr(struct dentry *dentry, const char *name,
			 void *value, size_t size);
ssize_t hfsplus_listxattr(struct dentry *dentry, char *buffer, size_t size);

int hfsplus_parse_options(char *, struct hfsplus_sb_info *);
int hfsplus_parse_options_remount(char *input, int *force);
void hfsplus_fill_defaults(struct hfsplus_sb_info *);
int hfsplus_show_options(struct seq_file *, struct dentry *);

struct inode *hfsplus_iget(struct super_block *, unsigned long);
int hfsplus_sync_fs(struct super_block *sb, int wait);

extern u16 hfsplus_case_fold_table[];
extern u16 hfsplus_decompose_table[];
extern u16 hfsplus_compose_table[];

int hfsplus_strcasecmp(const struct hfsplus_unistr *,
		const struct hfsplus_unistr *);
int hfsplus_strcmp(const struct hfsplus_unistr *,
		const struct hfsplus_unistr *);
int hfsplus_uni2asc(struct super_block *,
		const struct hfsplus_unistr *, char *, int *);
int hfsplus_asc2uni(struct super_block *,
		struct hfsplus_unistr *, const char *, int);
int hfsplus_hash_dentry(const struct dentry *dentry,
		const struct inode *inode, struct qstr *str);
int hfsplus_compare_dentry(const struct dentry *parent,
		const struct inode *pinode,
		const struct dentry *dentry, const struct inode *inode,
		unsigned int len, const char *str, const struct qstr *name);

int hfsplus_read_wrapper(struct super_block *);
int hfs_part_find(struct super_block *, sector_t *, sector_t *);
int hfsplus_submit_bio(struct super_block *sb, sector_t sector,
		void *buf, void **data, int rw);

#define __hfsp_mt2ut(t)		(be32_to_cpu(t) - 2082844800U)
#define __hfsp_ut2mt(t)		(cpu_to_be32(t + 2082844800U))

#define hfsp_mt2ut(t)		(struct timespec){ .tv_sec = __hfsp_mt2ut(t) }
#define hfsp_ut2mt(t)		__hfsp_ut2mt((t).tv_sec)
#define hfsp_now2mt()		__hfsp_ut2mt(get_seconds())

#endif
