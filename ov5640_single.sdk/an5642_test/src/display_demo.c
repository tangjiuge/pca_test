/************************************************************************/
/*																		*/
/*	display_demo.c	--	ALINX AX7010 HDMI Display demonstration 						*/
/*																		*/
/************************************************************************/

/* ------------------------------------------------------------ */
/*				Include File Definitions						*/
/* ------------------------------------------------------------ */

#include "display_demo.h"

#include "tyb.h"
/*
 * XPAR redefines
 */
#define DYNCLK_BASEADDR XPAR_AXI_DYNCLK_0_BASEADDR
#define VGA_VDMA_ID XPAR_AXIVDMA_0_DEVICE_ID
#define DISP_VTC_ID XPAR_VTC_0_DEVICE_ID
#define VID_VTC_IRPT_ID XPS_FPGA3_INT_ID
#define VID_GPIO_IRPT_ID XPS_FPGA4_INT_ID
#define SCU_TIMER_ID XPAR_SCUTIMER_DEVICE_ID
#define UART_BASEADDR XPAR_PS7_UART_1_BASEADDR


/* ------------------------------------------------------------ */
/*				Global Variables								*/
/* ------------------------------------------------------------ */

/*
 * Display Driver structs
 */
DisplayCtrl dispCtrl;
XAxiVdma vdma;
XIicPs ps_i2c0;
XGpio cmos_rstn;
XScuGic scuGic;
XHls_core_1 myDev;

XSmall_pic small_pic_dev;

/*
 * Framebuffers for video data
 */
u8 frameBuf[DISPLAY_NUM_FRAMES][DEMO_MAX_FRAME] __attribute__ ((aligned(64)));
u8 *pFrames[DISPLAY_NUM_FRAMES]; //array of pointers to the frame buffers
u8 tyb_frameBuf[DISPLAY_NUM_FRAMES][DEMO_MAX_FRAME] __attribute__ ((aligned(64)));
u8 *tyb_pFrames[DISPLAY_NUM_FRAMES]; //array of pointers to the frame buffers
/* ------------------------------------------------------------ */
/*				Procedure Definitions							*/
/* ------------------------------------------------------------ */

