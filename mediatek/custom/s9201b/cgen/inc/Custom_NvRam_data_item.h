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


#ifndef CUSTOM_NVRAM_DATA_ITEM_H
#define CUSTOM_NVRAM_DATA_ITEM_H

#include "custom_cfg_module_file.h"
#include "Custom_NvRam_LID.h"



/*****************************************************************************
* NVRAM database define
*****************************************************************************/
BEGIN_NVRAM_DATA

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_LID)
AUDIO_CUSTOM_PARAM_STRUCT *CFG_FILE_SPEECH_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_CUSTOM_FILE_GPS_LID)
ap_nvram_gps_config_struct *CFG_FILE_GPS_CONFIG_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_COMPFLT_LID)
AUDIO_ACF_CUSTOM_PARAM_STRUCT *CFG_FILE_AUDIO_COMPFLT_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_HEADPHONE_COMPFLT_LID)
AUDIO_ACF_CUSTOM_PARAM_STRUCT *CFG_FILE_HEADPHONE_COMPFLT_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_EFFECT_LID)
AUDIO_EFFECT_CUSTOM_PARAM_STRUCT *CFG_FILE_AUDIO_EFFECT_REC_TOTAL
{

};


LID_BIT VER_LID(AP_CFG_RDEB_FILE_WIFI_LID)
WIFI_CFG_PARAM_STRUCT *CFG_FILE_WIFI_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDEB_WIFI_CUSTOM_LID)
WIFI_CUSTOM_PARAM_STRUCT *CFG_FILE_WIFI_CUSTOM_REC_TOTAL
{

};
LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_PARAM_MED_LID)
AUDIO_PARAM_MED_STRUCT *CFG_FILE_AUDIO_PARAM_MED_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_VOLUME_CUSTOM_LID)
AUDIO_VOLUME_CUSTOM_STRUCT *CFG_FILE_AUDIO_VOLUME_CUSTOM_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_DUAL_MIC_CUSTOM_LID)
AUDIO_CUSTOM_EXTRA_PARAM_STRUCT *CFG_FILE_SPEECH_DUAL_MIC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_WB_PARAM_LID)
AUDIO_CUSTOM_WB_PARAM_STRUCT *CFG_FILE_WB_SPEECH_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_REEB_PRODUCT_INFO_LID)
PRODUCT_INFO *CFG_FILE_PRODUCT_INFO_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_GAIN_TABLE_LID)
AUDIO_GAIN_TABLE_STRUCT *CFG_FILE_AUDIO_GAIN_TABLE_CUSTOM_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_VER1_VOLUME_CUSTOM_LID)
AUDIO_VER1_CUSTOM_VOLUME_STRUCT *CFG_FILE_AUDIO_VER1_VOLUME_CUSTOM_REC_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_HD_REC_PAR_LID)
AUDIO_HD_RECORD_PARAM_STRUCT *CFG_FILE_AUDIO_HD_REC_PAR_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_HD_REC_SCENE_LID)
AUDIO_HD_RECORD_SCENE_TABLE_STRUCT *CFG_FILE_AUDIO_HD_REC_SCENE_TABLE_TOTAL
{

};

LID_BIT VER_LID(AP_CFG_RDCL_FILE_AUDIO_HD_REC_48K_PAR_LID)
AUDIO_HD_RECORD_48K_PARAM_STRUCT *CFG_FILE_AUDIO_HD_REC_48K_PAR_TOTAL
{
	
};


END_NVRAM_DATA

#endif /* CUSTOM_NVRAM_DATA_ITEM_H */

