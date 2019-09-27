// ==============================================================
// File generated on Wed Sep 04 09:50:18 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1ns/1ps
module conv4_AXILiteS_s_axi
#(parameter
    C_S_AXI_ADDR_WIDTH = 10,
    C_S_AXI_DATA_WIDTH = 32
)(
    // axi4 lite slave signals
    input  wire                          ACLK,
    input  wire                          ARESET,
    input  wire                          ACLK_EN,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] AWADDR,
    input  wire                          AWVALID,
    output wire                          AWREADY,
    input  wire [C_S_AXI_DATA_WIDTH-1:0] WDATA,
    input  wire [C_S_AXI_DATA_WIDTH/8-1:0] WSTRB,
    input  wire                          WVALID,
    output wire                          WREADY,
    output wire [1:0]                    BRESP,
    output wire                          BVALID,
    input  wire                          BREADY,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] ARADDR,
    input  wire                          ARVALID,
    output wire                          ARREADY,
    output wire [C_S_AXI_DATA_WIDTH-1:0] RDATA,
    output wire [1:0]                    RRESP,
    output wire                          RVALID,
    input  wire                          RREADY,
    output wire                          interrupt,
    // user signals
    output wire                          ap_start,
    input  wire                          ap_done,
    input  wire                          ap_ready,
    input  wire                          ap_idle,
    input  wire [31:0]                   ap_return,
    output wire [31:0]                   feature_src_0,
    output wire [31:0]                   feature_src_1,
    output wire [31:0]                   feature_src_2,
    output wire [31:0]                   feature_src_3,
    output wire [31:0]                   feature_src_4,
    output wire [31:0]                   feature_src_5,
    output wire [31:0]                   feature_src_6,
    output wire [31:0]                   feature_src_7,
    output wire [31:0]                   weight_src_0_0,
    output wire [31:0]                   weight_src_0_1,
    output wire [31:0]                   weight_src_0_2,
    output wire [31:0]                   weight_src_0_3,
    output wire [31:0]                   weight_src_0_4,
    output wire [31:0]                   weight_src_0_5,
    output wire [31:0]                   weight_src_0_6,
    output wire [31:0]                   weight_src_0_7,
    output wire [31:0]                   weight_src_1_0,
    output wire [31:0]                   weight_src_1_1,
    output wire [31:0]                   weight_src_1_2,
    output wire [31:0]                   weight_src_1_3,
    output wire [31:0]                   weight_src_1_4,
    output wire [31:0]                   weight_src_1_5,
    output wire [31:0]                   weight_src_1_6,
    output wire [31:0]                   weight_src_1_7,
    output wire [31:0]                   weight_src_2_0,
    output wire [31:0]                   weight_src_2_1,
    output wire [31:0]                   weight_src_2_2,
    output wire [31:0]                   weight_src_2_3,
    output wire [31:0]                   weight_src_2_4,
    output wire [31:0]                   weight_src_2_5,
    output wire [31:0]                   weight_src_2_6,
    output wire [31:0]                   weight_src_2_7,
    output wire [31:0]                   weight_src_3_0,
    output wire [31:0]                   weight_src_3_1,
    output wire [31:0]                   weight_src_3_2,
    output wire [31:0]                   weight_src_3_3,
    output wire [31:0]                   weight_src_3_4,
    output wire [31:0]                   weight_src_3_5,
    output wire [31:0]                   weight_src_3_6,
    output wire [31:0]                   weight_src_3_7,
    output wire [31:0]                   weight_src_4_0,
    output wire [31:0]                   weight_src_4_1,
    output wire [31:0]                   weight_src_4_2,
    output wire [31:0]                   weight_src_4_3,
    output wire [31:0]                   weight_src_4_4,
    output wire [31:0]                   weight_src_4_5,
    output wire [31:0]                   weight_src_4_6,
    output wire [31:0]                   weight_src_4_7,
    output wire [31:0]                   weight_src_5_0,
    output wire [31:0]                   weight_src_5_1,
    output wire [31:0]                   weight_src_5_2,
    output wire [31:0]                   weight_src_5_3,
    output wire [31:0]                   weight_src_5_4,
    output wire [31:0]                   weight_src_5_5,
    output wire [31:0]                   weight_src_5_6,
    output wire [31:0]                   weight_src_5_7,
    output wire [31:0]                   weight_src_6_0,
    output wire [31:0]                   weight_src_6_1,
    output wire [31:0]                   weight_src_6_2,
    output wire [31:0]                   weight_src_6_3,
    output wire [31:0]                   weight_src_6_4,
    output wire [31:0]                   weight_src_6_5,
    output wire [31:0]                   weight_src_6_6,
    output wire [31:0]                   weight_src_6_7,
    output wire [31:0]                   weight_src_7_0,
    output wire [31:0]                   weight_src_7_1,
    output wire [31:0]                   weight_src_7_2,
    output wire [31:0]                   weight_src_7_3,
    output wire [31:0]                   weight_src_7_4,
    output wire [31:0]                   weight_src_7_5,
    output wire [31:0]                   weight_src_7_6,
    output wire [31:0]                   weight_src_7_7,
    output wire [31:0]                   weight_src_8_0,
    output wire [31:0]                   weight_src_8_1,
    output wire [31:0]                   weight_src_8_2,
    output wire [31:0]                   weight_src_8_3,
    output wire [31:0]                   weight_src_8_4,
    output wire [31:0]                   weight_src_8_5,
    output wire [31:0]                   weight_src_8_6,
    output wire [31:0]                   weight_src_8_7,
    output wire [31:0]                   weight_src_9_0,
    output wire [31:0]                   weight_src_9_1,
    output wire [31:0]                   weight_src_9_2,
    output wire [31:0]                   weight_src_9_3,
    output wire [31:0]                   weight_src_9_4,
    output wire [31:0]                   weight_src_9_5,
    output wire [31:0]                   weight_src_9_6,
    output wire [31:0]                   weight_src_9_7,
    output wire [31:0]                   bias,
    output wire [31:0]                   feature_dst_0,
    output wire [31:0]                   feature_dst_1,
    output wire [31:0]                   feature_dst_2,
    output wire [31:0]                   feature_dst_3,
    output wire [31:0]                   feature_dst_4,
    output wire [31:0]                   feature_dst_5,
    output wire [31:0]                   feature_dst_6,
    output wire [31:0]                   feature_dst_7,
    output wire [31:0]                   feature_dst_8,
    output wire [31:0]                   feature_dst_9
);
//------------------------Address Info-------------------
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

