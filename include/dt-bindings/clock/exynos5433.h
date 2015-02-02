/*
 * Copyright (c) 2014 Samsung Electronics Co., Ltd.
 * Author: Chanwoo Choi <cw00.choi@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _DT_BINDINGS_CLOCK_EXYNOS5433_H
#define _DT_BINDINGS_CLOCK_EXYNOS5433_H

/* CMU_TOP */
#define CLK_FOUT_ISP_PLL		1
#define CLK_FOUT_AUD_PLL		2

#define CLK_MOUT_AUD_PLL		10
#define CLK_MOUT_ISP_PLL		11
#define CLK_MOUT_AUD_PLL_USER_T		12
#define CLK_MOUT_MPHY_PLL_USER		13
#define CLK_MOUT_MFC_PLL_USER		14
#define CLK_MOUT_BUS_PLL_USER		15
#define CLK_MOUT_ACLK_HEVC_400		16
#define CLK_MOUT_ACLK_CAM1_333		17
#define CLK_MOUT_ACLK_CAM1_552_B	18
#define CLK_MOUT_ACLK_CAM1_552_A	19
#define CLK_MOUT_ACLK_ISP_DIS_400	20
#define CLK_MOUT_ACLK_ISP_400		21
#define CLK_MOUT_ACLK_BUS0_400		22
#define CLK_MOUT_ACLK_MSCL_400_B	23
#define CLK_MOUT_ACLK_MSCL_400_A	24
#define CLK_MOUT_ACLK_GSCL_333		25
#define CLK_MOUT_ACLK_G2D_400_B		26
#define CLK_MOUT_ACLK_G2D_400_A		27
#define CLK_MOUT_SCLK_JPEG_C		28
#define CLK_MOUT_SCLK_JPEG_B		29
#define CLK_MOUT_SCLK_JPEG_A		30
#define CLK_MOUT_SCLK_MMC2_B		31
#define CLK_MOUT_SCLK_MMC2_A		32
#define CLK_MOUT_SCLK_MMC1_B		33
#define CLK_MOUT_SCLK_MMC1_A		34
#define CLK_MOUT_SCLK_MMC0_D		35
#define CLK_MOUT_SCLK_MMC0_C		36
#define CLK_MOUT_SCLK_MMC0_B		37
#define CLK_MOUT_SCLK_MMC0_A		38
#define CLK_MOUT_SCLK_SPI4		39
#define CLK_MOUT_SCLK_SPI3		40
#define CLK_MOUT_SCLK_UART2		41
#define CLK_MOUT_SCLK_UART1		42
#define CLK_MOUT_SCLK_UART0		43
#define CLK_MOUT_SCLK_SPI2		44
#define CLK_MOUT_SCLK_SPI1		45
#define CLK_MOUT_SCLK_SPI0		46
#define CLK_MOUT_ACLK_MFC_400_C		47
#define CLK_MOUT_ACLK_MFC_400_B		48
#define CLK_MOUT_ACLK_MFC_400_A		49
#define CLK_MOUT_SCLK_ISP_SENSOR2	50
#define CLK_MOUT_SCLK_ISP_SENSOR1	51
#define CLK_MOUT_SCLK_ISP_SENSOR0	52
#define CLK_MOUT_SCLK_ISP_UART		53
#define CLK_MOUT_SCLK_ISP_SPI1		54
#define CLK_MOUT_SCLK_ISP_SPI0		55
#define CLK_MOUT_SCLK_PCIE_100		56
#define CLK_MOUT_SCLK_UFSUNIPRO		57
#define CLK_MOUT_SCLK_USBHOST30		58
#define CLK_MOUT_SCLK_USBDRD30		59
#define CLK_MOUT_SCLK_SLIMBUS		60
#define CLK_MOUT_SCLK_SPDIF		61
#define CLK_MOUT_SCLK_AUDIO1		62
#define CLK_MOUT_SCLK_AUDIO0		63

