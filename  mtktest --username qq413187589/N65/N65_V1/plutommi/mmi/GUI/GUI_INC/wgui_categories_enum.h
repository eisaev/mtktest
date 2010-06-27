/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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

/*******************************************************************************
 * Filename:
 * ---------
 *  wgui_categories_enum.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *  Category enums.
 *
 *  Author:
 * -------
 *  Zhao Nan (MBJ06023)
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/
#ifndef WGUI_CATEGORIES_ENUM_H
#define WGUI_CATEGORIES_ENUM_H

#include "MMI_features.h"

typedef enum
{
    MMI_LIST_CATEGORY_ID = 1,
    MMI_CATEGORY5_ID,
    MMI_CATEGORY6_ID,
    MMI_CATEGORY7_ID,
    MMI_CATEGORY9_ID,
#ifdef UI_SMALL_LIST_SCREEN
    MMI_CATEGORY10_ID,
#endif 
    MMI_CATEGORY12_ID,
    MMI_CATEGORY14_LIST_ID,
    MMI_CATEGORY14_MATRIX_ID,
    MMI_CATEGORY14_CIRCULAR_ID,
    MMI_CATEGORY14_ROTATE_ID,
    MMI_CATEGORY15_LIST_ID,
    MMI_CATEGORY15_MATRIX_ID,
    MMI_CATEGORY16_ID,
    MMI_CATEGORY18_ID,
    MMI_CATEGORY18_NORMAL_ID,
    MMI_CATEGORY18_STATUS_ICON_ID,
    MMI_CATEGORY18_NONE_ID,
    MMI_CATEGORY19_ID,
    MMI_CATEGORY20_ID,
    MMI_CATEGORY21_ID,
    MMI_CATEGORY22_ID,
    MMI_CATEGORY28_ID,
    MMI_CATEGORY29_ID,
    MMI_CATEGORY32_ID,
    MMI_CATEGORY33_ID,
    MMI_CATEGORY34_ID,
    MMI_CATEGORY35_ID,
    MMI_CATEGORY36_ID,
    MMI_CATEGORY39_ID,
    MMI_CATEGORY52_ID,
    MMI_CATEGORY53_ID,
    MMI_CATEGORY57_ID,
    MMI_CATEGORY59_ID,
    MMI_CATEGORY61_ID,
    MMI_CATEGORY62_ID,
    MMI_CATEGORY63_ID,
    MMI_CATEGORY64_ID,
    MMI_CATEGORY65_ID,
    MMI_CATEGORY66_ID,
    MMI_CATEGORY66_NORMAL_ID,
    MMI_CATEGORY66_STATUS_ICON_ID,
    MMI_CATEGORY66_NONE_ID,
    MMI_CATEGORY67_ID,
    MMI_CATEGORY69_ID,
    MMI_CATEGORY72_ID,
    MMI_CATEGORY73_ID,
    MMI_CATEGORY74_ID,
    MMI_CATEGORY75_ID,
    MMI_CATEGORY76_ID,
    MMI_CATEGORY77_ID,
    MMI_CATEGORY78_ID,
    MMI_CATEGORY83_ID,
    MMI_CATEGORY83_ID_NO_STATUS,
    MMI_CATEGORY84_ID,
    MMI_CATEGORY85_ID,
    MMI_CATEGORY85_NO_BUTTON_ID,
    MMI_CATEGORY86_ID,
    MMI_CATEGORY86_NORMAL_ID,
    MMI_CATEGORY86_STATUS_ICON_ID,
    MMI_CATEGORY86_NONE_ID,
    MMI_CATEGORY87_ID,
    MMI_CATEGORY88_ID,
    MMI_CATEGORY88_1ITEM_ID,
    MMI_CATEGORY88_2ITEM_ID,
    MMI_CATEGORY88_3ITEM_ID,
    MMI_CATEGORY89_ID,
    MMI_CATEGORY90_ID,
    MMI_CATEGORY91_ID,
    MMI_CATEGORY92_ID,
    MMI_CATEGORY93_ID,
    MMI_CATEGORY95_ID,
#ifdef UI_SMALL_CATEGORY_EDITOR
    MMI_CATEGORY100_ID,
#endif 
    MMI_CATEGORY105_ID,
    MMI_CATEGORY106_ID,
    MMI_CATEGORY109_ID,
    MMI_CATEGORY111_ID,
#ifdef UI_SMALL_PIN_EDITOR_SCREEN
    MMI_CATEGORY112_ID,
#endif 
    MMI_CATEGORY115_ID,
    MMI_CATEGORY119_ID,
    MMI_CATEGORY120_ID,
    MMI_CATEGORY121_ID,
    MMI_CATEGORY122_ID,
    MMI_CATEGORY123_ID,
    MMI_CATEGORY123_NORMAL_ID,
    MMI_CATEGORY123_STATUS_ICON_ID,
    MMI_CATEGORY123_NONE_ID,
    MMI_CATEGORY124_STATUS_ICON_ID,
    MMI_CATEGORY124_TITLE_ID,
    MMI_CATEGORY124_NONE_ID,
    MMI_CATEGORY125_ID,
    MMI_CATEGORY128_ID,
    MMI_CATEGORY128_NORMAL_ID,
    MMI_CATEGORY128_STATUS_ICON_ID,
    MMI_CATEGORY128_NONE_ID,
    MMI_CATEGORY129_ID,
    MMI_CATEGORY130_ID,
    MMI_CATEGORY131_ID,
    MMI_CATEGORY132_ID,
    MMI_CATEGORY140_ID,
    MMI_CATEGORY141_ID,
    MMI_CATEGORY141_STATUS_ICON_ID,
    MMI_CATEGORY142_ID,
    MMI_CATEGORY142_STATUS_ICON_ID,
    MMI_CATEGORY143_ID,
    MMI_CATEGORY144_ID,
    MMI_CATEGORY145_ID,
    MMI_CATEGORY146_ID,
    MMI_CATEGORY150_ID,
    MMI_CATEGORY151_ID,
    MMI_CATEGORY151_NORMAL_ID,
    MMI_CATEGORY151_STATUS_ICON_ID,
    MMI_CATEGORY151_NONE_ID,
    MMI_CATEGORY152_ID,
    MMI_CATEGORY153_ID,
    MMI_CATEGORY154_ID,
    MMI_CATEGORY154_STATUS_ICON_ID,
    MMI_CATEGORY155_ID,
    MMI_CATEGORY157_ID,
    MMI_CATEGORY161_ID,
    MMI_CATEGORY162_ID,
    MMI_CATEGORY163_ID,
    MMI_CATEGORY164_ID,
    MMI_CATEGORY165_ID,
    MMI_CATEGORY166_ID,
    MMI_CATEGORY170_ID,
    MMI_CATEGORY171_ID,
    MMI_CATEGORY172_ID,
    MMI_CATEGORY174_ID,
    MMI_CATEGORY176_ID,
    MMI_CATEGORY184_ID,
    MMI_CATEGORY186_ID,
    MMI_CATEGORY200_ID,
    MMI_CATEGORY201_ID,
    MMI_CATEGORY204_ID,
    MMI_CATEGORY205_ID,
    MMI_CATEGORY212_ID,
    MMI_CATEGORY213_ID,
    MMI_CATEGORY214_ID,
    MMI_CATEGORY221_ID,
    MMI_CATEGORY222_ID,
    MMI_CATEGORY223_ID,
    MMI_CATEGORY223_NORMAL_ID,
    MMI_CATEGORY223_STATUS_ICON_ID,
    MMI_CATEGORY223_NONE_ID,
#if 0 /* remove not used category */   
/* under construction !*/
/* under construction !*/
#endif    
    MMI_CATEGORY227_ID,
    MMI_CATEGORY228_ID,
    MMI_CATEGORY229_ID,