//------------------------Parameter----------------------
localparam
    ADDR_AP_CTRL               = 10'h000,
    ADDR_GIE                   = 10'h004,
    ADDR_IER                   = 10'h008,
    ADDR_ISR                   = 10'h00c,
    ADDR_AP_RETURN_0           = 10'h010,
    ADDR_FEATURE_SRC_0_DATA_0  = 10'h018,
    ADDR_FEATURE_SRC_0_CTRL    = 10'h01c,
    ADDR_FEATURE_SRC_1_DATA_0  = 10'h020,
    ADDR_FEATURE_SRC_1_CTRL    = 10'h024,
    ADDR_FEATURE_SRC_2_DATA_0  = 10'h028,
    ADDR_FEATURE_SRC_2_CTRL    = 10'h02c,
    ADDR_FEATURE_SRC_3_DATA_0  = 10'h030,
    ADDR_FEATURE_SRC_3_CTRL    = 10'h034,
    ADDR_FEATURE_SRC_4_DATA_0  = 10'h038,
    ADDR_FEATURE_SRC_4_CTRL    = 10'h03c,
    ADDR_FEATURE_SRC_5_DATA_0  = 10'h040,
    ADDR_FEATURE_SRC_5_CTRL    = 10'h044,
    ADDR_FEATURE_SRC_6_DATA_0  = 10'h048,
    ADDR_FEATURE_SRC_6_CTRL    = 10'h04c,
    ADDR_FEATURE_SRC_7_DATA_0  = 10'h050,
    ADDR_FEATURE_SRC_7_CTRL    = 10'h054,
    ADDR_WEIGHT_SRC_0_0_DATA_0 = 10'h058,
    ADDR_WEIGHT_SRC_0_0_CTRL   = 10'h05c,
    ADDR_WEIGHT_SRC_0_1_DATA_0 = 10'h060,
    ADDR_WEIGHT_SRC_0_1_CTRL   = 10'h064,
    ADDR_WEIGHT_SRC_0_2_DATA_0 = 10'h068,
    ADDR_WEIGHT_SRC_0_2_CTRL   = 10'h06c,
    ADDR_WEIGHT_SRC_0_3_DATA_0 = 10'h070,
    ADDR_WEIGHT_SRC_0_3_CTRL   = 10'h074,
    ADDR_WEIGHT_SRC_0_4_DATA_0 = 10'h078,
    ADDR_WEIGHT_SRC_0_4_CTRL   = 10'h07c,
    ADDR_WEIGHT_SRC_0_5_DATA_0 = 10'h080,
    ADDR_WEIGHT_SRC_0_5_CTRL   = 10'h084,
    ADDR_WEIGHT_SRC_0_6_DATA_0 = 10'h088,
    ADDR_WEIGHT_SRC_0_6_CTRL   = 10'h08c,
    ADDR_WEIGHT_SRC_0_7_DATA_0 = 10'h090,
    ADDR_WEIGHT_SRC_0_7_CTRL   = 10'h094,
    ADDR_WEIGHT_SRC_1_0_DATA_0 = 10'h098,
    ADDR_WEIGHT_SRC_1_0_CTRL   = 10'h09c,
    ADDR_WEIGHT_SRC_1_1_DATA_0 = 10'h0a0,
    ADDR_WEIGHT_SRC_1_1_CTRL   = 10'h0a4,
    ADDR_WEIGHT_SRC_1_2_DATA_0 = 10'h0a8,
    ADDR_WEIGHT_SRC_1_2_CTRL   = 10'h0ac,
    ADDR_WEIGHT_SRC_1_3_DATA_0 = 10'h0b0,
    ADDR_WEIGHT_SRC_1_3_CTRL   = 10'h0b4,
    ADDR_WEIGHT_SRC_1_4_DATA_0 = 10'h0b8,
    ADDR_WEIGHT_SRC_1_4_CTRL   = 10'h0bc,
    ADDR_WEIGHT_SRC_1_5_DATA_0 = 10'h0c0,
    ADDR_WEIGHT_SRC_1_5_CTRL   = 10'h0c4,
    ADDR_WEIGHT_SRC_1_6_DATA_0 = 10'h0c8,
    ADDR_WEIGHT_SRC_1_6_CTRL   = 10'h0cc,
    ADDR_WEIGHT_SRC_1_7_DATA_0 = 10'h0d0,
    ADDR_WEIGHT_SRC_1_7_CTRL   = 10'h0d4,
    ADDR_WEIGHT_SRC_2_0_DATA_0 = 10'h0d8,
    ADDR_WEIGHT_SRC_2_0_CTRL   = 10'h0dc,
    ADDR_WEIGHT_SRC_2_1_DATA_0 = 10'h0e0,
    ADDR_WEIGHT_SRC_2_1_CTRL   = 10'h0e4,
    ADDR_WEIGHT_SRC_2_2_DATA_0 = 10'h0e8,
    ADDR_WEIGHT_SRC_2_2_CTRL   = 10'h0ec,
    ADDR_WEIGHT_SRC_2_3_DATA_0 = 10'h0f0,
    ADDR_WEIGHT_SRC_2_3_CTRL   = 10'h0f4,
    ADDR_WEIGHT_SRC_2_4_DATA_0 = 10'h0f8,
    ADDR_WEIGHT_SRC_2_4_CTRL   = 10'h0fc,
    ADDR_WEIGHT_SRC_2_5_DATA_0 = 10'h100,
    ADDR_WEIGHT_SRC_2_5_CTRL   = 10'h104,
    ADDR_WEIGHT_SRC_2_6_DATA_0 = 10'h108,
    ADDR_WEIGHT_SRC_2_6_CTRL   = 10'h10c,
    ADDR_WEIGHT_SRC_2_7_DATA_0 = 10'h110,
    ADDR_WEIGHT_SRC_2_7_CTRL   = 10'h114,
    ADDR_WEIGHT_SRC_3_0_DATA_0 = 10'h118,
    ADDR_WEIGHT_SRC_3_0_CTRL   = 10'h11c,
    ADDR_WEIGHT_SRC_3_1_DATA_0 = 10'h120,
    ADDR_WEIGHT_SRC_3_1_CTRL   = 10'h124,
    ADDR_WEIGHT_SRC_3_2_DATA_0 = 10'h128,
    ADDR_WEIGHT_SRC_3_2_CTRL   = 10'h12c,
    ADDR_WEIGHT_SRC_3_3_DATA_0 = 10'h130,
    ADDR_WEIGHT_SRC_3_3_CTRL   = 10'h134,
    ADDR_WEIGHT_SRC_3_4_DATA_0 = 10'h138,
    ADDR_WEIGHT_SRC_3_4_CTRL   = 10'h13c,
    ADDR_WEIGHT_SRC_3_5_DATA_0 = 10'h140,
    ADDR_WEIGHT_SRC_3_5_CTRL   = 10'h144,
    ADDR_WEIGHT_SRC_3_6_DATA_0 = 10'h148,
    ADDR_WEIGHT_SRC_3_6_CTRL   = 10'h14c,
    ADDR_WEIGHT_SRC_3_7_DATA_0 = 10'h150,
    ADDR_WEIGHT_SRC_3_7_CTRL   = 10'h154,
    ADDR_WEIGHT_SRC_4_0_DATA_0 = 10'h158,
    ADDR_WEIGHT_SRC_4_0_CTRL   = 10'h15c,
    ADDR_WEIGHT_SRC_4_1_DATA_0 = 10'h160,
    ADDR_WEIGHT_SRC_4_1_CTRL   = 10'h164,
    ADDR_WEIGHT_SRC_4_2_DATA_0 = 10'h168,
    ADDR_WEIGHT_SRC_4_2_CTRL   = 10'h16c,
    ADDR_WEIGHT_SRC_4_3_DATA_0 = 10'h170,
    ADDR_WEIGHT_SRC_4_3_CTRL   = 10'h174,
    ADDR_WEIGHT_SRC_4_4_DATA_0 = 10'h178,
    ADDR_WEIGHT_SRC_4_4_CTRL   = 10'h17c,
    ADDR_WEIGHT_SRC_4_5_DATA_0 = 10'h180,
    ADDR_WEIGHT_SRC_4_5_CTRL   = 10'h184,
    ADDR_WEIGHT_SRC_4_6_DATA_0 = 10'h188,
    ADDR_WEIGHT_SRC_4_6_CTRL   = 10'h18c,
    ADDR_WEIGHT_SRC_4_7_DATA_0 = 10'h190,
    ADDR_WEIGHT_SRC_4_7_CTRL   = 10'h194,
    ADDR_WEIGHT_SRC_5_0_DATA_0 = 10'h198,
    ADDR_WEIGHT_SRC_5_0_CTRL   = 10'h19c,
    ADDR_WEIGHT_SRC_5_1_DATA_0 = 10'h1a0,
    ADDR_WEIGHT_SRC_5_1_CTRL   = 10'h1a4,
    ADDR_WEIGHT_SRC_5_2_DATA_0 = 10'h1a8,
    ADDR_WEIGHT_SRC_5_2_CTRL   = 10'h1ac,
    ADDR_WEIGHT_SRC_5_3_DATA_0 = 10'h1b0,
    ADDR_WEIGHT_SRC_5_3_CTRL   = 10'h1b4,
    ADDR_WEIGHT_SRC_5_4_DATA_0 = 10'h1b8,
    ADDR_WEIGHT_SRC_5_4_CTRL   = 10'h1bc,
    ADDR_WEIGHT_SRC_5_5_DATA_0 = 10'h1c0,
    ADDR_WEIGHT_SRC_5_5_CTRL   = 10'h1c4,
    ADDR_WEIGHT_SRC_5_6_DATA_0 = 10'h1c8,
    ADDR_WEIGHT_SRC_5_6_CTRL   = 10'h1cc,
    ADDR_WEIGHT_SRC_5_7_DATA_0 = 10'h1d0,
    ADDR_WEIGHT_SRC_5_7_CTRL   = 10'h1d4,
    ADDR_WEIGHT_SRC_6_0_DATA_0 = 10'h1d8,
    ADDR_WEIGHT_SRC_6_0_CTRL   = 10'h1dc,
    ADDR_WEIGHT_SRC_6_1_DATA_0 = 10'h1e0,
    ADDR_WEIGHT_SRC_6_1_CTRL   = 10'h1e4,
    ADDR_WEIGHT_SRC_6_2_DATA_0 = 10'h1e8,
    ADDR_WEIGHT_SRC_6_2_CTRL   = 10'h1ec,
    ADDR_WEIGHT_SRC_6_3_DATA_0 = 10'h1f0,
    ADDR_WEIGHT_SRC_6_3_CTRL   = 10'h1f4,
    ADDR_WEIGHT_SRC_6_4_DATA_0 = 10'h1f8,
    ADDR_WEIGHT_SRC_6_4_CTRL   = 10'h1fc,
    ADDR_WEIGHT_SRC_6_5_DATA_0 = 10'h200,
    ADDR_WEIGHT_SRC_6_5_CTRL   = 10'h204,
    ADDR_WEIGHT_SRC_6_6_DATA_0 = 10'h208,
    ADDR_WEIGHT_SRC_6_6_CTRL   = 10'h20c,
    ADDR_WEIGHT_SRC_6_7_DATA_0 = 10'h210,
    ADDR_WEIGHT_SRC_6_7_CTRL   = 10'h214,
    ADDR_WEIGHT_SRC_7_0_DATA_0 = 10'h218,
    ADDR_WEIGHT_SRC_7_0_CTRL   = 10'h21c,
    ADDR_WEIGHT_SRC_7_1_DATA_0 = 10'h220,
    ADDR_WEIGHT_SRC_7_1_CTRL   = 10'h224,
    ADDR_WEIGHT_SRC_7_2_DATA_0 = 10'h228,
    ADDR_WEIGHT_SRC_7_2_CTRL   = 10'h22c,
    ADDR_WEIGHT_SRC_7_3_DATA_0 = 10'h230,
    ADDR_WEIGHT_SRC_7_3_CTRL   = 10'h234,
    ADDR_WEIGHT_SRC_7_4_DATA_0 = 10'h238,
    ADDR_WEIGHT_SRC_7_4_CTRL   = 10'h23c,
    ADDR_WEIGHT_SRC_7_5_DATA_0 = 10'h240,
    ADDR_WEIGHT_SRC_7_5_CTRL   = 10'h244,
    ADDR_WEIGHT_SRC_7_6_DATA_0 = 10'h248,
    ADDR_WEIGHT_SRC_7_6_CTRL   = 10'h24c,
    ADDR_WEIGHT_SRC_7_7_DATA_0 = 10'h250,
    ADDR_WEIGHT_SRC_7_7_CTRL   = 10'h254,
    ADDR_WEIGHT_SRC_8_0_DATA_0 = 10'h258,
    ADDR_WEIGHT_SRC_8_0_CTRL   = 10'h25c,
    ADDR_WEIGHT_SRC_8_1_DATA_0 = 10'h260,
    ADDR_WEIGHT_SRC_8_1_CTRL   = 10'h264,
    ADDR_WEIGHT_SRC_8_2_DATA_0 = 10'h268,
    ADDR_WEIGHT_SRC_8_2_CTRL   = 10'h26c,
    ADDR_WEIGHT_SRC_8_3_DATA_0 = 10'h270,
    ADDR_WEIGHT_SRC_8_3_CTRL   = 10'h274,
    ADDR_WEIGHT_SRC_8_4_DATA_0 = 10'h278,
    ADDR_WEIGHT_SRC_8_4_CTRL   = 10'h27c,
    ADDR_WEIGHT_SRC_8_5_DATA_0 = 10'h280,
    ADDR_WEIGHT_SRC_8_5_CTRL   = 10'h284,
    ADDR_WEIGHT_SRC_8_6_DATA_0 = 10'h288,
    ADDR_WEIGHT_SRC_8_6_CTRL   = 10'h28c,
    ADDR_WEIGHT_SRC_8_7_DATA_0 = 10'h290,
    ADDR_WEIGHT_SRC_8_7_CTRL   = 10'h294,
    ADDR_WEIGHT_SRC_9_0_DATA_0 = 10'h298,
    ADDR_WEIGHT_SRC_9_0_CTRL   = 10'h29c,
    ADDR_WEIGHT_SRC_9_1_DATA_0 = 10'h2a0,
    ADDR_WEIGHT_SRC_9_1_CTRL   = 10'h2a4,
    ADDR_WEIGHT_SRC_9_2_DATA_0 = 10'h2a8,
    ADDR_WEIGHT_SRC_9_2_CTRL   = 10'h2ac,
    ADDR_WEIGHT_SRC_9_3_DATA_0 = 10'h2b0,
    ADDR_WEIGHT_SRC_9_3_CTRL   = 10'h2b4,
    ADDR_WEIGHT_SRC_9_4_DATA_0 = 10'h2b8,
    ADDR_WEIGHT_SRC_9_4_CTRL   = 10'h2bc,
    ADDR_WEIGHT_SRC_9_5_DATA_0 = 10'h2c0,
    ADDR_WEIGHT_SRC_9_5_CTRL   = 10'h2c4,
    ADDR_WEIGHT_SRC_9_6_DATA_0 = 10'h2c8,
    ADDR_WEIGHT_SRC_9_6_CTRL   = 10'h2cc,
    ADDR_WEIGHT_SRC_9_7_DATA_0 = 10'h2d0,
    ADDR_WEIGHT_SRC_9_7_CTRL   = 10'h2d4,
    ADDR_BIAS_DATA_0           = 10'h2d8,
    ADDR_BIAS_CTRL             = 10'h2dc,
    ADDR_FEATURE_DST_0_DATA_0  = 10'h2e0,
    ADDR_FEATURE_DST_0_CTRL    = 10'h2e4,
    ADDR_FEATURE_DST_1_DATA_0  = 10'h2e8,
    ADDR_FEATURE_DST_1_CTRL    = 10'h2ec,
    ADDR_FEATURE_DST_2_DATA_0  = 10'h2f0,
    ADDR_FEATURE_DST_2_CTRL    = 10'h2f4,
    ADDR_FEATURE_DST_3_DATA_0  = 10'h2f8,
    ADDR_FEATURE_DST_3_CTRL    = 10'h2fc,
    ADDR_FEATURE_DST_4_DATA_0  = 10'h300,
    ADDR_FEATURE_DST_4_CTRL    = 10'h304,
    ADDR_FEATURE_DST_5_DATA_0  = 10'h308,
    ADDR_FEATURE_DST_5_CTRL    = 10'h30c,
    ADDR_FEATURE_DST_6_DATA_0  = 10'h310,
    ADDR_FEATURE_DST_6_CTRL    = 10'h314,
    ADDR_FEATURE_DST_7_DATA_0  = 10'h318,
    ADDR_FEATURE_DST_7_CTRL    = 10'h31c,
    ADDR_FEATURE_DST_8_DATA_0  = 10'h320,
    ADDR_FEATURE_DST_8_CTRL    = 10'h324,
    ADDR_FEATURE_DST_9_DATA_0  = 10'h328,
    ADDR_FEATURE_DST_9_CTRL    = 10'h32c,
    WRIDLE                     = 2'd0,
    WRDATA                     = 2'd1,
    WRRESP                     = 2'd2,
    WRRESET                    = 2'd3,
    RDIDLE                     = 2'd0,
    RDDATA                     = 2'd1,
    RDRESET                    = 2'd2,
    ADDR_BITS         = 10;

