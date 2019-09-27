// ==============================================================
// File generated on Wed Sep 04 09:50:05 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xconv1.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XConv1_CfgInitialize(XConv1 *InstancePtr, XConv1_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XConv1_Start(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_AP_CTRL) & 0x80;
    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XConv1_IsDone(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XConv1_IsIdle(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XConv1_IsReady(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XConv1_EnableAutoRestart(XConv1 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XConv1_DisableAutoRestart(XConv1 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_AP_CTRL, 0);
}

u32 XConv1_Get_return(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_AP_RETURN);
    return Data;
}
void XConv1_Set_feature_src_0(XConv1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_SRC_0_DATA, Data);
}

u32 XConv1_Get_feature_src_0(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_SRC_0_DATA);
    return Data;
}

void XConv1_Set_weight_src_0_0(XConv1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_WEIGHT_SRC_0_0_DATA, Data);
}

u32 XConv1_Get_weight_src_0_0(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_WEIGHT_SRC_0_0_DATA);
    return Data;
}

void XConv1_Set_weight_src_1_0(XConv1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_WEIGHT_SRC_1_0_DATA, Data);
}

u32 XConv1_Get_weight_src_1_0(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_WEIGHT_SRC_1_0_DATA);
    return Data;
}

void XConv1_Set_weight_src_2_0(XConv1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_WEIGHT_SRC_2_0_DATA, Data);
}

u32 XConv1_Get_weight_src_2_0(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_WEIGHT_SRC_2_0_DATA);
    return Data;
}

void XConv1_Set_weight_src_3_0(XConv1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_WEIGHT_SRC_3_0_DATA, Data);
}

u32 XConv1_Get_weight_src_3_0(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_WEIGHT_SRC_3_0_DATA);
    return Data;
}

void XConv1_Set_weight_src_4_0(XConv1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_WEIGHT_SRC_4_0_DATA, Data);
}

u32 XConv1_Get_weight_src_4_0(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_WEIGHT_SRC_4_0_DATA);
    return Data;
}

void XConv1_Set_weight_src_5_0(XConv1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_WEIGHT_SRC_5_0_DATA, Data);
}

u32 XConv1_Get_weight_src_5_0(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_WEIGHT_SRC_5_0_DATA);
    return Data;
}

void XConv1_Set_bias(XConv1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_BIAS_DATA, Data);
}

u32 XConv1_Get_bias(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_BIAS_DATA);
    return Data;
}

void XConv1_Set_feature_dst_0(XConv1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_DST_0_DATA, Data);
}

u32 XConv1_Get_feature_dst_0(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_DST_0_DATA);
    return Data;
}

void XConv1_Set_feature_dst_1(XConv1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_DST_1_DATA, Data);
}

u32 XConv1_Get_feature_dst_1(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_DST_1_DATA);
    return Data;
}

void XConv1_Set_feature_dst_2(XConv1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_DST_2_DATA, Data);
}

u32 XConv1_Get_feature_dst_2(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_DST_2_DATA);
    return Data;
}

void XConv1_Set_feature_dst_3(XConv1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_DST_3_DATA, Data);
}

u32 XConv1_Get_feature_dst_3(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_DST_3_DATA);
    return Data;
}

void XConv1_Set_feature_dst_4(XConv1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_DST_4_DATA, Data);
}

u32 XConv1_Get_feature_dst_4(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_DST_4_DATA);
    return Data;
}

void XConv1_Set_feature_dst_5(XConv1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_DST_5_DATA, Data);
}

u32 XConv1_Get_feature_dst_5(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_DST_5_DATA);
    return Data;
}

void XConv1_InterruptGlobalEnable(XConv1 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_GIE, 1);
}

void XConv1_InterruptGlobalDisable(XConv1 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_GIE, 0);
}

void XConv1_InterruptEnable(XConv1 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_IER);
    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_IER, Register | Mask);
}

void XConv1_InterruptDisable(XConv1 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_IER);
    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_IER, Register & (~Mask));
}

void XConv1_InterruptClear(XConv1 *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_ISR, Mask);
}

u32 XConv1_InterruptGetEnabled(XConv1 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_IER);
}

u32 XConv1_InterruptGetStatus(XConv1 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_ISR);
}

