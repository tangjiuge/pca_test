// ==============================================================
// File generated on Wed Sep 04 09:50:05 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xconv1.h"

extern XConv1_Config XConv1_ConfigTable[];

XConv1_Config *XConv1_LookupConfig(u16 DeviceId) {
	XConv1_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XCONV1_NUM_INSTANCES; Index++) {
		if (XConv1_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XConv1_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XConv1_Initialize(XConv1 *InstancePtr, u16 DeviceId) {
	XConv1_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XConv1_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XConv1_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