//------------------------Local signal-------------------
    reg  [1:0]                    wstate = WRRESET;
    reg  [1:0]                    wnext;
    reg  [ADDR_BITS-1:0]          waddr;
    wire [31:0]                   wmask;
    wire                          aw_hs;
    wire                          w_hs;
    reg  [1:0]                    rstate = RDRESET;
    reg  [1:0]                    rnext;
    reg  [31:0]                   rdata;
    wire                          ar_hs;
    wire [ADDR_BITS-1:0]          raddr;
    // internal registers
    reg                           int_ap_idle;
    reg                           int_ap_ready;
    reg                           int_ap_done = 1'b0;
    reg                           int_ap_start = 1'b0;
    reg                           int_auto_restart = 1'b0;
    reg                           int_gie = 1'b0;
    reg  [1:0]                    int_ier = 2'b0;
    reg  [1:0]                    int_isr = 2'b0;
    reg  [31:0]                   int_ap_return;
    reg  [31:0]                   int_feature_src_0 = 'b0;
    reg  [31:0]                   int_feature_src_1 = 'b0;
    reg  [31:0]                   int_feature_src_2 = 'b0;
    reg  [31:0]                   int_feature_src_3 = 'b0;
    reg  [31:0]                   int_feature_src_4 = 'b0;
    reg  [31:0]                   int_feature_src_5 = 'b0;
    reg  [31:0]                   int_feature_src_6 = 'b0;
    reg  [31:0]                   int_feature_src_7 = 'b0;
    reg  [31:0]                   int_weight_src_0_0 = 'b0;
    reg  [31:0]                   int_weight_src_0_1 = 'b0;
    reg  [31:0]                   int_weight_src_0_2 = 'b0;
    reg  [31:0]                   int_weight_src_0_3 = 'b0;
    reg  [31:0]                   int_weight_src_0_4 = 'b0;
    reg  [31:0]                   int_weight_src_0_5 = 'b0;
    reg  [31:0]                   int_weight_src_0_6 = 'b0;
    reg  [31:0]                   int_weight_src_0_7 = 'b0;
    reg  [31:0]                   int_weight_src_1_0 = 'b0;
    reg  [31:0]                   int_weight_src_1_1 = 'b0;
    reg  [31:0]                   int_weight_src_1_2 = 'b0;
    reg  [31:0]                   int_weight_src_1_3 = 'b0;
    reg  [31:0]                   int_weight_src_1_4 = 'b0;
    reg  [31:0]                   int_weight_src_1_5 = 'b0;
    reg  [31:0]                   int_weight_src_1_6 = 'b0;
    reg  [31:0]                   int_weight_src_1_7 = 'b0;
    reg  [31:0]                   int_weight_src_2_0 = 'b0;
    reg  [31:0]                   int_weight_src_2_1 = 'b0;
    reg  [31:0]                   int_weight_src_2_2 = 'b0;
    reg  [31:0]                   int_weight_src_2_3 = 'b0;
    reg  [31:0]                   int_weight_src_2_4 = 'b0;
    reg  [31:0]                   int_weight_src_2_5 = 'b0;
    reg  [31:0]                   int_weight_src_2_6 = 'b0;
    reg  [31:0]                   int_weight_src_2_7 = 'b0;
    reg  [31:0]                   int_weight_src_3_0 = 'b0;
    reg  [31:0]                   int_weight_src_3_1 = 'b0;
    reg  [31:0]                   int_weight_src_3_2 = 'b0;
    reg  [31:0]                   int_weight_src_3_3 = 'b0;
    reg  [31:0]                   int_weight_src_3_4 = 'b0;
    reg  [31:0]                   int_weight_src_3_5 = 'b0;
    reg  [31:0]                   int_weight_src_3_6 = 'b0;
    reg  [31:0]                   int_weight_src_3_7 = 'b0;
    reg  [31:0]                   int_weight_src_4_0 = 'b0;
    reg  [31:0]                   int_weight_src_4_1 = 'b0;
    reg  [31:0]                   int_weight_src_4_2 = 'b0;
    reg  [31:0]                   int_weight_src_4_3 = 'b0;
    reg  [31:0]                   int_weight_src_4_4 = 'b0;
    reg  [31:0]                   int_weight_src_4_5 = 'b0;
    reg  [31:0]                   int_weight_src_4_6 = 'b0;
    reg  [31:0]                   int_weight_src_4_7 = 'b0;
    reg  [31:0]                   int_weight_src_5_0 = 'b0;
    reg  [31:0]                   int_weight_src_5_1 = 'b0;
    reg  [31:0]                   int_weight_src_5_2 = 'b0;
    reg  [31:0]                   int_weight_src_5_3 = 'b0;
    reg  [31:0]                   int_weight_src_5_4 = 'b0;
    reg  [31:0]                   int_weight_src_5_5 = 'b0;
    reg  [31:0]                   int_weight_src_5_6 = 'b0;
    reg  [31:0]                   int_weight_src_5_7 = 'b0;
    reg  [31:0]                   int_weight_src_6_0 = 'b0;
    reg  [31:0]                   int_weight_src_6_1 = 'b0;
    reg  [31:0]                   int_weight_src_6_2 = 'b0;
    reg  [31:0]                   int_weight_src_6_3 = 'b0;
    reg  [31:0]                   int_weight_src_6_4 = 'b0;
    reg  [31:0]                   int_weight_src_6_5 = 'b0;
    reg  [31:0]                   int_weight_src_6_6 = 'b0;
    reg  [31:0]                   int_weight_src_6_7 = 'b0;
    reg  [31:0]                   int_weight_src_7_0 = 'b0;
    reg  [31:0]                   int_weight_src_7_1 = 'b0;
    reg  [31:0]                   int_weight_src_7_2 = 'b0;
    reg  [31:0]                   int_weight_src_7_3 = 'b0;
    reg  [31:0]                   int_weight_src_7_4 = 'b0;
    reg  [31:0]                   int_weight_src_7_5 = 'b0;
    reg  [31:0]                   int_weight_src_7_6 = 'b0;
    reg  [31:0]                   int_weight_src_7_7 = 'b0;
    reg  [31:0]                   int_weight_src_8_0 = 'b0;
    reg  [31:0]                   int_weight_src_8_1 = 'b0;
    reg  [31:0]                   int_weight_src_8_2 = 'b0;
    reg  [31:0]                   int_weight_src_8_3 = 'b0;
    reg  [31:0]                   int_weight_src_8_4 = 'b0;
    reg  [31:0]                   int_weight_src_8_5 = 'b0;
    reg  [31:0]                   int_weight_src_8_6 = 'b0;
    reg  [31:0]                   int_weight_src_8_7 = 'b0;
    reg  [31:0]                   int_weight_src_9_0 = 'b0;
    reg  [31:0]                   int_weight_src_9_1 = 'b0;
    reg  [31:0]                   int_weight_src_9_2 = 'b0;
    reg  [31:0]                   int_weight_src_9_3 = 'b0;
    reg  [31:0]                   int_weight_src_9_4 = 'b0;
    reg  [31:0]                   int_weight_src_9_5 = 'b0;
    reg  [31:0]                   int_weight_src_9_6 = 'b0;
    reg  [31:0]                   int_weight_src_9_7 = 'b0;
    reg  [31:0]                   int_bias = 'b0;
    reg  [31:0]                   int_feature_dst_0 = 'b0;
    reg  [31:0]                   int_feature_dst_1 = 'b0;
    reg  [31:0]                   int_feature_dst_2 = 'b0;
    reg  [31:0]                   int_feature_dst_3 = 'b0;
    reg  [31:0]                   int_feature_dst_4 = 'b0;
    reg  [31:0]                   int_feature_dst_5 = 'b0;
    reg  [31:0]                   int_feature_dst_6 = 'b0;
    reg  [31:0]                   int_feature_dst_7 = 'b0;
    reg  [31:0]                   int_feature_dst_8 = 'b0;
    reg  [31:0]                   int_feature_dst_9 = 'b0;

