#ifndef _DT_BINDINGS_CLOCK_ROCKCHIP_RV1108_H
#define _DT_BINDINGS_CLOCK_ROCKCHIP_RV1108_H

#include "rockchip.h"

/* pll id */
#define RV1108_APLL_ID			0
#define RV1108_DPLL_ID			1
#define RV1108_GPLL_ID			2
#define RV1108_END_PLL_ID		3

/* reset id */
/* CRU_SOFTRST0_CON */
#define RV1108_RST_CORE_PO		0
#define RV1108_RST_CORE			1
#define RV1108_RST_L2			2
#define RV1108_RST_CPU_NIU		3
#define RV1108_RST_CORE_PO_T		4
#define RV1108_RST_CORE_T		5
#define RV1108_RST_L2_T			6
#define RV1108_RST_0RES7		7
#define RV1108_RST_CORE_DBG		8
#define RV1108_RST_DBG_P		9
#define RV1108_RST_DAP_P		10
#define RV1108_RST_DBG_NIU_P		11
#define RV1108_RST_0RES12		12
#define RV1108_RST_0RES13		13
#define RV1108_RST_0RES14		14
#define RV1108_RST_STRC_SYS_A		15

/* CRU_SOFTRST1_CON */
#define RV1108_RST_DDRPHY_CLKDIV	16
#define RV1108_RST_DDRPHY		17
#define RV1108_RST_DDRPHY_P		18
#define RV1108_RST_HDMIPHY_P		19
#define RV1108_RST_VDACPHY_P		20
#define RV1108_RST_VADCPHY_P		21
#define RV1108_RST_MIPI_CSI_PHY_P	22
#define RV1108_RST_MIPI_DSI_PHY_P	23
#define RV1108_RST_ACODEC_P		24
#define RV1108_RST_BUS_NIU_A		25
#define RV1108_RST_TOP_NIU_P		26
#define RV1108_RST_INIMEM_A		27
#define RV1108_RST_ROM_H		28
#define RV1108_RST_DMAC_A		29
#define RV1108_RST_MSCH_NIU		30
#define RV1108_RST_MSCH_NIU_P		31

/* CRU_SOFTRST2_CON */
#define RV1108_RST_DDRUPCTRL_P		32
#define RV1108_RST_DDRUPCTRL_N		33
#define RV1108_RST_DDRMON_P		34
#define RV1108_RST_I2S0_8CH_H		35
#define RV1108_RST_I2S0_8CH_M		36
#define RV1108_RST_I2S1_2CH_H		37
#define RV1108_RST_I2S1_2CH_M		38
#define RV1108_RST_I2S2_2CH_H		39
#define RV1108_RST_I2S2_2CH_M		40
#define RV1108_RST_CRYPTO_H		41
#define RV1108_RST_CRYPTO		42
#define RV1108_RST_SPI_P		43
#define RV1108_RST_SPI			44
#define RV1108_RST_UART0_P		45
#define RV1108_RST_UART1_P		46
#define RV1108_RST_UART2_P		47

/* CRU_SOFTRST3_CON */
#define RV1108_RST_UART0		48
#define RV1108_RST_UART1		49
#define RV1108_RST_UART2		50
#define RV1108_RST_I2C1_P		51
#define RV1108_RST_I2C2_P		52
#define RV1108_RST_I2C3_P		53
#define RV1108_RST_I2C1			54
#define RV1108_RST_I2C2			55
#define RV1108_RST_I2C3			56
#define RV1108_RST_3RES9		57
#define RV1108_RST_PWM1_P		58
#define RV1108_RST_3RES11		59
#define RV1108_RST_PWM1			60
#define RV1108_RST_WDT_P		61
#define RV1108_RST_GPIO1_P		62
#define RV1108_RST_GPIO2_P		63

/* CRU_SOFTRST4_CON */
#define RV1108_RST_GPIO3_P		64
#define RV1108_RST_GRF_P		65
#define RV1108_RST_EFUSE_P		66
#define RV1108_RST_EFUSE512_P		67
#define RV1108_RST_TIMER0_P		68
#define RV1108_RST_TIMER0		69
#define RV1108_RST_TIMER1		70
#define RV1108_RST_TSADC_P		71
#define RV1108_RST_TSADC		72
#define RV1108_RST_SARADC_P		73
#define RV1108_RST_SARADC		74
#define RV1108_RST_SYSBUS_H		75
#define RV1108_RST_USBGRF_P		76
#define RV1108_RST_4RES13		77
#define RV1108_RST_4RES14		78
#define RV1108_RST_4RES15		79

/* CRU_SOFTRST5_CON */
#define RV1108_RST_PERIPH_NIU_A		80
#define RV1108_RST_PERIPH_NIU_H		81
#define RV1108_RST_PERIPH_NIU_P		82
#define RV1108_RST_PERIPH_H		83
#define RV1108_RST_SDMMC_H		84
#define RV1108_RST_SDIO_H		85
#define RV1108_RST_EMMC_H		86
#define RV1108_RST_NANDC_H		87
#define RV1108_RST_NANDC_N		88
#define RV1108_RST_SFC_H		89
#define RV1108_RST_SFC			90
#define RV1108_RST_GMAC_A		91
#define RV1108_RST_OTG_H		92
#define RV1108_RST_OTG			93
#define RV1108_RST_OTG_ADP		94
#define RV1108_RST_HOST0_H		95