#if defined ( __MMI_MAINLCD_240X320__) || defined ( __MMI_MAINLCD_320X240__)
    MMI_CATEGORY230_ID,/* NITZ category */
#endif
    MMI_CATEGORY257_ID,
    MMI_CATEGORY261_ID,
    MMI_CATEGORY262_ID,
    MMI_CATEGORY263_ID,
    MMI_CATEGORY264_ID,
#ifdef __MMI_CAT265_SUPPORT__ /* channel list */
    MMI_CATEGORY265_ID,
#endif
    MMI_CATEGORY273_ID,
    MMI_CATEGORY275_ID,
    MMI_CATEGORY276_ID,
#ifdef __UI_UNIFIED_COMPOSER_EDITOR_CATEGORY__
    MMI_CATEGORY280_ID,
#endif /* __UI_UNIFIED_COMPOSER_EDITOR_CATEGORY__ */
    MMI_CATEGORY301_ID,
    MMI_CATEGORY302_ID,
    MMI_CATEGORY303_ID,
    MMI_CATEGORY304_ID,
    MMI_CATEGORY305_ID,
    MMI_CATEGORY306_ID,
    MMI_CATEGORY307_ID,
    MMI_CATEGORY308_ID,
    MMI_CATEGORY309_ID,
    MMI_CATEGORY310_ID,
    MMI_CATEGORY311_ID,
    MMI_CATEGORY312_ID,
    MMI_CATEGORY313_ID,
    MMI_CATEGORY314_ID,
    MMI_CATEGORY315_ID,
    MMI_CATEGORY331_ID,
    MMI_CATEGORY333_ID,
    MMI_CATEGORY334_ID,
    MMI_CATEGORY353_ID,
    MMI_CATEGORY357_ID,