//------------------------Instantiation------------------

//------------------------AXI write fsm------------------
assign AWREADY = (wstate == WRIDLE);
assign WREADY  = (wstate == WRDATA);
assign BRESP   = 2'b00;  // OKAY
assign BVALID  = (wstate == WRRESP);
assign wmask   = { {8{WSTRB[3]}}, {8{WSTRB[2]}}, {8{WSTRB[1]}}, {8{WSTRB[0]}} };
assign aw_hs   = AWVALID & AWREADY;
assign w_hs    = WVALID & WREADY;

// wstate
always @(posedge ACLK) begin
    if (ARESET)
        wstate <= WRRESET;
    else if (ACLK_EN)
        wstate <= wnext;
end

// wnext
always @(*) begin
    case (wstate)
        WRIDLE:
            if (AWVALID)
                wnext = WRDATA;
            else
                wnext = WRIDLE;
        WRDATA:
            if (WVALID)
                wnext = WRRESP;
            else
                wnext = WRDATA;
        WRRESP:
            if (BREADY)
                wnext = WRIDLE;
            else
                wnext = WRRESP;
        default:
            wnext = WRIDLE;
    endcase
end

// waddr
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (aw_hs)
            waddr <= AWADDR[ADDR_BITS-1:0];
    end
end

//------------------------AXI read fsm-------------------
assign ARREADY = (rstate == RDIDLE);
assign RDATA   = rdata;
assign RRESP   = 2'b00;  // OKAY
assign RVALID  = (rstate == RDDATA);
assign ar_hs   = ARVALID & ARREADY;
assign raddr   = ARADDR[ADDR_BITS-1:0];

// rstate
always @(posedge ACLK) begin
    if (ARESET)
        rstate <= RDRESET;
    else if (ACLK_EN)
        rstate <= rnext;
end

// rnext
always @(*) begin
    case (rstate)
        RDIDLE:
            if (ARVALID)
                rnext = RDDATA;
            else
                rnext = RDIDLE;
        RDDATA:
            if (RREADY & RVALID)
                rnext = RDIDLE;
            else
                rnext = RDDATA;
        default:
            rnext = RDIDLE;
    endcase
end

