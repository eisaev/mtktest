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
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *   mmi.sap
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   l4 related message identity definition
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
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

   /*---------------MMI_MSG_CODE_END---------------------*/
/*MTK:BEGIN:generate_mmi_msg_id*/
/* Call Control Related Messages */
#if defined(__MOD_CSM__)
	MSG_ID_MMI_CC_RESET_ACM_REQ = MSG_ID_L4A_CODE_BEGIN ,
	MSG_ID_MMI_CC_RESET_ACM_RSP,
	MSG_ID_MMI_CC_GET_ACM_REQ,
	MSG_ID_MMI_CC_GET_ACM_RSP,
	MSG_ID_MMI_CC_SET_MAX_ACM_REQ,
	MSG_ID_MMI_CC_SET_MAX_ACM_RSP,
	MSG_ID_MMI_CC_GET_MAX_ACM_REQ,
	MSG_ID_MMI_CC_GET_MAX_ACM_RSP,
	MSG_ID_MMI_CC_GET_CCM_REQ,
	MSG_ID_MMI_CC_GET_CCM_RSP,
	MSG_ID_MMI_CC_SET_CUG_REQ,
	MSG_ID_MMI_CC_SET_CUG_RSP,
	MSG_ID_MMI_CC_GET_CUG_REQ,
	MSG_ID_MMI_CC_GET_CUG_RSP,
	MSG_ID_MMI_CC_CHLD_REQ,
	MSG_ID_MMI_CC_CHLD_RSP,
	MSG_ID_MMI_CC_HANGUP_REQ,
	MSG_ID_MMI_CC_HANGUP_RSP,
	MSG_ID_MMI_CC_ATH_REQ,
	MSG_ID_MMI_CC_ATH_RSP,
	MSG_ID_MMI_CC_GET_CALL_LIST_REQ,
	MSG_ID_MMI_CC_GET_CALL_LIST_RSP,
	MSG_ID_MMI_CC_CALL_DEFLECT_REQ,
	MSG_ID_MMI_CC_CALL_DEFLECT_RSP,
	MSG_ID_MMI_CC_START_DTMF_REQ,
	MSG_ID_MMI_CC_START_DTMF_RSP,
	MSG_ID_MMI_CC_STOP_DTMF_REQ,
	MSG_ID_MMI_CC_STOP_DTMF_RSP,
	MSG_ID_MMI_CC_START_AUTO_DTMF_REQ,
	MSG_ID_MMI_CC_START_AUTO_DTMF_RSP,
	MSG_ID_MMI_CC_START_AUTO_DTMF_IND,
	MSG_ID_MMI_CC_START_AUTO_DTMF_FINISH_IND,
	MSG_ID_MMI_CC_ATA_REQ,
	MSG_ID_MMI_CC_ATA_RSP,
	MSG_ID_MMI_CC_DISCONNECT_AUX_REQ,
	MSG_ID_MMI_CC_DISCONNECT_AUX_RSP,
	MSG_ID_MMI_CC_SET_LINE_REQ,
	MSG_ID_MMI_CC_SET_LINE_RSP,
	MSG_ID_MMI_CC_DIAL_REQ,
	MSG_ID_MMI_CC_DIAL_RSP,
	MSG_ID_MMI_CC_DIAL_REQ_IND,
	MSG_ID_MMI_CC_DIAL_IND,
	MSG_ID_MMI_CC_CALL_MODIFY_REQ,
	MSG_ID_MMI_CC_CALL_MODIFY_RSP,
	MSG_ID_MMI_CC_SET_SINGLE_NUM_REQ,
	MSG_ID_MMI_CC_SET_SINGLE_NUM_RSP,
	MSG_ID_MMI_CC_GET_SINGLE_NUM_REQ,
	MSG_ID_MMI_CC_GET_SINGLE_NUM_RSP,
	MSG_ID_MMI_CC_CCM_IND,
	MSG_ID_MMI_CC_INTERNAL_ALERT_IND,
	MSG_ID_MMI_CC_CALL_WAIT_IND,
	MSG_ID_MMI_CC_CALL_RING_IND,
	MSG_ID_MMI_CC_CALL_CONNECT_IND,
	MSG_ID_MMI_CC_CALL_DISCONNECT_IND,
	MSG_ID_MMI_CC_CALL_RELEASE_IND,
	MSG_ID_MMI_CC_SPEECH_IND,
	MSG_ID_MMI_CC_NAME_IND,
	MSG_ID_MMI_CC_NOTIFY_SS_IND,
	MSG_ID_MMI_CC_NOTIFY_SS_CUG_IND,
	MSG_ID_MMI_CC_NOTIFY_SS_ECT_IND,
	MSG_ID_MMI_CC_NOTIFY_SS_CNAP_IND,
	MSG_ID_MMI_CC_NOTIFY_SS_CCBS_IND,
	MSG_ID_MMI_CC_CALL_ACCEPT_REQ_IND,
	MSG_ID_MMI_CC_CALL_ABORT_REQ_IND,
	MSG_ID_MMI_CC_CALL_SYNC_REQ_IND,
	MSG_ID_MMI_CC_VIDEO_CALL_STATUS_IND,
	MSG_ID_MMI_CC_REL_COMP_REQ,
	MSG_ID_MMI_CC_REL_COMP_RSP,
#endif /* defined(__MOD_CSM__) */
	MSG_ID_MMI_CC_SET_BEARER_SERVICE_REQ,
	MSG_ID_MMI_CC_SET_BEARER_SERVICE_RSP,
	MSG_ID_MMI_CC_GET_BEARER_SERVICE_REQ,
	MSG_ID_MMI_CC_GET_BEARER_SERVICE_RSP,
	MSG_ID_MMI_CC_SET_CSD_PROFILE_REQ,
	MSG_ID_MMI_CC_SET_CSD_PROFILE_RSP,
	MSG_ID_MMI_CC_GET_CSD_PROFILE_REQ,
	MSG_ID_MMI_CC_GET_CSD_PROFILE_RSP,
	MSG_ID_MMI_CC_GET_FREE_CSD_PROFILE_NUM_REQ,
	MSG_ID_MMI_CC_GET_FREE_CSD_PROFILE_NUM_RSP,
	MSG_ID_MMI_SS_GET_EMLPP_PRIORITY_REQ,
	MSG_ID_MMI_SS_GET_EMLPP_PRIORITY_RSP,
	MSG_ID_MMI_SS_EMLPP_REQ,
	MSG_ID_MMI_SS_EMLPP_RSP,
	MSG_ID_MMI_SS_CALL_FORWARD_REQ,
	MSG_ID_MMI_SS_CALL_FORWARD_RSP,
	MSG_ID_MMI_SS_CALL_WAIT_REQ,
	MSG_ID_MMI_SS_CALL_WAIT_RSP,
	MSG_ID_MMI_SS_INTERROGATE_REQ,
	MSG_ID_MMI_SS_INTERROGATE_RSP,
	MSG_ID_MMI_SS_CDIP_INTERROGATE_IND,
	MSG_ID_MMI_SS_CLIP_INTERROGATE_IND,
	MSG_ID_MMI_SS_CLIR_INTERROGATE_IND,
	MSG_ID_MMI_SS_CNAP_INTERROGATE_IND,
	MSG_ID_MMI_SS_COLP_INTERROGATE_IND,
	MSG_ID_MMI_SS_COLR_INTERROGATE_IND,
	MSG_ID_MMI_SS_CALL_BARRING_REQ,
	MSG_ID_MMI_SS_CALL_BARRING_RSP,
	MSG_ID_MMI_SS_USSD_REQ,
	MSG_ID_MMI_SS_USSD_RSP,
	MSG_ID_MMI_SS_USSR_IND,
	MSG_ID_MMI_SS_USSN_IND,
	MSG_ID_MMI_SS_CHANGE_PASSWORD_REQ,
	MSG_ID_MMI_SS_CHANGE_PASSWORD_RSP,
	MSG_ID_MMI_SS_PARSING_STRING_REQ,
	MSG_ID_MMI_SS_PARSING_STRING_RSP,
	MSG_ID_MMI_SS_CB_PASSWORD_IND,
	MSG_ID_MMI_SMS_CB_GS_CHANGE_IND,
	MSG_ID_MMI_SS_CCBS_REQ,
	MSG_ID_MMI_SS_CCBS_RSP,
	MSG_ID_MMI_SS_ABORT_REQ,
	MSG_ID_MMI_SS_ABORT_RSP,
	MSG_ID_MMI_SS_SET_CLIR_FLAG_REQ,
	MSG_ID_MMI_SS_SET_CLIR_FLAG_RSP,
