// ==============================================================
// File generated on Wed Sep 04 09:50:04 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xconv2.h"

extern XConv2_Config XConv2_ConfigTable[];

XConv2_Config *XConv2_LookupConfig(u16 DeviceId) {
	XConv2_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XCONV2_NUM_INSTANCES; Index++) {
		if (XConv2_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XConv2_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XConv2_Initialize(XConv2 *InstancePtr, u16 DeviceId) {
	XConv2_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XConv2_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XConv2_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