// rdata
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (ar_hs) begin
            rdata <= 1'b0;
            case (raddr)
                ADDR_AP_CTRL: begin
                    rdata[0] <= int_ap_start;
                    rdata[1] <= int_ap_done;
                    rdata[2] <= int_ap_idle;
                    rdata[3] <= int_ap_ready;
                    rdata[7] <= int_auto_restart;
                end
                ADDR_GIE: begin
                    rdata <= int_gie;
                end
                ADDR_IER: begin
                    rdata <= int_ier;
                end
                ADDR_ISR: begin
                    rdata <= int_isr;
                end
                ADDR_AP_RETURN_0: begin
                    rdata <= int_ap_return[31:0];
                end
                ADDR_FEATURE_SRC_0_DATA_0: begin
                    rdata <= int_feature_src_0[31:0];
                end
                ADDR_FEATURE_SRC_1_DATA_0: begin
                    rdata <= int_feature_src_1[31:0];
                end
                ADDR_FEATURE_SRC_2_DATA_0: begin
                    rdata <= int_feature_src_2[31:0];
                end
                ADDR_FEATURE_SRC_3_DATA_0: begin
                    rdata <= int_feature_src_3[31:0];
                end
                ADDR_FEATURE_SRC_4_DATA_0: begin
                    rdata <= int_feature_src_4[31:0];
                end
                ADDR_FEATURE_SRC_5_DATA_0: begin
                    rdata <= int_feature_src_5[31:0];
                end
                ADDR_FEATURE_SRC_6_DATA_0: begin
                    rdata <= int_feature_src_6[31:0];
                end
                ADDR_FEATURE_SRC_7_DATA_0: begin
                    rdata <= int_feature_src_7[31:0];
                end
                ADDR_WEIGHT_SRC_0_0_DATA_0: begin
                    rdata <= int_weight_src_0_0[31:0];
                end
                ADDR_WEIGHT_SRC_0_1_DATA_0: begin
                    rdata <= int_weight_src_0_1[31:0];
                end
                ADDR_WEIGHT_SRC_0_2_DATA_0: begin
                    rdata <= int_weight_src_0_2[31:0];
                end
                ADDR_WEIGHT_SRC_0_3_DATA_0: begin
                    rdata <= int_weight_src_0_3[31:0];
                end
                ADDR_WEIGHT_SRC_0_4_DATA_0: begin
                    rdata <= int_weight_src_0_4[31:0];
                end
                ADDR_WEIGHT_SRC_0_5_DATA_0: begin
                    rdata <= int_weight_src_0_5[31:0];
                end
                ADDR_WEIGHT_SRC_0_6_DATA_0: begin
                    rdata <= int_weight_src_0_6[31:0];
                end
                ADDR_WEIGHT_SRC_0_7_DATA_0: begin
                    rdata <= int_weight_src_0_7[31:0];
                end
                ADDR_WEIGHT_SRC_1_0_DATA_0: begin
                    rdata <= int_weight_src_1_0[31:0];
                end
                ADDR_WEIGHT_SRC_1_1_DATA_0: begin
                    rdata <= int_weight_src_1_1[31:0];
                end
                ADDR_WEIGHT_SRC_1_2_DATA_0: begin
                    rdata <= int_weight_src_1_2[31:0];
                end
                ADDR_WEIGHT_SRC_1_3_DATA_0: begin
                    rdata <= int_weight_src_1_3[31:0];
                end
                ADDR_WEIGHT_SRC_1_4_DATA_0: begin
                    rdata <= int_weight_src_1_4[31:0];
                end
                ADDR_WEIGHT_SRC_1_5_DATA_0: begin
                    rdata <= int_weight_src_1_5[31:0];
                end
                ADDR_WEIGHT_SRC_1_6_DATA_0: begin
                    rdata <= int_weight_src_1_6[31:0];
                end
                ADDR_WEIGHT_SRC_1_7_DATA_0: begin
                    rdata <= int_weight_src_1_7[31:0];
                end
                ADDR_WEIGHT_SRC_2_0_DATA_0: begin
                    rdata <= int_weight_src_2_0[31:0];
                end
                ADDR_WEIGHT_SRC_2_1_DATA_0: begin
                    rdata <= int_weight_src_2_1[31:0];
                end
                ADDR_WEIGHT_SRC_2_2_DATA_0: begin
                    rdata <= int_weight_src_2_2[31:0];
                end
                ADDR_WEIGHT_SRC_2_3_DATA_0: begin
                    rdata <= int_weight_src_2_3[31:0];
                end
                ADDR_WEIGHT_SRC_2_4_DATA_0: begin
                    rdata <= int_weight_src_2_4[31:0];
                end
                ADDR_WEIGHT_SRC_2_5_DATA_0: begin
                    rdata <= int_weight_src_2_5[31:0];
                end
                ADDR_WEIGHT_SRC_2_6_DATA_0: begin
                    rdata <= int_weight_src_2_6[31:0];
                end
                ADDR_WEIGHT_SRC_2_7_DATA_0: begin
                    rdata <= int_weight_src_2_7[31:0];
                end
                ADDR_WEIGHT_SRC_3_0_DATA_0: begin
                    rdata <= int_weight_src_3_0[31:0];
                end
                ADDR_WEIGHT_SRC_3_1_DATA_0: begin
                    rdata <= int_weight_src_3_1[31:0];
                end
                ADDR_WEIGHT_SRC_3_2_DATA_0: begin
                    rdata <= int_weight_src_3_2[31:0];
                end
                ADDR_WEIGHT_SRC_3_3_DATA_0: begin
                    rdata <= int_weight_src_3_3[31:0];
                end
                ADDR_WEIGHT_SRC_3_4_DATA_0: begin
                    rdata <= int_weight_src_3_4[31:0];
                end
                ADDR_WEIGHT_SRC_3_5_DATA_0: begin
                    rdata <= int_weight_src_3_5[31:0];
                end
                ADDR_WEIGHT_SRC_3_6_DATA_0: begin
                    rdata <= int_weight_src_3_6[31:0];
                end
                ADDR_WEIGHT_SRC_3_7_DATA_0: begin
                    rdata <= int_weight_src_3_7[31:0];
                end
                ADDR_WEIGHT_SRC_4_0_DATA_0: begin
                    rdata <= int_weight_src_4_0[31:0];
                end
                ADDR_WEIGHT_SRC_4_1_DATA_0: begin
                    rdata <= int_weight_src_4_1[31:0];
                end
                ADDR_WEIGHT_SRC_4_2_DATA_0: begin
                    rdata <= int_weight_src_4_2[31:0];
                end
                ADDR_WEIGHT_SRC_4_3_DATA_0: begin
                    rdata <= int_weight_src_4_3[31:0];
                end
                ADDR_WEIGHT_SRC_4_4_DATA_0: begin
                    rdata <= int_weight_src_4_4[31:0];
                end
                ADDR_WEIGHT_SRC_4_5_DATA_0: begin
                    rdata <= int_weight_src_4_5[31:0];
                end
                ADDR_WEIGHT_SRC_4_6_DATA_0: begin
                    rdata <= int_weight_src_4_6[31:0];
                end
                ADDR_WEIGHT_SRC_4_7_DATA_0: begin
                    rdata <= int_weight_src_4_7[31:0];
                end
                ADDR_WEIGHT_SRC_5_0_DATA_0: begin
                    rdata <= int_weight_src_5_0[31:0];
                end
                ADDR_WEIGHT_SRC_5_1_DATA_0: begin
                    rdata <= int_weight_src_5_1[31:0];
                end
                ADDR_WEIGHT_SRC_5_2_DATA_0: begin
                    rdata <= int_weight_src_5_2[31:0];
                end
                ADDR_WEIGHT_SRC_5_3_DATA_0: begin
                    rdata <= int_weight_src_5_3[31:0];
                end
                ADDR_WEIGHT_SRC_5_4_DATA_0: begin
                    rdata <= int_weight_src_5_4[31:0];
                end
                ADDR_WEIGHT_SRC_5_5_DATA_0: begin
                    rdata <= int_weight_src_5_5[31:0];
                end
                ADDR_WEIGHT_SRC_5_6_DATA_0: begin
                    rdata <= int_weight_src_5_6[31:0];
                end
                ADDR_WEIGHT_SRC_5_7_DATA_0: begin
                    rdata <= int_weight_src_5_7[31:0];
                end
                ADDR_WEIGHT_SRC_6_0_DATA_0: begin
                    rdata <= int_weight_src_6_0[31:0];
                end
                ADDR_WEIGHT_SRC_6_1_DATA_0: begin
                    rdata <= int_weight_src_6_1[31:0];
                end
                ADDR_WEIGHT_SRC_6_2_DATA_0: begin
                    rdata <= int_weight_src_6_2[31:0];
                end
                ADDR_WEIGHT_SRC_6_3_DATA_0: begin
                    rdata <= int_weight_src_6_3[31:0];
                end
                ADDR_WEIGHT_SRC_6_4_DATA_0: begin
                    rdata <= int_weight_src_6_4[31:0];
                end
                ADDR_WEIGHT_SRC_6_5_DATA_0: begin
                    rdata <= int_weight_src_6_5[31:0];
                end
                ADDR_WEIGHT_SRC_6_6_DATA_0: begin
                    rdata <= int_weight_src_6_6[31:0];
                end
                ADDR_WEIGHT_SRC_6_7_DATA_0: begin
                    rdata <= int_weight_src_6_7[31:0];
                end
                ADDR_WEIGHT_SRC_7_0_DATA_0: begin
                    rdata <= int_weight_src_7_0[31:0];
                end
                ADDR_WEIGHT_SRC_7_1_DATA_0: begin
                    rdata <= int_weight_src_7_1[31:0];
                end
                ADDR_WEIGHT_SRC_7_2_DATA_0: begin
                    rdata <= int_weight_src_7_2[31:0];
                end
                ADDR_WEIGHT_SRC_7_3_DATA_0: begin
                    rdata <= int_weight_src_7_3[31:0];
                end
                ADDR_WEIGHT_SRC_7_4_DATA_0: begin
                    rdata <= int_weight_src_7_4[31:0];
                end
                ADDR_WEIGHT_SRC_7_5_DATA_0: begin
                    rdata <= int_weight_src_7_5[31:0];
                end
                ADDR_WEIGHT_SRC_7_6_DATA_0: begin
                    rdata <= int_weight_src_7_6[31:0];
                end
                ADDR_WEIGHT_SRC_7_7_DATA_0: begin
                    rdata <= int_weight_src_7_7[31:0];
                end
                ADDR_WEIGHT_SRC_8_0_DATA_0: begin
                    rdata <= int_weight_src_8_0[31:0];
                end
                ADDR_WEIGHT_SRC_8_1_DATA_0: begin
                    rdata <= int_weight_src_8_1[31:0];
                end
                ADDR_WEIGHT_SRC_8_2_DATA_0: begin
                    rdata <= int_weight_src_8_2[31:0];
                end
                ADDR_WEIGHT_SRC_8_3_DATA_0: begin
                    rdata <= int_weight_src_8_3[31:0];
                end
                ADDR_WEIGHT_SRC_8_4_DATA_0: begin
                    rdata <= int_weight_src_8_4[31:0];
                end
                ADDR_WEIGHT_SRC_8_5_DATA_0: begin
                    rdata <= int_weight_src_8_5[31:0];
                end
                ADDR_WEIGHT_SRC_8_6_DATA_0: begin
                    rdata <= int_weight_src_8_6[31:0];
                end
                ADDR_WEIGHT_SRC_8_7_DATA_0: begin
                    rdata <= int_weight_src_8_7[31:0];
                end
                ADDR_WEIGHT_SRC_9_0_DATA_0: begin
                    rdata <= int_weight_src_9_0[31:0];
                end
                ADDR_WEIGHT_SRC_9_1_DATA_0: begin
                    rdata <= int_weight_src_9_1[31:0];
                end
                ADDR_WEIGHT_SRC_9_2_DATA_0: begin
                    rdata <= int_weight_src_9_2[31:0];
                end
                ADDR_WEIGHT_SRC_9_3_DATA_0: begin
                    rdata <= int_weight_src_9_3[31:0];
                end
                ADDR_WEIGHT_SRC_9_4_DATA_0: begin
                    rdata <= int_weight_src_9_4[31:0];
                end
                ADDR_WEIGHT_SRC_9_5_DATA_0: begin
                    rdata <= int_weight_src_9_5[31:0];
                end
                ADDR_WEIGHT_SRC_9_6_DATA_0: begin
                    rdata <= int_weight_src_9_6[31:0];
                end
                ADDR_WEIGHT_SRC_9_7_DATA_0: begin
                    rdata <= int_weight_src_9_7[31:0];
                end
                ADDR_BIAS_DATA_0: begin
                    rdata <= int_bias[31:0];
                end
                ADDR_FEATURE_DST_0_DATA_0: begin
                    rdata <= int_feature_dst_0[31:0];
                end
                ADDR_FEATURE_DST_1_DATA_0: begin
                    rdata <= int_feature_dst_1[31:0];
                end
                ADDR_FEATURE_DST_2_DATA_0: begin
                    rdata <= int_feature_dst_2[31:0];
                end
                ADDR_FEATURE_DST_3_DATA_0: begin
                    rdata <= int_feature_dst_3[31:0];
                end
                ADDR_FEATURE_DST_4_DATA_0: begin
                    rdata <= int_feature_dst_4[31:0];
                end
                ADDR_FEATURE_DST_5_DATA_0: begin
                    rdata <= int_feature_dst_5[31:0];
                end
                ADDR_FEATURE_DST_6_DATA_0: begin
                    rdata <= int_feature_dst_6[31:0];
                end
                ADDR_FEATURE_DST_7_DATA_0: begin
                    rdata <= int_feature_dst_7[31:0];
                end
                ADDR_FEATURE_DST_8_DATA_0: begin
                    rdata <= int_feature_dst_8[31:0];
                end
                ADDR_FEATURE_DST_9_DATA_0: begin
                    rdata <= int_feature_dst_9[31:0];
                end
            endcase
        end
    end