/* Hardware - Audio Related Service Messages */
#if defined(__MOD_UEM__)
	MSG_ID_MMI_EQ_SET_VOLUME_REQ,
	MSG_ID_MMI_EQ_SET_VOLUME_RSP,
	MSG_ID_MMI_EQ_EXE_VOLUME_REQ_IND,
	MSG_ID_MMI_EQ_VOLUME_CHANGE_IND,
	MSG_ID_MMI_EQ_SET_MUTE_REQ,
	MSG_ID_MMI_EQ_SET_MUTE_RSP,
	MSG_ID_MMI_EQ_EXE_MUTE_REQ_IND,
	MSG_ID_MMI_EQ_MUTE_CHANGE_IND,
	MSG_ID_MMI_EQ_SET_SILENT_MODE_REQ,
	MSG_ID_MMI_EQ_SET_SILENT_MODE_RSP,
	MSG_ID_MMI_EQ_SET_SILENT_MODE_REQ_IND,
	MSG_ID_MMI_EQ_SET_GPIO_LEVEL_REQ,
	MSG_ID_MMI_EQ_SET_GPIO_LEVEL_RSP,
	MSG_ID_MMI_EQ_SET_GPIO_LEVEL_REQ_IND,
	MSG_ID_MMI_EQ_GET_GPIO_LEVEL_REQ,
	MSG_ID_MMI_EQ_GET_GPIO_LEVEL_RSP,
	MSG_ID_MMI_EQ_EXE_GPIO_LEVEL_REQ,
	MSG_ID_MMI_EQ_EXE_GPIO_LEVEL_RSP,
	MSG_ID_MMI_EQ_EXE_GPIO_LEVEL_REQ_IND,
	MSG_ID_MMI_EQ_PLAY_AUDIO_REQ,
	MSG_ID_MMI_EQ_PLAY_AUDIO_RSP,
	MSG_ID_MMI_EQ_PLAY_AUDIO_FINISH_IND,
	MSG_ID_MMI_EQ_STOP_AUDIO_REQ,
	MSG_ID_MMI_EQ_STOP_AUDIO_RSP,
	MSG_ID_MMI_EQ_PLAY_AUDIO_STREAM_REQ,
	MSG_ID_MMI_EQ_PLAY_AUDIO_STREAM_RSP,
	MSG_ID_MMI_EQ_STOP_AUDIO_STREAM_REQ,
	MSG_ID_MMI_EQ_STOP_AUDIO_STREAM_RSP,
	MSG_ID_MMI_EQ_PLAY_EXT_IMELODY_REQ,
	MSG_ID_MMI_EQ_PLAY_EXT_IMELODY_RSP,
	MSG_ID_MMI_EQ_GPIO_DETECT_IND,
	MSG_ID_MMI_EQ_GPIO_DETECT_RES_REQ,
	MSG_ID_MMI_EQ_GPIO_DETECT_RES_RSP,
	MSG_ID_MMI_EQ_SET_SPEECH_MODE_REQ,
	MSG_ID_MMI_EQ_SET_SPEECH_MODE_RSP,
	MSG_ID_MMI_EQ_PLAY_AUDIO_BY_NAME_REQ,
	MSG_ID_MMI_EQ_PLAY_AUDIO_BY_NAME_RSP,
	MSG_ID_MMI_EQ_STOP_AUDIO_BY_NAME_REQ,
	MSG_ID_MMI_EQ_STOP_AUDIO_BY_NAME_RSP,
	MSG_ID_MMI_EQ_SET_AUDIO_PROFILE_REQ,
	MSG_ID_MMI_EQ_SET_AUDIO_PROFILE_RSP,
	MSG_ID_MMI_EQ_GET_AUDIO_PROFILE_REQ,
	MSG_ID_MMI_EQ_GET_AUDIO_PROFILE_RSP,
	MSG_ID_MMI_EQ_SET_AUDIO_PARAM_REQ,
	MSG_ID_MMI_EQ_SET_AUDIO_PARAM_RSP,
	MSG_ID_MMI_EQ_GET_AUDIO_PARAM_REQ,
	MSG_ID_MMI_EQ_GET_AUDIO_PARAM_RSP,
	MSG_ID_MMI_EQ_START_ADC_ALL_CHANNEL_REQ,
	MSG_ID_MMI_EQ_START_ADC_ALL_CHANNEL_RSP,
	MSG_ID_MMI_EQ_STOP_ADC_ALL_CHANNEL_REQ,
	MSG_ID_MMI_EQ_STOP_ADC_ALL_CHANNEL_RSP,
	MSG_ID_MMI_EQ_ADC_ALL_CHANNEL_IND,
	MSG_ID_MMI_EQ_SET_AUDIO_MODE_REQ,
	MSG_ID_MMI_EQ_SET_AUDIO_MODE_RSP,
	MSG_ID_MMI_EQ_PLAY_PATTERN_REQ,
	MSG_ID_MMI_EQ_PLAY_PATTERN_RSP,
	MSG_ID_MMI_EQ_SET_HW_LEVEL_REQ,
	MSG_ID_MMI_EQ_SET_HW_LEVEL_RSP,
	MSG_ID_MMI_EQ_GET_HW_LEVEL_REQ,
	MSG_ID_MMI_EQ_GET_HW_LEVEL_RSP,
	MSG_ID_MMI_EQ_SET_SLEEP_MODE_REQ,
	MSG_ID_MMI_EQ_SET_SLEEP_MODE_RSP,
	MSG_ID_MMI_EQ_SET_SLEEP_MODE_REQ_IND,
	MSG_ID_MMI_EQ_GET_MS_IMEI_REQ,
	MSG_ID_MMI_EQ_GET_MS_IMEI_RSP,
	MSG_ID_MMI_EQ_SET_MS_IMEI_REQ,
	MSG_ID_MMI_EQ_SET_MS_IMEI_RSP,
	MSG_ID_MMI_EQ_RTC_POWERON_STATE_REQ,
	MSG_ID_MMI_EQ_RTC_POWERON_STATE_RSP,
#endif /* defined(__MOD_UEM__) */
/* Hardware - RTC, Clock, Alarm Related Messages */
#if defined(__MOD_UEM__)
	MSG_ID_MMI_EQ_SET_RTC_TIME_REQ,
	MSG_ID_MMI_EQ_SET_RTC_TIME_RSP,
	MSG_ID_MMI_EQ_SET_RTC_TIME_REQ_IND,
	MSG_ID_MMI_EQ_EXE_RTC_TIMER_REQ,
	MSG_ID_MMI_EQ_EXE_RTC_TIMER_RSP,
	MSG_ID_MMI_EQ_GET_RTC_TIME_REQ,
	MSG_ID_MMI_EQ_GET_RTC_TIME_RSP,
	MSG_ID_MMI_EQ_DEL_RTC_TIMER_REQ,
	MSG_ID_MMI_EQ_DEL_RTC_TIMER_RSP,
	MSG_ID_MMI_EQ_DEL_RTC_TIMER_REQ_IND,
	MSG_ID_MMI_EQ_EXE_DEL_RTC_TIMER_REQ,
	MSG_ID_MMI_EQ_EXE_DEL_RTC_TIMER_RSP,
	MSG_ID_MMI_EQ_EXE_DEL_RTC_TIMER_REQ_IND,
	MSG_ID_MMI_EQ_SET_DATE_TIME_FORMAT_REQ,
	MSG_ID_MMI_EQ_SET_DATE_TIME_FORMAT_RSP,
	MSG_ID_MMI_EQ_SET_DATE_TIME_FORMAT_REQ_IND,
	MSG_ID_MMI_EQ_START_TIMER_REQ,
	MSG_ID_MMI_EQ_START_TIMER_RSP,
	MSG_ID_MMI_EQ_STOP_TIMER_REQ,
	MSG_ID_MMI_EQ_STOP_TIMER_RSP,
	MSG_ID_MMI_EQ_CLOCK_TICK_IND,
	MSG_ID_MMI_EQ_ALARM_IND,
	MSG_ID_MMI_AT_ALARM_QUERY_REQ_IND,
	MSG_ID_MMI_AT_ALARM_QUERY_RES_REQ,
	MSG_ID_MMI_AT_ALARM_QUERY_RES_RSP,
	MSG_ID_MMI_AT_ALARM_SET_REQ_IND,
	MSG_ID_MMI_AT_ALARM_SET_RES_REQ,
	MSG_ID_MMI_AT_ALARM_SET_RES_RSP,
	MSG_ID_MMI_AT_ALARM_DELETE_REQ_IND,
	MSG_ID_MMI_AT_ALARM_DELETE_RES_REQ,
	MSG_ID_MMI_AT_ALARM_DELETE_RES_RSP,
