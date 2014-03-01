/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
/*****************************************************************************
 *
 * Filename:
 * ---------
 *   mt9p017mipi_Sensor.h
 *
 * Project:
 * --------
 *   YUSU
 *
 * Description:
 * ------------
 *   Header file of Sensor driver
 *
 *
 * Author:
 * -------
 *   Guangye Yang (mtk70662)
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef _MT9P017MIPI_SENSOR_H
#define _MT9P017MIPI_SENSOR_H

typedef enum group_enum {
    PRE_GAIN=0,
    CMMCLK_CURRENT,
    FRAME_RATE_LIMITATION,
    REGISTER_EDITOR,
    GROUP_TOTAL_NUMS
} FACTORY_GROUP_ENUM;


#define ENGINEER_START_ADDR 10
#define FACTORY_START_ADDR 0


typedef enum register_index
{
	SENSOR_BASEGAIN=FACTORY_START_ADDR,
	PRE_GAIN_R_INDEX,
	PRE_GAIN_Gr_INDEX,
	PRE_GAIN_Gb_INDEX,
	PRE_GAIN_B_INDEX,
	FACTORY_END_ADDR
} FACTORY_REGISTER_INDEX;

typedef enum engineer_index
{
    CMMCLK_CURRENT_INDEX=ENGINEER_START_ADDR,
    ENGINEER_END
} FACTORY_ENGINEER_INDEX;



typedef struct
{
    SENSOR_REG_STRUCT	Reg[ENGINEER_END];
    SENSOR_REG_STRUCT	CCT[FACTORY_END_ADDR];
} SENSOR_DATA_STRUCT, *PSENSOR_DATA_STRUCT;



#define CURRENT_MAIN_SENSOR                MT9P017MIPI_MICRON
//if define RAW10, MIPI_INTERFACE must be defined
//if MIPI_INTERFACE is marked, RAW10 must be marked too
#define MIPI_INTERFACE
#define RAW10


#define MT9P017MIPI_WRITE_ID_1	0x20
#define MT9P017MIPI_READ_ID_1	0x21
#define MT9P017MIPI_WRITE_ID_2	0x30
#define MT9P017MIPI_READ_ID_2	0x31



#define MT9P017MIPI_IMAGE_SENSOR_FULL_HACTIVE		2592
#define MT9P017MIPI_IMAGE_SENSOR_FULL_VACTIVE		1944
#define MT9P017MIPI_IMAGE_SENSOR_PV_HACTIVE			1296
#define MT9P017MIPI_IMAGE_SENSOR_PV_VACTIVE			972

#define MT9P017MIPI_FULL_START_X					2
#define MT9P017MIPI_FULL_START_Y					2
#define MT9P017MIPI_IMAGE_SENSOR_FULL_WIDTH			(MT9P017MIPI_IMAGE_SENSOR_FULL_HACTIVE - 32)  //2592-32 2560
#define MT9P017MIPI_IMAGE_SENSOR_FULL_HEIGHT		(MT9P017MIPI_IMAGE_SENSOR_FULL_VACTIVE - 24)  //1944 -24 1920

#define MT9P017MIPI_PV_START_X						2
#define MT9P017MIPI_PV_START_Y						2
#define MT9P017MIPI_IMAGE_SENSOR_PV_WIDTH			(MT9P017MIPI_IMAGE_SENSOR_PV_HACTIVE - 16)	//1296 -16 1280
#define MT9P017MIPI_IMAGE_SENSOR_PV_HEIGHT			(MT9P017MIPI_IMAGE_SENSOR_PV_VACTIVE - 12)	//972 -12 960

#ifdef MIPI_INTERFACE
	#define	MT9P017MIPI_IMAGE_SENSOR_FULL_HBLANKING		1200
#else
	#define MT9P017MIPI_IMAGE_SENSOR_FULL_HBLANKING 	200
#endif
#define MT9P017MIPI_IMAGE_SENSOR_FULL_VBLANKING		150

#ifdef MIPI_INTERFACE
	#define	MT9P017MIPI_IMAGE_SENSOR_PV_HBLANKING		1855
#else
	#define	MT9P017MIPI_IMAGE_SENSOR_PV_HBLANKING		279
#endif
#define MT9P017MIPI_IMAGE_SENSOR_PV_VBLANKING		128

#define MT9P017MIPI_FULL_PERIOD_PIXEL_NUMS			(MT9P017MIPI_IMAGE_SENSOR_FULL_HACTIVE + MT9P017MIPI_IMAGE_SENSOR_FULL_HBLANKING)  //2592+1200= 3792
#define MT9P017MIPI_FULL_PERIOD_LINE_NUMS			(MT9P017MIPI_IMAGE_SENSOR_FULL_VACTIVE + MT9P017MIPI_IMAGE_SENSOR_FULL_VBLANKING)  //1944+150 = 2094
#define MT9P017MIPI_PV_PERIOD_PIXEL_NUMS			(MT9P017MIPI_IMAGE_SENSOR_PV_HACTIVE + MT9P017MIPI_IMAGE_SENSOR_PV_HBLANKING)	 //1296 +1855 =3151
#define MT9P017MIPI_PV_PERIOD_LINE_NUMS				(MT9P017MIPI_IMAGE_SENSOR_PV_VACTIVE + MT9P017MIPI_IMAGE_SENSOR_PV_VBLANKING)    //972 + 128 =1100



#define MT9P017MIPI_FRAME_RATE_UNIT		10
#define MT9P017MIPI_set_frame_rate(a) 	(a * MT9P017MIPI_FRAME_RATE_UNIT)
#define MT9P017MIPI_1X_ZOOM_IN_CAPTURE_FRAME	9



/* SENSOR PRIVATE STRUCT */
struct MT9P017MIPI_SENSOR_STRUCT
{
	kal_uint8 i2c_write_id;
	kal_uint8 i2c_read_id;
	kal_uint16 preview_vt_clk;
	kal_uint16 capture_vt_clk;
};


/* FRAME RATE */
#define MT9P017MIPI_FPS(x)                          ((kal_uint32)(10 * (x)))

#endif /* _MT9P017MIPI_SENSOR_H */