end


//------------------------Register logic-----------------
assign interrupt      = int_gie & (|int_isr);
assign ap_start       = int_ap_start;
assign feature_src_0  = int_feature_src_0;
assign feature_src_1  = int_feature_src_1;
assign feature_src_2  = int_feature_src_2;
assign feature_src_3  = int_feature_src_3;
assign feature_src_4  = int_feature_src_4;
assign feature_src_5  = int_feature_src_5;
assign feature_src_6  = int_feature_src_6;
assign feature_src_7  = int_feature_src_7;
assign weight_src_0_0 = int_weight_src_0_0;
assign weight_src_0_1 = int_weight_src_0_1;
assign weight_src_0_2 = int_weight_src_0_2;
assign weight_src_0_3 = int_weight_src_0_3;
assign weight_src_0_4 = int_weight_src_0_4;
assign weight_src_0_5 = int_weight_src_0_5;
assign weight_src_0_6 = int_weight_src_0_6;
assign weight_src_0_7 = int_weight_src_0_7;
assign weight_src_1_0 = int_weight_src_1_0;
assign weight_src_1_1 = int_weight_src_1_1;
assign weight_src_1_2 = int_weight_src_1_2;
assign weight_src_1_3 = int_weight_src_1_3;
assign weight_src_1_4 = int_weight_src_1_4;
assign weight_src_1_5 = int_weight_src_1_5;
assign weight_src_1_6 = int_weight_src_1_6;
assign weight_src_1_7 = int_weight_src_1_7;
assign weight_src_2_0 = int_weight_src_2_0;
assign weight_src_2_1 = int_weight_src_2_1;
assign weight_src_2_2 = int_weight_src_2_2;
assign weight_src_2_3 = int_weight_src_2_3;
assign weight_src_2_4 = int_weight_src_2_4;
assign weight_src_2_5 = int_weight_src_2_5;
assign weight_src_2_6 = int_weight_src_2_6;
assign weight_src_2_7 = int_weight_src_2_7;
assign weight_src_3_0 = int_weight_src_3_0;
assign weight_src_3_1 = int_weight_src_3_1;
assign weight_src_3_2 = int_weight_src_3_2;
assign weight_src_3_3 = int_weight_src_3_3;
assign weight_src_3_4 = int_weight_src_3_4;
assign weight_src_3_5 = int_weight_src_3_5;
assign weight_src_3_6 = int_weight_src_3_6;
assign weight_src_3_7 = int_weight_src_3_7;
assign weight_src_4_0 = int_weight_src_4_0;
assign weight_src_4_1 = int_weight_src_4_1;
assign weight_src_4_2 = int_weight_src_4_2;
assign weight_src_4_3 = int_weight_src_4_3;
assign weight_src_4_4 = int_weight_src_4_4;
assign weight_src_4_5 = int_weight_src_4_5;
assign weight_src_4_6 = int_weight_src_4_6;
assign weight_src_4_7 = int_weight_src_4_7;
assign weight_src_5_0 = int_weight_src_5_0;
assign weight_src_5_1 = int_weight_src_5_1;
assign weight_src_5_2 = int_weight_src_5_2;
assign weight_src_5_3 = int_weight_src_5_3;
assign weight_src_5_4 = int_weight_src_5_4;
assign weight_src_5_5 = int_weight_src_5_5;
assign weight_src_5_6 = int_weight_src_5_6;
assign weight_src_5_7 = int_weight_src_5_7;
assign weight_src_6_0 = int_weight_src_6_0;
assign weight_src_6_1 = int_weight_src_6_1;
assign weight_src_6_2 = int_weight_src_6_2;
assign weight_src_6_3 = int_weight_src_6_3;
assign weight_src_6_4 = int_weight_src_6_4;
assign weight_src_6_5 = int_weight_src_6_5;
assign weight_src_6_6 = int_weight_src_6_6;
assign weight_src_6_7 = int_weight_src_6_7;
assign weight_src_7_0 = int_weight_src_7_0;
assign weight_src_7_1 = int_weight_src_7_1;
assign weight_src_7_2 = int_weight_src_7_2;
assign weight_src_7_3 = int_weight_src_7_3;
assign weight_src_7_4 = int_weight_src_7_4;
assign weight_src_7_5 = int_weight_src_7_5;
assign weight_src_7_6 = int_weight_src_7_6;
assign weight_src_7_7 = int_weight_src_7_7;
assign weight_src_8_0 = int_weight_src_8_0;
assign weight_src_8_1 = int_weight_src_8_1;
assign weight_src_8_2 = int_weight_src_8_2;
assign weight_src_8_3 = int_weight_src_8_3;
assign weight_src_8_4 = int_weight_src_8_4;
assign weight_src_8_5 = int_weight_src_8_5;
assign weight_src_8_6 = int_weight_src_8_6;
assign weight_src_8_7 = int_weight_src_8_7;
assign weight_src_9_0 = int_weight_src_9_0;
assign weight_src_9_1 = int_weight_src_9_1;
assign weight_src_9_2 = int_weight_src_9_2;
assign weight_src_9_3 = int_weight_src_9_3;
assign weight_src_9_4 = int_weight_src_9_4;
assign weight_src_9_5 = int_weight_src_9_5;
assign weight_src_9_6 = int_weight_src_9_6;
assign weight_src_9_7 = int_weight_src_9_7;
assign bias           = int_bias;
assign feature_dst_0  = int_feature_dst_0;
assign feature_dst_1  = int_feature_dst_1;
assign feature_dst_2  = int_feature_dst_2;
assign feature_dst_3  = int_feature_dst_3;
assign feature_dst_4  = int_feature_dst_4;
assign feature_dst_5  = int_feature_dst_5;
assign feature_dst_6  = int_feature_dst_6;
assign feature_dst_7  = int_feature_dst_7;
assign feature_dst_8  = int_feature_dst_8;
assign feature_dst_9  = int_feature_dst_9;
// int_ap_start
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_start <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_AP_CTRL && WSTRB[0] && WDATA[0])
            int_ap_start <= 1'b1;
        else if (ap_ready)
            int_ap_start <= int_auto_restart; // clear on handshake/auto restart
    end
end

// int_ap_done
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_done <= 1'b0;
    else if (ACLK_EN) begin
        if (ap_done)
            int_ap_done <= 1'b1;
        else if (ar_hs && raddr == ADDR_AP_CTRL)
            int_ap_done <= 1'b0; // clear on read
    end
end

// int_ap_idle
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_idle <= 1'b0;
    else if (ACLK_EN) begin
            int_ap_idle <= ap_idle;
    end
end

// int_ap_ready
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_ready <= 1'b0;
    else if (ACLK_EN) begin
            int_ap_ready <= ap_ready;
    end
end

// int_auto_restart
always @(posedge ACLK) begin
    if (ARESET)
        int_auto_restart <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_AP_CTRL && WSTRB[0])
            int_auto_restart <=  WDATA[7];
    end
end

// int_gie
always @(posedge ACLK) begin
    if (ARESET)
        int_gie <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_GIE && WSTRB[0])
            int_gie <= WDATA[0];
    end
end

// int_ier
always @(posedge ACLK) begin
    if (ARESET)
        int_ier <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IER && WSTRB[0])
            int_ier <= WDATA[1:0];
    end
