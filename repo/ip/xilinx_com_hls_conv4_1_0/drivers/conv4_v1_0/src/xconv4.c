// ==============================================================
// File generated on Wed Sep 04 09:50:18 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xconv4.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XConv4_CfgInitialize(XConv4 *InstancePtr, XConv4_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XConv4_Start(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_AP_CTRL) & 0x80;
    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XConv4_IsDone(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XConv4_IsIdle(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XConv4_IsReady(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XConv4_EnableAutoRestart(XConv4 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XConv4_DisableAutoRestart(XConv4 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_AP_CTRL, 0);
}

u32 XConv4_Get_return(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_AP_RETURN);
    return Data;
}
void XConv4_Set_feature_src_0(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_0_DATA, Data);
}

u32 XConv4_Get_feature_src_0(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_0_DATA);
    return Data;
}

void XConv4_Set_feature_src_1(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_1_DATA, Data);
}

u32 XConv4_Get_feature_src_1(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_1_DATA);
    return Data;
}

void XConv4_Set_feature_src_2(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_2_DATA, Data);
}

u32 XConv4_Get_feature_src_2(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_2_DATA);
    return Data;
}

void XConv4_Set_feature_src_3(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_3_DATA, Data);
}

u32 XConv4_Get_feature_src_3(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_3_DATA);
    return Data;
}

void XConv4_Set_feature_src_4(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_4_DATA, Data);
}

u32 XConv4_Get_feature_src_4(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_4_DATA);
    return Data;
}

void XConv4_Set_feature_src_5(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_5_DATA, Data);
}

u32 XConv4_Get_feature_src_5(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_5_DATA);
    return Data;
}

void XConv4_Set_feature_src_6(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_6_DATA, Data);
}

u32 XConv4_Get_feature_src_6(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_6_DATA);
    return Data;
}

void XConv4_Set_feature_src_7(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_7_DATA, Data);
}

u32 XConv4_Get_feature_src_7(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_7_DATA);
    return Data;
}

void XConv4_Set_weight_src_0_0(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_0_DATA, Data);
}

u32 XConv4_Get_weight_src_0_0(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_0_DATA);
    return Data;
}

void XConv4_Set_weight_src_0_1(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_1_DATA, Data);
}

u32 XConv4_Get_weight_src_0_1(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_1_DATA);
    return Data;
}

void XConv4_Set_weight_src_0_2(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_2_DATA, Data);
}

u32 XConv4_Get_weight_src_0_2(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_2_DATA);
    return Data;
}

void XConv4_Set_weight_src_0_3(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_3_DATA, Data);
}

u32 XConv4_Get_weight_src_0_3(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_3_DATA);
    return Data;
}

void XConv4_Set_weight_src_0_4(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_4_DATA, Data);
}

u32 XConv4_Get_weight_src_0_4(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_4_DATA);
    return Data;
}

void XConv4_Set_weight_src_0_5(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_5_DATA, Data);
}

u32 XConv4_Get_weight_src_0_5(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_5_DATA);
    return Data;
}

void XConv4_Set_weight_src_0_6(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_6_DATA, Data);
}

u32 XConv4_Get_weight_src_0_6(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_6_DATA);
    return Data;
}

void XConv4_Set_weight_src_0_7(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_7_DATA, Data);
}

u32 XConv4_Get_weight_src_0_7(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_0_7_DATA);
    return Data;
}

void XConv4_Set_weight_src_1_0(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_0_DATA, Data);
}

u32 XConv4_Get_weight_src_1_0(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_0_DATA);
    return Data;
}

void XConv4_Set_weight_src_1_1(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_1_DATA, Data);
}

u32 XConv4_Get_weight_src_1_1(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_1_DATA);
    return Data;
}

void XConv4_Set_weight_src_1_2(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_2_DATA, Data);
}

u32 XConv4_Get_weight_src_1_2(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_2_DATA);
    return Data;
}

void XConv4_Set_weight_src_1_3(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_3_DATA, Data);
}

u32 XConv4_Get_weight_src_1_3(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_3_DATA);
    return Data;
}

void XConv4_Set_weight_src_1_4(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_4_DATA, Data);
}

u32 XConv4_Get_weight_src_1_4(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_4_DATA);
    return Data;
}

void XConv4_Set_weight_src_1_5(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_5_DATA, Data);
}

u32 XConv4_Get_weight_src_1_5(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_5_DATA);
    return Data;
}

void XConv4_Set_weight_src_1_6(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_6_DATA, Data);
}

u32 XConv4_Get_weight_src_1_6(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_6_DATA);
    return Data;
}

