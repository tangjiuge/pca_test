/*
 * tyb.h
 *
 *  Created on: 2019��8��15��
 *      Author: tangyuanbo
 */

#ifndef SRC_TYB_H_
#define SRC_TYB_H_



#endif /* SRC_TYB_H_ */

#include "xil_types.h"
#include "display_ctrl/display_ctrl.h"
#include <stdio.h>
#include "math.h"
#include <ctype.h>
#include <stdlib.h>
#include "xil_types.h"
#include "xil_cache.h"
#include "xparameters.h"
#include "xiicps.h"
#include "vdma.h"
#include "i2c/PS_i2c.h"
#include "xgpio.h"
#include "sleep.h"
#include "ov5640.h"
#include "xhls_core_1.h"
#include "xsmall_pic.h"
#include "xconv1.h"
#include "xconv2.h"
#include "xconv3.h"
#include "xconv4.h"
#include <stdio.h>

#include "xil_printf.h"

#include "xil_cache.h"
#include "xil_exception.h"
#include "xtime_l.h"
#include "xscugic.h"
#include "xparameters.h"
#include "string.h"
extern float main_src[5];
extern float main_dst[5];
extern float weight[9*6];
extern float pic[100*100*3];
extern float output[98*98];
extern u8 kaobei[300];
extern int count;
extern int src_x,src_y,w,h,tar_x,tar_y;


extern float tar_small_pic[1][240][240];
extern float shuzi4[784];
extern float shuzi5[784];
extern float shuzi3[784];
extern float conv1_result[6][119][119];
extern float conv2_result[6][58][58];
extern float conv3_result[8][56][56];
extern float conv4_result[10][54][54];
extern float max;
extern int max_pos;
extern float conv1weight[6][1][3][3];
extern float conv2weight[6][6][3][3];
extern float conv3weight[6][8][3][3];
extern float conv4weight[8][10][3][3];

extern float conv1bias[6];
extern float conv2bias[6];
extern float conv3bias[8];
extern float conv4bias[10];
extern float fc1_weight[1470];
extern float fc1_bias[10];
extern int conv_finish;
extern float last_res[10];
extern XConv1 conv1_dev;
extern XConv2 conv2_dev;
extern XConv3 conv3_dev;
extern XConv4 conv4_dev;

float relu(float x);
int InterruptInit(u16 DeviceId, XScuGic *XScuGicInstancePtr);
int InterruptConnect(XScuGic *XScuGicInstancePtr,u32 Int_Id,void * Handler,void *CallBackRef);

void hls_core_1_Exception(XHls_core_1 *pXAverageInstance);
void conv1_Exception(XConv1 *pXAverageInstance);
void conv2_Exception(XConv2 *pXAverageInstance);
void conv3_Exception(XConv3 *pXAverageInstance);
void conv4_Exception(XConv4 *pXAverageInstance);
void hls_core_1_ExceptionInit(XScuGic *pXScuGicInstance, XHls_core_1 *ptr);
void conv1_ExceptionInit(XScuGic *pXScuGicInstance, XConv1 *ptr);
void conv2_ExceptionInit(XScuGic *pXScuGicInstance, XConv2 *ptr);
void conv3_ExceptionInit(XScuGic *pXScuGicInstance, XConv3 *ptr);
void conv4_ExceptionInit(XScuGic *pXScuGicInstance, XConv4 *ptr);
void tyb_display(float *img,u8 *dst,int bili,int w_h,int pos_x,int pos_y);
void tyb_display2(u8 *img,u8 *dst,int pos_x,int pos_y);
void tyb_display3(u8 *img,u8 *dst,int pos_x,int pos_y);
void rgb2grey(u8 *img,float ***dst);