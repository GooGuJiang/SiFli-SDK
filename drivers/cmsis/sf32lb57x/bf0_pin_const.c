/*
 * SPDX-FileCopyrightText: 2019-2025 SiFli Technologies(Nanjing) Co., Ltd
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include "bf0_hal_def.h"
#include "bf0_pin_const.h"

/* PAD_SA00 */
const pin_fsel_function_t pad_sa00_fsel_func_tbl[] =
{
    {1, MPI1_DM},
    {4, MPI1_CS},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SA01 */
const pin_fsel_function_t pad_sa01_fsel_func_tbl[] =
{
    {1, MPI1_DIO0},
    {4, MPI1_DIO2},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SA02 */
const pin_fsel_function_t pad_sa02_fsel_func_tbl[] =
{
    {1, MPI1_DIO1},
    {4, MPI1_DIO1},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SA03 */
const pin_fsel_function_t pad_sa03_fsel_func_tbl[] =
{
    {1, MPI1_DIO2},
    {4, MPI1_CS},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SA04 */
const pin_fsel_function_t pad_sa04_fsel_func_tbl[] =
{
    {1, MPI1_DIO3},
    {4, MPI1_DIO2},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SA05 */
const pin_fsel_function_t pad_sa05_fsel_func_tbl[] =
{
    {1, MPI1_CS},
    {3, MPI1_DIO4},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SA06 */
const pin_fsel_function_t pad_sa06_fsel_func_tbl[] =
{
    {1, MPI1_CLKB},
    {3, MPI1_DIO5},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SA07 */
const pin_fsel_function_t pad_sa07_fsel_func_tbl[] =
{
    {1, MPI1_CLK},
    {3, MPI1_DIO6},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SA08 */
const pin_fsel_function_t pad_sa08_fsel_func_tbl[] =
{
    {1, MPI1_DIO4},
    {3, MPI1_DIO7},
    {4, MPI1_DIO0},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SA09 */
const pin_fsel_function_t pad_sa09_fsel_func_tbl[] =
{
    {1, MPI1_DIO5},
    {3, MPI1_DQSDM},
    {4, MPI1_DIO3},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SA10 */
const pin_fsel_function_t pad_sa10_fsel_func_tbl[] =
{
    {1, MPI1_DIO6},
    {3, MPI1_CLK},
    {4, MPI1_CLK},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SA11 */
const pin_fsel_function_t pad_sa11_fsel_func_tbl[] =
{
    {1, MPI1_DIO7},
    {3, MPI1_CS},
    {4, MPI1_DIO3},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SA12 */
const pin_fsel_function_t pad_sa12_fsel_func_tbl[] =
{
    {1, MPI1_DQS},
    {2, MPI1_DQSDM},
    {4, MPI1_DIO0},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SB00 */
const pin_fsel_function_t pad_sb00_fsel_func_tbl[] =
{
    {1, MPI2_DM},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SB01 */
const pin_fsel_function_t pad_sb01_fsel_func_tbl[] =
{
    {1, MPI2_DIO0},
    {4, MPI3_DIO2},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SB02 */
const pin_fsel_function_t pad_sb02_fsel_func_tbl[] =
{
    {1, MPI2_DIO1},
    {4, MPI3_DIO1},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SB03 */
const pin_fsel_function_t pad_sb03_fsel_func_tbl[] =
{
    {1, MPI2_DIO2},
    {4, MPI3_CS},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SB04 */
const pin_fsel_function_t pad_sb04_fsel_func_tbl[] =
{
    {1, MPI2_DIO3},
    {4, MPI2_DIO2},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SB05 */
const pin_fsel_function_t pad_sb05_fsel_func_tbl[] =
{
    {1, MPI2_CS},
    {4, MPI2_DIO1},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SB06 */
const pin_fsel_function_t pad_sb06_fsel_func_tbl[] =
{
    {1, MPI2_CLKB},
    {3, MPI2_DIO4},
    {4, MPI2_CS},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SB07 */
const pin_fsel_function_t pad_sb07_fsel_func_tbl[] =
{
    {1, MPI2_CLK},
    {3, MPI2_DIO5},
    {4, MPI3_DIO0},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SB08 */
const pin_fsel_function_t pad_sb08_fsel_func_tbl[] =
{
    {1, MPI2_DIO4},
    {3, MPI2_DIO6},
    {4, MPI3_DIO3},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SB09 */
const pin_fsel_function_t pad_sb09_fsel_func_tbl[] =
{
    {1, MPI2_DIO5},
    {3, MPI2_DIO7},
    {4, MPI3_CLK},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SB10 */
const pin_fsel_function_t pad_sb10_fsel_func_tbl[] =
{
    {1, MPI2_DIO6},
    {3, MPI2_DQSDM},
    {4, MPI2_DIO0},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SB11 */
const pin_fsel_function_t pad_sb11_fsel_func_tbl[] =
{
    {1, MPI2_DIO7},
    {3, MPI2_CLK},
    {4, MPI2_DIO3},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_SB12 */
const pin_fsel_function_t pad_sb12_fsel_func_tbl[] =
{
    {1, MPI2_DQS},
    {2, MPI2_DQSDM},
    {3, MPI2_CS},
    {4, MPI2_CLK},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA00 */
const pin_fsel_function_t pad_pa00_fsel_func_tbl[] =
{
    {0, GPIO_A0},
    {1, LCDC1_SPI_RSTB},
    {7, LCDC1_8080_RSTB},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA01 */
const pin_fsel_function_t pad_pa01_fsel_func_tbl[] =
{
    {0, GPIO_A1},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA02 */
const pin_fsel_function_t pad_pa02_fsel_func_tbl[] =
{
    {0, GPIO_A2},
    {1, LCDC1_SPI_TE},
    {3, I2S1_MCLK},
    {6, LCDC1_JDI_B2},
    {7, LCDC1_8080_TE},
    {9, DBG_DO0},
    {11, EDT_CHANNEL_IN0},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA03 */
const pin_fsel_function_t pad_pa03_fsel_func_tbl[] =
{
    {0, GPIO_A3},
    {1, LCDC1_SPI_CS},
    {3, I2S1_SDO},
    {6, LCDC1_JDI_B1},
    {7, LCDC1_8080_CS},
    {9, DBG_DO1},
    {11, EDT_CHANNEL_IN1},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA04 */
const pin_fsel_function_t pad_pa04_fsel_func_tbl[] =
{
    {0, GPIO_A4},
    {1, LCDC1_SPI_CLK},
    {3, I2S1_SDI},
    {6, LCDC1_JDI_G1},
    {7, LCDC1_8080_WR},
    {9, DBG_DO2},
    {11, EDT_CHANNEL_IN2},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA05 */
const pin_fsel_function_t pad_pa05_fsel_func_tbl[] =
{
    {0, GPIO_A5},
    {1, LCDC1_SPI_DIO0},
    {3, I2S1_BCK},
    {6, LCDC1_JDI_R1},
    {7, LCDC1_8080_RD},
    {9, DBG_DO3},
    {11, EDT_CHANNEL_IN3},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA06 */
const pin_fsel_function_t pad_pa06_fsel_func_tbl[] =
{
    {0, GPIO_A6},
    {1, LCDC1_SPI_DIO1},
    {3, I2S1_LRCK},
    {6, LCDC1_JDI_HST},
    {7, LCDC1_8080_DC},
    {9, DBG_DO4},
    {11, EDT_CHANNEL_IN4},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA07 */
const pin_fsel_function_t pad_pa07_fsel_func_tbl[] =
{
    {0, GPIO_A7},
    {1, LCDC1_SPI_DIO2},
    {3, PDM1_CLK},
    {6, LCDC1_JDI_ENB},
    {7, LCDC1_8080_DIO0},
    {9, DBG_DO5},
    {11, EDT_CHANNEL_IN5},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA08 */
const pin_fsel_function_t pad_pa08_fsel_func_tbl[] =
{
    {0, GPIO_A8},
    {1, LCDC1_SPI_DIO3},
    {3, PDM1_DATA},
    {6, LCDC1_JDI_VST},
    {7, LCDC1_8080_DIO1},
    {9, DBG_DO6},
    {10, BIST_DONE},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA09 */
const pin_fsel_function_t pad_pa09_fsel_func_tbl[] =
{
    {0, GPIO_A9},
    {9, DBG_DO7},
    {10, BIST_FAIL},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA10 */
const pin_fsel_function_t pad_pa10_fsel_func_tbl[] =
{
    {0, GPIO_A10},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA11 */
const pin_fsel_function_t pad_pa11_fsel_func_tbl[] =
{
    {0, GPIO_A11},
    {9, AUD_CLK_EXT},
    {10, BIST_CLK},
    {11, SCAN_CLK},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA12 */
const pin_fsel_function_t pad_pa12_fsel_func_tbl[] =
{
    {0, GPIO_A12},
    {1, MPI3_CS},
    {2, SD1_DIO2},
    {10, BIST_RST},
    {11, SCAN_RSTB},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA13 */
const pin_fsel_function_t pad_pa13_fsel_func_tbl[] =
{
    {0, GPIO_A13},
    {1, MPI3_DIO1},
    {2, SD1_DIO3},
    {11, SCAN_EN},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA14 */
const pin_fsel_function_t pad_pa14_fsel_func_tbl[] =
{
    {0, GPIO_A14},
    {1, MPI3_DIO2},
    {2, SD1_CLK},
    {11, EDT_CLK},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA15 */
const pin_fsel_function_t pad_pa15_fsel_func_tbl[] =
{
    {0, GPIO_A15},
    {1, MPI3_DIO0},
    {2, SD1_CMD},
    {11, EDT_UPDATE},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA16 */
const pin_fsel_function_t pad_pa16_fsel_func_tbl[] =
{
    {0, GPIO_A16},
    {1, MPI3_CLK},
    {2, SD1_DIO0},
    {11, EDT_BYPASS},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA17 */
const pin_fsel_function_t pad_pa17_fsel_func_tbl[] =
{
    {0, GPIO_A17},
    {1, MPI3_DIO3},
    {2, SD1_DIO1},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA18 */
const pin_fsel_function_t pad_pa18_fsel_func_tbl[] =
{
    {0, GPIO_A18},
    {2, SWDIO},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA19 */
const pin_fsel_function_t pad_pa19_fsel_func_tbl[] =
{
    {0, GPIO_A19},
    {2, SWCLK},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA20 */
const pin_fsel_function_t pad_pa20_fsel_func_tbl[] =
{
    {0, GPIO_A20},
    {9, DBG_CLK},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA21 */
const pin_fsel_function_t pad_pa21_fsel_func_tbl[] =
{
    {0, GPIO_A21},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA22 */
const pin_fsel_function_t pad_pa22_fsel_func_tbl[] =
{
    {0, GPIO_A22},
    {3, PDM1_CLK},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA23 */
const pin_fsel_function_t pad_pa23_fsel_func_tbl[] =
{
    {0, GPIO_A23},
    {3, PDM1_DATA},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA24 */
const pin_fsel_function_t pad_pa24_fsel_func_tbl[] =
{
    {0, GPIO_A24},
    {2, SPI1_DIO},
    {3, I2S1_MCLK},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA25 */
const pin_fsel_function_t pad_pa25_fsel_func_tbl[] =
{
    {0, GPIO_A25},
    {2, SPI1_DI},
    {3, I2S1_SDO},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA26 */
const pin_fsel_function_t pad_pa26_fsel_func_tbl[] =
{
    {0, GPIO_A26},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA27 */
const pin_fsel_function_t pad_pa27_fsel_func_tbl[] =
{
    {0, GPIO_A27},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA28 */
const pin_fsel_function_t pad_pa28_fsel_func_tbl[] =
{
    {0, GPIO_A28},
    {2, SPI1_CLK},
    {3, I2S1_SDI},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA29 */
const pin_fsel_function_t pad_pa29_fsel_func_tbl[] =
{
    {0, GPIO_A29},
    {2, SPI1_CS},
    {3, I2S1_BCK},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA30 */
const pin_fsel_function_t pad_pa30_fsel_func_tbl[] =
{
    {0, GPIO_A30},
    {3, I2S1_LRCK},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA31 */
const pin_fsel_function_t pad_pa31_fsel_func_tbl[] =
{
    {0, GPIO_A31},
    {9, DBG_DO8},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA32 */
const pin_fsel_function_t pad_pa32_fsel_func_tbl[] =
{
    {0, GPIO_A32},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA33 */
const pin_fsel_function_t pad_pa33_fsel_func_tbl[] =
{
    {0, GPIO_A33},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA34 */
const pin_fsel_function_t pad_pa34_fsel_func_tbl[] =
{
    {0, GPIO_A34},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA35 */
const pin_fsel_function_t pad_pa35_fsel_func_tbl[] =
{
    {0, GPIO_A35},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA36 */
const pin_fsel_function_t pad_pa36_fsel_func_tbl[] =
{
    {0, GPIO_A36},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA37 */
const pin_fsel_function_t pad_pa37_fsel_func_tbl[] =
{
    {0, GPIO_A37},
    {2, SPI2_DIO},
    {7, LCDC1_8080_DIO2},
    {9, DBG_DO9},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA38 */
const pin_fsel_function_t pad_pa38_fsel_func_tbl[] =
{
    {0, GPIO_A38},
    {2, SPI2_DI},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA39 */
const pin_fsel_function_t pad_pa39_fsel_func_tbl[] =
{
    {0, GPIO_A39},
    {2, SPI2_CLK},
    {6, LCDC1_JDI_VCK},
    {7, LCDC1_8080_DIO3},
    {9, DBG_DO10},
    {11, EDT_CHANNEL_OUT0},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA40 */
const pin_fsel_function_t pad_pa40_fsel_func_tbl[] =
{
    {0, GPIO_A40},
    {2, SPI2_CS},
    {6, LCDC1_JDI_XRST},
    {7, LCDC1_8080_DIO4},
    {9, DBG_DO11},
    {11, EDT_CHANNEL_OUT1},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA41 */
const pin_fsel_function_t pad_pa41_fsel_func_tbl[] =
{
    {0, GPIO_A41},
    {6, LCDC1_JDI_HCK},
    {7, LCDC1_8080_DIO5},
    {9, DBG_DO12},
    {11, EDT_CHANNEL_OUT2},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA42 */
const pin_fsel_function_t pad_pa42_fsel_func_tbl[] =
{
    {0, GPIO_A42},
    {6, LCDC1_JDI_R2},
    {7, LCDC1_8080_DIO6},
    {9, DBG_DO13},
    {11, EDT_CHANNEL_OUT3},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA43 */
const pin_fsel_function_t pad_pa43_fsel_func_tbl[] =
{
    {0, GPIO_A43},
    {6, LCDC1_JDI_G2},
    {7, LCDC1_8080_DIO7},
    {9, DBG_DO14},
    {11, EDT_CHANNEL_OUT4},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA44 */
const pin_fsel_function_t pad_pa44_fsel_func_tbl[] =
{
    {0, GPIO_A44},
    {9, DBG_DO15},
    {11, EDT_CHANNEL_OUT5},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA45 */
const pin_fsel_function_t pad_pa45_fsel_func_tbl[] =
{
    {0, GPIO_A45},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA46 */
const pin_fsel_function_t pad_pa46_fsel_func_tbl[] =
{
    {0, GPIO_A46},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA47 */
const pin_fsel_function_t pad_pa47_fsel_func_tbl[] =
{
    {0, GPIO_A47},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA48 */
const pin_fsel_function_t pad_pa48_fsel_func_tbl[] =
{
    {0, GPIO_A48},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA49 */
const pin_fsel_function_t pad_pa49_fsel_func_tbl[] =
{
    {0, GPIO_A49},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA50 */
const pin_fsel_function_t pad_pa50_fsel_func_tbl[] =
{
    {0, GPIO_A50},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA51 */
const pin_fsel_function_t pad_pa51_fsel_func_tbl[] =
{
    {0, GPIO_A51},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA52 */
const pin_fsel_function_t pad_pa52_fsel_func_tbl[] =
{
    {0, GPIO_A52},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA53 */
const pin_fsel_function_t pad_pa53_fsel_func_tbl[] =
{
    {0, GPIO_A53},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA54 */
const pin_fsel_function_t pad_pa54_fsel_func_tbl[] =
{
    {0, GPIO_A54},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA55 */
const pin_fsel_function_t pad_pa55_fsel_func_tbl[] =
{
    {0, GPIO_A55},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA56 */
const pin_fsel_function_t pad_pa56_fsel_func_tbl[] =
{
    {0, GPIO_A56},
    {0, PIN_FUNC_UNDEF},
};

/* PAD_PA57 */
const pin_fsel_function_t pad_pa57_fsel_func_tbl[] =
{
    {0, GPIO_A57},
    {0, PIN_FUNC_UNDEF},
};

const pin_fsel_function_t *const pad_fsel_func_tbls[HPSYS_PAD_NUM] =
{
    pad_sa00_fsel_func_tbl,
    pad_sa01_fsel_func_tbl,
    pad_sa02_fsel_func_tbl,
    pad_sa03_fsel_func_tbl,
    pad_sa04_fsel_func_tbl,
    pad_sa05_fsel_func_tbl,
    pad_sa06_fsel_func_tbl,
    pad_sa07_fsel_func_tbl,
    pad_sa08_fsel_func_tbl,
    pad_sa09_fsel_func_tbl,
    pad_sa10_fsel_func_tbl,
    pad_sa11_fsel_func_tbl,
    pad_sa12_fsel_func_tbl,
    pad_sb00_fsel_func_tbl,
    pad_sb01_fsel_func_tbl,
    pad_sb02_fsel_func_tbl,
    pad_sb03_fsel_func_tbl,
    pad_sb04_fsel_func_tbl,
    pad_sb05_fsel_func_tbl,
    pad_sb06_fsel_func_tbl,
    pad_sb07_fsel_func_tbl,
    pad_sb08_fsel_func_tbl,
    pad_sb09_fsel_func_tbl,
    pad_sb10_fsel_func_tbl,
    pad_sb11_fsel_func_tbl,
    pad_sb12_fsel_func_tbl,
    pad_pa00_fsel_func_tbl,
    pad_pa01_fsel_func_tbl,
    pad_pa02_fsel_func_tbl,
    pad_pa03_fsel_func_tbl,
    pad_pa04_fsel_func_tbl,
    pad_pa05_fsel_func_tbl,
    pad_pa06_fsel_func_tbl,
    pad_pa07_fsel_func_tbl,
    pad_pa08_fsel_func_tbl,
    pad_pa09_fsel_func_tbl,
    pad_pa10_fsel_func_tbl,
    pad_pa11_fsel_func_tbl,
    pad_pa12_fsel_func_tbl,
    pad_pa13_fsel_func_tbl,
    pad_pa14_fsel_func_tbl,
    pad_pa15_fsel_func_tbl,
    pad_pa16_fsel_func_tbl,
    pad_pa17_fsel_func_tbl,
    pad_pa18_fsel_func_tbl,
    pad_pa19_fsel_func_tbl,
    pad_pa20_fsel_func_tbl,
    pad_pa21_fsel_func_tbl,
    pad_pa22_fsel_func_tbl,
    pad_pa23_fsel_func_tbl,
    pad_pa24_fsel_func_tbl,
    pad_pa25_fsel_func_tbl,
    pad_pa26_fsel_func_tbl,
    pad_pa27_fsel_func_tbl,
    pad_pa28_fsel_func_tbl,
    pad_pa29_fsel_func_tbl,
    pad_pa30_fsel_func_tbl,
    pad_pa31_fsel_func_tbl,
    pad_pa32_fsel_func_tbl,
    pad_pa33_fsel_func_tbl,
    pad_pa34_fsel_func_tbl,
    pad_pa35_fsel_func_tbl,
    pad_pa36_fsel_func_tbl,
    pad_pa37_fsel_func_tbl,
    pad_pa38_fsel_func_tbl,
    pad_pa39_fsel_func_tbl,
    pad_pa40_fsel_func_tbl,
    pad_pa41_fsel_func_tbl,
    pad_pa42_fsel_func_tbl,
    pad_pa43_fsel_func_tbl,
    pad_pa44_fsel_func_tbl,
    pad_pa45_fsel_func_tbl,
    pad_pa46_fsel_func_tbl,
    pad_pa47_fsel_func_tbl,
    pad_pa48_fsel_func_tbl,
    pad_pa49_fsel_func_tbl,
    pad_pa50_fsel_func_tbl,
    pad_pa51_fsel_func_tbl,
    pad_pa52_fsel_func_tbl,
    pad_pa53_fsel_func_tbl,
    pad_pa54_fsel_func_tbl,
    pad_pa55_fsel_func_tbl,
    pad_pa56_fsel_func_tbl,
    pad_pa57_fsel_func_tbl,
};