#endif /* defined(__MOD_UEM__) */
/* Hardware - Keypad, Indicator, LCD Related Messages */
#if defined(__MOD_UEM__)
	MSG_ID_MMI_EQ_SIMULATE_KEY_PRESS_REQ,
	MSG_ID_MMI_EQ_SIMULATE_KEY_PRESS_RSP,
	MSG_ID_MMI_EQ_SIMULATE_KEY_PRESS_REQ_IND,
	MSG_ID_MMI_EQ_SET_INDICATOR_REQ,
	MSG_ID_MMI_EQ_SET_INDICATOR_RSP,
	MSG_ID_MMI_EQ_SET_INDICATOR_REQ_IND,
	MSG_ID_MMI_EQ_GET_INDICATOR_REQ,
	MSG_ID_MMI_EQ_GET_INDICATOR_RSP,
	MSG_ID_MMI_EQ_DISPLAY_TEXT_REQ,
	MSG_ID_MMI_EQ_DISPLAY_TEXT_RSP,
	MSG_ID_MMI_EQ_DISPLAY_TEXT_REQ_IND,
	MSG_ID_MMI_EQ_KEYPAD_DETECT_IND,
#endif /* defined(__MOD_UEM__) */
/* Hardware - Misc Messages */
#if defined(__MOD_UEM__)
	MSG_ID_MMI_EQ_SET_LANGUAGE_REQ,
	MSG_ID_MMI_EQ_SET_LANGUAGE_RSP,
	MSG_ID_MMI_EQ_SET_LANGUAGE_REQ_IND,
	MSG_ID_MMI_EQ_SET_GREETING_TEXT_REQ,
	MSG_ID_MMI_EQ_SET_GREETING_TEXT_RSP,
	MSG_ID_MMI_EQ_SET_GREETING_TEXT_REQ_IND,
	MSG_ID_MMI_EQ_SET_VIBRATOR_MODE_REQ_IND,
	MSG_ID_MMI_EQ_SET_VIBRATOR_MODE_REQ,
	MSG_ID_MMI_EQ_SET_VIBRATOR_MODE_RSP,
	MSG_ID_MMI_EQ_SET_COUNTRY_CODE_REQ,
	MSG_ID_MMI_EQ_SET_COUNTRY_CODE_RSP,
	MSG_ID_MMI_EQ_GET_COUNTRY_CODE_REQ,
	MSG_ID_MMI_EQ_GET_COUNTRY_CODE_RSP,
	MSG_ID_MMI_EQ_GET_BATTERY_STATUS_REQ,
	MSG_ID_MMI_EQ_GET_BATTERY_STATUS_RSP,
	MSG_ID_MMI_EQ_GET_EQUIP_ID_REQ,
	MSG_ID_MMI_EQ_GET_EQUIP_ID_RSP,
	MSG_ID_MMI_EQ_LOAD_DEFAULT_CONFIG_REQ,
	MSG_ID_MMI_EQ_LOAD_DEFAULT_CONFIG_RSP,
	MSG_ID_MMI_EQ_POWER_ON_REQ,
	MSG_ID_MMI_EQ_POWER_ON_RSP,
	MSG_ID_MMI_EQ_POWER_OFF_REQ,
	MSG_ID_MMI_EQ_POWER_OFF_RSP,
	MSG_ID_MMI_EQ_POWER_ON_IND,
	MSG_ID_MMI_EQ_BATTERY_STATUS_IND,
	MSG_ID_MMI_EQ_LEAVE_PRECHARGE_IND,
	MSG_ID_MMI_EQ_PMIC_CONFIG_REQ,
	MSG_ID_MMI_EQ_PMIC_CONFIG_RSP,
	MSG_ID_MMI_EQ_BATTERY_STATUS_RES_REQ,
	MSG_ID_MMI_EQ_BATTERY_STATUS_RES_RSP,
	MSG_ID_MMI_EQ_RF_TEST_GSM_REQ,
	MSG_ID_MMI_EQ_RF_TEST_GSM_RSP,
	MSG_ID_MMI_EQ_FM_RADIO_CONFIG_REQ,
	MSG_ID_MMI_EQ_FM_RADIO_CONFIG_RSP,
	MSG_ID_MMI_EQ_RF_TEST_WIFI_REQ,
	MSG_ID_MMI_EQ_RF_TEST_WIFI_RSP,
	MSG_ID_MMI_EQ_CALL_STATUS_REQ,
	MSG_ID_MMI_EQ_CALL_STATUS_RSP,
#endif /* defined(__MOD_UEM__) */
/* Hardware - NVRAM messages */
#if defined(__MOD_NVRAM__)
	MSG_ID_MMI_EQ_NVRAM_READ_REQ,
	MSG_ID_MMI_EQ_NVRAM_READ_RSP,
	MSG_ID_MMI_EQ_NVRAM_WRITE_REQ,
	MSG_ID_MMI_EQ_NVRAM_WRITE_RSP,
	MSG_ID_MMI_EQ_NVRAM_RESET_REQ,
	MSG_ID_MMI_EQ_NVRAM_RESET_RSP,
	MSG_ID_MMI_EQ_SET_UART_REQ,
	MSG_ID_MMI_EQ_SET_UART_RSP,
	MSG_ID_MMI_EQ_GET_UART_REQ,
	MSG_ID_MMI_EQ_GET_UART_RSP,
	MSG_ID_MMI_ATTACH_UART_PORT_REQ,
	MSG_ID_MMI_ATTACH_UART_PORT_RSP,
	MSG_ID_MMI_DETACH_UART_PORT_REQ,
	MSG_ID_MMI_DETACH_UART_PORT_RSP,
	MSG_ID_MMI_EQ_NVRAM_READY_IND,
	MSG_ID_MMI_EQ_DCM_ENABLE_REQ,
	MSG_ID_MMI_EQ_DCM_ENABLE_RSP,
#endif /* defined(__MOD_NVRAM__) */
/* Network Related Messages */
#if defined(__MOD_RAC__)
	MSG_ID_MMI_NW_GET_IMEI_REQ,
	MSG_ID_MMI_NW_GET_IMEI_RSP,
	MSG_ID_MMI_NW_ABORT_PLMN_LIST_REQ,
	MSG_ID_MMI_NW_ABORT_PLMN_LIST_RSP,
	MSG_ID_MMI_NW_SET_ATTACH_REQ,
	MSG_ID_MMI_NW_SET_ATTACH_RSP,
	MSG_ID_MMI_NW_GET_ATTACH_REQ,
	MSG_ID_MMI_NW_GET_ATTACH_RSP,
	MSG_ID_MMI_NW_SET_MOBILE_CLASS_REQ,
	MSG_ID_MMI_NW_SET_MOBILE_CLASS_RSP,
	MSG_ID_MMI_NW_GET_MOBILE_CLASS_REQ,
	MSG_ID_MMI_NW_GET_MOBILE_CLASS_RSP,
	MSG_ID_MMI_NW_SET_PLMN_SELECT_MODE_REQ,
	MSG_ID_MMI_NW_SET_PLMN_SELECT_MODE_RSP,
	MSG_ID_MMI_NW_GET_PLMN_SELECT_MODE_REQ,
	MSG_ID_MMI_NW_GET_PLMN_SELECT_MODE_RSP,
	MSG_ID_MMI_NW_SET_PLMN_REQ,
	MSG_ID_MMI_NW_SET_PLMN_RSP,
	MSG_ID_MMI_NW_GET_PLMN_LIST_REQ,
	MSG_ID_MMI_NW_GET_PLMN_LIST_RSP,
	MSG_ID_MMI_NW_GET_CURRENT_PLMN_REQ,
	MSG_ID_MMI_NW_GET_CURRENT_PLMN_RSP,
	MSG_ID_MMI_NW_GET_SIGNAL_LEVEL_REQ,
	MSG_ID_MMI_NW_GET_SIGNAL_LEVEL_RSP,
	MSG_ID_MMI_NW_GET_BAND_REQ,
	MSG_ID_MMI_NW_GET_BAND_RSP,
	MSG_ID_MMI_NW_ATTACH_IND,
	MSG_ID_MMI_NW_REG_STATE_IND,
	MSG_ID_MMI_NW_RX_LEVEL_IND,
	MSG_ID_MMI_NW_TIME_ZONE_IND,
	MSG_ID_MMI_NW_SEL_MODE_IND,
	MSG_ID_MMI_NW_MMRR_SERVICE_STATUS_IND,
	MSG_ID_MMI_NW_SET_PREFERRED_BAND_REQ,
	MSG_ID_MMI_NW_SET_PREFERRED_BAND_RSP,
	MSG_ID_MMI_NW_SET_GPRS_CONNECT_TYPE_REQ,
	MSG_ID_MMI_NW_SET_GPRS_CONNECT_TYPE_RSP,
	MSG_ID_MMI_NW_GET_GPRS_CONNECT_TYPE_REQ,
	MSG_ID_MMI_NW_GET_GPRS_CONNECT_TYPE_RSP,
	MSG_ID_MMI_NW_PWROFF_DETACH_REQ,
	MSG_ID_MMI_NW_PWROFF_DETACH_RSP,
	MSG_ID_MMI_NW_CFUN_STATE_REQ,
	MSG_ID_MMI_NW_CFUN_STATE_RSP,
	MSG_ID_MMI_NW_GET_RAT_MODE_REQ,
	MSG_ID_MMI_NW_GET_RAT_MODE_RSP,
	MSG_ID_MMI_NW_SET_RAT_MODE_REQ,
	MSG_ID_MMI_NW_SET_RAT_MODE_RSP,
	MSG_ID_MMI_NW_GET_PREFER_RAT_REQ,
	MSG_ID_MMI_NW_GET_PREFER_RAT_RSP,
	MSG_ID_MMI_NW_SET_PREFER_RAT_REQ,
	MSG_ID_MMI_NW_SET_PREFER_RAT_RSP,