#define CLK_DIV_ACLK_FSYS_200		100
#define CLK_DIV_ACLK_IMEM_SSSX_266	101
#define CLK_DIV_ACLK_IMEM_200		102
#define CLK_DIV_ACLK_IMEM_266		103
#define CLK_DIV_ACLK_PERIC_66_B		104
#define CLK_DIV_ACLK_PERIC_66_A		105
#define CLK_DIV_ACLK_PERIS_66_B		106
#define CLK_DIV_ACLK_PERIS_66_A		107
#define CLK_DIV_SCLK_MMC1_B		108
#define CLK_DIV_SCLK_MMC1_A		109
#define CLK_DIV_SCLK_MMC0_B		110
#define CLK_DIV_SCLK_MMC0_A		111
#define CLK_DIV_SCLK_MMC2_B		112
#define CLK_DIV_SCLK_MMC2_A		113
#define CLK_DIV_SCLK_SPI1_B		114
#define CLK_DIV_SCLK_SPI1_A		115
#define CLK_DIV_SCLK_SPI0_B		116
#define CLK_DIV_SCLK_SPI0_A		117
#define CLK_DIV_SCLK_SPI2_B		118
#define CLK_DIV_SCLK_SPI2_A		119
#define CLK_DIV_SCLK_UART2		120
#define CLK_DIV_SCLK_UART1		121
#define CLK_DIV_SCLK_UART0		122
#define CLK_DIV_SCLK_SPI4_B		123
#define CLK_DIV_SCLK_SPI4_A		124
#define CLK_DIV_SCLK_SPI3_B		125
#define CLK_DIV_SCLK_SPI3_A		126
#define CLK_DIV_SCLK_I2S1		127
#define CLK_DIV_SCLK_PCM1		128
#define CLK_DIV_SCLK_AUDIO1		129
#define CLK_DIV_SCLK_AUDIO0		130

#define CLK_ACLK_PERIC_66		200
#define CLK_ACLK_PERIS_66		201
#define CLK_ACLK_FSYS_200		202
#define CLK_SCLK_MMC2_FSYS		203
#define CLK_SCLK_MMC1_FSYS		204
#define CLK_SCLK_MMC0_FSYS		205
#define CLK_SCLK_SPI4_PERIC		206
#define CLK_SCLK_SPI3_PERIC		207
#define CLK_SCLK_UART2_PERIC		208
#define CLK_SCLK_UART1_PERIC		209
#define CLK_SCLK_UART0_PERIC		210
#define CLK_SCLK_SPI2_PERIC		211
#define CLK_SCLK_SPI1_PERIC		212
#define CLK_SCLK_SPI0_PERIC		213
#define CLK_SCLK_SPDIF_PERIC		214
#define CLK_SCLK_I2S1_PERIC		215
#define CLK_SCLK_PCM1_PERIC		216
#define CLK_SCLK_SLIMBUS		217
#define CLK_SCLK_AUDIO1			218
#define CLK_SCLK_AUDIO0			219

#define TOP_NR_CLK			220

/* CMU_CPIF */
#define CLK_FOUT_MPHY_PLL		1

#define CLK_MOUT_MPHY_PLL		2

#define CLK_DIV_SCLK_MPHY		10

#define CLK_SCLK_MPHY_PLL		11
#define CLK_SCLK_UFS_MPHY		11

#define CPIF_NR_CLK			12

/* CMU_MIF */
#define CLK_FOUT_MEM0_PLL		1
#define CLK_FOUT_MEM1_PLL		2
#define CLK_FOUT_BUS_PLL		3
#define CLK_FOUT_MFC_PLL		4

#define MIF_NR_CLK			5

/* CMU_PERIC */
#define CLK_PCLK_SPI2			1
#define CLK_PCLK_SPI1			2
#define CLK_PCLK_SPI0			3
#define CLK_PCLK_UART2			4
#define CLK_PCLK_UART1			5
#define CLK_PCLK_UART0			6
#define CLK_PCLK_HSI2C3			7
#define CLK_PCLK_HSI2C2			8
#define CLK_PCLK_HSI2C1			9
#define CLK_PCLK_HSI2C0			10
#define CLK_PCLK_I2C7			11
#define CLK_PCLK_I2C6			12
#define CLK_PCLK_I2C5			13
#define CLK_PCLK_I2C4			14
#define CLK_PCLK_I2C3			15
#define CLK_PCLK_I2C2			16
#define CLK_PCLK_I2C1			17
#define CLK_PCLK_I2C0			18
#define CLK_PCLK_SPI4			19
#define CLK_PCLK_SPI3			20
#define CLK_PCLK_HSI2C11		21
#define CLK_PCLK_HSI2C10		22
#define CLK_PCLK_HSI2C9			23
#define CLK_PCLK_HSI2C8			24
#define CLK_PCLK_HSI2C7			25
#define CLK_PCLK_HSI2C6			26
#define CLK_PCLK_HSI2C5			27
#define CLK_PCLK_HSI2C4			28
#define CLK_SCLK_SPI4			29
#define CLK_SCLK_SPI3			30
#define CLK_SCLK_SPI2			31
#define CLK_SCLK_SPI1			32
#define CLK_SCLK_SPI0			33
#define CLK_SCLK_UART2			34
#define CLK_SCLK_UART1			35
#define CLK_SCLK_UART0			36
#define CLK_ACLK_AHB2APB_PERIC2P	37
#define CLK_ACLK_AHB2APB_PERIC1P	38
#define CLK_ACLK_AHB2APB_PERIC0P	39
#define CLK_ACLK_PERICNP_66		40
#define CLK_PCLK_SCI			41
#define CLK_PCLK_GPIO_FINGER		42
#define CLK_PCLK_GPIO_ESE		43
#define CLK_PCLK_PWM			44
#define CLK_PCLK_SPDIF			45
#define CLK_PCLK_PCM1			46
#define CLK_PCLK_I2S1			47
#define CLK_PCLK_ADCIF			48
#define CLK_PCLK_GPIO_TOUCH		49
#define CLK_PCLK_GPIO_NFC		50
#define CLK_PCLK_GPIO_PERIC		51
#define CLK_PCLK_PMU_PERIC		52
#define CLK_PCLK_SYSREG_PERIC		53
#define CLK_SCLK_IOCLK_SPI4		54
#define CLK_SCLK_IOCLK_SPI3		55
#define CLK_SCLK_SCI			56
#define CLK_SCLK_SC_IN			57
#define CLK_SCLK_PWM			58
#define CLK_SCLK_IOCLK_SPI2		59
#define CLK_SCLK_IOCLK_SPI1		60
#define CLK_SCLK_IOCLK_SPI0		61
#define CLK_SCLK_IOCLK_I2S1_BCLK	62
#define CLK_SCLK_SPDIF			63
#define CLK_SCLK_PCM1			64
#define CLK_SCLK_I2S1			65

