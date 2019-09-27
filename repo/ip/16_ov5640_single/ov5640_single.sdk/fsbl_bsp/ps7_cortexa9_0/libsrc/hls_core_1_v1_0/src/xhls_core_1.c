// ==============================================================
// File generated on Wed Aug 14 17:20:13 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xhls_core_1.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XHls_core_1_CfgInitialize(XHls_core_1 *InstancePtr, XHls_core_1_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XHls_core_1_Start(XHls_core_1 *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XHls_core_1_ReadReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_AP_CTRL) & 0x80;
    XHls_core_1_WriteReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XHls_core_1_IsDone(XHls_core_1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XHls_core_1_ReadReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XHls_core_1_IsIdle(XHls_core_1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XHls_core_1_ReadReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XHls_core_1_IsReady(XHls_core_1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XHls_core_1_ReadReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XHls_core_1_EnableAutoRestart(XHls_core_1 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XHls_core_1_WriteReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XHls_core_1_DisableAutoRestart(XHls_core_1 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XHls_core_1_WriteReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_AP_CTRL, 0);
}

u32 XHls_core_1_Get_return(XHls_core_1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XHls_core_1_ReadReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_AP_RETURN);
    return Data;
}
void XHls_core_1_Set_feature_src(XHls_core_1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XHls_core_1_WriteReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_FEATURE_SRC_DATA, Data);
}

u32 XHls_core_1_Get_feature_src(XHls_core_1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XHls_core_1_ReadReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_FEATURE_SRC_DATA);
    return Data;
}

void XHls_core_1_Set_weight_src(XHls_core_1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XHls_core_1_WriteReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_WEIGHT_SRC_DATA, Data);
}

u32 XHls_core_1_Get_weight_src(XHls_core_1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XHls_core_1_ReadReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_WEIGHT_SRC_DATA);
    return Data;
}

void XHls_core_1_Set_bias(XHls_core_1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XHls_core_1_WriteReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_BIAS_DATA, Data);
}

u32 XHls_core_1_Get_bias(XHls_core_1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XHls_core_1_ReadReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_BIAS_DATA);
    return Data;
}

void XHls_core_1_Set_feature_dst(XHls_core_1 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XHls_core_1_WriteReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_FEATURE_DST_DATA, Data);
}

u32 XHls_core_1_Get_feature_dst(XHls_core_1 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XHls_core_1_ReadReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_FEATURE_DST_DATA);
    return Data;
}

void XHls_core_1_InterruptGlobalEnable(XHls_core_1 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XHls_core_1_WriteReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_GIE, 1);
}

void XHls_core_1_InterruptGlobalDisable(XHls_core_1 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XHls_core_1_WriteReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_GIE, 0);
}

void XHls_core_1_InterruptEnable(XHls_core_1 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XHls_core_1_ReadReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_IER);
    XHls_core_1_WriteReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_IER, Register | Mask);
}

void XHls_core_1_InterruptDisable(XHls_core_1 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XHls_core_1_ReadReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_IER);
    XHls_core_1_WriteReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_IER, Register & (~Mask));
}

void XHls_core_1_InterruptClear(XHls_core_1 *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XHls_core_1_WriteReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_ISR, Mask);
}

u32 XHls_core_1_InterruptGetEnabled(XHls_core_1 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XHls_core_1_ReadReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_IER);
}

u32 XHls_core_1_InterruptGetStatus(XHls_core_1 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XHls_core_1_ReadReg(InstancePtr->Axilites_BaseAddress, XHLS_CORE_1_AXILITES_ADDR_ISR);
}

