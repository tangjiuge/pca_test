// ==============================================================
// File generated on Mon Aug 19 15:59:34 +0800 2019
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
void XConv1_Set_feature_src(XConv1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_SRC_DATA, Data);
}

u32 XConv1_Get_feature_src(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_SRC_DATA);
    return Data;
}

void XConv1_Set_weight_src(XConv1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_WEIGHT_SRC_DATA, Data);
}

u32 XConv1_Get_weight_src(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_WEIGHT_SRC_DATA);
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

void XConv1_Set_feature_dst(XConv1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv1_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_DST_DATA, Data);
}

u32 XConv1_Get_feature_dst(XConv1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv1_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV1_AXILITES_ADDR_FEATURE_DST_DATA);
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

