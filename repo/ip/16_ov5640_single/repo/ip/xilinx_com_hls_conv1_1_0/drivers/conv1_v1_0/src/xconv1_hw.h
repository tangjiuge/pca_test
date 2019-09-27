// ==============================================================
// File generated on Wed Sep 04 09:50:05 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// AXILiteS
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of ap_return
//        bit 31~0 - ap_return[31:0] (Read)
// 0x18 : Data signal of feature_src_0
//        bit 31~0 - feature_src_0[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of weight_src_0_0
//        bit 31~0 - weight_src_0_0[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of weight_src_1_0
//        bit 31~0 - weight_src_1_0[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of weight_src_2_0
//        bit 31~0 - weight_src_2_0[31:0] (Read/Write)
// 0x34 : reserved
// 0x38 : Data signal of weight_src_3_0
//        bit 31~0 - weight_src_3_0[31:0] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of weight_src_4_0
//        bit 31~0 - weight_src_4_0[31:0] (Read/Write)
// 0x44 : reserved
// 0x48 : Data signal of weight_src_5_0
//        bit 31~0 - weight_src_5_0[31:0] (Read/Write)
// 0x4c : reserved
// 0x50 : Data signal of bias
//        bit 31~0 - bias[31:0] (Read/Write)
// 0x54 : reserved
// 0x58 : Data signal of feature_dst_0
//        bit 31~0 - feature_dst_0[31:0] (Read/Write)
// 0x5c : reserved
// 0x60 : Data signal of feature_dst_1
//        bit 31~0 - feature_dst_1[31:0] (Read/Write)
// 0x64 : reserved
// 0x68 : Data signal of feature_dst_2
//        bit 31~0 - feature_dst_2[31:0] (Read/Write)
// 0x6c : reserved
// 0x70 : Data signal of feature_dst_3
//        bit 31~0 - feature_dst_3[31:0] (Read/Write)
// 0x74 : reserved
// 0x78 : Data signal of feature_dst_4
//        bit 31~0 - feature_dst_4[31:0] (Read/Write)
// 0x7c : reserved
// 0x80 : Data signal of feature_dst_5
//        bit 31~0 - feature_dst_5[31:0] (Read/Write)
// 0x84 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XCONV1_AXILITES_ADDR_AP_CTRL             0x00
#define XCONV1_AXILITES_ADDR_GIE                 0x04
#define XCONV1_AXILITES_ADDR_IER                 0x08
#define XCONV1_AXILITES_ADDR_ISR                 0x0c
#define XCONV1_AXILITES_ADDR_AP_RETURN           0x10
#define XCONV1_AXILITES_BITS_AP_RETURN           32
#define XCONV1_AXILITES_ADDR_FEATURE_SRC_0_DATA  0x18
#define XCONV1_AXILITES_BITS_FEATURE_SRC_0_DATA  32
#define XCONV1_AXILITES_ADDR_WEIGHT_SRC_0_0_DATA 0x20
#define XCONV1_AXILITES_BITS_WEIGHT_SRC_0_0_DATA 32
#define XCONV1_AXILITES_ADDR_WEIGHT_SRC_1_0_DATA 0x28
#define XCONV1_AXILITES_BITS_WEIGHT_SRC_1_0_DATA 32
#define XCONV1_AXILITES_ADDR_WEIGHT_SRC_2_0_DATA 0x30
#define XCONV1_AXILITES_BITS_WEIGHT_SRC_2_0_DATA 32
#define XCONV1_AXILITES_ADDR_WEIGHT_SRC_3_0_DATA 0x38
#define XCONV1_AXILITES_BITS_WEIGHT_SRC_3_0_DATA 32
#define XCONV1_AXILITES_ADDR_WEIGHT_SRC_4_0_DATA 0x40
#define XCONV1_AXILITES_BITS_WEIGHT_SRC_4_0_DATA 32
#define XCONV1_AXILITES_ADDR_WEIGHT_SRC_5_0_DATA 0x48
#define XCONV1_AXILITES_BITS_WEIGHT_SRC_5_0_DATA 32
#define XCONV1_AXILITES_ADDR_BIAS_DATA           0x50
#define XCONV1_AXILITES_BITS_BIAS_DATA           32
#define XCONV1_AXILITES_ADDR_FEATURE_DST_0_DATA  0x58
#define XCONV1_AXILITES_BITS_FEATURE_DST_0_DATA  32
#define XCONV1_AXILITES_ADDR_FEATURE_DST_1_DATA  0x60
#define XCONV1_AXILITES_BITS_FEATURE_DST_1_DATA  32
#define XCONV1_AXILITES_ADDR_FEATURE_DST_2_DATA  0x68
#define XCONV1_AXILITES_BITS_FEATURE_DST_2_DATA  32
#define XCONV1_AXILITES_ADDR_FEATURE_DST_3_DATA  0x70
#define XCONV1_AXILITES_BITS_FEATURE_DST_3_DATA  32
#define XCONV1_AXILITES_ADDR_FEATURE_DST_4_DATA  0x78
#define XCONV1_AXILITES_BITS_FEATURE_DST_4_DATA  32
#define XCONV1_AXILITES_ADDR_FEATURE_DST_5_DATA  0x80
#define XCONV1_AXILITES_BITS_FEATURE_DST_5_DATA  32