#endif /* defined(__MOD_RAC__) */
/* Security Related Messages */
#if defined(__MOD_SMU__)
	MSG_ID_MMI_SMU_GET_IMSI_REQ,
	MSG_ID_MMI_SMU_GET_IMSI_RSP,
	MSG_ID_MMI_SMU_LOCK_REQ,
	MSG_ID_MMI_SMU_LOCK_RSP,
	MSG_ID_MMI_SMU_RESET_DATA_REQ,
	MSG_ID_MMI_SMU_RESET_DATA_RSP,
	MSG_ID_MMI_SMU_GET_DIAL_MODE_REQ,
	MSG_ID_MMI_SMU_GET_DIAL_MODE_RSP,
	MSG_ID_MMI_SMU_VERIFY_PIN_REQ,
	MSG_ID_MMI_SMU_VERIFY_PIN_RSP,
	MSG_ID_MMI_SMU_GET_PIN_TYPE_REQ,
	MSG_ID_MMI_SMU_GET_PIN_TYPE_RSP,
	MSG_ID_MMI_SMU_SET_PREFERRED_OPER_LIST_REQ,
	MSG_ID_MMI_SMU_SET_PREFERRED_OPER_LIST_RSP,
	MSG_ID_MMI_SMU_GET_PREFERRED_OPER_LIST_REQ,
	MSG_ID_MMI_SMU_GET_PREFERRED_OPER_LIST_RSP,
	MSG_ID_MMI_SMU_SET_PUC_REQ,
	MSG_ID_MMI_SMU_SET_PUC_RSP,
	MSG_ID_MMI_SMU_GET_PUC_REQ,
	MSG_ID_MMI_SMU_GET_PUC_RSP,
	MSG_ID_MMI_SMU_CHANGE_PASSWORD_REQ,
	MSG_ID_MMI_SMU_CHANGE_PASSWORD_RSP,
	MSG_ID_MMI_SMU_RESTRICTED_ACCESS_REQ,
	MSG_ID_MMI_SMU_RESTRICTED_ACCESS_RSP,
	MSG_ID_MMI_SMU_SET_DIAL_MODE_REQ,
	MSG_ID_MMI_SMU_SET_DIAL_MODE_RSP,
	MSG_ID_MMI_SMU_WRITE_SIM_REQ,
	MSG_ID_MMI_SMU_WRITE_SIM_RSP,
	MSG_ID_MMI_SMU_READ_SIM_REQ,
	MSG_ID_MMI_SMU_READ_SIM_RSP,
	MSG_ID_MMI_SMU_POWER_OFF_REQ,
	MSG_ID_MMI_SMU_POWER_OFF_RSP,
	MSG_ID_MMI_SMU_REMOVE_REQ,
	MSG_ID_MMI_SMU_REMOVE_RSP,
	MSG_ID_MMI_SMU_PASSWORD_REQUIRED_IND,
	MSG_ID_MMI_SMU_SUPPORT_PLMN_LIST_IND,
	MSG_ID_MMI_SMU_FAIL_IND,
	MSG_ID_MMI_SMU_READ_FILE_INFO_REQ,
	MSG_ID_MMI_SMU_READ_FILE_INFO_RSP,
	MSG_ID_MMI_SMU_CHECK_PIN_STATUS_REQ,
	MSG_ID_MMI_SMU_CHECK_PIN_STATUS_RSP,
	MSG_ID_MMI_SMU_STARTUP_INFO_IND,
	MSG_ID_MMI_SMU_CIPHER_IND,
	MSG_ID_MMI_SMU_SET_PERSONALIZATION_REQ,
	MSG_ID_MMI_SMU_SET_PERSONALIZATION_RSP,
	MSG_ID_MMI_SMU_SML_STATUS_REQ,
	MSG_ID_MMI_SMU_SML_STATUS_RSP,
	MSG_ID_MMI_SMU_VERIFY_PIN_RESULT_IND,
#endif /* defined(__MOD_SMU__) */
/* PhoneBook Related Messages */
#if defined(__MOD_PHB__)
	MSG_ID_MMI_PHB_GET_ENTRY_BY_NAME_REQ,
	MSG_ID_MMI_PHB_GET_ENTRY_BY_NAME_RSP,
	MSG_ID_MMI_PHB_GET_ENTRY_BY_INDEX_REQ,
	MSG_ID_MMI_PHB_GET_ENTRY_BY_INDEX_RSP,
	MSG_ID_MMI_PHB_SET_PREFERRED_STORAGE_REQ,
	MSG_ID_MMI_PHB_SET_PREFERRED_STORAGE_RSP,
	MSG_ID_MMI_PHB_GET_PREFERRED_STORAGE_REQ,
	MSG_ID_MMI_PHB_GET_PREFERRED_STORAGE_RSP,
	MSG_ID_MMI_PHB_SET_ENTRY_REQ,
	MSG_ID_MMI_PHB_SET_ENTRY_RSP,
	MSG_ID_MMI_PHB_DEL_ENTRY_REQ,
	MSG_ID_MMI_PHB_DEL_ENTRY_RSP,
	MSG_ID_MMI_PHB_SET_VOICE_MAIL_SERVER_REQ,
	MSG_ID_MMI_PHB_SET_VOICE_MAIL_SERVER_RSP,
	MSG_ID_MMI_PHB_GET_ALPHA_LIST_REQ,
	MSG_ID_MMI_PHB_GET_ALPHA_LIST_RSP,
	MSG_ID_MMI_PHB_GET_TYPE_STATUS_REQ,
	MSG_ID_MMI_PHB_GET_TYPE_STATUS_RSP,
	MSG_ID_MMI_PHB_GET_LAST_NUMBER_REQ,
	MSG_ID_MMI_PHB_GET_LAST_NUMBER_RSP,
	MSG_ID_MMI_PHB_SET_LAST_NUMBER_REQ,
	MSG_ID_MMI_PHB_SET_LAST_NUMBER_RSP,
	MSG_ID_MMI_PHB_DEL_LAST_NUMBER_REQ,
	MSG_ID_MMI_PHB_DEL_LAST_NUMBER_RSP,
	MSG_ID_MMI_PHB_LAST_NUMBER_READY_IND,
	MSG_ID_MMI_PHB_STARTUP_FINISH_IND,
	MSG_ID_MMI_PHB_MEM_FULL_IND,
	MSG_ID_MMI_PHB_UPDATE_IND,
	MSG_ID_MMI_PHB_STARTUP_READ_IND,
	MSG_ID_MMI_PHB_STARTUP_BEGIN_IND,
	MSG_ID_MMI_PHB_STARTUP_READ_NEXT_REQ,
	MSG_ID_MMI_PHB_STARTUP_READ_NEXT_RSP,
	MSG_ID_MMI_PHB_STARTUP_PHASE1_IND,
	MSG_ID_MMI_PHB_STARTUP_READ_NEXT_USIM_FIELD_REQ,
	MSG_ID_MMI_PHB_STARTUP_READ_ANR_IND,
	MSG_ID_MMI_PHB_STARTUP_READ_EMAIL_IND,
	MSG_ID_MMI_PHB_READ_EMAIL_REQ,
	MSG_ID_MMI_PHB_READ_EMAIL_RSP,
	MSG_ID_MMI_PHB_STARTUP_READ_GAS_IND,
	MSG_ID_MMI_PHB_STARTUP_READ_GRP_IND,
	MSG_ID_MMI_PHB_SET_GRP_REQ,
	MSG_ID_MMI_PHB_SET_GRP_RSP,
	MSG_ID_MMI_PHB_WRITE_USIM_REQ,
	MSG_ID_MMI_PHB_WRITE_USIM_RSP,
