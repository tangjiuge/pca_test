// ==============================================================
// File generated on Wed Sep 04 09:50:04 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xconv2.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XConv2_CfgInitialize(XConv2 *InstancePtr, XConv2_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XConv2_Start(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_AP_CTRL) & 0x80;
    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XConv2_IsDone(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XConv2_IsIdle(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XConv2_IsReady(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XConv2_EnableAutoRestart(XConv2 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XConv2_DisableAutoRestart(XConv2 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_AP_CTRL, 0);
}

u32 XConv2_Get_return(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_AP_RETURN);
    return Data;
}
void XConv2_Set_feature_src_0(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_SRC_0_DATA, Data);
}

u32 XConv2_Get_feature_src_0(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_SRC_0_DATA);
    return Data;
}

void XConv2_Set_feature_src_1(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_SRC_1_DATA, Data);
}

u32 XConv2_Get_feature_src_1(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_SRC_1_DATA);
    return Data;
}

void XConv2_Set_feature_src_2(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_SRC_2_DATA, Data);
}

u32 XConv2_Get_feature_src_2(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_SRC_2_DATA);
    return Data;
}

void XConv2_Set_feature_src_3(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_SRC_3_DATA, Data);
}

u32 XConv2_Get_feature_src_3(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_SRC_3_DATA);
    return Data;
}

void XConv2_Set_feature_src_4(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_SRC_4_DATA, Data);
}

u32 XConv2_Get_feature_src_4(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_SRC_4_DATA);
    return Data;
}

void XConv2_Set_feature_src_5(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_SRC_5_DATA, Data);
}

u32 XConv2_Get_feature_src_5(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_SRC_5_DATA);
    return Data;
}

void XConv2_Set_weight_src_0_0(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_0_0_DATA, Data);
}

u32 XConv2_Get_weight_src_0_0(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_0_0_DATA);
    return Data;
}

void XConv2_Set_weight_src_0_1(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_0_1_DATA, Data);
}

u32 XConv2_Get_weight_src_0_1(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_0_1_DATA);
    return Data;
}

void XConv2_Set_weight_src_0_2(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_0_2_DATA, Data);
}

u32 XConv2_Get_weight_src_0_2(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_0_2_DATA);
    return Data;
}

void XConv2_Set_weight_src_0_3(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_0_3_DATA, Data);
}

u32 XConv2_Get_weight_src_0_3(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_0_3_DATA);
    return Data;
}

void XConv2_Set_weight_src_0_4(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_0_4_DATA, Data);
}

u32 XConv2_Get_weight_src_0_4(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_0_4_DATA);
    return Data;
}

void XConv2_Set_weight_src_0_5(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_0_5_DATA, Data);
}

u32 XConv2_Get_weight_src_0_5(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_0_5_DATA);
    return Data;
}

void XConv2_Set_weight_src_1_0(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_1_0_DATA, Data);
}

u32 XConv2_Get_weight_src_1_0(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_1_0_DATA);
    return Data;
}

void XConv2_Set_weight_src_1_1(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_1_1_DATA, Data);
}

u32 XConv2_Get_weight_src_1_1(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_1_1_DATA);
    return Data;
}

void XConv2_Set_weight_src_1_2(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_1_2_DATA, Data);
}

u32 XConv2_Get_weight_src_1_2(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_1_2_DATA);
    return Data;
}

void XConv2_Set_weight_src_1_3(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_1_3_DATA, Data);
}

u32 XConv2_Get_weight_src_1_3(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_1_3_DATA);
    return Data;
}

void XConv2_Set_weight_src_1_4(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_1_4_DATA, Data);
}

u32 XConv2_Get_weight_src_1_4(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_1_4_DATA);
    return Data;
}

void XConv2_Set_weight_src_1_5(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_1_5_DATA, Data);
}

u32 XConv2_Get_weight_src_1_5(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_1_5_DATA);
    return Data;
}

void XConv2_Set_weight_src_2_0(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_2_0_DATA, Data);
}

u32 XConv2_Get_weight_src_2_0(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_2_0_DATA);
    return Data;
}

void XConv2_Set_weight_src_2_1(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_2_1_DATA, Data);
}

u32 XConv2_Get_weight_src_2_1(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_2_1_DATA);
    return Data;
}

void XConv2_Set_weight_src_2_2(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_2_2_DATA, Data);
}

u32 XConv2_Get_weight_src_2_2(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_2_2_DATA);
    return Data;
}

void XConv2_Set_weight_src_2_3(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_2_3_DATA, Data);
}

u32 XConv2_Get_weight_src_2_3(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_2_3_DATA);
    return Data;
}

void XConv2_Set_weight_src_2_4(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_2_4_DATA, Data);
}

u32 XConv2_Get_weight_src_2_4(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_2_4_DATA);
    return Data;
}

void XConv2_Set_weight_src_2_5(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_2_5_DATA, Data);
}

u32 XConv2_Get_weight_src_2_5(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_2_5_DATA);
    return Data;
}

void XConv2_Set_weight_src_3_0(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_3_0_DATA, Data);
}

u32 XConv2_Get_weight_src_3_0(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_3_0_DATA);
    return Data;
}