void XConv4_Set_weight_src_1_7(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_7_DATA, Data);
}

u32 XConv4_Get_weight_src_1_7(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_1_7_DATA);
    return Data;
}

void XConv4_Set_weight_src_2_0(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_0_DATA, Data);
}

u32 XConv4_Get_weight_src_2_0(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_0_DATA);
    return Data;
}

void XConv4_Set_weight_src_2_1(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_1_DATA, Data);
}

u32 XConv4_Get_weight_src_2_1(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_1_DATA);
    return Data;
}

void XConv4_Set_weight_src_2_2(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_2_DATA, Data);
}

u32 XConv4_Get_weight_src_2_2(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_2_DATA);
    return Data;
}

void XConv4_Set_weight_src_2_3(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_3_DATA, Data);
}

u32 XConv4_Get_weight_src_2_3(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_3_DATA);
    return Data;
}

void XConv4_Set_weight_src_2_4(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_4_DATA, Data);
}

u32 XConv4_Get_weight_src_2_4(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_4_DATA);
    return Data;
}

void XConv4_Set_weight_src_2_5(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_5_DATA, Data);
}

u32 XConv4_Get_weight_src_2_5(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_5_DATA);
    return Data;
}

void XConv4_Set_weight_src_2_6(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_6_DATA, Data);
}

u32 XConv4_Get_weight_src_2_6(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_6_DATA);
    return Data;
}

void XConv4_Set_weight_src_2_7(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_7_DATA, Data);
}

u32 XConv4_Get_weight_src_2_7(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_2_7_DATA);
    return Data;
}

void XConv4_Set_weight_src_3_0(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_0_DATA, Data);
}

u32 XConv4_Get_weight_src_3_0(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_0_DATA);
    return Data;
}

void XConv4_Set_weight_src_3_1(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_1_DATA, Data);
}

u32 XConv4_Get_weight_src_3_1(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_1_DATA);
    return Data;
}

void XConv4_Set_weight_src_3_2(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_2_DATA, Data);
}

u32 XConv4_Get_weight_src_3_2(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_2_DATA);
    return Data;
}

void XConv4_Set_weight_src_3_3(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_3_DATA, Data);
}

u32 XConv4_Get_weight_src_3_3(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_3_DATA);
    return Data;
}

void XConv4_Set_weight_src_3_4(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_4_DATA, Data);
}

u32 XConv4_Get_weight_src_3_4(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_4_DATA);
    return Data;
}

void XConv4_Set_weight_src_3_5(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_5_DATA, Data);
}

u32 XConv4_Get_weight_src_3_5(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_5_DATA);
    return Data;
}

void XConv4_Set_weight_src_3_6(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_6_DATA, Data);
}

u32 XConv4_Get_weight_src_3_6(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_6_DATA);
    return Data;
}

void XConv4_Set_weight_src_3_7(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_7_DATA, Data);
}

u32 XConv4_Get_weight_src_3_7(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_3_7_DATA);
    return Data;
}

void XConv4_Set_weight_src_4_0(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_0_DATA, Data);
}

u32 XConv4_Get_weight_src_4_0(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_0_DATA);
    return Data;
}

void XConv4_Set_weight_src_4_1(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_1_DATA, Data);
}

u32 XConv4_Get_weight_src_4_1(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_1_DATA);
    return Data;
}

void XConv4_Set_weight_src_4_2(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_2_DATA, Data);
}

u32 XConv4_Get_weight_src_4_2(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_2_DATA);
    return Data;
}

void XConv4_Set_weight_src_4_3(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_3_DATA, Data);
}

u32 XConv4_Get_weight_src_4_3(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_3_DATA);
    return Data;
}

void XConv4_Set_weight_src_4_4(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_4_DATA, Data);
}

u32 XConv4_Get_weight_src_4_4(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_4_DATA);
    return Data;
}

void XConv4_Set_weight_src_4_5(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_5_DATA, Data);
}

u32 XConv4_Get_weight_src_4_5(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_5_DATA);
    return Data;
}

void XConv4_Set_weight_src_4_6(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_6_DATA, Data);
}

u32 XConv4_Get_weight_src_4_6(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_6_DATA);
    return Data;
}

void XConv4_Set_weight_src_4_7(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_7_DATA, Data);
}

u32 XConv4_Get_weight_src_4_7(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_4_7_DATA);
    return Data;
}

void XConv4_Set_weight_src_5_0(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_0_DATA, Data);
}

u32 XConv4_Get_weight_src_5_0(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_0_DATA);
    return Data;
}

void XConv4_Set_weight_src_5_1(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_1_DATA, Data);
}

