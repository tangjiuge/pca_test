// ==============================================================
// File generated on Thu Sep 26 16:13:41 +0800 2019
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
// 0x18 : Data signal of src_0
//        bit 31~0 - src_0[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of src_1
//        bit 31~0 - src_1[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of src_2
//        bit 31~0 - src_2[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of src_3
//        bit 31~0 - src_3[31:0] (Read/Write)
// 0x34 : reserved
// 0x38 : Data signal of src_4
//        bit 31~0 - src_4[31:0] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of dst_0
//        bit 31~0 - dst_0[31:0] (Read/Write)
// 0x44 : reserved
// 0x48 : Data signal of dst_1
//        bit 31~0 - dst_1[31:0] (Read/Write)
// 0x4c : reserved
// 0x50 : Data signal of dst_2
//        bit 31~0 - dst_2[31:0] (Read/Write)
// 0x54 : reserved
// 0x58 : Data signal of dst_3
//        bit 31~0 - dst_3[31:0] (Read/Write)
// 0x5c : reserved
// 0x60 : Data signal of dst_4
//        bit 31~0 - dst_4[31:0] (Read/Write)
// 0x64 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XPCA_STEP2_AXILITES_ADDR_AP_CTRL    0x00
#define XPCA_STEP2_AXILITES_ADDR_GIE        0x04
#define XPCA_STEP2_AXILITES_ADDR_IER        0x08
#define XPCA_STEP2_AXILITES_ADDR_ISR        0x0c
#define XPCA_STEP2_AXILITES_ADDR_AP_RETURN  0x10
#define XPCA_STEP2_AXILITES_BITS_AP_RETURN  32
#define XPCA_STEP2_AXILITES_ADDR_SRC_0_DATA 0x18
#define XPCA_STEP2_AXILITES_BITS_SRC_0_DATA 32
#define XPCA_STEP2_AXILITES_ADDR_SRC_1_DATA 0x20
#define XPCA_STEP2_AXILITES_BITS_SRC_1_DATA 32
#define XPCA_STEP2_AXILITES_ADDR_SRC_2_DATA 0x28
#define XPCA_STEP2_AXILITES_BITS_SRC_2_DATA 32
#define XPCA_STEP2_AXILITES_ADDR_SRC_3_DATA 0x30
#define XPCA_STEP2_AXILITES_BITS_SRC_3_DATA 32
#define XPCA_STEP2_AXILITES_ADDR_SRC_4_DATA 0x38
#define XPCA_STEP2_AXILITES_BITS_SRC_4_DATA 32
#define XPCA_STEP2_AXILITES_ADDR_DST_0_DATA 0x40
#define XPCA_STEP2_AXILITES_BITS_DST_0_DATA 32
#define XPCA_STEP2_AXILITES_ADDR_DST_1_DATA 0x48
#define XPCA_STEP2_AXILITES_BITS_DST_1_DATA 32
#define XPCA_STEP2_AXILITES_ADDR_DST_2_DATA 0x50
#define XPCA_STEP2_AXILITES_BITS_DST_2_DATA 32
#define XPCA_STEP2_AXILITES_ADDR_DST_3_DATA 0x58
#define XPCA_STEP2_AXILITES_BITS_DST_3_DATA 32
#define XPCA_STEP2_AXILITES_ADDR_DST_4_DATA 0x60
#define XPCA_STEP2_AXILITES_BITS_DST_4_DATA 32