#ifdef __MMI_DUAL_SIM_MASTER__
    MMI_CATEGORY363_ID,
#endif  /* __MMI_DUAL_SIM_MASTER__ */
    MMI_CATEGORY384_ID,
    MMI_CATEGORY400_ID,
    MMI_CATEGORY402_ID,
    MMI_CATEGORY403_ID,
    MMI_CATEGORY404_ID,
    MMI_CATEGORY412_ID,
    MMI_CATEGORY414_ID,
    MMI_CATEGORY420_ID,
    MMI_CATEGORY425_ID,
    MMI_CATEGORY425_NO_TAB_ID,
#ifndef __MMI_MAINLCD_128X128__
    MMI_CATEGORY426_ID,
#endif
    MMI_CATEGORY427_ID,
    MMI_CATEGORY430_ID,
#ifdef __MMI_BROWSER_2__
    MMI_CATEGORY431_ID,
    MMI_CATEGORY431_FULL_ID,
#endif /* __MMI_BROWSER_2__ */
    MMI_CATEGORY435_ID,
#ifdef __MMI_CAT44X_SUPPORT__        
    MMI_CATEGORY440_ID,
    MMI_CATEGORY441_ID,
    MMI_CATEGORY442_ID,
    MMI_CATEGORY443_ID,
    MMI_CATEGORY444_ID,
    MMI_CATEGORY445_ID,
    MMI_CATEGORY446_ID,
    MMI_CATEGORY447_ID,
    MMI_CATEGORY448_ID,
    MMI_CATEGORY449_ID,
#endif /* __MMI_CAT44X_SUPPORT__ */
    MMI_CATEGORY525_ID,
    MMI_CATEGORY620_ID,
#ifdef __UI_MMS_VIEWER_CATEGORY__
    MMI_CATEGORY630_ID,
#endif /* __UI_MMS_VIEWER_CATEGORY__ */
    MMI_INLINE_BOX_HISTORY_ID,
    MMI_CATEGORY_EMS_ID,
    MMI_CATEGORY_PE_ID,
    MMI_CATEGORY_WCLOCK,
    MMI_CATEGORY_FM_SCHED_RECORD,
    MMI_CATEGORY_VDOPLY,
    MMI_CATEGORY_VDOPLY_BUTTON,
    MMI_CATEGORY_NSM275,
    MMI_CATEGORY626_ID,
    MMI_CATEGORY657_ID,
    MMI_CATEGORY_END
}MMI_CATEGORY_ID_LIST;

#endif /* WGUI_CATEGORIES_ENUM_H */ 