u32 XConv4_Get_weight_src_5_1(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_1_DATA);
    return Data;
}

void XConv4_Set_weight_src_5_2(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_2_DATA, Data);
}

u32 XConv4_Get_weight_src_5_2(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_2_DATA);
    return Data;
}

void XConv4_Set_weight_src_5_3(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_3_DATA, Data);
}

u32 XConv4_Get_weight_src_5_3(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_3_DATA);
    return Data;
}

void XConv4_Set_weight_src_5_4(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_4_DATA, Data);
}

u32 XConv4_Get_weight_src_5_4(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_4_DATA);
    return Data;
}

void XConv4_Set_weight_src_5_5(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_5_DATA, Data);
}

u32 XConv4_Get_weight_src_5_5(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_5_DATA);
    return Data;
}

void XConv4_Set_weight_src_5_6(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_6_DATA, Data);
}

u32 XConv4_Get_weight_src_5_6(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_6_DATA);
    return Data;
}

void XConv4_Set_weight_src_5_7(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_7_DATA, Data);
}

u32 XConv4_Get_weight_src_5_7(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_5_7_DATA);
    return Data;
}

void XConv4_Set_weight_src_6_0(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_0_DATA, Data);
}

u32 XConv4_Get_weight_src_6_0(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_0_DATA);
    return Data;
}

void XConv4_Set_weight_src_6_1(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_1_DATA, Data);
}

u32 XConv4_Get_weight_src_6_1(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_1_DATA);
    return Data;
}

void XConv4_Set_weight_src_6_2(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_2_DATA, Data);
}

u32 XConv4_Get_weight_src_6_2(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_2_DATA);
    return Data;
}

void XConv4_Set_weight_src_6_3(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_3_DATA, Data);
}

u32 XConv4_Get_weight_src_6_3(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_3_DATA);
    return Data;
}

void XConv4_Set_weight_src_6_4(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_4_DATA, Data);
}

u32 XConv4_Get_weight_src_6_4(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_4_DATA);
    return Data;
}

void XConv4_Set_weight_src_6_5(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_5_DATA, Data);
}

u32 XConv4_Get_weight_src_6_5(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_5_DATA);
    return Data;
}

void XConv4_Set_weight_src_6_6(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_6_DATA, Data);
}

u32 XConv4_Get_weight_src_6_6(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_6_DATA);
    return Data;
}

void XConv4_Set_weight_src_6_7(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_7_DATA, Data);
}

u32 XConv4_Get_weight_src_6_7(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_6_7_DATA);
    return Data;
}

void XConv4_Set_weight_src_7_0(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_0_DATA, Data);
}

u32 XConv4_Get_weight_src_7_0(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_0_DATA);
    return Data;
}

void XConv4_Set_weight_src_7_1(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_1_DATA, Data);
}

u32 XConv4_Get_weight_src_7_1(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_1_DATA);
    return Data;
}

void XConv4_Set_weight_src_7_2(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_2_DATA, Data);
}

u32 XConv4_Get_weight_src_7_2(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_2_DATA);
    return Data;
}

void XConv4_Set_weight_src_7_3(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_3_DATA, Data);
}

u32 XConv4_Get_weight_src_7_3(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_3_DATA);
    return Data;
}

void XConv4_Set_weight_src_7_4(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_4_DATA, Data);
}

u32 XConv4_Get_weight_src_7_4(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_4_DATA);
    return Data;
}

void XConv4_Set_weight_src_7_5(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_5_DATA, Data);
}

u32 XConv4_Get_weight_src_7_5(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_5_DATA);
    return Data;
}

void XConv4_Set_weight_src_7_6(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_6_DATA, Data);
}

u32 XConv4_Get_weight_src_7_6(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_6_DATA);
    return Data;
}

void XConv4_Set_weight_src_7_7(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_7_DATA, Data);
}

u32 XConv4_Get_weight_src_7_7(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_7_7_DATA);
    return Data;
}

void XConv4_Set_weight_src_8_0(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_0_DATA, Data);
}

u32 XConv4_Get_weight_src_8_0(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_0_DATA);
    return Data;
}

void XConv4_Set_weight_src_8_1(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_1_DATA, Data);
}

u32 XConv4_Get_weight_src_8_1(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_1_DATA);
    return Data;
}

void XConv4_Set_weight_src_8_2(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_2_DATA, Data);
}

u32 XConv4_Get_weight_src_8_2(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_2_DATA);
    return Data;
}

void XConv4_Set_weight_src_8_3(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_3_DATA, Data);
}

u32 XConv4_Get_weight_src_8_3(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_3_DATA);
    return Data;
}