end

// int_isr[0]
always @(posedge ACLK) begin
    if (ARESET)
        int_isr[0] <= 1'b0;
    else if (ACLK_EN) begin
        if (int_ier[0] & ap_done)
            int_isr[0] <= 1'b1;
        else if (w_hs && waddr == ADDR_ISR && WSTRB[0])
            int_isr[0] <= int_isr[0] ^ WDATA[0]; // toggle on write
    end
end

// int_isr[1]
always @(posedge ACLK) begin
    if (ARESET)
        int_isr[1] <= 1'b0;
    else if (ACLK_EN) begin
        if (int_ier[1] & ap_ready)
            int_isr[1] <= 1'b1;
        else if (w_hs && waddr == ADDR_ISR && WSTRB[0])
            int_isr[1] <= int_isr[1] ^ WDATA[1]; // toggle on write
    end
end

// int_ap_return
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_return <= 0;
    else if (ACLK_EN) begin
        if (ap_done)
            int_ap_return <= ap_return;
    end
end

// int_feature_src_0[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_src_0[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_SRC_0_DATA_0)
            int_feature_src_0[31:0] <= (WDATA[31:0] & wmask) | (int_feature_src_0[31:0] & ~wmask);
    end
end

// int_feature_src_1[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_src_1[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_SRC_1_DATA_0)
            int_feature_src_1[31:0] <= (WDATA[31:0] & wmask) | (int_feature_src_1[31:0] & ~wmask);
    end
end

// int_feature_src_2[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_src_2[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_SRC_2_DATA_0)
            int_feature_src_2[31:0] <= (WDATA[31:0] & wmask) | (int_feature_src_2[31:0] & ~wmask);
    end
end

// int_feature_src_3[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_src_3[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_SRC_3_DATA_0)
            int_feature_src_3[31:0] <= (WDATA[31:0] & wmask) | (int_feature_src_3[31:0] & ~wmask);
    end
end

// int_feature_src_4[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_src_4[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_SRC_4_DATA_0)
            int_feature_src_4[31:0] <= (WDATA[31:0] & wmask) | (int_feature_src_4[31:0] & ~wmask);
    end
end

// int_feature_src_5[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_src_5[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_SRC_5_DATA_0)
            int_feature_src_5[31:0] <= (WDATA[31:0] & wmask) | (int_feature_src_5[31:0] & ~wmask);
    end
end

// int_feature_src_6[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_src_6[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_SRC_6_DATA_0)
            int_feature_src_6[31:0] <= (WDATA[31:0] & wmask) | (int_feature_src_6[31:0] & ~wmask);
    end
end

// int_feature_src_7[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_src_7[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_SRC_7_DATA_0)
            int_feature_src_7[31:0] <= (WDATA[31:0] & wmask) | (int_feature_src_7[31:0] & ~wmask);
    end
end

// int_weight_src_0_0[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_0_0[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_0_0_DATA_0)
            int_weight_src_0_0[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_0_0[31:0] & ~wmask);
    end
end

// int_weight_src_0_1[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_0_1[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_0_1_DATA_0)
            int_weight_src_0_1[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_0_1[31:0] & ~wmask);
    end
end

// int_weight_src_0_2[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_0_2[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_0_2_DATA_0)
            int_weight_src_0_2[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_0_2[31:0] & ~wmask);
    end
end

// int_weight_src_0_3[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_0_3[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_0_3_DATA_0)
            int_weight_src_0_3[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_0_3[31:0] & ~wmask);
    end
end

// int_weight_src_0_4[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_0_4[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_0_4_DATA_0)
            int_weight_src_0_4[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_0_4[31:0] & ~wmask);
    end
end

// int_weight_src_0_5[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_0_5[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_0_5_DATA_0)
            int_weight_src_0_5[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_0_5[31:0] & ~wmask);
    end
end

// int_weight_src_0_6[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_0_6[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_0_6_DATA_0)
            int_weight_src_0_6[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_0_6[31:0] & ~wmask);
    end
end

// int_weight_src_0_7[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_0_7[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_0_7_DATA_0)
            int_weight_src_0_7[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_0_7[31:0] & ~wmask);
    end
end

// int_weight_src_1_0[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_1_0[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_1_0_DATA_0)
            int_weight_src_1_0[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_1_0[31:0] & ~wmask);
    end
end

// int_weight_src_1_1[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_1_1[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_1_1_DATA_0)
            int_weight_src_1_1[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_1_1[31:0] & ~wmask);
    end
end

// int_weight_src_1_2[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_1_2[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_1_2_DATA_0)
            int_weight_src_1_2[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_1_2[31:0] & ~wmask);
    end
end

// int_weight_src_1_3[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_1_3[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_1_3_DATA_0)
            int_weight_src_1_3[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_1_3[31:0] & ~wmask);
    end
end

// int_weight_src_1_4[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_1_4[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_1_4_DATA_0)
            int_weight_src_1_4[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_1_4[31:0] & ~wmask);
    end
end

// int_weight_src_1_5[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_1_5[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_1_5_DATA_0)
            int_weight_src_1_5[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_1_5[31:0] & ~wmask);
    end
end

// int_weight_src_1_6[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_1_6[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_1_6_DATA_0)
            int_weight_src_1_6[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_1_6[31:0] & ~wmask);
    end
end

// int_weight_src_1_7[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_1_7[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_1_7_DATA_0)
            int_weight_src_1_7[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_1_7[31:0] & ~wmask);
    end
end

// int_weight_src_2_0[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_2_0[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_2_0_DATA_0)
            int_weight_src_2_0[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_2_0[31:0] & ~wmask);
    end
end

// int_weight_src_2_1[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_2_1[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_2_1_DATA_0)
            int_weight_src_2_1[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_2_1[31:0] & ~wmask);
    end
end

// int_weight_src_2_2[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_2_2[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_2_2_DATA_0)
            int_weight_src_2_2[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_2_2[31:0] & ~wmask);
    end
end

// int_weight_src_2_3[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_2_3[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_2_3_DATA_0)
            int_weight_src_2_3[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_2_3[31:0] & ~wmask);
    end
end

// int_weight_src_2_4[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_2_4[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_2_4_DATA_0)
            int_weight_src_2_4[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_2_4[31:0] & ~wmask);
    end
end

// int_weight_src_2_5[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_2_5[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_2_5_DATA_0)
            int_weight_src_2_5[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_2_5[31:0] & ~wmask);
    end
end

// int_weight_src_2_6[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_2_6[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_2_6_DATA_0)
            int_weight_src_2_6[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_2_6[31:0] & ~wmask);
    end
end

// int_weight_src_2_7[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_2_7[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_2_7_DATA_0)
            int_weight_src_2_7[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_2_7[31:0] & ~wmask);
    end
end

// int_weight_src_3_0[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_3_0[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_3_0_DATA_0)
            int_weight_src_3_0[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_3_0[31:0] & ~wmask);
    end
end

// int_weight_src_3_1[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_3_1[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_3_1_DATA_0)
            int_weight_src_3_1[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_3_1[31:0] & ~wmask);
    end
end

// int_weight_src_3_2[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_3_2[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_3_2_DATA_0)
            int_weight_src_3_2[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_3_2[31:0] & ~wmask);
    end
end

// int_weight_src_3_3[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_3_3[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_3_3_DATA_0)
            int_weight_src_3_3[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_3_3[31:0] & ~wmask);
    end
end

// int_weight_src_3_4[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_3_4[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_3_4_DATA_0)
            int_weight_src_3_4[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_3_4[31:0] & ~wmask);
    end
end

// int_weight_src_3_5[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_3_5[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_3_5_DATA_0)
            int_weight_src_3_5[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_3_5[31:0] & ~wmask);
    end
end

// int_weight_src_3_6[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_3_6[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_3_6_DATA_0)
            int_weight_src_3_6[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_3_6[31:0] & ~wmask);
    end
end

// int_weight_src_3_7[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_3_7[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_3_7_DATA_0)
            int_weight_src_3_7[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_3_7[31:0] & ~wmask);
    end
end

// int_weight_src_4_0[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_4_0[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_4_0_DATA_0)
            int_weight_src_4_0[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_4_0[31:0] & ~wmask);
    end
end

// int_weight_src_4_1[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_4_1[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_4_1_DATA_0)
            int_weight_src_4_1[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_4_1[31:0] & ~wmask);
    end
end

// int_weight_src_4_2[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_4_2[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_4_2_DATA_0)
            int_weight_src_4_2[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_4_2[31:0] & ~wmask);
    end
end

// int_weight_src_4_3[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_4_3[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_4_3_DATA_0)
            int_weight_src_4_3[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_4_3[31:0] & ~wmask);
    end
end

// int_weight_src_4_4[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_4_4[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_4_4_DATA_0)
            int_weight_src_4_4[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_4_4[31:0] & ~wmask);
    end
end

// int_weight_src_4_5[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_4_5[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_4_5_DATA_0)
            int_weight_src_4_5[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_4_5[31:0] & ~wmask);
    end
end

// int_weight_src_4_6[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_4_6[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_4_6_DATA_0)
            int_weight_src_4_6[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_4_6[31:0] & ~wmask);
    end
end

// int_weight_src_4_7[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_4_7[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_4_7_DATA_0)
            int_weight_src_4_7[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_4_7[31:0] & ~wmask);
    end
