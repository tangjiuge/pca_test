// ==============================================================
// File generated on Wed Sep 04 09:50:18 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xconv4.h"

extern XConv4_Config XConv4_ConfigTable[];

XConv4_Config *XConv4_LookupConfig(u16 DeviceId) {
	XConv4_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XCONV4_NUM_INSTANCES; Index++) {
		if (XConv4_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XConv4_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XConv4_Initialize(XConv4 *InstancePtr, u16 DeviceId) {
	XConv4_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XConv4_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XConv4_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