#endif /* defined(__MOD_PHB__) */
	MSG_ID_MMI_SMS_SET_PROFILE_PARAMS_REQ,
	MSG_ID_MMI_SMS_SET_PROFILE_PARAMS_RSP,
	MSG_ID_MMI_SMS_GET_PROFILE_PARAMS_REQ,
	MSG_ID_MMI_SMS_GET_PROFILE_PARAMS_RSP,
	MSG_ID_MMI_SMS_SET_COMMON_PARAMS_REQ,
	MSG_ID_MMI_SMS_SET_COMMON_PARAMS_RSP,
	MSG_ID_MMI_SMS_GET_COMMON_PARAMS_REQ,
	MSG_ID_MMI_SMS_GET_COMMON_PARAMS_RSP,
	MSG_ID_MMI_SMS_SEND_COMMAND_REQ,
	MSG_ID_MMI_SMS_SEND_COMMAND_RSP,
	MSG_ID_MMI_SMS_DEL_MSG_REQ,
	MSG_ID_MMI_SMS_DEL_MSG_RSP,
	MSG_ID_MMI_SMS_GET_MSG_REQ,
	MSG_ID_MMI_SMS_GET_MSG_RSP,
	MSG_ID_MMI_SMS_SEND_MSG_REQ,
	MSG_ID_MMI_SMS_SEND_MSG_RSP,
	MSG_ID_MMI_SMS_SET_MSG_REQ,
	MSG_ID_MMI_SMS_SET_MSG_RSP,
	MSG_ID_MMI_SMS_SET_PREFERRED_STORAGE_REQ,
	MSG_ID_MMI_SMS_SET_PREFERRED_STORAGE_RSP,
	MSG_ID_MMI_SMS_GET_PREFERRED_STORAGE_REQ,
	MSG_ID_MMI_SMS_GET_PREFERRED_STORAGE_RSP,
	MSG_ID_MMI_SMS_REG_PORT_NUM_REQ,
	MSG_ID_MMI_SMS_REG_PORT_NUM_RSP,
	MSG_ID_MMI_SMS_DELIVER_MSG_IND,
	MSG_ID_MMI_SMS_STATUS_REPORT_IND,
	MSG_ID_MMI_SMS_MEM_AVAILABLE_IND,
	MSG_ID_MMI_SMS_MEM_EXCEED_IND,
	MSG_ID_MMI_SMS_MEM_FULL_IND,
	MSG_ID_MMI_SMS_READY_IND,
	MSG_ID_MMI_SMS_APP_DATA_IND,
	MSG_ID_MMI_SMS_GET_MSG_NUM_REQ,
	MSG_ID_MMI_SMS_GET_MSG_NUM_RSP,
	MSG_ID_MMI_SMS_GET_PROFILE_NUM_REQ,
	MSG_ID_MMI_SMS_GET_PROFILE_NUM_RSP,
	MSG_ID_MMI_SMS_ABORT_REQ,
	MSG_ID_MMI_SMS_ABORT_RSP,
	MSG_ID_MMI_SMS_MSG_WAITING_IND,
	MSG_ID_MMI_SMS_SET_MAILBOX_ADDRESS_REQ,
	MSG_ID_MMI_SMS_SET_MAILBOX_ADDRESS_RSP,
	MSG_ID_MMI_SMS_GET_MAILBOX_ADDRESS_REQ,
	MSG_ID_MMI_SMS_GET_MAILBOX_ADDRESS_RSP,
	MSG_ID_MMI_SMS_SYNC_MSG_IND,
	MSG_ID_MMI_SMS_SYNC_MSG_RES_REQ,
	MSG_ID_MMI_SMS_SYNC_MSG_RES_RSP,
	MSG_ID_MMI_SMS_SEND_ABORT_START_IND,
	MSG_ID_MMI_SMS_SEND_ABORT_FINISH_IND,
	MSG_ID_MMI_SMS_STARTUP_BEGIN_IND,
	MSG_ID_MMI_SMS_STARTUP_FINISH_IND,
	MSG_ID_MMI_SMS_STARTUP_READ_NEXT_REQ,
	MSG_ID_MMI_SMS_STARTUP_READ_NEXT_RSP,
	MSG_ID_MMI_SMS_STARTUP_READ_MSG_IND,
	MSG_ID_MMI_SMS_COPY_MSG_REQ,
	MSG_ID_MMI_SMS_COPY_MSG_RSP,
	MSG_ID_MMI_SMS_GET_MSG_LIST_REQ,
	MSG_ID_MMI_SMS_GET_MSG_LIST_RSP,
	MSG_ID_MMI_SMS_SEND_FROM_STORAGE_REQ,
	MSG_ID_MMI_SMS_SEND_FROM_STORAGE_RSP,
	MSG_ID_MMI_SMS_SET_STATUS_REQ,
	MSG_ID_MMI_SMS_SET_STATUS_RSP,
/* Data Related Messages */
#if defined(__MOD_DATA__)
	MSG_ID_MMI_DF_SET_RLP_PARAMS_REQ,
	MSG_ID_MMI_DF_SET_RLP_PARAMS_RSP,
	MSG_ID_MMI_DF_GET_RLP_PARAMS_REQ,
	MSG_ID_MMI_DF_GET_RLP_PARAMS_RSP,
	MSG_ID_MMI_DF_SET_V120_PARAMS_REQ,
	MSG_ID_MMI_DF_SET_V120_PARAMS_RSP,
	MSG_ID_MMI_DF_GET_V120_PARAMS_REQ,
	MSG_ID_MMI_DF_GET_V120_PARAMS_RSP,
	MSG_ID_MMI_DF_SET_COMP_PARAMS_REQ,
	MSG_ID_MMI_DF_SET_COMP_PARAMS_RSP,
	MSG_ID_MMI_DF_GET_COMP_PARAMS_REQ,
	MSG_ID_MMI_DF_GET_COMP_PARAMS_RSP,
	MSG_ID_MMI_DF_SET_BEARER_MODE_REQ,
	MSG_ID_MMI_DF_SET_BEARER_MODE_RSP,
	MSG_ID_MMI_DF_GET_BEARER_MODE_REQ,
	MSG_ID_MMI_DF_GET_BEARER_MODE_RSP,
	MSG_ID_MMI_DF_SET_CHAR_FRAMING_REQ,
	MSG_ID_MMI_DF_SET_CHAR_FRAMING_RSP,
	MSG_ID_MMI_DF_GET_CHAR_FRAMING_REQ,
	MSG_ID_MMI_DF_GET_CHAR_FRAMING_RSP,
#endif /* defined(__MOD_DATA__) */
	MSG_ID_MMI_DF_BACK_DATA_STATE_REQ,
	MSG_ID_MMI_DF_BACK_DATA_STATE_RSP,
/* GPRS Related Messages */
#if defined(__MOD_TCM__)
	MSG_ID_MMI_PS_ACT_REQ,
	MSG_ID_MMI_PS_ACT_RSP,
	MSG_ID_MMI_PS_ACT_TEST_REQ,
	MSG_ID_MMI_PS_ACT_TEST_RSP,
	MSG_ID_MMI_PS_ANSWER_REQ,
	MSG_ID_MMI_PS_ANSWER_RSP,
	MSG_ID_MMI_PS_SET_AUTO_ANSWER_REQ,
	MSG_ID_MMI_PS_SET_AUTO_ANSWER_RSP,
	MSG_ID_MMI_PS_GET_AUTO_ANSWER_REQ,
	MSG_ID_MMI_PS_GET_AUTO_ANSWER_RSP,
	MSG_ID_MMI_PS_MODIFY_REQ,
	MSG_ID_MMI_PS_MODIFY_RSP,
	MSG_ID_MMI_PS_ENTER_DATA_STATE_REQ,
	MSG_ID_MMI_PS_ENTER_DATA_STATE_RSP,
	MSG_ID_MMI_PS_SET_DEFINITION_REQ,
	MSG_ID_MMI_PS_SET_DEFINITION_RSP,
	MSG_ID_MMI_PS_GET_DEFINITION_REQ,
	MSG_ID_MMI_PS_GET_DEFINITION_RSP,
	MSG_ID_MMI_PS_SET_SEC_DEFINITION_REQ,
	MSG_ID_MMI_PS_SET_SEC_DEFINITION_RSP,
	MSG_ID_MMI_PS_GET_SEC_DEFINITION_REQ,
	MSG_ID_MMI_PS_GET_SEC_DEFINITION_RSP,
	MSG_ID_MMI_PS_GET_PDP_ADDR_REQ,
	MSG_ID_MMI_PS_GET_PDP_ADDR_RSP,
	MSG_ID_MMI_PS_SET_TFT_REQ,
	MSG_ID_MMI_PS_SET_TFT_RSP,
	MSG_ID_MMI_PS_GET_TFT_REQ,
	MSG_ID_MMI_PS_GET_TFT_RSP,
	MSG_ID_MMI_PS_SET_QOS_REQ,
	MSG_ID_MMI_PS_SET_QOS_RSP,
	MSG_ID_MMI_PS_SET_EQOS_REQ,
	MSG_ID_MMI_PS_SET_EQOS_RSP,
	MSG_ID_MMI_PS_SEND_DATA_REQ,
	MSG_ID_MMI_PS_SEND_DATA_RSP,
	MSG_ID_MMI_PS_ACTIVE_IND,
	MSG_ID_MMI_PS_GPRS_STATUS_UPDATE_IND,
	MSG_ID_MMI_PS_GET_GPRS_EMPTY_PROFILE_REQ,
	MSG_ID_MMI_PS_GET_GPRS_EMPTY_PROFILE_RSP,
	MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ,
	MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_RSP,
	MSG_ID_MMI_PS_SET_GPRS_DATA_ACCOUNT_REQ,
	MSG_ID_MMI_PS_SET_GPRS_DATA_ACCOUNT_RSP,
	MSG_ID_MMI_PS_GET_GPRS_DATA_ACCOUNT_REQ,
	MSG_ID_MMI_PS_GET_GPRS_DATA_ACCOUNT_RSP,
	MSG_ID_MMI_PS_RESET_GPRS_DATA_COUNTER_REQ,
	MSG_ID_MMI_PS_RESET_GPRS_DATA_COUNTER_RSP,