/* user variables define area*/
int main(void)
{
	int step_img_x,step_img_y,pixel_index;
	   print("Hello World\n\r");
	   int Status;
	   XAxiVdma_Config *vdmaConfig;
	   int i,j;
	   int state;
	/*
	 * Initialize an array of pointers to the 3 frame buffers
	 */
	for (i = 0; i < DISPLAY_NUM_FRAMES; i++)
	{
		pFrames[i] = frameBuf[i];
		tyb_pFrames[i] = tyb_frameBuf[i];
		memset(pFrames[i], 0, DEMO_MAX_FRAME);
		Xil_DCacheFlushRange((INTPTR) pFrames[i], DEMO_MAX_FRAME) ;
	}
	{
			i2c_init(&ps_i2c0, XPAR_XIICPS_0_DEVICE_ID,40000);

			XGpio_Initialize(&cmos_rstn, XPAR_CMOS_RST_DEVICE_ID);   //initialize GPIO IP
			XGpio_SetDataDirection(&cmos_rstn, 1, 0x0);            //set GPIO as output
			XGpio_DiscreteWrite(&cmos_rstn, 1, 0x1);
			usleep(500000);
			XGpio_DiscreteWrite(&cmos_rstn, 1, 0x0);               //set GPIO output value to 0

			usleep(500000);
			XGpio_DiscreteWrite(&cmos_rstn, 1, 0x1);
			usleep(500000);
	}
	/*
	 * Initialize Sensor
	 */
			sensor_init(&ps_i2c0);
	/*
	 * Initialize VDMA driver
	 */
				vdmaConfig = XAxiVdma_LookupConfig(VGA_VDMA_ID);
				if (!vdmaConfig)
				{
					xil_printf("No video DMA found for ID %d\r\n", VGA_VDMA_ID);

				}
				Status = XAxiVdma_CfgInitialize(&vdma, vdmaConfig, vdmaConfig->BaseAddress);
				if (Status != XST_SUCCESS)
				{
					xil_printf("VDMA Configuration Initialization failed %d\r\n", Status);

				}

	/*
	 * Initialize the Display controller and start it
	 */
	Status = DisplayInitialize(&dispCtrl, &vdma, DISP_VTC_ID, DYNCLK_BASEADDR,tyb_pFrames, DEMO_STRIDE);
	if (Status != XST_SUCCESS)
	{
		xil_printf("Display Ctrl initialization failed during demo initialization%d\r\n", Status);

	}
	Status = DisplayStart(&dispCtrl);
	if (Status != XST_SUCCESS)
	{
		xil_printf("Couldn't start display during demo initialization%d\r\n", Status);

	}
	/* Clear frame buffer */
	memset(dispCtrl.framePtr[dispCtrl.curFrame], 0, 1920 * 1080 * 3);
	/* Start Sensor Vdma */
//	vdma_write_init(XPAR_AXIVDMA_1_DEVICE_ID,1280 * 3,720,1280 * 3,(unsigned int)dispCtrl.framePtr[dispCtrl.curFrame]);

	vdma_write_init(XPAR_AXIVDMA_1_DEVICE_ID,1280 * 3,720,1280 * 3,pFrames[0]);
/////////////////////////////////////////////////////////////////////////////
	//////-------用户模块初始化-------------------------------------------------------------------

	printf("XAverage_float_Initialize success\n\r");
	for(i=0;i<10000*3;i++)
    		pic[i]=0;

    	weight[0]=1.0;weight[1]=0;weight[2]=0;
    	weight[3]=0;weight[4]=0;weight[5]=0;
    	weight[6]=0;weight[7]=0;weight[8]=0;

    	weight[0+9]=1.0;weight[1+9]=0;weight[2+9]=0;
    	weight[3+9]=0;weight[4+9]=0;weight[5+9]=0;
    	weight[6+9]=0;weight[7+9]=0;weight[8+9]=0;

    	weight[0+9*2]=1.0;weight[1+9*2]=0;weight[2+9*2]=0;
    	weight[3+9*2]=0;weight[4+9*2]=0;weight[5+9*2]=0;
    	weight[6+9*2]=0;weight[7+9*2]=0;weight[8+9*2]=0;


    	weight[0+9*3]=1.0;weight[1+9*3]=0;weight[2+9*3]=0;
    	weight[3+9*3]=0;weight[4+9*3]=0;weight[5+9*3]=0;
    	weight[6+9*3]=0;weight[7+9*3]=0;weight[8+9*3]=0;

    	weight[0+9*4]=1.0;weight[1+9*4]=0;weight[2+9*4]=0;
    	weight[3+9*4]=0;weight[4+9*4]=0;weight[5+9*4]=0;
    	weight[6+9*4]=0;weight[7+9*4]=0;weight[8+9*4]=0;


    	weight[0+9*5]=1.0;weight[1+9*5]=0;weight[2+9*5]=0;
    	weight[3+9*5]=0;weight[4+9*5]=0;weight[5+9*5]=0;
    	weight[6+9*5]=0;weight[7+9*5]=0;weight[8+9*5]=0;

    	pic[0]=1.0;//pic[1]=1.0;pic[2]=1.0;
    //	pic[28]=1.0;pic[28+1]=1.0;pic[28+2]=1.0;
    	//pic[28*2+0]=1.0;pic[28*2+1]=1.0;pic[28*2+2]=1.0;

/*hls_core_1 initialize--------------------------------------------------------------------------*/
    /*	state = XHls_core_1_Initialize(&myDev, 0);
    	if(state != XST_SUCCESS)
    	{
    		printf("XAverage_float_Initialize fail\n\r");
    	}
    	XHls_core_1_DisableAutoRestart(&myDev);
    	XHls_core_1_InterruptEnable(&myDev, 1);
		XHls_core_1_Set_feature_src(&myDev,(u32)shuzi);
		XHls_core_1_Set_feature_dst(&myDev,(u32)output);
		XHls_core_1_Set_weight_src(&myDev,(u32)weight);
		XHls_core_1_Start(&myDev);
		hls_core_1_ExceptionInit(&scuGic, &myDev);*/

/*conv1 initialize--------------------------------------------------------------------------*/

    	state = XConv1_Initialize(&conv1_dev, 0);
    	if(state != XST_SUCCESS)
    	{
    		printf("Conv1 fail\n\r");
    	}
    	Xil_DCacheFlush();
    	XConv1_DisableAutoRestart(&conv1_dev);
    	XConv1_InterruptEnable(&conv1_dev, 1);
    	XConv1_Set_bias(&conv1_dev,(u32)conv1bias);
    	XConv1_Set_feature_src(&conv1_dev,(u32)tar_small_pic);
    	XConv1_Set_feature_dst(&conv1_dev,(u32)conv1_result);
    	XConv1_Set_weight_src(&conv1_dev,(u32)conv1weight);
    	XConv1_Start(&conv1_dev);
    	conv1_ExceptionInit(&scuGic, &conv1_dev);
/*conv2 initialize--------------------------------------------------------------------------*/
    	state = XConv2_Initialize(&conv2_dev, 0);
    	if(state != XST_SUCCESS)
    	{
    		printf("Conv2 fail\n\r");
    	}
    	XConv2_DisableAutoRestart(&conv2_dev);
    	XConv2_InterruptEnable(&conv2_dev, 1);
    	XConv2_Set_feature_src(&conv2_dev,(u32)conv1_result);
    	XConv2_Set_feature_dst(&conv2_dev,(u32)conv2_result);
    	XConv2_Set_weight_src(&conv2_dev,(u32)conv2weight);
    	XConv2_Set_bias(&conv2_dev,(u32)conv2bias);
    	//XConv2_Start(&conv2_dev);
    	conv2_ExceptionInit(&scuGic, &conv2_dev);
/*conv3 initialize--------------------------------------------------------------------------*/
    	state = XConv3_Initialize(&conv3_dev, 0);
    	if(state != XST_SUCCESS)
    	{
    		printf("Conv3 fail\n\r");
    	}
    	XConv3_DisableAutoRestart(&conv3_dev);
    	XConv3_InterruptEnable(&conv3_dev, 1);
    	XConv3_Set_feature_src(&conv3_dev,(u32)conv2_result);
    	XConv3_Set_feature_dst(&conv3_dev,(u32)conv3_result);
    	XConv3_Set_weight_src(&conv3_dev,(u32)conv3weight);
    	XConv3_Set_bias(&conv3_dev,(u32)conv3bias);
    	//XConv3_Start(&conv3_dev);
    	conv3_ExceptionInit(&scuGic, &conv3_dev);
/*conv4 initialize--------------------------------------------------------------------------*/
    	state = XConv4_Initialize(&conv4_dev, 0);
    	if(state != XST_SUCCESS)
    	{
    		printf("Conv4 fail\n\r");
    	}
    	XConv4_DisableAutoRestart(&conv4_dev);
    	XConv4_InterruptEnable(&conv4_dev, 1);
    	XConv4_Set_feature_src(&conv4_dev,(u32)conv3_result);
    	XConv4_Set_feature_dst(&conv4_dev,(u32)conv4_result);
    	XConv4_Set_weight_src(&conv4_dev,(u32)conv4weight);
    	XConv4_Set_bias(&conv4_dev,(u32)conv4bias);
    	//XConv4_Start(&conv4_dev);
    	conv4_ExceptionInit(&scuGic, &conv4_dev);

		while(1)
			{

			memcpy(tyb_pFrames[0],pFrames[0],1280*10*100);


			for (i=0;i<28;i++)
			{
				for (j=0;j<28;j++)
				{
					printf("%.1f ",1);

				}
				printf("\r\n");
			}


			}


	return 0;
}


