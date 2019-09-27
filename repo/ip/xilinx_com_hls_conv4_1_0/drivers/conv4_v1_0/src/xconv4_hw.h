// ==============================================================
// File generated on Wed Sep 04 09:50:18 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// AXILiteS
// 0x000 : Control signals
//         bit 0  - ap_start (Read/Write/COH)
//         bit 1  - ap_done (Read/COR)
//         bit 2  - ap_idle (Read)
//         bit 3  - ap_ready (Read)
//         bit 7  - auto_restart (Read/Write)
//         others - reserved
// 0x004 : Global Interrupt Enable Register
//         bit 0  - Global Interrupt Enable (Read/Write)
//         others - reserved
// 0x008 : IP Interrupt Enable Register (Read/Write)
//         bit 0  - Channel 0 (ap_done)
//         bit 1  - Channel 1 (ap_ready)
//         others - reserved
// 0x00c : IP Interrupt Status Register (Read/TOW)
//         bit 0  - Channel 0 (ap_done)
//         bit 1  - Channel 1 (ap_ready)
//         others - reserved
// 0x010 : Data signal of ap_return
//         bit 31~0 - ap_return[31:0] (Read)
// 0x018 : Data signal of feature_src_0
//         bit 31~0 - feature_src_0[31:0] (Read/Write)
// 0x01c : reserved
// 0x020 : Data signal of feature_src_1
//         bit 31~0 - feature_src_1[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of feature_src_2
//         bit 31~0 - feature_src_2[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of feature_src_3
//         bit 31~0 - feature_src_3[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of feature_src_4
//         bit 31~0 - feature_src_4[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of feature_src_5
//         bit 31~0 - feature_src_5[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of feature_src_6
//         bit 31~0 - feature_src_6[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of feature_src_7
//         bit 31~0 - feature_src_7[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of weight_src_0_0
//         bit 31~0 - weight_src_0_0[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of weight_src_0_1
//         bit 31~0 - weight_src_0_1[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of weight_src_0_2
//         bit 31~0 - weight_src_0_2[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of weight_src_0_3
//         bit 31~0 - weight_src_0_3[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of weight_src_0_4
//         bit 31~0 - weight_src_0_4[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of weight_src_0_5
//         bit 31~0 - weight_src_0_5[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of weight_src_0_6
//         bit 31~0 - weight_src_0_6[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of weight_src_0_7
//         bit 31~0 - weight_src_0_7[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of weight_src_1_0
//         bit 31~0 - weight_src_1_0[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of weight_src_1_1
//         bit 31~0 - weight_src_1_1[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of weight_src_1_2
//         bit 31~0 - weight_src_1_2[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of weight_src_1_3
//         bit 31~0 - weight_src_1_3[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of weight_src_1_4
//         bit 31~0 - weight_src_1_4[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of weight_src_1_5
//         bit 31~0 - weight_src_1_5[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of weight_src_1_6
//         bit 31~0 - weight_src_1_6[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of weight_src_1_7
//         bit 31~0 - weight_src_1_7[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of weight_src_2_0
//         bit 31~0 - weight_src_2_0[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of weight_src_2_1
//         bit 31~0 - weight_src_2_1[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of weight_src_2_2
//         bit 31~0 - weight_src_2_2[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of weight_src_2_3
//         bit 31~0 - weight_src_2_3[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of weight_src_2_4
//         bit 31~0 - weight_src_2_4[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of weight_src_2_5
//         bit 31~0 - weight_src_2_5[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of weight_src_2_6
//         bit 31~0 - weight_src_2_6[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of weight_src_2_7
//         bit 31~0 - weight_src_2_7[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of weight_src_3_0
//         bit 31~0 - weight_src_3_0[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of weight_src_3_1
//         bit 31~0 - weight_src_3_1[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of weight_src_3_2
//         bit 31~0 - weight_src_3_2[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of weight_src_3_3
//         bit 31~0 - weight_src_3_3[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of weight_src_3_4
//         bit 31~0 - weight_src_3_4[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of weight_src_3_5
//         bit 31~0 - weight_src_3_5[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of weight_src_3_6
//         bit 31~0 - weight_src_3_6[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of weight_src_3_7
//         bit 31~0 - weight_src_3_7[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of weight_src_4_0
//         bit 31~0 - weight_src_4_0[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of weight_src_4_1
//         bit 31~0 - weight_src_4_1[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of weight_src_4_2
//         bit 31~0 - weight_src_4_2[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of weight_src_4_3
//         bit 31~0 - weight_src_4_3[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of weight_src_4_4
//         bit 31~0 - weight_src_4_4[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of weight_src_4_5
//         bit 31~0 - weight_src_4_5[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of weight_src_4_6
//         bit 31~0 - weight_src_4_6[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of weight_src_4_7
//         bit 31~0 - weight_src_4_7[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of weight_src_5_0
//         bit 31~0 - weight_src_5_0[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of weight_src_5_1
//         bit 31~0 - weight_src_5_1[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of weight_src_5_2
//         bit 31~0 - weight_src_5_2[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of weight_src_5_3
//         bit 31~0 - weight_src_5_3[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of weight_src_5_4
//         bit 31~0 - weight_src_5_4[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of weight_src_5_5
//         bit 31~0 - weight_src_5_5[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of weight_src_5_6
//         bit 31~0 - weight_src_5_6[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of weight_src_5_7
//         bit 31~0 - weight_src_5_7[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of weight_src_6_0
//         bit 31~0 - weight_src_6_0[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of weight_src_6_1
//         bit 31~0 - weight_src_6_1[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of weight_src_6_2
//         bit 31~0 - weight_src_6_2[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of weight_src_6_3
//         bit 31~0 - weight_src_6_3[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of weight_src_6_4
//         bit 31~0 - weight_src_6_4[31:0] (Read/Write)
// 0x1fc : reserved
// 0x200 : Data signal of weight_src_6_5
//         bit 31~0 - weight_src_6_5[31:0] (Read/Write)
// 0x204 : reserved
// 0x208 : Data signal of weight_src_6_6
//         bit 31~0 - weight_src_6_6[31:0] (Read/Write)
// 0x20c : reserved
// 0x210 : Data signal of weight_src_6_7
//         bit 31~0 - weight_src_6_7[31:0] (Read/Write)
// 0x214 : reserved
// 0x218 : Data signal of weight_src_7_0
//         bit 31~0 - weight_src_7_0[31:0] (Read/Write)
// 0x21c : reserved
// 0x220 : Data signal of weight_src_7_1
//         bit 31~0 - weight_src_7_1[31:0] (Read/Write)
// 0x224 : reserved
// 0x228 : Data signal of weight_src_7_2
//         bit 31~0 - weight_src_7_2[31:0] (Read/Write)
// 0x22c : reserved
// 0x230 : Data signal of weight_src_7_3
//         bit 31~0 - weight_src_7_3[31:0] (Read/Write)
// 0x234 : reserved
// 0x238 : Data signal of weight_src_7_4
//         bit 31~0 - weight_src_7_4[31:0] (Read/Write)
// 0x23c : reserved
// 0x240 : Data signal of weight_src_7_5
//         bit 31~0 - weight_src_7_5[31:0] (Read/Write)
// 0x244 : reserved
// 0x248 : Data signal of weight_src_7_6
//         bit 31~0 - weight_src_7_6[31:0] (Read/Write)
// 0x24c : reserved
// 0x250 : Data signal of weight_src_7_7
//         bit 31~0 - weight_src_7_7[31:0] (Read/Write)
// 0x254 : reserved
// 0x258 : Data signal of weight_src_8_0
//         bit 31~0 - weight_src_8_0[31:0] (Read/Write)
// 0x25c : reserved
// 0x260 : Data signal of weight_src_8_1
//         bit 31~0 - weight_src_8_1[31:0] (Read/Write)
// 0x264 : reserved
// 0x268 : Data signal of weight_src_8_2
//         bit 31~0 - weight_src_8_2[31:0] (Read/Write)
// 0x26c : reserved
// 0x270 : Data signal of weight_src_8_3
//         bit 31~0 - weight_src_8_3[31:0] (Read/Write)
// 0x274 : reserved
// 0x278 : Data signal of weight_src_8_4
//         bit 31~0 - weight_src_8_4[31:0] (Read/Write)
// 0x27c : reserved
// 0x280 : Data signal of weight_src_8_5
//         bit 31~0 - weight_src_8_5[31:0] (Read/Write)
// 0x284 : reserved
// 0x288 : Data signal of weight_src_8_6
//         bit 31~0 - weight_src_8_6[31:0] (Read/Write)
// 0x28c : reserved
// 0x290 : Data signal of weight_src_8_7
//         bit 31~0 - weight_src_8_7[31:0] (Read/Write)
// 0x294 : reserved
// 0x298 : Data signal of weight_src_9_0
//         bit 31~0 - weight_src_9_0[31:0] (Read/Write)
// 0x29c : reserved
// 0x2a0 : Data signal of weight_src_9_1
//         bit 31~0 - weight_src_9_1[31:0] (Read/Write)
// 0x2a4 : reserved
// 0x2a8 : Data signal of weight_src_9_2
//         bit 31~0 - weight_src_9_2[31:0] (Read/Write)
// 0x2ac : reserved
// 0x2b0 : Data signal of weight_src_9_3
//         bit 31~0 - weight_src_9_3[31:0] (Read/Write)
// 0x2b4 : reserved
// 0x2b8 : Data signal of weight_src_9_4
//         bit 31~0 - weight_src_9_4[31:0] (Read/Write)
// 0x2bc : reserved
// 0x2c0 : Data signal of weight_src_9_5
//         bit 31~0 - weight_src_9_5[31:0] (Read/Write)
// 0x2c4 : reserved
// 0x2c8 : Data signal of weight_src_9_6
//         bit 31~0 - weight_src_9_6[31:0] (Read/Write)
// 0x2cc : reserved
// 0x2d0 : Data signal of weight_src_9_7
//         bit 31~0 - weight_src_9_7[31:0] (Read/Write)
// 0x2d4 : reserved
// 0x2d8 : Data signal of bias
//         bit 31~0 - bias[31:0] (Read/Write)
// 0x2dc : reserved
// 0x2e0 : Data signal of feature_dst_0
//         bit 31~0 - feature_dst_0[31:0] (Read/Write)
// 0x2e4 : reserved
// 0x2e8 : Data signal of feature_dst_1
//         bit 31~0 - feature_dst_1[31:0] (Read/Write)
// 0x2ec : reserved
// 0x2f0 : Data signal of feature_dst_2
//         bit 31~0 - feature_dst_2[31:0] (Read/Write)
// 0x2f4 : reserved
// 0x2f8 : Data signal of feature_dst_3
//         bit 31~0 - feature_dst_3[31:0] (Read/Write)
// 0x2fc : reserved
// 0x300 : Data signal of feature_dst_4
//         bit 31~0 - feature_dst_4[31:0] (Read/Write)
// 0x304 : reserved
// 0x308 : Data signal of feature_dst_5
//         bit 31~0 - feature_dst_5[31:0] (Read/Write)
// 0x30c : reserved
// 0x310 : Data signal of feature_dst_6
//         bit 31~0 - feature_dst_6[31:0] (Read/Write)
// 0x314 : reserved
// 0x318 : Data signal of feature_dst_7
//         bit 31~0 - feature_dst_7[31:0] (Read/Write)
// 0x31c : reserved
// 0x320 : Data signal of feature_dst_8
//         bit 31~0 - feature_dst_8[31:0] (Read/Write)
// 0x324 : reserved
// 0x328 : Data signal of feature_dst_9
//         bit 31~0 - feature_dst_9[31:0] (Read/Write)
// 0x32c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XCONV4_AXILITES_ADDR_AP_CTRL             0x000
#define XCONV4_AXILITES_ADDR_GIE                 0x004
#define XCONV4_AXILITES_ADDR_IER                 0x008
#define XCONV4_AXILITES_ADDR_ISR                 0x00c
#define XCONV4_AXILITES_ADDR_AP_RETURN           0x010
#define XCONV4_AXILITES_BITS_AP_RETURN           32
#define XCONV4_AXILITES_ADDR_FEATURE_SRC_0_DATA  0x018
#define XCONV4_AXILITES_BITS_FEATURE_SRC_0_DATA  32
#define XCONV4_AXILITES_ADDR_FEATURE_SRC_1_DATA  0x020
#define XCONV4_AXILITES_BITS_FEATURE_SRC_1_DATA  32
#define XCONV4_AXILITES_ADDR_FEATURE_SRC_2_DATA  0x028
#define XCONV4_AXILITES_BITS_FEATURE_SRC_2_DATA  32
#define XCONV4_AXILITES_ADDR_FEATURE_SRC_3_DATA  0x030
#define XCONV4_AXILITES_BITS_FEATURE_SRC_3_DATA  32
#define XCONV4_AXILITES_ADDR_FEATURE_SRC_4_DATA  0x038
#define XCONV4_AXILITES_BITS_FEATURE_SRC_4_DATA  32
#define XCONV4_AXILITES_ADDR_FEATURE_SRC_5_DATA  0x040
#define XCONV4_AXILITES_BITS_FEATURE_SRC_5_DATA  32
#define XCONV4_AXILITES_ADDR_FEATURE_SRC_6_DATA  0x048
#define XCONV4_AXILITES_BITS_FEATURE_SRC_6_DATA  32
#define XCONV4_AXILITES_ADDR_FEATURE_SRC_7_DATA  0x050
#define XCONV4_AXILITES_BITS_FEATURE_SRC_7_DATA  32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_0_DATA 0x058
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_0_0_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_1_DATA 0x060
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_0_1_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_2_DATA 0x068
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_0_2_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_3_DATA 0x070
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_0_3_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_4_DATA 0x078
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_0_4_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_5_DATA 0x080
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_0_5_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_6_DATA 0x088
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_0_6_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_7_DATA 0x090
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_0_7_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_0_DATA 0x098
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_1_0_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_1_DATA 0x0a0
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_1_1_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_2_DATA 0x0a8
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_1_2_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_3_DATA 0x0b0
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_1_3_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_4_DATA 0x0b8
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_1_4_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_5_DATA 0x0c0
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_1_5_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_6_DATA 0x0c8
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_1_6_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_7_DATA 0x0d0
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_1_7_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_0_DATA 0x0d8
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_2_0_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_1_DATA 0x0e0
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_2_1_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_2_DATA 0x0e8
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_2_2_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_3_DATA 0x0f0
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_2_3_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_4_DATA 0x0f8
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_2_4_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_5_DATA 0x100
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_2_5_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_6_DATA 0x108
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_2_6_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_7_DATA 0x110
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_2_7_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_0_DATA 0x118
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_3_0_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_1_DATA 0x120
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_3_1_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_2_DATA 0x128
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_3_2_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_3_DATA 0x130
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_3_3_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_4_DATA 0x138
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_3_4_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_5_DATA 0x140
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_3_5_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_6_DATA 0x148
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_3_6_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_7_DATA 0x150
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_3_7_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_0_DATA 0x158
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_4_0_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_1_DATA 0x160
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_4_1_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_2_DATA 0x168
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_4_2_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_3_DATA 0x170
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_4_3_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_4_DATA 0x178
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_4_4_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_5_DATA 0x180
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_4_5_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_6_DATA 0x188
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_4_6_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_7_DATA 0x190
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_4_7_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_0_DATA 0x198
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_5_0_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_1_DATA 0x1a0
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_5_1_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_2_DATA 0x1a8
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_5_2_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_3_DATA 0x1b0
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_5_3_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_4_DATA 0x1b8
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_5_4_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_5_DATA 0x1c0
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_5_5_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_6_DATA 0x1c8
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_5_6_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_7_DATA 0x1d0
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_5_7_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_0_DATA 0x1d8
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_6_0_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_1_DATA 0x1e0
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_6_1_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_2_DATA 0x1e8
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_6_2_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_3_DATA 0x1f0
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_6_3_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_4_DATA 0x1f8
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_6_4_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_5_DATA 0x200
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_6_5_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_6_DATA 0x208
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_6_6_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_7_DATA 0x210
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_6_7_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_0_DATA 0x218
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_7_0_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_1_DATA 0x220
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_7_1_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_2_DATA 0x228
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_7_2_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_3_DATA 0x230
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_7_3_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_4_DATA 0x238
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_7_4_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_5_DATA 0x240
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_7_5_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_6_DATA 0x248
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_7_6_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_7_DATA 0x250
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_7_7_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_0_DATA 0x258
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_8_0_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_1_DATA 0x260
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_8_1_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_2_DATA 0x268
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_8_2_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_3_DATA 0x270
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_8_3_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_4_DATA 0x278
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_8_4_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_5_DATA 0x280
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_8_5_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_6_DATA 0x288
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_8_6_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_7_DATA 0x290
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_8_7_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_0_DATA 0x298
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_9_0_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_1_DATA 0x2a0
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_9_1_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_2_DATA 0x2a8
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_9_2_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_3_DATA 0x2b0
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_9_3_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_4_DATA 0x2b8
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_9_4_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_5_DATA 0x2c0
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_9_5_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_6_DATA 0x2c8
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_9_6_DATA 32
#define XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_7_DATA 0x2d0
#define XCONV4_AXILITES_BITS_WEIGHT_SRC_9_7_DATA 32
#define XCONV4_AXILITES_ADDR_BIAS_DATA           0x2d8
#define XCONV4_AXILITES_BITS_BIAS_DATA           32
#define XCONV4_AXILITES_ADDR_FEATURE_DST_0_DATA  0x2e0
#define XCONV4_AXILITES_BITS_FEATURE_DST_0_DATA  32
#define XCONV4_AXILITES_ADDR_FEATURE_DST_1_DATA  0x2e8
#define XCONV4_AXILITES_BITS_FEATURE_DST_1_DATA  32
#define XCONV4_AXILITES_ADDR_FEATURE_DST_2_DATA  0x2f0
#define XCONV4_AXILITES_BITS_FEATURE_DST_2_DATA  32
#define XCONV4_AXILITES_ADDR_FEATURE_DST_3_DATA  0x2f8
#define XCONV4_AXILITES_BITS_FEATURE_DST_3_DATA  32
#define XCONV4_AXILITES_ADDR_FEATURE_DST_4_DATA  0x300
#define XCONV4_AXILITES_BITS_FEATURE_DST_4_DATA  32
#define XCONV4_AXILITES_ADDR_FEATURE_DST_5_DATA  0x308
#define XCONV4_AXILITES_BITS_FEATURE_DST_5_DATA  32
#define XCONV4_AXILITES_ADDR_FEATURE_DST_6_DATA  0x310
#define XCONV4_AXILITES_BITS_FEATURE_DST_6_DATA  32
#define XCONV4_AXILITES_ADDR_FEATURE_DST_7_DATA  0x318
#define XCONV4_AXILITES_BITS_FEATURE_DST_7_DATA  32
#define XCONV4_AXILITES_ADDR_FEATURE_DST_8_DATA  0x320
#define XCONV4_AXILITES_BITS_FEATURE_DST_8_DATA  32
#define XCONV4_AXILITES_ADDR_FEATURE_DST_9_DATA  0x328
#define XCONV4_AXILITES_BITS_FEATURE_DST_9_DATA  32