#endif /* defined(__MOD_TCM__) */
/* STK/SAT Related Messages */
#if defined(__SAT__)
	MSG_ID_MMI_SAT_DISPLAY_TEXT_IND,
	MSG_ID_MMI_SAT_DISPLAY_TEXT_RES_REQ,
	MSG_ID_MMI_SAT_DISPLAY_TEXT_RES_RSP,
	MSG_ID_MMI_SAT_GET_INKEY_IND,
	MSG_ID_MMI_SAT_GET_INKEY_RES_REQ,
	MSG_ID_MMI_SAT_GET_INKEY_RES_RSP,
	MSG_ID_MMI_SAT_GET_INPUT_IND,
	MSG_ID_MMI_SAT_GET_INPUT_RES_REQ,
	MSG_ID_MMI_SAT_GET_INPUT_RES_RSP,
	MSG_ID_MMI_SAT_SETUP_MENU_IND,
	MSG_ID_MMI_SAT_SETUP_MENU_RES_REQ,
	MSG_ID_MMI_SAT_SETUP_MENU_RES_RSP,
	MSG_ID_MMI_SAT_SELECT_ITEM_IND,
	MSG_ID_MMI_SAT_SELECT_ITEM_RES_REQ,
	MSG_ID_MMI_SAT_SELECT_ITEM_RES_RSP,
	MSG_ID_MMI_SAT_PLAY_TONE_IND,
	MSG_ID_MMI_SAT_PLAY_TONE_RES_REQ,
	MSG_ID_MMI_SAT_PLAY_TONE_RES_RSP,
	MSG_ID_MMI_SAT_MENU_SELECT_REQ,
	MSG_ID_MMI_SAT_MENU_SELECT_RSP,
	MSG_ID_MMI_SAT_EVDL_IDLE_SCREEN_AVAILABLE_REQ,
	MSG_ID_MMI_SAT_EVDL_IDLE_SCREEN_AVAILABLE_RSP,
	MSG_ID_MMI_SAT_LANGUAGE_SELECTION_REQ,
	MSG_ID_MMI_SAT_LANGUAGE_SELECTION_RSP,
	MSG_ID_MMI_SAT_EVDL_BROWSER_TERMINATION_REQ,
	MSG_ID_MMI_SAT_EVDL_BROWSER_TERMINATION_RSP,
	MSG_ID_MMI_SAT_CALL_SETUP_IND,
	MSG_ID_MMI_SAT_CALL_SETUP_STAGE1_REQ,
	MSG_ID_MMI_SAT_CALL_SETUP_STAGE1_RSP,
	MSG_ID_MMI_SAT_CALL_SETUP_STAGE2_REQ,
	MSG_ID_MMI_SAT_CALL_SETUP_STAGE2_RSP,
	MSG_ID_MMI_SAT_SEND_SMS_IND,
	MSG_ID_MMI_SAT_SEND_SMS_STAGE1_REQ,
	MSG_ID_MMI_SAT_SEND_SMS_STAGE1_RSP,
	MSG_ID_MMI_SAT_SEND_SMS_STAGE2_REQ,
	MSG_ID_MMI_SAT_SEND_SMS_STAGE2_RSP,
	MSG_ID_MMI_SAT_SEND_SS_IND,
	MSG_ID_MMI_SAT_SEND_SS_STAGE1_REQ,
	MSG_ID_MMI_SAT_SEND_SS_STAGE1_RSP,
	MSG_ID_MMI_SAT_SEND_SS_STAGE2_REQ,
	MSG_ID_MMI_SAT_SEND_SS_STAGE2_RSP,
	MSG_ID_MMI_SAT_SEND_USSD_IND,
	MSG_ID_MMI_SAT_SEND_USSD_STAGE1_REQ,
	MSG_ID_MMI_SAT_SEND_USSD_STAGE1_RSP,
	MSG_ID_MMI_SAT_SEND_USSD_STAGE2_REQ,
	MSG_ID_MMI_SAT_SEND_USSD_STAGE2_RSP,
	MSG_ID_MMI_SAT_MMI_INFO_IND,
	MSG_ID_MMI_SAT_SETUP_IDLE_DISPLAY_RES_REQ,
	MSG_ID_MMI_SAT_SETUP_IDLE_DISPLAY_RES_RSP,
	MSG_ID_MMI_SAT_SETUP_IDLE_DISPLAY_IND,
	MSG_ID_MMI_SAT_RUN_AT_COMMAND_IND,
	MSG_ID_MMI_SAT_SEND_DTMF_IND,
	MSG_ID_MMI_SAT_SEND_DTMF_STAGE1_REQ,
	MSG_ID_MMI_SAT_SEND_DTMF_STAGE1_RSP,
	MSG_ID_MMI_SAT_SEND_DTMF_STAGE2_REQ,
	MSG_ID_MMI_SAT_SEND_DTMF_STAGE2_RSP,
	MSG_ID_MMI_SAT_ABORT_DTMF_REQ,
	MSG_ID_MMI_SAT_ABORT_DTMF_RSP,
	MSG_ID_MMI_SAT_LANG_NOTIFY_RES_REQ,
	MSG_ID_MMI_SAT_LANG_NOTIFY_RES_RSP,
	MSG_ID_MMI_SAT_LANG_NOTIFY_IND,
	MSG_ID_MMI_SAT_LAUNCH_BROWSER_RES_REQ,
	MSG_ID_MMI_SAT_LAUNCH_BROWSER_RES_RSP,
	MSG_ID_MMI_SAT_LAUNCH_BROWSER_IND,
	MSG_ID_MMI_SAT_NO_OTHER_CMD_IND,
	MSG_ID_MMI_SAT_SIM_FILE_CHANGE_IND,
#endif /* defined(__SAT__) */
/* STK_CE */
#if defined(__SATCE__)
	MSG_ID_MMI_SAT_OPEN_CHANNEL_IND,
	MSG_ID_MMI_SAT_OPEN_CHANNEL_REQ,
	MSG_ID_MMI_SAT_OPEN_CHANNEL_RSP,
	MSG_ID_MMI_SAT_CLOSE_CHANNEL_IND,
	MSG_ID_MMI_SAT_CLOSE_CHANNEL_REQ,
	MSG_ID_MMI_SAT_CLOSE_CHANNEL_RSP,
	MSG_ID_MMI_SAT_SEND_DATA_IND,
	MSG_ID_MMI_SAT_SEND_DATA_REQ,
	MSG_ID_MMI_SAT_SEND_DATA_RSP,
	MSG_ID_MMI_SAT_RECV_DATA_IND,
	MSG_ID_MMI_SAT_RECV_DATA_REQ,
	MSG_ID_MMI_SAT_RECV_DATA_RSP,
	MSG_ID_MMI_SAT_NOTIFY_MMI_IND,
#endif /* defined(__SATCE__) */
	MSG_ID_MMI_CB_DOWNLOAD_IND,
	MSG_ID_MMI_CB_MSG_IND,
	MSG_ID_MMI_CB_SUBSCRIBE_REQ,
	MSG_ID_MMI_CB_SUBSCRIBE_RSP,
	MSG_ID_MMI_SMS_SET_CB_MODE_REQ,
	MSG_ID_MMI_SMS_SET_CB_MODE_RSP,
	MSG_ID_MMI_SMS_GET_CB_MODE_REQ,
	MSG_ID_MMI_SMS_GET_CB_MODE_RSP,