end

// int_weight_src_5_0[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_5_0[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_5_0_DATA_0)
            int_weight_src_5_0[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_5_0[31:0] & ~wmask);
    end
end

// int_weight_src_5_1[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_5_1[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_5_1_DATA_0)
            int_weight_src_5_1[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_5_1[31:0] & ~wmask);
    end
end

// int_weight_src_5_2[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_5_2[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_5_2_DATA_0)
            int_weight_src_5_2[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_5_2[31:0] & ~wmask);
    end
end

// int_weight_src_5_3[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_5_3[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_5_3_DATA_0)
            int_weight_src_5_3[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_5_3[31:0] & ~wmask);
    end
end

// int_weight_src_5_4[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_5_4[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_5_4_DATA_0)
            int_weight_src_5_4[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_5_4[31:0] & ~wmask);
    end
end

// int_weight_src_5_5[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_5_5[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_5_5_DATA_0)
            int_weight_src_5_5[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_5_5[31:0] & ~wmask);
    end
end

// int_weight_src_5_6[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_5_6[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_5_6_DATA_0)
            int_weight_src_5_6[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_5_6[31:0] & ~wmask);
    end
end

// int_weight_src_5_7[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_5_7[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_5_7_DATA_0)
            int_weight_src_5_7[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_5_7[31:0] & ~wmask);
    end
end

// int_weight_src_6_0[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_6_0[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_6_0_DATA_0)
            int_weight_src_6_0[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_6_0[31:0] & ~wmask);
    end
end

// int_weight_src_6_1[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_6_1[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_6_1_DATA_0)
            int_weight_src_6_1[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_6_1[31:0] & ~wmask);
    end
end

// int_weight_src_6_2[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_6_2[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_6_2_DATA_0)
            int_weight_src_6_2[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_6_2[31:0] & ~wmask);
    end
end

// int_weight_src_6_3[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_6_3[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_6_3_DATA_0)
            int_weight_src_6_3[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_6_3[31:0] & ~wmask);
    end
end

// int_weight_src_6_4[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_6_4[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_6_4_DATA_0)
            int_weight_src_6_4[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_6_4[31:0] & ~wmask);
    end
end

// int_weight_src_6_5[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_6_5[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_6_5_DATA_0)
            int_weight_src_6_5[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_6_5[31:0] & ~wmask);
    end
end

// int_weight_src_6_6[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_6_6[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_6_6_DATA_0)
            int_weight_src_6_6[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_6_6[31:0] & ~wmask);
    end
end

// int_weight_src_6_7[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_6_7[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_6_7_DATA_0)
            int_weight_src_6_7[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_6_7[31:0] & ~wmask);
    end
end

// int_weight_src_7_0[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_7_0[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_7_0_DATA_0)
            int_weight_src_7_0[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_7_0[31:0] & ~wmask);
    end
end

// int_weight_src_7_1[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_7_1[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_7_1_DATA_0)
            int_weight_src_7_1[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_7_1[31:0] & ~wmask);
    end
end

// int_weight_src_7_2[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_7_2[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_7_2_DATA_0)
            int_weight_src_7_2[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_7_2[31:0] & ~wmask);
    end
end

// int_weight_src_7_3[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_7_3[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_7_3_DATA_0)
            int_weight_src_7_3[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_7_3[31:0] & ~wmask);
    end
end

// int_weight_src_7_4[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_7_4[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_7_4_DATA_0)
            int_weight_src_7_4[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_7_4[31:0] & ~wmask);
    end
end

// int_weight_src_7_5[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_7_5[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_7_5_DATA_0)
            int_weight_src_7_5[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_7_5[31:0] & ~wmask);
    end
end

// int_weight_src_7_6[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_7_6[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_7_6_DATA_0)
            int_weight_src_7_6[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_7_6[31:0] & ~wmask);
    end
end

// int_weight_src_7_7[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_7_7[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_7_7_DATA_0)
            int_weight_src_7_7[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_7_7[31:0] & ~wmask);
    end
end

// int_weight_src_8_0[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_8_0[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_8_0_DATA_0)
            int_weight_src_8_0[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_8_0[31:0] & ~wmask);
    end
end

// int_weight_src_8_1[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_8_1[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_8_1_DATA_0)
            int_weight_src_8_1[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_8_1[31:0] & ~wmask);
    end
end

// int_weight_src_8_2[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_8_2[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_8_2_DATA_0)
            int_weight_src_8_2[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_8_2[31:0] & ~wmask);
    end
end

// int_weight_src_8_3[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_8_3[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_8_3_DATA_0)
            int_weight_src_8_3[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_8_3[31:0] & ~wmask);
    end
end

// int_weight_src_8_4[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_8_4[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_8_4_DATA_0)
            int_weight_src_8_4[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_8_4[31:0] & ~wmask);
    end
end

// int_weight_src_8_5[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_8_5[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_8_5_DATA_0)
            int_weight_src_8_5[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_8_5[31:0] & ~wmask);
    end
end

// int_weight_src_8_6[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_8_6[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_8_6_DATA_0)
            int_weight_src_8_6[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_8_6[31:0] & ~wmask);
    end
end

// int_weight_src_8_7[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_8_7[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_8_7_DATA_0)
            int_weight_src_8_7[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_8_7[31:0] & ~wmask);
    end
end

// int_weight_src_9_0[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_9_0[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_9_0_DATA_0)
            int_weight_src_9_0[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_9_0[31:0] & ~wmask);
    end
end

// int_weight_src_9_1[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_9_1[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_9_1_DATA_0)
            int_weight_src_9_1[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_9_1[31:0] & ~wmask);
    end
end

// int_weight_src_9_2[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_9_2[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_9_2_DATA_0)
            int_weight_src_9_2[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_9_2[31:0] & ~wmask);
    end
end

// int_weight_src_9_3[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_9_3[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_9_3_DATA_0)
            int_weight_src_9_3[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_9_3[31:0] & ~wmask);
    end
end

// int_weight_src_9_4[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_9_4[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_9_4_DATA_0)
            int_weight_src_9_4[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_9_4[31:0] & ~wmask);
    end
end

// int_weight_src_9_5[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_9_5[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_9_5_DATA_0)
            int_weight_src_9_5[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_9_5[31:0] & ~wmask);
    end
end

// int_weight_src_9_6[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_9_6[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_9_6_DATA_0)
            int_weight_src_9_6[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_9_6[31:0] & ~wmask);
    end
end

// int_weight_src_9_7[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_weight_src_9_7[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_WEIGHT_SRC_9_7_DATA_0)
            int_weight_src_9_7[31:0] <= (WDATA[31:0] & wmask) | (int_weight_src_9_7[31:0] & ~wmask);
    end
end

// int_bias[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_bias[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_BIAS_DATA_0)
            int_bias[31:0] <= (WDATA[31:0] & wmask) | (int_bias[31:0] & ~wmask);
    end
end

// int_feature_dst_0[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_dst_0[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_DST_0_DATA_0)
            int_feature_dst_0[31:0] <= (WDATA[31:0] & wmask) | (int_feature_dst_0[31:0] & ~wmask);
    end
end

// int_feature_dst_1[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_dst_1[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_DST_1_DATA_0)
            int_feature_dst_1[31:0] <= (WDATA[31:0] & wmask) | (int_feature_dst_1[31:0] & ~wmask);
    end
end

// int_feature_dst_2[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_dst_2[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_DST_2_DATA_0)
            int_feature_dst_2[31:0] <= (WDATA[31:0] & wmask) | (int_feature_dst_2[31:0] & ~wmask);
    end
end

// int_feature_dst_3[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_dst_3[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_DST_3_DATA_0)
            int_feature_dst_3[31:0] <= (WDATA[31:0] & wmask) | (int_feature_dst_3[31:0] & ~wmask);
    end
end

// int_feature_dst_4[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_dst_4[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_DST_4_DATA_0)
            int_feature_dst_4[31:0] <= (WDATA[31:0] & wmask) | (int_feature_dst_4[31:0] & ~wmask);
    end
end

// int_feature_dst_5[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_dst_5[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_DST_5_DATA_0)
            int_feature_dst_5[31:0] <= (WDATA[31:0] & wmask) | (int_feature_dst_5[31:0] & ~wmask);
    end
end

// int_feature_dst_6[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_dst_6[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_DST_6_DATA_0)
            int_feature_dst_6[31:0] <= (WDATA[31:0] & wmask) | (int_feature_dst_6[31:0] & ~wmask);
    end
end

// int_feature_dst_7[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_dst_7[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_DST_7_DATA_0)
            int_feature_dst_7[31:0] <= (WDATA[31:0] & wmask) | (int_feature_dst_7[31:0] & ~wmask);
    end
end

// int_feature_dst_8[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_dst_8[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_DST_8_DATA_0)
            int_feature_dst_8[31:0] <= (WDATA[31:0] & wmask) | (int_feature_dst_8[31:0] & ~wmask);
    end
end

// int_feature_dst_9[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_feature_dst_9[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FEATURE_DST_9_DATA_0)
            int_feature_dst_9[31:0] <= (WDATA[31:0] & wmask) | (int_feature_dst_9[31:0] & ~wmask);
    end
end


//------------------------Memory logic-------------------

endmodule