#define CLK_DIV_SCLK_SCI		70
#define CLK_DIV_SCLK_SC_IN		71

#define PERIC_NR_CLK			72

/* CMU_PERIS */
#define CLK_PCLK_HPM_APBIF		1
#define CLK_PCLK_TMU1_APBIF		2
#define CLK_PCLK_TMU0_APBIF		3
#define CLK_PCLK_PMU_PERIS		4
#define CLK_PCLK_SYSREG_PERIS		5
#define CLK_PCLK_CMU_TOP_APBIF		6
#define CLK_PCLK_WDT_APOLLO		7
#define CLK_PCLK_WDT_ATLAS		8
#define CLK_PCLK_MCT			9
#define CLK_PCLK_HDMI_CEC		10
#define CLK_ACLK_AHB2APB_PERIS1P	11
#define CLK_ACLK_AHB2APB_PERIS0P	12
#define CLK_ACLK_PERISNP_66		13
#define CLK_PCLK_TZPC12			14
#define CLK_PCLK_TZPC11			15
#define CLK_PCLK_TZPC10			16
#define CLK_PCLK_TZPC9			17
#define CLK_PCLK_TZPC8			18
#define CLK_PCLK_TZPC7			19
#define CLK_PCLK_TZPC6			20
#define CLK_PCLK_TZPC5			21
#define CLK_PCLK_TZPC4			22
#define CLK_PCLK_TZPC3			23
#define CLK_PCLK_TZPC2			24
#define CLK_PCLK_TZPC1			25
#define CLK_PCLK_TZPC0			26
#define CLK_PCLK_SECKEY_APBIF		27
#define CLK_PCLK_CHIPID_APBIF		28
#define CLK_PCLK_TOPRTC			29
#define CLK_PCLK_CUSTOM_EFUSE_APBIF	30
#define CLK_PCLK_ANTIRBK_CNT_APBIF	31
#define CLK_PCLK_OTP_CON_APBIF		32
#define CLK_SCLK_ASV_TB			33
#define CLK_SCLK_TMU1			34
#define CLK_SCLK_TMU0			35
#define CLK_SCLK_SECKEY			36
#define CLK_SCLK_CHIPID			37
#define CLK_SCLK_TOPRTC			38
#define CLK_SCLK_CUSTOM_EFUSE		39
#define CLK_SCLK_ANTIRBK_CNT		40
#define CLK_SCLK_OTP_CON		41

#define PERIS_NR_CLK			42

/* CMU_FSYS */
#define CLK_MOUT_ACLK_FSYS_200_USER	1
#define CLK_MOUT_SCLK_MMC2_USER		2
#define CLK_MOUT_SCLK_MMC1_USER		3
#define CLK_MOUT_SCLK_MMC0_USER		4

#define CLK_ACLK_PCIE			50
#define CLK_ACLK_PDMA1			51
#define CLK_ACLK_TSI			52
#define CLK_ACLK_MMC2			53
#define CLK_ACLK_MMC1			54
#define CLK_ACLK_MMC0			55
#define CLK_ACLK_UFS			56
#define CLK_ACLK_USBHOST20		57
#define CLK_ACLK_USBHOST30		58
#define CLK_ACLK_USBDRD30		59
#define CLK_ACLK_PDMA0			60
#define CLK_SCLK_MMC2			61
#define CLK_SCLK_MMC1			62
#define CLK_SCLK_MMC0			63
#define CLK_PDMA1			64
#define CLK_PDMA0			65

#define FSYS_NR_CLK			66

#endif /* _DT_BINDINGS_CLOCK_EXYNOS5433_H */