/* Engineer Mode-UEM */
#if defined(__MOD_UEM__)
	MSG_ID_MMI_EM_SET_GAIN_REQ,
	MSG_ID_MMI_EM_SET_GAIN_RSP,
#endif /* defined(__MOD_UEM__) */
/* Engineer Mode */
#if defined(__EM_MODE__)
	MSG_ID_MMI_EM_STATUS_IND,
	MSG_ID_MMI_EM_START_REQ,
	MSG_ID_MMI_EM_START_RSP,
	MSG_ID_MMI_EM_STOP_REQ,
	MSG_ID_MMI_EM_STOP_RSP,
	MSG_ID_MMI_EM_SET_CELL_ID_LOCK_REQ,
	MSG_ID_MMI_EM_SET_CELL_ID_LOCK_RSP,
#endif /* defined(__EM_MODE__) */
	MSG_ID_MMI_EM_KEYPAD_EVENT_OUTPUT_REQ,
	MSG_ID_MMI_EM_KEYPAD_EVENT_OUTPUT_RSP,
	MSG_ID_MMI_EM_LCM_TEST_IND,
	MSG_ID_MMI_EM_KEYPAD_EVENT_ACT_IND,
	MSG_ID_MMI_FACTORY_TEST_IND,
	MSG_ID_MMI_SET_MMI_DEFAULT_PROF_IND,
	MSG_ID_MMI_UPDATE_MMI_DEFAULT_PROF_VALUE_REQ,
	MSG_ID_MMI_UPDATE_MMI_DEFAULT_PROF_VALUE_RSP,
	MSG_ID_MMI_EM_CELL_RESEL_SUSPEND_REQ,
	MSG_ID_MMI_EM_CELL_RESEL_SUSPEND_RSP,
	MSG_ID_MMI_EM_CELL_RESEL_RESUME_REQ,
	MSG_ID_MMI_EM_CELL_RESEL_RESUME_RSP,
	MSG_ID_MMI_EM_GET_CELL_LOCK_REQ,
	MSG_ID_MMI_EM_GET_CELL_LOCK_RSP,
	MSG_ID_MMI_EM_SET_CELL_LOCK_REQ,
	MSG_ID_MMI_EM_SET_CELL_LOCK_RSP,
	MSG_ID_MMI_EM_RGB_TEST_REQ_IND,
	MSG_ID_MMI_EM_NW_EVENT_NOTIFY_REQ,
	MSG_ID_MMI_EM_NW_EVENT_NOTIFY_RSP,
	MSG_ID_MMI_EM_NW_EVENT_NOTIFY_IND,
	MSG_ID_MMI_EM_FEATURE_COMMAND_REQ,
	MSG_ID_MMI_EM_FEATURE_COMMAND_RSP,
/* Audio Task - Voice Memo(via FS) */
#if defined(__FS_ON__)
	MSG_ID_MMI_VM_PLAY_REQ,
	MSG_ID_MMI_VM_PLAY_RSP,
	MSG_ID_MMI_VM_DEL_REQ,
	MSG_ID_MMI_VM_DEL_RSP,
	MSG_ID_MMI_VM_APPEND_REQ,
	MSG_ID_MMI_VM_APPEND_RSP,
	MSG_ID_MMI_VM_RENAME_REQ,
	MSG_ID_MMI_VM_RENAME_RSP,
	MSG_ID_MMI_VM_PLAY_FINISH_IND,
	MSG_ID_MMI_VM_GET_INFO_REQ,
	MSG_ID_MMI_VM_GET_INFO_RSP,
	MSG_ID_MMI_VM_STOP_REQ,
	MSG_ID_MMI_VM_STOP_RSP,
	MSG_ID_MMI_VM_ABORT_REQ,
	MSG_ID_MMI_VM_ABORT_RSP,
	MSG_ID_MMI_VM_PAUSE_REQ,
	MSG_ID_MMI_VM_PAUSE_RSP,
	MSG_ID_MMI_VM_RESUME_REQ,
	MSG_ID_MMI_VM_RESUME_RSP,
	MSG_ID_MMI_VM_RECORD_REQ,
	MSG_ID_MMI_VM_RECORD_RSP,
	MSG_ID_MMI_VM_RECORD_FINISH_IND,
#endif /* defined(__FS_ON__) */
	MSG_ID_MMI_CPHS_DISPLAY_CFU_IND,
	MSG_ID_MMI_CPHS_MMI_INFO_IND,
	MSG_ID_MMI_CPHS_UPDATE_ALS_REQ,
	MSG_ID_MMI_CPHS_UPDATE_ALS_RSP,
	MSG_ID_MMI_CPHS_DISPLAY_ALS_IND,
	MSG_ID_WAP_START_DTMF_REQ,
	MSG_ID_WAP_START_DTMF_RSP,
	MSG_ID_WAP_STOP_DTMF_REQ,
	MSG_ID_WAP_STOP_DTMF_RSP,
	MSG_ID_WAP_DIAL_REQ,
	MSG_ID_WAP_DIAL_RSP,
	MSG_ID_WAP_SET_ENTRY_REQ,
	MSG_ID_WAP_SET_ENTRY_RSP,
	MSG_ID_WAP_AUTO_DTMF_COMPLETE_IND,
/* IrDA */
#if defined(__IRDA_SUPPORT__)
	MSG_ID_MMI_EQ_IRDA_OPEN_REQ,
	MSG_ID_MMI_EQ_IRDA_OPEN_RSP,
	MSG_ID_MMI_EQ_IRDA_CLOSE_REQ,
	MSG_ID_MMI_EQ_IRDA_CLOSE_RSP,
	MSG_ID_MMI_EQ_IRCOMM_CONNECT_IND,
	MSG_ID_MMI_EQ_IRCOMM_DISCONNECT_IND,
#endif /* defined(__IRDA_SUPPORT__) */
/* USB */
#if defined(__USB_ENABLE__)
	MSG_ID_MMI_EQ_USBCONFIG_REQ,
	MSG_ID_MMI_EQ_USBCONFIG_RSP,
	MSG_ID_MMI_EQ_USBDETECT_IND,
	MSG_ID_MMI_EQ_USBUART_SWITCH_PORT_REQ,
	MSG_ID_MMI_EQ_USBUART_SWITCH_PORT_RSP,
	MSG_ID_MMI_EQ_USBDETECT_RES_REQ,
	MSG_ID_MMI_EQ_USBDETECT_RES_RSP,
