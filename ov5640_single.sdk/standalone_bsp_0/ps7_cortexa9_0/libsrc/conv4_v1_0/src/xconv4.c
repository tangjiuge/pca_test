// ==============================================================
// File generated on Mon Aug 19 15:59:27 +0800 2019
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
void XConv4_Set_feature_src(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_DATA, Data);
}

u32 XConv4_Get_feature_src(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_SRC_DATA);
    return Data;
}

void XConv4_Set_weight_src(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_DATA, Data);
}

u32 XConv4_Get_weight_src(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_WEIGHT_SRC_DATA);
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

void XConv4_Set_feature_dst(XConv4 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv4_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_DATA, Data);
}

u32 XConv4_Get_feature_dst(XConv4 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv4_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV4_AXILITES_ADDR_FEATURE_DST_DATA);
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

