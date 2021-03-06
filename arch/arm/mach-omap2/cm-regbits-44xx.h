/*
 * OMAP44xx Clock Management register bits
 *
 * Copyright (C) 2009-2010 Texas Instruments, Inc.
 * Copyright (C) 2009-2010 Nokia Corporation
 *
 * Paul Walmsley (paul@pwsan.com)
 * Rajendra Nayak (rnayak@ti.com)
 * Benoit Cousson (b-cousson@ti.com)
 *
 * This file is automatically generated from the OMAP hardware databases.
 * We respectfully ask that any modifications to this file be coordinated
 * with the public linux-omap@vger.kernel.org mailing list and the
 * authors above to ensure that the autogeneration scripts are kept
 * up-to-date with the file contents.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ARCH_ARM_MACH_OMAP2_CM_REGBITS_44XX_H
#define __ARCH_ARM_MACH_OMAP2_CM_REGBITS_44XX_H

#define OMAP4430_ABE_DYNDEP_SHIFT				3
#define OMAP4430_ABE_DYNDEP_MASK				(1 << 3)

#define OMAP4430_ABE_STATDEP_SHIFT				3
#define OMAP4430_ABE_STATDEP_MASK				(1 << 3)

#define OMAP4430_ALWONCORE_DYNDEP_SHIFT				16
#define OMAP4430_ALWONCORE_DYNDEP_MASK				(1 << 16)

#define OMAP4430_ALWONCORE_STATDEP_SHIFT			16
#define OMAP4430_ALWONCORE_STATDEP_MASK				(1 << 16)

#define OMAP4430_AUTO_DPLL_MODE_SHIFT				0
#define OMAP4430_AUTO_DPLL_MODE_MASK				(0x7 << 0)

#define OMAP4430_CEFUSE_DYNDEP_SHIFT				17
#define OMAP4430_CEFUSE_DYNDEP_MASK				(1 << 17)

#define OMAP4430_CEFUSE_STATDEP_SHIFT				17
#define OMAP4430_CEFUSE_STATDEP_MASK				(1 << 17)

#define OMAP4430_CLKACTIVITY_ABE_24M_GFCLK_SHIFT		13
#define OMAP4430_CLKACTIVITY_ABE_24M_GFCLK_MASK			(1 << 13)

#define OMAP4430_CLKACTIVITY_ABE_ALWON_32K_CLK_SHIFT		12
#define OMAP4430_CLKACTIVITY_ABE_ALWON_32K_CLK_MASK		(1 << 12)

#define OMAP4430_CLKACTIVITY_ABE_LP_CLK_SHIFT			9
#define OMAP4430_CLKACTIVITY_ABE_LP_CLK_MASK			(1 << 9)

#define OMAP4430_CLKACTIVITY_ABE_SYSCLK_SHIFT			11
#define OMAP4430_CLKACTIVITY_ABE_SYSCLK_MASK			(1 << 11)

#define OMAP4430_CLKACTIVITY_ABE_X2_CLK_SHIFT			8
#define OMAP4430_CLKACTIVITY_ABE_X2_CLK_MASK			(1 << 8)

#define OMAP4430_CLKACTIVITY_ASYNC_DLL_CLK_SHIFT		11
#define OMAP4430_CLKACTIVITY_ASYNC_DLL_CLK_MASK			(1 << 11)

#define OMAP4430_CLKACTIVITY_ASYNC_PHY1_CLK_SHIFT		12
#define OMAP4430_CLKACTIVITY_ASYNC_PHY1_CLK_MASK		(1 << 12)

#define OMAP4430_CLKACTIVITY_ASYNC_PHY2_CLK_SHIFT		13
#define OMAP4430_CLKACTIVITY_ASYNC_PHY2_CLK_MASK		(1 << 13)

#define OMAP4430_CLKACTIVITY_CAM_PHY_CTRL_GCLK_SHIFT		9
#define OMAP4430_CLKACTIVITY_CAM_PHY_CTRL_GCLK_MASK		(1 << 9)

#define OMAP4430_CLKACTIVITY_CORE_ALWON_32K_GFCLK_SHIFT		12
#define OMAP4430_CLKACTIVITY_CORE_ALWON_32K_GFCLK_MASK		(1 << 12)

#define OMAP4430_CLKACTIVITY_CORE_DPLL_EMU_CLK_SHIFT		9
#define OMAP4430_CLKACTIVITY_CORE_DPLL_EMU_CLK_MASK		(1 << 9)

#define OMAP4460_CLKACTIVITY_CORE_TS_GFCLK_SHIFT		9
#define OMAP4460_CLKACTIVITY_CORE_TS_GFCLK_MASK			(1 << 9)

#define OMAP4430_CLKACTIVITY_CUST_EFUSE_SYS_CLK_SHIFT		9
#define OMAP4430_CLKACTIVITY_CUST_EFUSE_SYS_CLK_MASK		(1 << 9)

#define OMAP4430_CLKACTIVITY_DLL_CLK_SHIFT			9
#define OMAP4430_CLKACTIVITY_DLL_CLK_MASK			(1 << 9)

#define OMAP4430_CLKACTIVITY_DMT10_GFCLK_SHIFT			9
#define OMAP4430_CLKACTIVITY_DMT10_GFCLK_MASK			(1 << 9)

#define OMAP4430_CLKACTIVITY_DMT11_GFCLK_SHIFT			10
#define OMAP4430_CLKACTIVITY_DMT11_GFCLK_MASK			(1 << 10)

#define OMAP4430_CLKACTIVITY_DMT2_GFCLK_SHIFT			11
#define OMAP4430_CLKACTIVITY_DMT2_GFCLK_MASK			(1 << 11)

#define OMAP4430_CLKACTIVITY_DMT3_GFCLK_SHIFT			12
#define OMAP4430_CLKACTIVITY_DMT3_GFCLK_MASK			(1 << 12)

#define OMAP4430_CLKACTIVITY_DMT4_GFCLK_SHIFT			13
#define OMAP4430_CLKACTIVITY_DMT4_GFCLK_MASK			(1 << 13)

#define OMAP4430_CLKACTIVITY_DMT9_GFCLK_SHIFT			14
#define OMAP4430_CLKACTIVITY_DMT9_GFCLK_MASK			(1 << 14)

#define OMAP4430_CLKACTIVITY_DSS_ALWON_SYS_CLK_SHIFT		10
#define OMAP4430_CLKACTIVITY_DSS_ALWON_SYS_CLK_MASK		(1 << 10)

#define OMAP4430_CLKACTIVITY_DSS_FCLK_SHIFT			9
#define OMAP4430_CLKACTIVITY_DSS_FCLK_MASK			(1 << 9)

#define OMAP4430_CLKACTIVITY_DUCATI_GCLK_SHIFT			8
#define OMAP4430_CLKACTIVITY_DUCATI_GCLK_MASK			(1 << 8)

#define OMAP4430_CLKACTIVITY_EMU_SYS_CLK_SHIFT			8
#define OMAP4430_CLKACTIVITY_EMU_SYS_CLK_MASK			(1 << 8)

#define OMAP4430_CLKACTIVITY_FDIF_GFCLK_SHIFT			10
#define OMAP4430_CLKACTIVITY_FDIF_GFCLK_MASK			(1 << 10)

#define OMAP4430_CLKACTIVITY_FUNC_12M_GFCLK_SHIFT		15
#define OMAP4430_CLKACTIVITY_FUNC_12M_GFCLK_MASK		(1 << 15)

#define OMAP4430_CLKACTIVITY_FUNC_24M_GFCLK_SHIFT		10
#define OMAP4430_CLKACTIVITY_FUNC_24M_GFCLK_MASK		(1 << 10)

#define OMAP4430_CLKACTIVITY_HDMI_PHY_48MHZ_GFCLK_SHIFT		11
#define OMAP4430_CLKACTIVITY_HDMI_PHY_48MHZ_GFCLK_MASK		(1 << 11)

#define OMAP4430_CLKACTIVITY_HSIC_P1_480M_GFCLK_SHIFT		20
#define OMAP4430_CLKACTIVITY_HSIC_P1_480M_GFCLK_MASK		(1 << 20)

#define OMAP4430_CLKACTIVITY_HSIC_P1_GFCLK_SHIFT		26
#define OMAP4430_CLKACTIVITY_HSIC_P1_GFCLK_MASK			(1 << 26)

#define OMAP4430_CLKACTIVITY_HSIC_P2_480M_GFCLK_SHIFT		21
#define OMAP4430_CLKACTIVITY_HSIC_P2_480M_GFCLK_MASK		(1 << 21)

#define OMAP4430_CLKACTIVITY_HSIC_P2_GFCLK_SHIFT		27
#define OMAP4430_CLKACTIVITY_HSIC_P2_GFCLK_MASK			(1 << 27)

#define OMAP4430_CLKACTIVITY_INIT_48MC_GFCLK_SHIFT		13
#define OMAP4430_CLKACTIVITY_INIT_48MC_GFCLK_MASK		(1 << 13)

#define OMAP4430_CLKACTIVITY_INIT_48M_GFCLK_SHIFT		12
#define OMAP4430_CLKACTIVITY_INIT_48M_GFCLK_MASK		(1 << 12)

#define OMAP4430_CLKACTIVITY_INIT_60M_P1_GFCLK_SHIFT		28
#define OMAP4430_CLKACTIVITY_INIT_60M_P1_GFCLK_MASK		(1 << 28)

#define OMAP4430_CLKACTIVITY_INIT_60M_P2_GFCLK_SHIFT		29
#define OMAP4430_CLKACTIVITY_INIT_60M_P2_GFCLK_MASK		(1 << 29)

#define OMAP4430_CLKACTIVITY_INIT_96M_GFCLK_SHIFT		11
#define OMAP4430_CLKACTIVITY_INIT_96M_GFCLK_MASK		(1 << 11)

#define OMAP4430_CLKACTIVITY_INIT_HSI_GFCLK_SHIFT		16
#define OMAP4430_CLKACTIVITY_INIT_HSI_GFCLK_MASK		(1 << 16)

#define OMAP4430_CLKACTIVITY_INIT_HSMMC1_GFCLK_SHIFT		17
#define OMAP4430_CLKACTIVITY_INIT_HSMMC1_GFCLK_MASK		(1 << 17)

#define OMAP4430_CLKACTIVITY_INIT_HSMMC2_GFCLK_SHIFT		18
#define OMAP4430_CLKACTIVITY_INIT_HSMMC2_GFCLK_MASK		(1 << 18)

#define OMAP4430_CLKACTIVITY_INIT_HSMMC6_GFCLK_SHIFT		19
#define OMAP4430_CLKACTIVITY_INIT_HSMMC6_GFCLK_MASK		(1 << 19)

#define OMAP4430_CLKACTIVITY_ISS_GCLK_SHIFT			8
#define OMAP4430_CLKACTIVITY_ISS_GCLK_MASK			(1 << 8)

#define OMAP4430_CLKACTIVITY_IVAHD_ROOT_CLK_SHIFT		8
#define OMAP4430_CLKACTIVITY_IVAHD_ROOT_CLK_MASK		(1 << 8)

#define OMAP4430_CLKACTIVITY_L3X2_D2D_GICLK_SHIFT		10
#define OMAP4430_CLKACTIVITY_L3X2_D2D_GICLK_MASK		(1 << 10)

#define OMAP4430_CLKACTIVITY_L3_1_GICLK_SHIFT			8
#define OMAP4430_CLKACTIVITY_L3_1_GICLK_MASK			(1 << 8)

#define OMAP4430_CLKACTIVITY_L3_2_GICLK_SHIFT			8
#define OMAP4430_CLKACTIVITY_L3_2_GICLK_MASK			(1 << 8)

#define OMAP4430_CLKACTIVITY_L3_D2D_GICLK_SHIFT			8
#define OMAP4430_CLKACTIVITY_L3_D2D_GICLK_MASK			(1 << 8)

#define OMAP4430_CLKACTIVITY_L3_DMA_GICLK_SHIFT			8
#define OMAP4430_CLKACTIVITY_L3_DMA_GICLK_MASK			(1 << 8)

#define OMAP4430_CLKACTIVITY_L3_DSS_GICLK_SHIFT			8
#define OMAP4430_CLKACTIVITY_L3_DSS_GICLK_MASK			(1 << 8)

#define OMAP4430_CLKACTIVITY_L3_EMIF_GICLK_SHIFT		8
#define OMAP4430_CLKACTIVITY_L3_EMIF_GICLK_MASK			(1 << 8)

#define OMAP4430_CLKACTIVITY_L3_GFX_GICLK_SHIFT			8
#define OMAP4430_CLKACTIVITY_L3_GFX_GICLK_MASK			(1 << 8)

#define OMAP4430_CLKACTIVITY_L3_INIT_GICLK_SHIFT		8
#define OMAP4430_CLKACTIVITY_L3_INIT_GICLK_MASK			(1 << 8)

#define OMAP4430_CLKACTIVITY_L3_INSTR_GICLK_SHIFT		8
#define OMAP4430_CLKACTIVITY_L3_INSTR_GICLK_MASK		(1 << 8)

#define OMAP4430_CLKACTIVITY_L3_SECURE_GICLK_SHIFT		8
#define OMAP4430_CLKACTIVITY_L3_SECURE_GICLK_MASK		(1 << 8)

#define OMAP4430_CLKACTIVITY_L4_AO_ICLK_SHIFT			8
#define OMAP4430_CLKACTIVITY_L4_AO_ICLK_MASK			(1 << 8)

#define OMAP4430_CLKACTIVITY_L4_CEFUSE_GICLK_SHIFT		8
#define OMAP4430_CLKACTIVITY_L4_CEFUSE_GICLK_MASK		(1 << 8)

#define OMAP4430_CLKACTIVITY_L4_CFG_GICLK_SHIFT			8
#define OMAP4430_CLKACTIVITY_L4_CFG_GICLK_MASK			(1 << 8)

#define OMAP4430_CLKACTIVITY_L4_D2D_GICLK_SHIFT			9
#define OMAP4430_CLKACTIVITY_L4_D2D_GICLK_MASK			(1 << 9)

#define OMAP4430_CLKACTIVITY_L4_INIT_GICLK_SHIFT		9
#define OMAP4430_CLKACTIVITY_L4_INIT_GICLK_MASK			(1 << 9)

#define OMAP4430_CLKACTIVITY_L4_PER_GICLK_SHIFT			8
#define OMAP4430_CLKACTIVITY_L4_PER_GICLK_MASK			(1 << 8)

#define OMAP4430_CLKACTIVITY_L4_SECURE_GICLK_SHIFT		9
#define OMAP4430_CLKACTIVITY_L4_SECURE_GICLK_MASK		(1 << 9)

#define OMAP4430_CLKACTIVITY_L4_WKUP_GICLK_SHIFT		12
#define OMAP4430_CLKACTIVITY_L4_WKUP_GICLK_MASK			(1 << 12)

#define OMAP4430_CLKACTIVITY_MPU_DPLL_CLK_SHIFT			8
#define OMAP4430_CLKACTIVITY_MPU_DPLL_CLK_MASK			(1 << 8)

#define OMAP4430_CLKACTIVITY_OCP_ABE_GICLK_SHIFT		9
#define OMAP4430_CLKACTIVITY_OCP_ABE_GICLK_MASK			(1 << 9)

#define OMAP4430_CLKACTIVITY_PER_24MC_GFCLK_SHIFT		16
#define OMAP4430_CLKACTIVITY_PER_24MC_GFCLK_MASK		(1 << 16)

#define OMAP4430_CLKACTIVITY_PER_32K_GFCLK_SHIFT		17
#define OMAP4430_CLKACTIVITY_PER_32K_GFCLK_MASK			(1 << 17)

#define OMAP4430_CLKACTIVITY_PER_48M_GFCLK_SHIFT		18
#define OMAP4430_CLKACTIVITY_PER_48M_GFCLK_MASK			(1 << 18)

#define OMAP4430_CLKACTIVITY_PER_96M_GFCLK_SHIFT		19
#define OMAP4430_CLKACTIVITY_PER_96M_GFCLK_MASK			(1 << 19)

#define OMAP4430_CLKACTIVITY_PER_ABE_24M_GFCLK_SHIFT		25
#define OMAP4430_CLKACTIVITY_PER_ABE_24M_GFCLK_MASK		(1 << 25)

#define OMAP4430_CLKACTIVITY_PER_MCASP2_GFCLK_SHIFT		20
#define OMAP4430_CLKACTIVITY_PER_MCASP2_GFCLK_MASK		(1 << 20)

#define OMAP4430_CLKACTIVITY_PER_MCASP3_GFCLK_SHIFT		21
#define OMAP4430_CLKACTIVITY_PER_MCASP3_GFCLK_MASK		(1 << 21)

#define OMAP4430_CLKACTIVITY_PER_MCBSP4_GFCLK_SHIFT		22
#define OMAP4430_CLKACTIVITY_PER_MCBSP4_GFCLK_MASK		(1 << 22)

#define OMAP4430_CLKACTIVITY_PER_SYS_GFCLK_SHIFT		24
#define OMAP4430_CLKACTIVITY_PER_SYS_GFCLK_MASK			(1 << 24)

#define OMAP4430_CLKACTIVITY_PHY_ROOT_CLK_SHIFT			10
#define OMAP4430_CLKACTIVITY_PHY_ROOT_CLK_MASK			(1 << 10)

#define OMAP4430_CLKACTIVITY_SGX_GFCLK_SHIFT			9
#define OMAP4430_CLKACTIVITY_SGX_GFCLK_MASK			(1 << 9)

#define OMAP4430_CLKACTIVITY_SR_CORE_SYSCLK_SHIFT		11
#define OMAP4430_CLKACTIVITY_SR_CORE_SYSCLK_MASK		(1 << 11)

#define OMAP4430_CLKACTIVITY_SR_IVA_SYSCLK_SHIFT		10
#define OMAP4430_CLKACTIVITY_SR_IVA_SYSCLK_MASK			(1 << 10)

#define OMAP4430_CLKACTIVITY_SR_MPU_SYSCLK_SHIFT		9
#define OMAP4430_CLKACTIVITY_SR_MPU_SYSCLK_MASK			(1 << 9)

#define OMAP4430_CLKACTIVITY_SYS_CLK_SHIFT			8
#define OMAP4430_CLKACTIVITY_SYS_CLK_MASK			(1 << 8)

#define OMAP4430_CLKACTIVITY_TESLA_ROOT_CLK_SHIFT		8
#define OMAP4430_CLKACTIVITY_TESLA_ROOT_CLK_MASK		(1 << 8)

#define OMAP4430_CLKACTIVITY_TLL_CH0_GFCLK_SHIFT		22
#define OMAP4430_CLKACTIVITY_TLL_CH0_GFCLK_MASK			(1 << 22)

#define OMAP4430_CLKACTIVITY_TLL_CH1_GFCLK_SHIFT		23
#define OMAP4430_CLKACTIVITY_TLL_CH1_GFCLK_MASK			(1 << 23)

#define OMAP4430_CLKACTIVITY_TLL_CH2_GFCLK_SHIFT		24
#define OMAP4430_CLKACTIVITY_TLL_CH2_GFCLK_MASK			(1 << 24)

#define OMAP4430_CLKACTIVITY_UNIPRO_DPLL_CLK_SHIFT		10
#define OMAP4430_CLKACTIVITY_UNIPRO_DPLL_CLK_MASK		(1 << 10)

#define OMAP4430_CLKACTIVITY_USB_DPLL_CLK_SHIFT			14
#define OMAP4430_CLKACTIVITY_USB_DPLL_CLK_MASK			(1 << 14)

#define OMAP4430_CLKACTIVITY_USB_DPLL_HS_CLK_SHIFT		15
#define OMAP4430_CLKACTIVITY_USB_DPLL_HS_CLK_MASK		(1 << 15)

#define OMAP4430_CLKACTIVITY_USIM_GFCLK_SHIFT			10
#define OMAP4430_CLKACTIVITY_USIM_GFCLK_MASK			(1 << 10)

#define OMAP4430_CLKACTIVITY_UTMI_P3_GFCLK_SHIFT		30
#define OMAP4430_CLKACTIVITY_UTMI_P3_GFCLK_MASK			(1 << 30)

#define OMAP4430_CLKACTIVITY_UTMI_ROOT_GFCLK_SHIFT		25
#define OMAP4430_CLKACTIVITY_UTMI_ROOT_GFCLK_MASK		(1 << 25)

#define OMAP4430_CLKACTIVITY_WKUP_32K_GFCLK_SHIFT		11
#define OMAP4430_CLKACTIVITY_WKUP_32K_GFCLK_MASK		(1 << 11)

#define OMAP4460_CLKACTIVITY_WKUP_TS_GFCLK_SHIFT		13
#define OMAP4460_CLKACTIVITY_WKUP_TS_GFCLK_MASK			(1 << 13)

#define OMAP4430_CLKSEL_SHIFT					24
#define OMAP4430_CLKSEL_MASK					(1 << 24)

#define OMAP4430_CLKSEL_0_0_SHIFT				0
#define OMAP4430_CLKSEL_0_0_MASK				(1 << 0)

#define OMAP4430_CLKSEL_0_1_SHIFT				0
#define OMAP4430_CLKSEL_0_1_MASK				(0x3 << 0)

#define OMAP4430_CLKSEL_24_25_SHIFT				24
#define OMAP4430_CLKSEL_24_25_MASK				(0x3 << 24)

#define OMAP4430_CLKSEL_60M_SHIFT				24
#define OMAP4430_CLKSEL_60M_MASK				(1 << 24)

#define OMAP4460_CLKSEL_ABE_DIV_MODE_SHIFT			25
#define OMAP4460_CLKSEL_ABE_DIV_MODE_MASK			(1 << 25)

#define OMAP4430_CLKSEL_AESS_FCLK_SHIFT				24
#define OMAP4430_CLKSEL_AESS_FCLK_MASK				(1 << 24)

#define OMAP4430_CLKSEL_CORE_SHIFT				0
#define OMAP4430_CLKSEL_CORE_MASK				(1 << 0)

#define OMAP4430_CLKSEL_CORE_1_1_SHIFT				1
#define OMAP4430_CLKSEL_CORE_1_1_MASK				(1 << 1)

#define OMAP4430_CLKSEL_DIV_SHIFT				24
#define OMAP4430_CLKSEL_DIV_MASK				(1 << 24)

#define OMAP4460_CLKSEL_EMIF_DIV_MODE_SHIFT			24
#define OMAP4460_CLKSEL_EMIF_DIV_MODE_MASK			(1 << 24)

#define OMAP4430_CLKSEL_FCLK_SHIFT				24
#define OMAP4430_CLKSEL_FCLK_MASK				(0x3 << 24)

#define OMAP4430_CLKSEL_INTERNAL_SOURCE_SHIFT			25
#define OMAP4430_CLKSEL_INTERNAL_SOURCE_MASK			(1 << 25)

#define OMAP4430_CLKSEL_INTERNAL_SOURCE_CM1_ABE_DMIC_SHIFT	26
#define OMAP4430_CLKSEL_INTERNAL_SOURCE_CM1_ABE_DMIC_MASK	(0x3 << 26)

#define OMAP4430_CLKSEL_L3_SHIFT				4
#define OMAP4430_CLKSEL_L3_MASK					(1 << 4)

#define OMAP4430_CLKSEL_L3_SHADOW_SHIFT				2
#define OMAP4430_CLKSEL_L3_SHADOW_MASK				(1 << 2)

#define OMAP4430_CLKSEL_L4_SHIFT				8
#define OMAP4430_CLKSEL_L4_MASK					(1 << 8)

#define OMAP4430_CLKSEL_OPP_SHIFT				0
#define OMAP4430_CLKSEL_OPP_MASK				(0x3 << 0)

#define OMAP4430_CLKSEL_PMD_STM_CLK_SHIFT			27
#define OMAP4430_CLKSEL_PMD_STM_CLK_MASK			(0x7 << 27)

#define OMAP4430_CLKSEL_PMD_TRACE_CLK_SHIFT			24
#define OMAP4430_CLKSEL_PMD_TRACE_CLK_MASK			(0x7 << 24)

#define OMAP4430_CLKSEL_SGX_FCLK_SHIFT				24
#define OMAP4430_CLKSEL_SGX_FCLK_MASK				(1 << 24)

#define OMAP4430_CLKSEL_SOURCE_SHIFT				24
#define OMAP4430_CLKSEL_SOURCE_MASK				(0x3 << 24)

#define OMAP4430_CLKSEL_SOURCE_24_24_SHIFT			24
#define OMAP4430_CLKSEL_SOURCE_24_24_MASK			(1 << 24)

#define OMAP4430_CLKSEL_UTMI_P1_SHIFT				24
#define OMAP4430_CLKSEL_UTMI_P1_MASK				(1 << 24)

#define OMAP4430_CLKSEL_UTMI_P2_SHIFT				25
#define OMAP4430_CLKSEL_UTMI_P2_MASK				(1 << 25)

#define OMAP4430_CLKTRCTRL_SHIFT				0
#define OMAP4430_CLKTRCTRL_MASK					(0x3 << 0)

#define OMAP4430_CORE_DPLL_EMU_DIV_SHIFT			0
#define OMAP4430_CORE_DPLL_EMU_DIV_MASK				(0x7f << 0)

#define OMAP4430_CORE_DPLL_EMU_MULT_SHIFT			8
#define OMAP4430_CORE_DPLL_EMU_MULT_MASK			(0x7ff << 8)

#define OMAP4430_CUSTOM_SHIFT					6
#define OMAP4430_CUSTOM_MASK					(0x3 << 6)

#define OMAP4430_D2D_DYNDEP_SHIFT				18
#define OMAP4430_D2D_DYNDEP_MASK				(1 << 18)

#define OMAP4430_D2D_STATDEP_SHIFT				18
#define OMAP4430_D2D_STATDEP_MASK				(1 << 18)

#define OMAP4460_DCC_COUNT_MAX_SHIFT				24
#define OMAP4460_DCC_COUNT_MAX_MASK				(0xff << 24)

#define OMAP4460_DCC_EN_SHIFT					22
#define OMAP4460_DCC_EN_MASK					(1 << 22)

#define OMAP4430_DELTAMSTEP_SHIFT				0
#define OMAP4430_DELTAMSTEP_MASK				(0xfffff << 0)

#define OMAP4460_DELTAMSTEP_0_20_SHIFT				0
#define OMAP4460_DELTAMSTEP_0_20_MASK				(0x1fffff << 0)

#define OMAP4430_DLL_OVERRIDE_SHIFT				0
#define OMAP4430_DLL_OVERRIDE_MASK				(1 << 0)

#define OMAP4430_DLL_OVERRIDE_2_2_SHIFT				2
#define OMAP4430_DLL_OVERRIDE_2_2_MASK				(1 << 2)

#define OMAP4430_DLL_RESET_SHIFT				3
#define OMAP4430_DLL_RESET_MASK					(1 << 3)

#define OMAP4430_DPLL_BYP_CLKSEL_SHIFT				23
#define OMAP4430_DPLL_BYP_CLKSEL_MASK				(1 << 23)

#define OMAP4430_DPLL_CLKDCOLDO_GATE_CTRL_SHIFT			8
#define OMAP4430_DPLL_CLKDCOLDO_GATE_CTRL_MASK			(1 << 8)

#define OMAP4430_DPLL_CLKOUTHIF_CLKSEL_SHIFT			20
#define OMAP4430_DPLL_CLKOUTHIF_CLKSEL_MASK			(1 << 20)

#define OMAP4430_DPLL_CLKOUTHIF_DIV_SHIFT			0
#define OMAP4430_DPLL_CLKOUTHIF_DIV_MASK			(0x1f << 0)

#define OMAP4430_DPLL_CLKOUTHIF_DIVCHACK_SHIFT			5
#define OMAP4430_DPLL_CLKOUTHIF_DIVCHACK_MASK			(1 << 5)

#define OMAP4430_DPLL_CLKOUTHIF_GATE_CTRL_SHIFT			8
#define OMAP4430_DPLL_CLKOUTHIF_GATE_CTRL_MASK			(1 << 8)

#define OMAP4430_DPLL_CLKOUTX2_GATE_CTRL_SHIFT			10
#define OMAP4430_DPLL_CLKOUTX2_GATE_CTRL_MASK			(1 << 10)

#define OMAP4430_DPLL_CLKOUT_DIV_SHIFT				0
#define OMAP4430_DPLL_CLKOUT_DIV_MASK				(0x1f << 0)

#define OMAP4430_DPLL_CLKOUT_DIV_0_6_SHIFT			0
#define OMAP4430_DPLL_CLKOUT_DIV_0_6_MASK			(0x7f << 0)

#define OMAP4430_DPLL_CLKOUT_DIVCHACK_SHIFT			5
#define OMAP4430_DPLL_CLKOUT_DIVCHACK_MASK			(1 << 5)

#define OMAP4430_DPLL_CLKOUT_DIVCHACK_M2_USB_SHIFT		7
#define OMAP4430_DPLL_CLKOUT_DIVCHACK_M2_USB_MASK		(1 << 7)

#define OMAP4430_DPLL_CLKOUT_GATE_CTRL_SHIFT			8
#define OMAP4430_DPLL_CLKOUT_GATE_CTRL_MASK			(1 << 8)

#define OMAP4430_DPLL_CORE_DPLL_EN_SHIFT			8
#define OMAP4430_DPLL_CORE_DPLL_EN_MASK				(0x7 << 8)

#define OMAP4430_DPLL_CORE_M2_DIV_SHIFT				11
#define OMAP4430_DPLL_CORE_M2_DIV_MASK				(0x1f << 11)

#define OMAP4430_DPLL_CORE_M5_DIV_SHIFT				3
#define OMAP4430_DPLL_CORE_M5_DIV_MASK				(0x1f << 3)

#define OMAP4430_DPLL_DIV_SHIFT					0
#define OMAP4430_DPLL_DIV_MASK					(0x7f << 0)

#define OMAP4430_DPLL_DIV_0_7_SHIFT				0
#define OMAP4430_DPLL_DIV_0_7_MASK				(0xff << 0)

#define OMAP4430_DPLL_DRIFTGUARD_EN_SHIFT			8
#define OMAP4430_DPLL_DRIFTGUARD_EN_MASK			(1 << 8)

#define OMAP4430_DPLL_DRIFTGUARD_EN_3_3_SHIFT			3
#define OMAP4430_DPLL_DRIFTGUARD_EN_3_3_MASK			(1 << 3)

#define OMAP4430_DPLL_EN_SHIFT					0
#define OMAP4430_DPLL_EN_MASK					(0x7 << 0)

#define OMAP4430_DPLL_LPMODE_EN_SHIFT				10
#define OMAP4430_DPLL_LPMODE_EN_MASK				(1 << 10)

#define OMAP4430_DPLL_MULT_SHIFT				8
#define OMAP4430_DPLL_MULT_MASK					(0x7ff << 8)

#define OMAP4430_DPLL_MULT_USB_SHIFT				8
#define OMAP4430_DPLL_MULT_USB_MASK				(0xfff << 8)

#define OMAP4430_DPLL_REGM4XEN_SHIFT				11
#define OMAP4430_DPLL_REGM4XEN_MASK				(1 << 11)

#define OMAP4430_DPLL_SD_DIV_SHIFT				24
#define OMAP4430_DPLL_SD_DIV_MASK				(0xff << 24)

#define OMAP4430_DPLL_SSC_ACK_SHIFT				13
#define OMAP4430_DPLL_SSC_ACK_MASK				(1 << 13)

#define OMAP4430_DPLL_SSC_DOWNSPREAD_SHIFT			14
#define OMAP4430_DPLL_SSC_DOWNSPREAD_MASK			(1 << 14)

#define OMAP4430_DPLL_SSC_EN_SHIFT				12
#define OMAP4430_DPLL_SSC_EN_MASK				(1 << 12)

#define OMAP4430_DSS_DYNDEP_SHIFT				8
#define OMAP4430_DSS_DYNDEP_MASK				(1 << 8)

#define OMAP4430_DSS_STATDEP_SHIFT				8
#define OMAP4430_DSS_STATDEP_MASK				(1 << 8)

#define OMAP4430_DUCATI_DYNDEP_SHIFT				0
#define OMAP4430_DUCATI_DYNDEP_MASK				(1 << 0)

#define OMAP4430_DUCATI_STATDEP_SHIFT				0
#define OMAP4430_DUCATI_STATDEP_MASK				(1 << 0)

#define OMAP4430_FREQ_UPDATE_SHIFT				0
#define OMAP4430_FREQ_UPDATE_MASK				(1 << 0)

#define OMAP4430_FUNC_SHIFT					16
#define OMAP4430_FUNC_MASK					(0xfff << 16)

#define OMAP4430_GFX_DYNDEP_SHIFT				10
#define OMAP4430_GFX_DYNDEP_MASK				(1 << 10)

#define OMAP4430_GFX_STATDEP_SHIFT				10
#define OMAP4430_GFX_STATDEP_MASK				(1 << 10)

#define OMAP4430_GPMC_FREQ_UPDATE_SHIFT				0
#define OMAP4430_GPMC_FREQ_UPDATE_MASK				(1 << 0)

#define OMAP4430_HSDIVIDER_CLKOUT1_DIV_SHIFT			0
#define OMAP4430_HSDIVIDER_CLKOUT1_DIV_MASK			(0x1f << 0)

#define OMAP4430_HSDIVIDER_CLKOUT1_DIVCHACK_SHIFT		5
#define OMAP4430_HSDIVIDER_CLKOUT1_DIVCHACK_MASK		(1 << 5)

#define OMAP4430_HSDIVIDER_CLKOUT1_GATE_CTRL_SHIFT		8
#define OMAP4430_HSDIVIDER_CLKOUT1_GATE_CTRL_MASK		(1 << 8)

#define OMAP4430_HSDIVIDER_CLKOUT1_PWDN_SHIFT			12
#define OMAP4430_HSDIVIDER_CLKOUT1_PWDN_MASK			(1 << 12)

#define OMAP4430_HSDIVIDER_CLKOUT2_DIV_SHIFT			0
#define OMAP4430_HSDIVIDER_CLKOUT2_DIV_MASK			(0x1f << 0)

#define OMAP4430_HSDIVIDER_CLKOUT2_DIVCHACK_SHIFT		5
#define OMAP4430_HSDIVIDER_CLKOUT2_DIVCHACK_MASK		(1 << 5)

#define OMAP4430_HSDIVIDER_CLKOUT2_GATE_CTRL_SHIFT		8
#define OMAP4430_HSDIVIDER_CLKOUT2_GATE_CTRL_MASK		(1 << 8)

#define OMAP4430_HSDIVIDER_CLKOUT2_PWDN_SHIFT			12
#define OMAP4430_HSDIVIDER_CLKOUT2_PWDN_MASK			(1 << 12)

#define OMAP4430_HSDIVIDER_CLKOUT3_DIV_SHIFT			0
#define OMAP4430_HSDIVIDER_CLKOUT3_DIV_MASK			(0x1f << 0)

#define OMAP4430_HSDIVIDER_CLKOUT3_DIVCHACK_SHIFT		5
#define OMAP4430_HSDIVIDER_CLKOUT3_DIVCHACK_MASK		(1 << 5)

#define OMAP4430_HSDIVIDER_CLKOUT3_GATE_CTRL_SHIFT		8
#define OMAP4430_HSDIVIDER_CLKOUT3_GATE_CTRL_MASK		(1 << 8)

#define OMAP4430_HSDIVIDER_CLKOUT3_PWDN_SHIFT			12
#define OMAP4430_HSDIVIDER_CLKOUT3_PWDN_MASK			(1 << 12)

#define OMAP4430_HSDIVIDER_CLKOUT4_DIV_SHIFT			0
#define OMAP4430_HSDIVIDER_CLKOUT4_DIV_MASK			(0x1f << 0)

#define OMAP4430_HSDIVIDER_CLKOUT4_DIVCHACK_SHIFT		5
#define OMAP4430_HSDIVIDER_CLKOUT4_DIVCHACK_MASK		(1 << 5)

#define OMAP4430_HSDIVIDER_CLKOUT4_GATE_CTRL_SHIFT		8
#define OMAP4430_HSDIVIDER_CLKOUT4_GATE_CTRL_MASK		(1 << 8)

#define OMAP4430_HSDIVIDER_CLKOUT4_PWDN_SHIFT			12
#define OMAP4430_HSDIVIDER_CLKOUT4_PWDN_MASK			(1 << 12)

#define OMAP4430_IDLEST_SHIFT					16
#define OMAP4430_IDLEST_MASK					(0x3 << 16)

#define OMAP4430_ISS_DYNDEP_SHIFT				9
#define OMAP4430_ISS_DYNDEP_MASK				(1 << 9)

#define OMAP4430_ISS_STATDEP_SHIFT				9
#define OMAP4430_ISS_STATDEP_MASK				(1 << 9)

#define OMAP4430_IVAHD_DYNDEP_SHIFT				2
#define OMAP4430_IVAHD_DYNDEP_MASK				(1 << 2)

#define OMAP4430_IVAHD_STATDEP_SHIFT				2
#define OMAP4430_IVAHD_STATDEP_MASK				(1 << 2)

#define OMAP4430_L3INIT_DYNDEP_SHIFT				7
#define OMAP4430_L3INIT_DYNDEP_MASK				(1 << 7)

#define OMAP4430_L3INIT_STATDEP_SHIFT				7
#define OMAP4430_L3INIT_STATDEP_MASK				(1 << 7)

#define OMAP4430_L3_1_DYNDEP_SHIFT				5
#define OMAP4430_L3_1_DYNDEP_MASK				(1 << 5)

#define OMAP4430_L3_1_STATDEP_SHIFT				5
#define OMAP4430_L3_1_STATDEP_MASK				(1 << 5)

#define OMAP4430_L3_2_DYNDEP_SHIFT				6
#define OMAP4430_L3_2_DYNDEP_MASK				(1 << 6)

#define OMAP4430_L3_2_STATDEP_SHIFT				6
#define OMAP4430_L3_2_STATDEP_MASK				(1 << 6)

#define OMAP4430_L4CFG_DYNDEP_SHIFT				12
#define OMAP4430_L4CFG_DYNDEP_MASK				(1 << 12)

#define OMAP4430_L4CFG_STATDEP_SHIFT				12
#define OMAP4430_L4CFG_STATDEP_MASK				(1 << 12)

#define OMAP4430_L4PER_DYNDEP_SHIFT				13
#define OMAP4430_L4PER_DYNDEP_MASK				(1 << 13)

#define OMAP4430_L4PER_STATDEP_SHIFT				13
#define OMAP4430_L4PER_STATDEP_MASK				(1 << 13)

#define OMAP4430_L4SEC_DYNDEP_SHIFT				14
#define OMAP4430_L4SEC_DYNDEP_MASK				(1 << 14)

#define OMAP4430_L4SEC_STATDEP_SHIFT				14
#define OMAP4430_L4SEC_STATDEP_MASK				(1 << 14)

#define OMAP4430_L4WKUP_DYNDEP_SHIFT				15
#define OMAP4430_L4WKUP_DYNDEP_MASK				(1 << 15)

#define OMAP4430_L4WKUP_STATDEP_SHIFT				15
#define OMAP4430_L4WKUP_STATDEP_MASK				(1 << 15)

#define OMAP4430_MEMIF_DYNDEP_SHIFT				4
#define OMAP4430_MEMIF_DYNDEP_MASK				(1 << 4)

#define OMAP4430_MEMIF_STATDEP_SHIFT				4
#define OMAP4430_MEMIF_STATDEP_MASK				(1 << 4)

#define OMAP4430_MODFREQDIV_EXPONENT_SHIFT			8
#define OMAP4430_MODFREQDIV_EXPONENT_MASK			(0x7 << 8)

#define OMAP4430_MODFREQDIV_MANTISSA_SHIFT			0
#define OMAP4430_MODFREQDIV_MANTISSA_MASK			(0x7f << 0)

#define OMAP4430_MODULEMODE_SHIFT				0
#define OMAP4430_MODULEMODE_MASK				(0x3 << 0)

#define OMAP4460_MPU_DYNDEP_SHIFT				19
#define OMAP4460_MPU_DYNDEP_MASK				(1 << 19)

#define OMAP4430_OPTFCLKEN_48MHZ_CLK_SHIFT			9
#define OMAP4430_OPTFCLKEN_48MHZ_CLK_MASK			(1 << 9)

#define OMAP4430_OPTFCLKEN_BGAP_32K_SHIFT			8
#define OMAP4430_OPTFCLKEN_BGAP_32K_MASK			(1 << 8)

#define OMAP4430_OPTFCLKEN_CLK32K_SHIFT				8
#define OMAP4430_OPTFCLKEN_CLK32K_MASK				(1 << 8)

#define OMAP4430_OPTFCLKEN_CTRLCLK_SHIFT			8
#define OMAP4430_OPTFCLKEN_CTRLCLK_MASK				(1 << 8)

#define OMAP4430_OPTFCLKEN_DBCLK_SHIFT				8
#define OMAP4430_OPTFCLKEN_DBCLK_MASK				(1 << 8)

#define OMAP4430_OPTFCLKEN_DLL_CLK_SHIFT			8
#define OMAP4430_OPTFCLKEN_DLL_CLK_MASK				(1 << 8)

#define OMAP4430_OPTFCLKEN_DSSCLK_SHIFT				8
#define OMAP4430_OPTFCLKEN_DSSCLK_MASK				(1 << 8)

#define OMAP4430_OPTFCLKEN_FCLK_SHIFT				8
#define OMAP4430_OPTFCLKEN_FCLK_MASK				(1 << 8)

#define OMAP4430_OPTFCLKEN_FCLK0_SHIFT				8
#define OMAP4430_OPTFCLKEN_FCLK0_MASK				(1 << 8)

#define OMAP4430_OPTFCLKEN_FCLK1_SHIFT				9
#define OMAP4430_OPTFCLKEN_FCLK1_MASK				(1 << 9)

#define OMAP4430_OPTFCLKEN_FCLK2_SHIFT				10
#define OMAP4430_OPTFCLKEN_FCLK2_MASK				(1 << 10)

#define OMAP4430_OPTFCLKEN_FUNC48MCLK_SHIFT			15
#define OMAP4430_OPTFCLKEN_FUNC48MCLK_MASK			(1 << 15)

#define OMAP4430_OPTFCLKEN_HSIC480M_P1_CLK_SHIFT		13
#define OMAP4430_OPTFCLKEN_HSIC480M_P1_CLK_MASK			(1 << 13)

#define OMAP4430_OPTFCLKEN_HSIC480M_P2_CLK_SHIFT		14
#define OMAP4430_OPTFCLKEN_HSIC480M_P2_CLK_MASK			(1 << 14)

#define OMAP4430_OPTFCLKEN_HSIC60M_P1_CLK_SHIFT			11
#define OMAP4430_OPTFCLKEN_HSIC60M_P1_CLK_MASK			(1 << 11)

#define OMAP4430_OPTFCLKEN_HSIC60M_P2_CLK_SHIFT			12
#define OMAP4430_OPTFCLKEN_HSIC60M_P2_CLK_MASK			(1 << 12)

#define OMAP4430_OPTFCLKEN_PER24MC_GFCLK_SHIFT			8
#define OMAP4430_OPTFCLKEN_PER24MC_GFCLK_MASK			(1 << 8)

#define OMAP4430_OPTFCLKEN_PERABE24M_GFCLK_SHIFT		9
#define OMAP4430_OPTFCLKEN_PERABE24M_GFCLK_MASK			(1 << 9)

#define OMAP4430_OPTFCLKEN_PHY_48M_SHIFT			8
#define OMAP4430_OPTFCLKEN_PHY_48M_MASK				(1 << 8)

#define OMAP4430_OPTFCLKEN_SLIMBUS_CLK_SHIFT			10
#define OMAP4430_OPTFCLKEN_SLIMBUS_CLK_MASK			(1 << 10)

#define OMAP4430_OPTFCLKEN_SLIMBUS_CLK_11_11_SHIFT		11
#define OMAP4430_OPTFCLKEN_SLIMBUS_CLK_11_11_MASK		(1 << 11)

#define OMAP4430_OPTFCLKEN_SYS_CLK_SHIFT			10
#define OMAP4430_OPTFCLKEN_SYS_CLK_MASK				(1 << 10)

#define OMAP4460_OPTFCLKEN_TS_FCLK_SHIFT			8
#define OMAP4460_OPTFCLKEN_TS_FCLK_MASK				(1 << 8)

#define OMAP4430_OPTFCLKEN_TV_CLK_SHIFT				11
#define OMAP4430_OPTFCLKEN_TV_CLK_MASK				(1 << 11)

#define OMAP4430_OPTFCLKEN_TXPHYCLK_SHIFT			8
#define OMAP4430_OPTFCLKEN_TXPHYCLK_MASK			(1 << 8)

#define OMAP4430_OPTFCLKEN_USB_CH0_CLK_SHIFT			8
#define OMAP4430_OPTFCLKEN_USB_CH0_CLK_MASK			(1 << 8)

#define OMAP4430_OPTFCLKEN_USB_CH1_CLK_SHIFT			9
#define OMAP4430_OPTFCLKEN_USB_CH1_CLK_MASK			(1 << 9)

#define OMAP4430_OPTFCLKEN_USB_CH2_CLK_SHIFT			10
#define OMAP4430_OPTFCLKEN_USB_CH2_CLK_MASK			(1 << 10)

#define OMAP4430_OPTFCLKEN_UTMI_P1_CLK_SHIFT			8
#define OMAP4430_OPTFCLKEN_UTMI_P1_CLK_MASK			(1 << 8)

#define OMAP4430_OPTFCLKEN_UTMI_P2_CLK_SHIFT			9
#define OMAP4430_OPTFCLKEN_UTMI_P2_CLK_MASK			(1 << 9)

#define OMAP4430_OPTFCLKEN_UTMI_P3_CLK_SHIFT			10
#define OMAP4430_OPTFCLKEN_UTMI_P3_CLK_MASK			(1 << 10)

#define OMAP4430_OPTFCLKEN_XCLK_SHIFT				8
#define OMAP4430_OPTFCLKEN_XCLK_MASK				(1 << 8)

#define OMAP4430_OVERRIDE_ENABLE_SHIFT				19
#define OMAP4430_OVERRIDE_ENABLE_MASK				(1 << 19)

#define OMAP4430_PAD_CLKS_GATE_SHIFT				8
#define OMAP4430_PAD_CLKS_GATE_MASK				(1 << 8)

#define OMAP4430_PERF_CURRENT_SHIFT				0
#define OMAP4430_PERF_CURRENT_MASK				(0xff << 0)

#define OMAP4430_PERF_REQ_SHIFT					0
#define OMAP4430_PERF_REQ_MASK					(0xff << 0)

#define OMAP4430_PHASE1_COMPLETED_SHIFT				0
#define OMAP4430_PHASE1_COMPLETED_MASK				(1 << 0)

#define OMAP4430_PHASE2A_COMPLETED_SHIFT			1
#define OMAP4430_PHASE2A_COMPLETED_MASK				(1 << 1)

#define OMAP4430_PHASE2B_COMPLETED_SHIFT			2
#define OMAP4430_PHASE2B_COMPLETED_MASK				(1 << 2)

#define OMAP4430_PMD_STM_MUX_CTRL_SHIFT				20
#define OMAP4430_PMD_STM_MUX_CTRL_MASK				(0x3 << 20)

#define OMAP4430_PMD_TRACE_MUX_CTRL_SHIFT			22
#define OMAP4430_PMD_TRACE_MUX_CTRL_MASK			(0x3 << 22)

#define OMAP4430_PRESCAL_SHIFT					0
#define OMAP4430_PRESCAL_MASK					(0x3f << 0)

#define OMAP4430_R_RTL_SHIFT					11
#define OMAP4430_R_RTL_MASK					(0x1f << 11)

#define OMAP4430_SAR_MODE_SHIFT					4
#define OMAP4430_SAR_MODE_MASK					(1 << 4)

#define OMAP4430_SCALE_FCLK_SHIFT				0
#define OMAP4430_SCALE_FCLK_MASK				(1 << 0)

#define OMAP4430_SCHEME_SHIFT					30
#define OMAP4430_SCHEME_MASK					(0x3 << 30)

#define OMAP4430_SDMA_DYNDEP_SHIFT				11
#define OMAP4430_SDMA_DYNDEP_MASK				(1 << 11)

#define OMAP4430_SDMA_STATDEP_SHIFT				11
#define OMAP4430_SDMA_STATDEP_MASK				(1 << 11)

#define OMAP4430_SLIMBUS_CLK_GATE_SHIFT				10
#define OMAP4430_SLIMBUS_CLK_GATE_MASK				(1 << 10)

#define OMAP4430_STBYST_SHIFT					18
#define OMAP4430_STBYST_MASK					(1 << 18)

#define OMAP4430_ST_DPLL_CLK_SHIFT				0
#define OMAP4430_ST_DPLL_CLK_MASK				(1 << 0)

#define OMAP4430_ST_DPLL_CLKDCOLDO_SHIFT			9
#define OMAP4430_ST_DPLL_CLKDCOLDO_MASK				(1 << 9)

#define OMAP4430_ST_DPLL_CLKOUT_SHIFT				9
#define OMAP4430_ST_DPLL_CLKOUT_MASK				(1 << 9)

#define OMAP4430_ST_DPLL_CLKOUTHIF_SHIFT			9
#define OMAP4430_ST_DPLL_CLKOUTHIF_MASK				(1 << 9)

#define OMAP4430_ST_DPLL_CLKOUTX2_SHIFT				11
#define OMAP4430_ST_DPLL_CLKOUTX2_MASK				(1 << 11)

#define OMAP4430_ST_HSDIVIDER_CLKOUT1_SHIFT			9
#define OMAP4430_ST_HSDIVIDER_CLKOUT1_MASK			(1 << 9)

#define OMAP4430_ST_HSDIVIDER_CLKOUT2_SHIFT			9
#define OMAP4430_ST_HSDIVIDER_CLKOUT2_MASK			(1 << 9)

#define OMAP4430_ST_HSDIVIDER_CLKOUT3_SHIFT			9
#define OMAP4430_ST_HSDIVIDER_CLKOUT3_MASK			(1 << 9)

#define OMAP4430_ST_HSDIVIDER_CLKOUT4_SHIFT			9
#define OMAP4430_ST_HSDIVIDER_CLKOUT4_MASK			(1 << 9)

#define OMAP4430_ST_MN_BYPASS_SHIFT				8
#define OMAP4430_ST_MN_BYPASS_MASK				(1 << 8)

#define OMAP4430_SYS_CLKSEL_SHIFT				0
#define OMAP4430_SYS_CLKSEL_MASK				(0x7 << 0)

#define OMAP4430_TESLA_DYNDEP_SHIFT				1
#define OMAP4430_TESLA_DYNDEP_MASK				(1 << 1)

#define OMAP4430_TESLA_STATDEP_SHIFT				1
#define OMAP4430_TESLA_STATDEP_MASK				(1 << 1)

#define OMAP4430_WINDOWSIZE_SHIFT				24
#define OMAP4430_WINDOWSIZE_MASK				(0xf << 24)

#define OMAP4430_X_MAJOR_SHIFT					8
#define OMAP4430_X_MAJOR_MASK					(0x7 << 8)

#define OMAP4430_Y_MINOR_SHIFT					0
#define OMAP4430_Y_MINOR_MASK					(0x3f << 0)
#endif