void XConv2_Set_weight_src_3_1(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_3_1_DATA, Data);
}

u32 XConv2_Get_weight_src_3_1(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_3_1_DATA);
    return Data;
}

void XConv2_Set_weight_src_3_2(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_3_2_DATA, Data);
}

u32 XConv2_Get_weight_src_3_2(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_3_2_DATA);
    return Data;
}

void XConv2_Set_weight_src_3_3(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_3_3_DATA, Data);
}

u32 XConv2_Get_weight_src_3_3(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_3_3_DATA);
    return Data;
}

void XConv2_Set_weight_src_3_4(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_3_4_DATA, Data);
}

u32 XConv2_Get_weight_src_3_4(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_3_4_DATA);
    return Data;
}

void XConv2_Set_weight_src_3_5(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_3_5_DATA, Data);
}

u32 XConv2_Get_weight_src_3_5(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_3_5_DATA);
    return Data;
}

void XConv2_Set_weight_src_4_0(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_4_0_DATA, Data);
}

u32 XConv2_Get_weight_src_4_0(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_4_0_DATA);
    return Data;
}

void XConv2_Set_weight_src_4_1(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_4_1_DATA, Data);
}

u32 XConv2_Get_weight_src_4_1(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_4_1_DATA);
    return Data;
}

void XConv2_Set_weight_src_4_2(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_4_2_DATA, Data);
}

u32 XConv2_Get_weight_src_4_2(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_4_2_DATA);
    return Data;
}

void XConv2_Set_weight_src_4_3(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_4_3_DATA, Data);
}

u32 XConv2_Get_weight_src_4_3(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_4_3_DATA);
    return Data;
}

void XConv2_Set_weight_src_4_4(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_4_4_DATA, Data);
}

u32 XConv2_Get_weight_src_4_4(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_4_4_DATA);
    return Data;
}

void XConv2_Set_weight_src_4_5(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_4_5_DATA, Data);
}

u32 XConv2_Get_weight_src_4_5(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_4_5_DATA);
    return Data;
}

void XConv2_Set_weight_src_5_0(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_5_0_DATA, Data);
}

u32 XConv2_Get_weight_src_5_0(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_5_0_DATA);
    return Data;
}

void XConv2_Set_weight_src_5_1(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_5_1_DATA, Data);
}

u32 XConv2_Get_weight_src_5_1(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_5_1_DATA);
    return Data;
}

void XConv2_Set_weight_src_5_2(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_5_2_DATA, Data);
}

u32 XConv2_Get_weight_src_5_2(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_5_2_DATA);
    return Data;
}

void XConv2_Set_weight_src_5_3(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_5_3_DATA, Data);
}

u32 XConv2_Get_weight_src_5_3(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_5_3_DATA);
    return Data;
}

void XConv2_Set_weight_src_5_4(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_5_4_DATA, Data);
}

u32 XConv2_Get_weight_src_5_4(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_5_4_DATA);
    return Data;
}

void XConv2_Set_weight_src_5_5(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_5_5_DATA, Data);
}

u32 XConv2_Get_weight_src_5_5(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_WEIGHT_SRC_5_5_DATA);
    return Data;
}

void XConv2_Set_bias(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_BIAS_DATA, Data);
}

u32 XConv2_Get_bias(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_BIAS_DATA);
    return Data;
}

void XConv2_Set_feature_dst_0(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_DST_0_DATA, Data);
}

u32 XConv2_Get_feature_dst_0(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_DST_0_DATA);
    return Data;
}

void XConv2_Set_feature_dst_1(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_DST_1_DATA, Data);
}

u32 XConv2_Get_feature_dst_1(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_DST_1_DATA);
    return Data;
}

void XConv2_Set_feature_dst_2(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_DST_2_DATA, Data);
}

u32 XConv2_Get_feature_dst_2(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_DST_2_DATA);
    return Data;
}

void XConv2_Set_feature_dst_3(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_DST_3_DATA, Data);
}

u32 XConv2_Get_feature_dst_3(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_DST_3_DATA);
    return Data;
}

void XConv2_Set_feature_dst_4(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_DST_4_DATA, Data);
}

u32 XConv2_Get_feature_dst_4(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_DST_4_DATA);
    return Data;
}

void XConv2_Set_feature_dst_5(XConv2 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_DST_5_DATA, Data);
}

u32 XConv2_Get_feature_dst_5(XConv2 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_FEATURE_DST_5_DATA);
    return Data;
}

void XConv2_InterruptGlobalEnable(XConv2 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_GIE, 1);
}

void XConv2_InterruptGlobalDisable(XConv2 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_GIE, 0);
}

void XConv2_InterruptEnable(XConv2 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_IER);
    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_IER, Register | Mask);
}

void XConv2_InterruptDisable(XConv2 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_IER);
    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_IER, Register & (~Mask));
}

void XConv2_InterruptClear(XConv2 *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_ISR, Mask);
}

u32 XConv2_InterruptGetEnabled(XConv2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_IER);
}

u32 XConv2_InterruptGetStatus(XConv2 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XConv2_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2_AXILITES_ADDR_ISR);
}