void XConv4_Set_weight_src_8_4(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_4_DATA, Data);
}

u32 XConv4_Get_weight_src_8_4(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_4_DATA);
    return Data;
}

void XConv4_Set_weight_src_8_5(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_5_DATA, Data);
}

u32 XConv4_Get_weight_src_8_5(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_5_DATA);
    return Data;
}

void XConv4_Set_weight_src_8_6(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_6_DATA, Data);
}

u32 XConv4_Get_weight_src_8_6(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_6_DATA);
    return Data;
}

void XConv4_Set_weight_src_8_7(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_7_DATA, Data);
}

u32 XConv4_Get_weight_src_8_7(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_8_7_DATA);
    return Data;
}

void XConv4_Set_weight_src_9_0(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_0_DATA, Data);
}

u32 XConv4_Get_weight_src_9_0(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_0_DATA);
    return Data;
}

void XConv4_Set_weight_src_9_1(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_1_DATA, Data);
}

u32 XConv4_Get_weight_src_9_1(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_1_DATA);
    return Data;
}

void XConv4_Set_weight_src_9_2(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_2_DATA, Data);
}

u32 XConv4_Get_weight_src_9_2(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_2_DATA);
    return Data;
}

void XConv4_Set_weight_src_9_3(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_3_DATA, Data);
}

u32 XConv4_Get_weight_src_9_3(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_3_DATA);
    return Data;
}

void XConv4_Set_weight_src_9_4(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_4_DATA, Data);
}

u32 XConv4_Get_weight_src_9_4(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_4_DATA);
    return Data;
}

void XConv4_Set_weight_src_9_5(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_5_DATA, Data);
}

u32 XConv4_Get_weight_src_9_5(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_5_DATA);
    return Data;
}

void XConv4_Set_weight_src_9_6(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_6_DATA, Data);
}

u32 XConv4_Get_weight_src_9_6(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_6_DATA);
    return Data;
}

void XConv4_Set_weight_src_9_7(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_7_DATA, Data);
}

u32 XConv4_Get_weight_src_9_7(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_9_7_DATA);
    return Data;
}

void XConv4_Set_bias(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_BIAS_DATA, Data);
}

u32 XConv4_Get_bias(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_BIAS_DATA);
    return Data;
}

void XConv4_Set_feature_dst_0(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_0_DATA, Data);
}

u32 XConv4_Get_feature_dst_0(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_0_DATA);
    return Data;
}

void XConv4_Set_feature_dst_1(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_1_DATA, Data);
}

u32 XConv4_Get_feature_dst_1(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_1_DATA);
    return Data;
}

void XConv4_Set_feature_dst_2(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_2_DATA, Data);
}

u32 XConv4_Get_feature_dst_2(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_2_DATA);
    return Data;
}

void XConv4_Set_feature_dst_3(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_3_DATA, Data);
}

u32 XConv4_Get_feature_dst_3(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_3_DATA);
    return Data;
}

void XConv4_Set_feature_dst_4(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_4_DATA, Data);
}

u32 XConv4_Get_feature_dst_4(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_4_DATA);
    return Data;
}

void XConv4_Set_feature_dst_5(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_5_DATA, Data);
}

u32 XConv4_Get_feature_dst_5(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_5_DATA);
    return Data;
}

void XConv4_Set_feature_dst_6(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_6_DATA, Data);
}

u32 XConv4_Get_feature_dst_6(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_6_DATA);
    return Data;
}

void XConv4_Set_feature_dst_7(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_7_DATA, Data);
}

u32 XConv4_Get_feature_dst_7(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_7_DATA);
    return Data;
}

void XConv4_Set_feature_dst_8(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_8_DATA, Data);
}

u32 XConv4_Get_feature_dst_8(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_8_DATA);
    return Data;
}

void XConv4_Set_feature_dst_9(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_9_DATA, Data);
}

u32 XConv4_Get_feature_dst_9(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_9_DATA);
    return Data;
}

void XConv4_InterruptGlobalEnable(XConv4 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_GIE, 1);
}

void XConv4_InterruptGlobalDisable(XConv4 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_GIE, 0);
}

void XConv4_InterruptEnable(XConv4 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_IER);
    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_IER, Register | Mask);
}

void XConv4_InterruptDisable(XConv4 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_IER);
    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_IER, Register & (~Mask));
}

void XConv4_InterruptClear(XConv4 *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_ISR, Mask);
}

u32 XConv4_InterruptGetEnabled(XConv4 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_IER);
}

u32 XConv4_InterruptGetStatus(XConv4 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_ISR);
}