#endif /* defined(__USB_ENABLE__) */
	MSG_ID_MMI_EQ_DATA_DL_FILELIST_INFO_REQ_IND,
	MSG_ID_MMI_EQ_DATA_DL_FILELIST_REPORT_REQ,
	MSG_ID_MMI_EQ_DATA_DL_FILELIST_REPORT_RSP,
	MSG_ID_MMI_EQ_DATA_DL_FILE_MODIFY_REQ_IND,
	MSG_ID_MMI_EQ_DATA_DL_FILE_MODIFY_REQ,
	MSG_ID_MMI_EQ_DATA_DL_FILE_MODIFY_RSP,
	MSG_ID_MMI_EQ_DATA_DL_EXECUTE_REQ_IND,
	MSG_ID_MMI_EQ_DATA_DL_EXECUTE_REQ,
	MSG_ID_MMI_EQ_DATA_DL_EXECUTE_RSP,
	MSG_ID_WAP_MMC_READ_FOLDER_STATUS_REQ_IND,
	MSG_ID_WAP_MMC_READ_FOLDER_STATUS_OUTPUT_REQ,
	MSG_ID_WAP_MMC_READ_FOLDER_STATUS_OUTPUT_RSP,
	MSG_ID_WAP_MMC_UPLOAD_MSG_REQ_IND,
	MSG_ID_WAP_MMC_UPLOAD_MSG_OUTPUT_REQ,
	MSG_ID_WAP_MMC_UPLOAD_MSG_OUTPUT_RSP,
	MSG_ID_WAP_MMC_DELETE_MSG_REQ_IND,
	MSG_ID_WAP_MMC_DELETE_MSG_OUTPUT_REQ,
	MSG_ID_WAP_MMC_DELETE_MSG_OUTPUT_RSP,
	MSG_ID_MMI_EQ_QUERY_GREETING_TEXT_REQ_IND,
	MSG_ID_MMI_EQ_QUERY_GREETING_TEXT_RES_REQ,
	MSG_ID_MMI_EQ_QUERY_GREETING_TEXT_RES_RSP,
	MSG_ID_MMI_EQ_QUERY_LANGUAGE_REQ_IND,
	MSG_ID_MMI_EQ_QUERY_LANGUAGE_RES_REQ,
	MSG_ID_MMI_EQ_QUERY_LANGUAGE_RES_RSP,
	MSG_ID_MMI_EQ_QUERY_SILENT_MODE_REQ_IND,
	MSG_ID_MMI_EQ_QUERY_SILENT_MODE_RES_REQ,
	MSG_ID_MMI_EQ_QUERY_SILENT_MODE_RES_RSP,
	MSG_ID_MMI_EQ_QUERY_VIBRATOR_MODE_REQ_IND,
	MSG_ID_MMI_EQ_QUERY_VIBRATOR_MODE_RES_REQ,
	MSG_ID_MMI_EQ_QUERY_VIBRATOR_MODE_RES_RSP,
	MSG_ID_MMI_EQ_QUERY_DATE_TIME_FORMAT_REQ_IND,
	MSG_ID_MMI_EQ_QUERY_DATE_TIME_FORMAT_RES_REQ,
	MSG_ID_MMI_EQ_QUERY_DATE_TIME_FORMAT_RES_RSP,
	MSG_ID_MMI_EQ_QUERY_MUTE_MODE_REQ_IND,
	MSG_ID_MMI_EQ_QUERY_MUTE_MODE_RES_REQ,
	MSG_ID_MMI_EQ_QUERY_MUTE_MODE_RES_RSP,
	MSG_ID_MMI_POWER_RESET_IND,
	MSG_ID_MMI_READY_NOTIFY_REQ,
	MSG_ID_MMI_READY_NOTIFY_RSP,
	MSG_ID_MMI_AT_GENERAL_RES_REQ,
	MSG_ID_MMI_AT_GENERAL_RES_RSP,
	MSG_ID_MMI_FACTORY_RESTORE_REQ_IND,
	MSG_ID_MMI_EQ_VCARD_REQ_IND,
	MSG_ID_MMI_EQ_VCARD_RES_REQ,
	MSG_ID_MMI_EQ_VCARD_RES_RSP,
	MSG_ID_MMI_EQ_VCALENDAR_REQ_IND,
	MSG_ID_MMI_EQ_VCALENDAR_RES_REQ,
	MSG_ID_MMI_EQ_VCALENDAR_RES_RSP,
	MSG_ID_MMI_EQ_STR_ENABLE_REQ_IND,
	MSG_ID_MMI_EQ_STR_REQ_IND,
	MSG_ID_MMI_EQ_STR_RES_REQ,
	MSG_ID_MMI_EQ_STR_RES_RSP,
	MSG_ID_MMI_UCM_AT_REQ_IND,
	MSG_ID_MMI_UCM_AT_RES_REQ,
	MSG_ID_MMI_UCM_AT_RES_RSP,
	MSG_ID_MMI_UCM_GENERAL_RCODE_REQ,
	MSG_ID_MMI_UCM_GENERAL_RCODE_RSP,
	MSG_ID_MMI_UCM_HF_CIEV_RCODE_REQ,
	MSG_ID_MMI_UCM_HF_CIEV_RCODE_RSP,
	MSG_ID_MMI_JAVA_LOCAL_INSTALL_REQ_IND,
	MSG_ID_MMI_JAVA_LOCAL_INSTALL_RES_REQ,
	MSG_ID_MMI_JAVA_LOCAL_INSTALL_RES_RSP,
/* Bluetooth */
#if defined(__BT_SUPPORT__)
	MSG_ID_MMI_L4_BT_FCTY_SET_PARAM_IND,
	MSG_ID_MMI_L4_BT_LOOPBACK_TEST_REQ_IND,
	MSG_ID_MMI_L4_BT_SET_VR_REQ_IND,
	MSG_ID_MMI_L4_BT_SET_VR_REQ,
	MSG_ID_MMI_L4_BT_SET_VR_RSP,
#endif /* defined(__BT_SUPPORT__) */
/* HOMEZONE */
#if defined(__HOMEZONE_SUPPORT__)
	MSG_ID_MMI_HZ_TAG_IND,
#endif /* defined(__HOMEZONE_SUPPORT__) */
/* CTM */
#if defined(__CTM_SUPPORT__)
	MSG_ID_MMI_CTM_OPEN_REQ,
	MSG_ID_MMI_CTM_OPEN_RSP,
	MSG_ID_MMI_CTM_CLOSE_REQ,
	MSG_ID_MMI_CTM_CLOSE_RSP,
	MSG_ID_MMI_CTM_CONNECT_REQ,
	MSG_ID_MMI_CTM_CONNECT_RSP,
	MSG_ID_MMI_CTM_CONNECTED_IND,
	MSG_ID_MMI_CTM_SEND_TEXT_REQ,
	MSG_ID_MMI_CTM_SEND_TEXT_RSP,
	MSG_ID_MMI_CTM_RECV_TEXT_IND,
	MSG_ID_MMI_CTM_TTY_PLUG_IND,
	MSG_ID_MMI_CTM_SET_DEFAULT_REQ,
	MSG_ID_MMI_CTM_SET_DEFAULT_RSP,
	MSG_ID_MMI_CTM_DEFAULT_CHANGED_IND,
	MSG_ID_MMI_CTM_GET_DEFAULT_REQ,
	MSG_ID_MMI_CTM_GET_DEFAULT_RSP,
#endif /* defined(__CTM_SUPPORT__) */
/* VOIP */
#if defined(__VOIP__)
	MSG_ID_MMI_VOIP_AT_CALL_CTRL_APPROVE_RES_REQ,
	MSG_ID_MMI_VOIP_AT_CALL_CTRL_APPROVE_RES_RSP,
	MSG_ID_MMI_VOIP_AT_CALL_CTRL_APPROVE_IND,
#endif /* defined(__VOIP__) */    
/* GEMINI */
#if defined(__GEMINI__)
	MSG_ID_MMI_EQ_PWNON_DUAL_SIM_IND,
	MSG_ID_MMI_SMU_SIM_STATUS_UPDATE_REQ,
	MSG_ID_MMI_SMU_SIM_STATUS_UPDATE_RSP,
	MSG_ID_MMI_SMU_SIM_STATUS_UPDATE_IND,
	MSG_ID_MMI_NW_RAC_ACTIVATED_IND,
	MSG_ID_MMI_SMU_DUAL_SIM_TO_FLIGHT_MODE_REQ,
	MSG_ID_MMI_SMU_DUAL_SIM_TO_FLIGHT_MODE_RSP,
	MSG_ID_MMI_NW_SEARCH_NORMAL_FINISH_IND,
#endif /* defined(__GEMINI__) */
	MSG_ID_L4A_CODE_END,

/*MTK:END*/
	 /*---------------L4A_MSG_CODE_END---------------------*/
/* Johnny: if MMI want to send primitive to itself, please add primitive below */
#if defined(VRSI_ENABLE)
	MSG_ID_MMI_VRSI_ADD_CENTRAL_REQ,
#endif	 

    MSG_ID_MMI_MV_GET_USE_DETAILS_REQ,
    MSG_ID_MMI_MV_GET_USE_DETAILS_RSP,

/* Leo add for DLT */
	MSG_ID_MMI_THM_CONTENT_RCVD,
	MSG_ID_DA_GET_CONTENT_REQ,
	MSG_ID_DA_CONTINUE_DOWNLOAD,
	MSG_ID_MMI_DOWNLOAD_RES,
	MSG_ID_MMI_DOWNLOAD_COMPLETE_NOTIFY,
	MSG_ID_DA_ABORT_REQ,
/* Leo end */	 

    /* for CBM */
    MSG_ID_MMI_CBM_APP_ENTRY_BEARER_DETAIL_INFO_IND,
    MSG_ID_MMI_CBM_ADD_BEARER_STATUS_NOTIFY_REQ,
    MSG_ID_MMI_CBM_ADD_BEARER_STATUS_NOTIFY_CNF,
    MSG_ID_MMI_CBM_DEL_BEARER_STATUS_NOTIFY_REQ,
    MSG_ID_MMI_CBM_DEL_BEARER_STATUS_NOTIFY_CNF,
    MSG_ID_MMI_CBM_BEARER_STATUS_NOTIFY_IND,
    MSG_ID_MMI_CBM_ALWAYS_ASK_SELECT_ACCOUNT_RESULT_IND,
    MSG_ID_MMI_CBM_ALWAYS_ASK_SELECT_ACCOUNT_RESULT_CNF,

    MSG_ID_MMI_INJECT_STRING_RSP,
    
#if !defined(__MTK_TARGET__)
	MSG_ID_MMI_EQ_DIRECT_INPUT_REQ,
#endif /* !defined(__MTK_TARGET__) */

    /* MoDIS Theme Editor RPC request message */
    MSG_ID_MTE_MMI_RPC_REQ,

   /*---------------MMI_MSG_CODE_END---------------------*/