/* CRU_SOFTRST6_CON */
#define RV1108_RST_HOST0_AUX_H		96
#define RV1108_RST_HOST0_ARB_H		97
#define RV1108_RST_HOST0_EHCIPHY	98
#define RV1108_RST_HOST0_UTMI		99
#define RV1108_RST_USBPOR		100
#define RV1108_RST_UTMI0		101
#define RV1108_RST_UTMI1		102
#define RV1108_RST_6RES7		103
#define RV1108_RST_6RES8		104
#define RV1108_RST_6RES9		105
#define RV1108_RST_6RES10		106
#define RV1108_RST_6RES11		107
#define RV1108_RST_6RES12		108
#define RV1108_RST_6RES13		109
#define RV1108_RST_6RES14		110
#define RV1108_RST_6RES15		111

/* CRU_SOFTRST7_CON */
#define RV1108_RST_VIO0_NIU_A		112
#define RV1108_RST_VIO1_NIU_A		113
#define RV1108_RST_VIO_NIU_H		114
#define RV1108_RST_VIO_NIU_P		115
#define RV1108_RST_VOP_A		116
#define RV1108_RST_VOP_H		117
#define RV1108_RST_VOP_D		118
#define RV1108_RST_IEP_A		119
#define RV1108_RST_IEP_H		120
#define RV1108_RST_RGA_A		121
#define RV1108_RST_RGA_H		122
#define RV1108_RST_RGA			123
#define RV1108_RST_CVBS_P		124
#define RV1108_RST_HDMI_P		125
#define RV1108_RST_HDMI			126
#define RV1108_RST_MIPI_DSI_P		127

/* CRU_SOFTRST8_CON */
#define RV1108_RST_ISP_NIU_A		128
#define RV1108_RST_ISP_NIU_H		129
#define RV1108_RST_ISP_H		130
#define RV1108_RST_ISP			131
#define RV1108_RST_VIP0_A		132
#define RV1108_RST_VIP0_H		133
#define RV1108_RST_VIP0_P		134
#define RV1108_RST_VIP1_A		135
#define RV1108_RST_VIP1_H		136
#define RV1108_RST_VIP1_P		137
#define RV1108_RST_VIP2_A		138
#define RV1108_RST_VIP2_H		139
#define RV1108_RST_VIP2_P		140
#define RV1108_RST_VIP3_A		141
#define RV1108_RST_VIP3_H		142
#define RV1108_RST_VIP3_P		143

/* CRU_SOFTRST9_CON */
#define RV1108_RST_CIF1TO4_P		144
#define RV1108_RST_CVBS_CLK		145
#define RV1108_RST_CVBS_H		146
#define RV1108_RST_9RES3		147
#define RV1108_RST_9RES4		148
#define RV1108_RST_9RES5		149
#define RV1108_RST_9RES6		150
#define RV1108_RST_9RES7		151
#define RV1108_RST_9RES8		152
#define RV1108_RST_9RES9		153
#define RV1108_RST_9RES10		154
#define RV1108_RST_9RES11		155
#define RV1108_RST_9RES12		156
#define RV1108_RST_9RES13		157
#define RV1108_RST_9RES14		158
#define RV1108_RST_9RES15		159

/* CRU_SOFTRST10_CON */
#define RV1108_RST_VPU_NIU_A		160
#define RV1108_RST_VPU_NIU_H		161
#define RV1108_RST_VPU_A		162
#define RV1108_RST_VPU_H		163
#define RV1108_RST_RKVDEC_NIU_A		164
#define RV1108_RST_RKVDEC_NIU_H		165
#define RV1108_RST_RKVDEC_A		166
#define RV1108_RST_RKVDEC_H		167
#define RV1108_RST_RKVDEC_CABAC		168
#define RV1108_RST_RKVDEC_CORE		169
#define RV1108_RST_RKVENC_NIU_A		170
#define RV1108_RST_RKVENC_NIU_H		171
#define RV1108_RST_RKVENC_A		172
#define RV1108_RST_RKVENC_H		173
#define RV1108_RST_RKVENC_CORE		174
#define RV1108_RST_10RES15		175

/* CRU_SOFTRST11_CON */
#define RV1108_RST_DSP_CORE		176
#define RV1108_RST_DSP_SYS		177
#define RV1108_RST_DSP_GLOBAL		178
#define RV1108_RST_DSP_OECM		179
#define RV1108_RST_DSP_IOP_NIU_P	180
#define RV1108_RST_DSP_EPP_NIU_A	181
#define RV1108_RST_DSP_EDP_NIU_A	182
#define RV1108_RST_DSP_DBG_NIU_P	183
#define RV1108_RST_DSP_CFG_NIU_P	184
#define RV1108_RST_DSP_GRF_P		185
#define RV1108_RST_DSP_MAILBOX_P	186
#define RV1108_RST_DSP_INTC_P		187
#define RV1108_RST_11RES12		188
#define RV1108_RST_DSP_PFM_MON_P	189
#define RV1108_RST_DSP_PFM_MON		190
#define RV1108_RST_DSP_EDAP_NIU_A	191

/* CRU_SOFTRST12_CON */
#define RV1108_RST_PMU			192
#define RV1108_RST_PMU_I2C0		193
#define RV1108_RST_PMU_I2C0_P		194
#define RV1108_RST_PMU_GPIO0_P		195
#define RV1108_RST_PMU_INTMEM_P		196
#define RV1108_RST_PMU_PWM0_P		197
#define RV1108_RST_PMU_PWM0		198
#define RV1108_RST_PMU_GRF_P		199
#define RV1108_RST_PMU_NIU		200
#define RV1108_RST_PMU_PVTM		201
#define RV1108_RST_12RES10		202
#define RV1108_RST_12RES11		203
#define RV1108_RST_DSP_EDP_PERF_A	204
#define RV1108_RST_DSP_EPP_PERF_A	205
#define RV1108_RST_12RES14		206
#define RV1108_RST_12RES15		207

#endif /* _DT_BINDINGS_CLOCK_ROCKCHIP_RV1108_H */
