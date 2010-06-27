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
 *  EmailAppResDef.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *  Resource definitions.
 *
 *  Author: Mingyan Wang(mbj06079)
 * -------
 *  
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
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/

#ifndef EMAILAPPRESDEF_H
#define EMAILAPPRESDEF_H

#include "MMI_features.h"   /* add if you use any compile options defined in MMI_features.h */

#ifdef __MMI_EMAIL__

#include "MMIDataType.h"    /* for resource base */

/***************************************************************************** 
 * Typedef for Resource Enum
 *****************************************************************************/
/* Screen IDs */
typedef enum
{
    SCR_ID_EMAIL_START = EMAIL_BASE,
    SCR_ID_EMAIL_MAIN,
    SCR_ID_EMAIL_PROGRESS,
    SCR_ID_EMAIL_SNR_DETAIL,
    SCR_ID_EMAIL_INTERRUPT,
    SCR_ID_EMAIL_CONFIRM,

    SCR_ID_EMAIL_COMP,  /* Write Email */
    SCR_ID_EMAIL_COMP_OPT,
    SCR_ID_EMAIL_COMP_ADDR,
    SCR_ID_EMAIL_COMP_ADDR_OPT,
    SCR_ID_EMAIL_COMP_ADDR_INPUT,
    SCR_ID_EMAIL_COMP_ADDR_INPUT_OPT,
    SCR_ID_EMAIL_COMP_SIZE,
    SCR_ID_EMAIL_COMP_ATTCH,
    SCR_ID_EMAIL_COMP_ATTCH_OPT,
    SCR_ID_EMAIL_COMP_VIEW_IMAGE,
    SCR_ID_EMAIL_COMP_CONT_INPUT,
    SCR_ID_EMAIL_COMP_SUBJ_INPUT,
    SCR_ID_EMAIL_COMP_SUBJ_INPUT_OPT,

    SCR_ID_EMAIL_READ,
    SCR_ID_EMAIL_READ_ADDR,
    SCR_ID_EMAIL_READ_ADDR_OPT,
    SCR_ID_EMAIL_READ_ATTCH,
    SCR_ID_EMAIL_READ_ATTCH_OPT,
    SCR_ID_EMAIL_READ_VIEW_IMG,
    SCR_ID_EMAIL_READ_ATTCH_SAVE,
    SCR_ID_EMAIL_READ_RETRIEVE_OPT,
    SCR_ID_EMAIL_READ_OPT_EXTRACT,
    SCR_ID_EMAIL_READ_CONT_ADDR_NUMBER_LIST,
    SCR_ID_EMAIL_READ_CONT_ADDR_EMAIL_LIST,
    SCR_ID_EMAIL_READ_CONT_ADDR_URL_LIST,
    SCR_ID_EMAIL_CONT_ADDR_PHONENUMBER_OPT,
    SCR_ID_EMAIL_CONT_ADDR_EMAIL_OPT,
    SCR_ID_EMAIL_CONT_ADDR_URL_OPT,
    SCR_ID_EMAIL_READ_ATTCH_SAVE_OPT,

    SCR_ID_EMAIL_INBOX_OPT,
    SCR_ID_EMAIL_SENT_OPT,
    SCR_ID_EMAIL_UNSENT_OPT,
    SCR_ID_EMAIL_DRAFT_OPT,
    SCR_ID_EMAIL_DELETE_ALL,

    SCR_ID_EMAIL_FOLDER,
    SCR_ID_EMAIL_FOLDER_OPT,
    SCR_ID_EMAIL_FLDR_JUMP,
    SCR_ID_EMAIL_FLDR_LIST_PROGRESS,
    SCR_ID_EMAIL_FLDR_CORRUPT_MAIL,

    SCR_ID_EMAIL_PROF,  /* Profile */
    SCR_ID_EMAIL_PROF_OPT,
    SCR_ID_EMAIL_PROF_OPT_EDIT,
    SCR_ID_EMAIL_PROF_SETTING,
    
    SCR_ID_EMAIL_PROF_SETTING_REPLY_TO, /* Search on Reply-to editor */
    SCR_ID_EMAIL_PROF_SETTING_REPLY_TO_OPT,
    
    SCR_ID_EMAIL_PROF_SMTP,
    SCR_ID_EMAIL_PROF_AUTH,
    SCR_ID_EMAIL_PROF_POP3_IMAP4,
    SCR_ID_EMAIL_PROF_SIG,
    SCR_ID_EMAIL_PROF_DATA_ACCT,
    SCR_ID_EMAIL_PROF_GSM_DATA_ACCT,
    SCR_ID_EMAIL_PROF_GPRS_DATA_ACCT,
    SCR_ID_EMAIL_PROF_FULL_EDIT_OPT,
    SCR_ID_EMAIL_PROF_SIG_SEL_FILE,

    SCR_ID_EMAIL_OTAP_INSTALL_PROFILE,
    SCR_ID_EMAIL_OTAP_REPLACE_PROFILE,
    SCR_ID_EMAIL_OTAP_SKIP_CONFIRM,

    /*template*/
    SCR_ID_EMAIL_TEMPLATE_LIST,
    SCR_ID_EMAIL_TEMPLATE_OPTION,
    SCR_ID_EMAIL_TEMPLATE_EDIT,
    SCR_ID_EMAIL_TEMPLATE_EDIT_OPTION,
    SCR_ID_EMAIL_COMP_CONT_INPUT_OPT,
    /* add new items before this line */
    SCR_ID_EMAIL_END
} email_src_id_enum;


/* String IDs */
typedef enum
{
    /* common */
    STR_EMAIL_COMMON_MOVING_ID = (EMAIL_BASE + 1),
    STR_EMAIL_COMMON_SAVE_AND_SEND_ID,
    STR_EMAIL_COMMON_SAVE_TO_DRAFT_ID,
    STR_EMAIL_COMMON_MOVE_TO_DRAFT_ID,
    STR_EMAIL_COMMON_QUIT_WITHOUT_SAVING_ID,
    STR_EMAIL_COMMON_LOADING_ID,
    STR_EMAIL_COMMON_SWITCHING_ID,
    STR_EMAIL_COMMON_SENT_ID,
    STR_EMAIL_COMMON_DOWNLOAD_ID,
    STR_EMAIL_COMMON_NO_SUBJECT_ID,
    STR_EMAIL_COMMON_DETAILS_ID,
    STR_EMAIL_COMMON_QUITING_ID,
    STR_EMAIL_COMMON_DELETING_ID,
    STR_EMAIL_COMMON_DELETED_ID,
    STR_EMAIL_COMMON_SAVE_CHANGES_ID,
    /* error code */
    STR_EMAIL_ERROR_CODE_ACCT_NOT_CONFIG_ID,
    STR_EMAIL_ERROR_CODE_FOLDER_NOT_EXISTING_ID,
    STR_EMAIL_ERROR_CODE_MSG_NOT_EXISTING_ID,
    STR_EMAIL_ERROR_CODE_CONN_FAIL_ID,
    STR_EMAIL_ERROR_CODE_AUTH_FAIL_ID,
    STR_EMAIL_ERROR_CODE_INVALID_PORT_NUM_ID,
    STR_EMAIL_ERROR_CODE_INVALID_IP_ADDR_ID,
    STR_EMAIL_ERROR_CODE_NETWORK_ID,
    STR_EMAIL_ERROR_CODE_INVALID_EMAIL_ADDR_ID,
    STR_EMAIL_ERROR_CODE_BAD_PAGE_NUMBER_ID,
    STR_EMAIL_ERROR_CODE_INVALID_ACCT_INDEX_ID,
    STR_EMAIL_ERROR_CODE_APP_SOC_TIMEOUT_ERR_ID,
    STR_EMAIL_ERROR_CODE_UNKNOWN_ID,
    STR_EMAIL_ERROR_CODE_IN_USE_ID,
    STR_EMAIL_READ_ONLY_ACCESS,
    STR_EMAIL_DNS_ERR,
    STR_EMAIL_SMTP_RCPT_TO_FAIL,
    STR_EMAIL_ERROR_MSG_REQ,
    STR_EMAIL_FILE_QUOTA_EXCEEDED,
    STR_EMAIL_INVALID_MAIL_MESSAGE,
    STR_EMAIL_FOLDER_SELECT_NOT_PERMITTED,
    STR_EMAIL_NOT_SUPPORT_ID,
    STR_EMAIL_CONTENT_MESSAGE_TOO_ID,
    STR_EMAIL_MEMORY_FULL_ID,
    STR_EMAIL_UIDL_FULL_ID,
    STR_EMAIL_AUTO_CHECK_BUSY_ID,
    STR_EMAIL_OFFLINE_NOTIFIER_ID,
    STR_EMAIL_INVALID_FILE_NAME_ID,
    STR_EMAIL_DUPLICATE_FILENAME,
    STR_EMAIL_EMPTY_FILENAME,
    STR_EMAIL_FILENAME_TOO_LONG,
    STR_EMAIL_SIZE_TOO_LARGE,
    STR_EMAIL_WRONG_USERNAME,
    STR_EMAIL_OVERWRITE_WARNING,
    STR_EMAIL_SIG_EMPTY_WARNING,
    STR_EMAIL_AUTH_NOT_SUPPORT,
    STR_EMAIL_MSG_MARKED_FULL,
    STR_EMAIL_DRM_FILE_IGNORE_ID,
    STR_EMAIL_SIG_ADD_FAIL_ID,
    STR_EMAIL_IN_CALL_ID,
    STR_EMAIL_EMPTY_FILE_ID,
    /* send result */
    STR_EMAIL_SEND_SUCCESS_SAVE_SUCCESS_ID,
    STR_EMAIL_SEND_SUCCESS_SAVE_FAILED_ID,
    STR_EMAIL_SEND_FAILED_SAVE_SUCCESS_ID,
    /* folder */
    STR_EMAIL_FOLDER_READ_ID,
    STR_EMAIL_FOLDER_NEXT_PAGE_ID,
    STR_EMAIL_FOLDER_PREVIOUS_PAGE_ID,
    STR_EMAIL_FOLDER_JUMP_TO_PAGE_ID,
    STR_EMAIL_FOLDER_PAGE_NUMBER_ID,
    STR_EMAIL_FOLDER_INVALID_PAGE_NUMBER_ID,
    STR_EMAIL_DEL_SEL_MAIL_ID,
    /* main menu */
    STR_EMAIL_MAIN_ID,
    STR_EMAIL_SEND_AND_RECEIVE_ID,  /* do not change order */
    STR_EMAIL_WRITE_EMAIL_ID,       /* do not change order */
    STR_EMAIL_INBOX_ID,             /* do not change order */
    STR_EMAIL_UNSENT_ID,            /* do not change order */
    STR_EMAIL_SENT_ID,              /* do not change order */
    STR_EMAIL_DRAFT_ID,             /* do not change order */
    STR_EMAIL_DELETE_ALL_FOLDER_ID, /* do not change order */
    STR_EMAIL_DELETE_ALL_MARK_ID,   /* do not change order */
    STR_EMAIL_EMAIL_ACCTS_ID,       /* do not change order */
    STR_EMAIL_TEMPLATE_ID,          /* do not change order */
    STR_EMAIL_SWITCH_MODE_ID,       /* do not change order */
    STR_EMAIL_REFRESH_ID,           /* do not change order */
    STR_EMAIL_MODE_HINT_ONLINE_ID,
    STR_EMAIL_MODE_HINT_OFFLINE_ID,
    STR_EMAIL_DEL_FOLDER_MAILS_ID,
    STR_EMAIL_DEL_ALL_FOLDER_MAILS_ID,
    STR_EMAIL_DEL_FOLDER_MARK_MAILS_ID,
    STR_EMAIL_DEL_ALL_FOLDER_MARK_MAILS_ID,
    /* batch download and report*/
    STR_EMAIL_CONNECTING_ID,
    STR_EMAIL_CONNECTING_TO_OUTGOING_SERVER_ID,
    STR_EMAIL_CANCELED_ID,
    STR_EMAIL_SENDING_ID,
    STR_EMAIL_CONNECTING_TO_INCOMING_SERVER_POP3_ID,
    STR_EMAIL_CONNECTING_TO_INCOMING_SERVER_IMAP4_ID,
    STR_EMAIL_AUTHORIZING_ID,
    STR_EMAIL_VERIFYING_USERNAME_ID,
    STR_EMAIL_VERIFYING_PASSOWRD_ID,
    STR_EMAIL_RECEIVING_ID,
    STR_EMAIL_RECEIVED_ID,
    STR_EMAIL_MAILS_ID,
    /* compose mail */
    STR_EMAIL_TO_ID,            /* do not change the order */
    STR_EMAIL_CC_ID,            /* do not change the order */
    STR_EMAIL_BCC_ID,            /* do not change the order */
    STR_EMAIL_ATTACHMENT_ID,    /* do not change the order */
    STR_EMAIL_PRIORITY_ID,      /* do not change the order */
    STR_EMAIL_SUBJECT_ID,       /* do not change the order */
    STR_EMAIL_CONTENT_ID,       /* do not change the order */
    STR_EMAIL_PRIORITY_LOW_ID,
    STR_EMAIL_PRIORITY_MEDIUM_ID,
    STR_EMAIL_PRIORITY_HIGH_ID,
    STR_EMAIL_EMAIL_OPTION_ID,
    STR_EMAIL_INPUT_ADDRESS_ID,
    STR_EMAIL_ATTACHMENT_LIST_ID,
    STR_EMAIL_VIEW_PLAY_ID,
    STR_EMAIL_ADD_ATTACHMENT_ID,
    STR_EMAIL_COMPOSE_SIZE_SEND_ID,
    STR_EMAIL_REPLY_IND_ID,
    STR_EMAIL_FWD_IND_ID,
    STR_EMAIL_DEL_COMP_ADDR_ID,
    STR_EMAIL_DEL_ALL_COMP_ADDR_ID,
    STR_EMAIL_DEL_COMP_ATT_ID,
    STR_EMAIL_QUIT_COMP_ID,
    /* read mail */
    STR_EMAIL_FROM_ID,
    STR_EMAIL_ADDRESS_LIST_ID,
    STR_EMAIL_SAVE_TO_PHONEBOOK_ID,
    STR_EMAIL_SEND_MAIL_ID,
    STR_EMAIL_SAVE_AS_ID,
    STR_EMAIL_FILENAME_ID,
    STR_EMAIL_REPLY_ID,
    STR_EMAIL_REPLY_WITHOUT_CONTENT_ID,
    STR_EMAIL_REPLY_ALL_ID,
    STR_EMAIL_REPLY_ALL_WITHOUT_CONTENT_ID,
    STR_EMAIL_FORWARD_ID,
    STR_EMAIL_EXTRACT_ID,
    STR_EMAIL_EXTRACT_PHONENUMBER_ID,
    STR_EMAIL_EXTRACT_EMAILADDR_ID,
    STR_EMAIL_EXTRACT_WEBADDR_ID,
    STR_EMAIL_PHONENUMBER_ADDRESS_LIST_ID, 
    STR_EMAIL_PHONENUMBER_CALL_ID,
    STR_EMAIL_URL_ADDRESS_LIST_ID,
    STR_EMAIL_URL_WAP_ID,
    STR_EMAIL_URL_ADD_BOOKMARK_ID,
    STR_EMAIL_RETRIEVE_OPTION_ID,
    STR_EMAIL_DOWNLOAD_ID,
    STR_EMAIL_DOWNLOAD_SINGLE_ID,
    STR_EMAIL_DOWNLOAD_TEXT1_ID,
    STR_EMAIL_DOWNLOAD_TEXT2_ID,
    STR_EMAIL_DOWNLOAD_ATT1_ID,
    STR_EMAIL_DOWNLOAD_ATT2_ID,
    STR_EMAIL_DOWNLOAD_ATT3_ID,
    STR_EMAIL_MARK_UNREAD_ID,
    STR_EMAIL_MARK_DELETED_ID,
    STR_EMAIL_UNMARK_DELETED_ID,
    /* profile */
    STR_EMAIL_ACCT_ID,
    STR_EMAIL_ACCT_OPTIONS_ID,
    STR_EMAIL_ACCT_SETTING_ID,
    STR_EMAIL_PROFILE_ACTIVATED,
    STR_EMAIL_PROFILE_NAME_1,
    STR_EMAIL_PROFILE_NAME_2,
    STR_EMAIL_PROFILE_NAME_3,
    /* profile error */
    STR_EMAIL_PORT_NUMBER_OUTOF_RANGE,
    STR_EMAIL_PORT_NUMBER_EMPTY,
    STR_EMAIL_EMAIL_ADDRESS_EMPTY,
    STR_EMAIL_DOWNLOAD_SIZE_EMPTY_ID,
    STR_EMAIL_WRONG_SETTINGS,
    STR_EMAIL_SIG_IMG_ERR_ID,
    /* profile setting */
    STR_EMAIL_ACCT_NAME_ID,
    STR_EMAIL_DATA_ACCOUNT_ID,
    STR_EMAIL_PROTOCOL_ID,
    STR_EMAIL_POP3_ID,
    STR_EMAIL_IMAP4_ID,
    STR_EMAIL_CHECK_INTERVAL_ID,
    STR_EMAIL_5_MIN_ID,
    STR_EMAIL_30_MIN_ID,
    STR_EMAIL_1_HOUR_ID,
    STR_EMAIL_2_HOURS_ID,
    STR_EMAIL_MAX_SIZE,
    STR_EMAIL_REPLY_TO_ID,
    /* outgoing server */
    STR_EMAIL_SMTP_SETTING_ID,
    STR_EMAIL_OUTGOING_SERVER_ID,
    STR_EMAIL_OUTGOING_PORT_ID,
    STR_EMAIL_DISPLAY_NAME_ID,
    STR_EMAIL_EMAIL_ADDRESS_ID,
    STR_EMAIL_AUTH_ID,
    STR_EMAIL_AUTH_SAME_ID,
    /* incoming server */
    STR_EMAIL_POP3_IMAP4_SETTING_ID,
    STR_EMAIL_INCOMING_SERVER_ID,
    STR_EMAIL_INCOMING_PORT_ID,
    STR_EMAIL_USER_NAME_ID,
    STR_EMAIL_PASSWORD_ID,
    STR_EMAIL_SERVER_COPY_ID,
    STR_EMAIL_DEL_AFTER_N_DAYS_ID,
    STR_EMAIL_N_OF_DAYS,
    STR_EMAIL_DEL_SERVER_MAILS_ID,
    STR_EMAIL_SENT_FOLDER_NAME,
    STR_EMAIL_DRAFT_FOLDER_NAME,
    STR_EMAIL_DOWNLOAD_OPTION_ID,
    STR_EMAIL_DOWNLOAD_ALL,
    STR_EMAIL_HEADER_ONLY,
    STR_EMAIL_HEADER_TEXT,
    /* signature */
    STR_EMAIL_SIGNATURE_ID,
    STR_EMAIL_SIGNATURE_ON_OFF_ID,
    STR_EMAIL_SIGNATURE_IMAGE_ID,
    STR_EMAIL_SIGNATURE_TEXT_ID,
    STR_EMAIL_SIG_ATTACH_OPTION_IMAGES_ID,
    STR_EMAIL_SELECT_FROM_FILE_ID,
    STR_EMAIL_DELETE_REFERENCE_ID,
    /* miscellanea */
    STR_EMAIL_ERROR_CODE_POP_CMD,
    STR_EMAIL_ERROR_CODE_SMTP_CMD,
    STR_EMAIL_ERROR_CODE_IMAP_CMD,
    /* template */
    STR_EMAIL_TEMPLATE_OPTION_ID,        /* "template option" */
    STR_EMAIL_EDIT_TEMPLATE_ID,          /* "edit template" */
    STR_EMAIL_ERASE_ID,
    STR_EMAIL_ERASE_CONFIRM_ID,
    STR_EMAIL_NO_SPACE_ID,
    STR_EMAIL_ERASED_ID,
    STR_EMAIL_TEMPLATE_1,
    STR_EMAIL_TEMPLATE_2,
    STR_EMAIL_TEMPLATE_3,
    STR_EMAIL_TEMPLATE_4,
    STR_EMAIL_TEMPLATE_5,
    STR_EMAIL_TEMPLATE_6,
    STR_EMAIL_TEMPLATE_7,
    STR_EMAIL_TEMPLATE_8,
    STR_EMAIL_TEMPLATE_9,
    STR_EMAIL_TEMPLATE_10,

    STR_EMAIL_ACCT_NAME_EMPTY_ID,
    STR_EMAIL_SERVER_EMPTY_ID,
    STR_EMAIL_USER_NAME_EMPTY_ID,
    /* add new items before this line */
    STR_EMAIL_TOTAL_ID
} email_str_id_enum;


/* Image IDs */
typedef enum
{
    IMG_EMAIL_MAIN_ID = (EMAIL_BASE + 1),
    IMG_EMAIL_SEND_AND_RECEIVE_ID,  /* do not change the order */
    IMG_EMAIL_WRITE_EMAIL_ID,       /* do not change the order */
    IMG_EMAIL_INBOX_ID,             /* do not change the order */
    IMG_EMAIL_UNSENT_ID,            /* do not change the order */
    IMG_EMAIL_SENT_ID,              /* do not change the order */
    IMG_EMAIL_DRAFT_ID,             /* do not change the order */
    IMG_EMAIL_DELETE_ALL_ID,        /* do not change the order */
    IMG_EMAIL_DELETE_ALL_MARK_ID,   /* do not change the order */
    IMG_EMAIL_PROFILE_ID,           /* do not change the order */
    IMG_EMAIL_TEMPLATE_ID,          /* do not change the order */
    IMG_EMAIL_SWITCH_MODE_ID,       /* do not change the order */
    IMG_EMAIL_REFRESH_ID,           /* do not change the order */
    /* report */
    IMG_EMAIL_SENT_CAPTION_REPORT_ID,
    IMG_EMAIL_RECEIVED_CAPTION_REPORT_ID,
    /* compose screen */
    IMG_EMAIL_TO_ID,
    IMG_EMAIL_CC_ID,
    IMG_EMAIL_BCC_ID,
    IMG_EMAIL_ATTACHMENT_ID,
    IMG_EMAIL_PRIORITY_ID,
    IMG_EMAIL_ENCODING_TYPE_ID,
    IMG_EMAIL_SUBJECT_ID,
    IMG_EMAIL_LEFT_BRACKET_ID,
    IMG_EMAIL_RIGHT_BRACKET_ID,
    IMG_EMAIL_BALNK_ID,
    /* read screen */
    IMG_EMAIL_READ_FROM_ID,
    IMG_EMAIL_READ_TO_ID,
    IMG_EMAIL_READ_CC_ID,
    IMG_EMAIL_READ_BCC_ID,
    IMG_EMAIL_READ_SUBJECT_ID,
    IMG_EMAIL_READ_ATTACHMENT_ID,
    IMG_EMAIL_RETRIEVE_TEXT,
    IMG_EMAIL_RETRIEVE_ATT,
    /* attachment */
    IMG_EMAIL_ATTACH_IMAGE_ID,
    IMG_EMAIL_ATTACH_AUDIO_ID,
    IMG_EMAIL_ATTACH_VIDEO_ID,
    IMG_EMAIL_ATTACH_TEXT_ID,
    IMG_EMAIL_ATTACH_UNKNOWN_ID,
    IMG_EMAIL_ATTACH_IMAGE_15x15_ID,
    IMG_EMAIL_ATTACH_AUDIO_15x15_ID,
    IMG_EMAIL_ATTACH_VIDEO_15x15_ID,
    IMG_EMAIL_ATTACH_TEXT_15x15_ID,
    IMG_EMAIL_ATTACH_UNKNOWN_15x15_ID,
    IMG_EMAIL_ATTACH_NC_IMAGE_15x15_ID,
    IMG_EMAIL_ATTACH_NC_AUDIO_15x15_ID,
    IMG_EMAIL_ATTACH_NC_VIDEO_15x15_ID,
    IMG_EMAIL_ATTACH_NC_TEXT_15x15_ID,
    IMG_EMAIL_ATTACH_NC_UNKNOWN_15x15_ID,
    /* miscellanea */
    IMG_EMAIL_CONNECTING_ID,
    IMG_EMAIL_SENDING_ID,
    IMG_EMAIL_RECEIVING_ID,
    IMG_EMAIL_SEND_FAIL_ID,
    IMG_EMAIL_SEND_SUCCESS_ID,
    IMG_EMAIL_REPORT_ID,
    /* folder */
    IMG_EMAIL_READ_LOW_ID,
    IMG_EMAIL_READ_NORMAL_ID,
    IMG_EMAIL_READ_HIGH_ID,
    IMG_EMAIL_UNREAD_LOW_ID,
    IMG_EMAIL_UNREAD_NORMAL_ID,
    IMG_EMAIL_UNREAD_HIGH_ID,
    IMG_EMAIL_MARK_DELETED_BIG_ID,
    /* profile */
    IMG_EMAIL_PROFILE_SETTING_ID,
    IMG_EMAIL_SMTP_SETTING_ID,
    IMG_EMAIL_IMAP_POP3_SETTING_ID,
    IMG_EMAIL_SIGNATURE_SETTING_ID,
    /* profile setting */
    IMG_EMAIL_PROFILE_NAME_ID,
    IMG_EMAIL_DATA_ACCOUNT_ID,
    IMG_EMAIL_PROTOCOL_ID,
    IMG_EMAIL_DOWNLOAD_SIZE_ID,
    IMG_EMAIL_CHECK_INTERVAL_ID,
    IMG_EMAIL_REPLY_TO_ID,
    /* outgoing server */
    IMG_EMAIL_OUTGOING_SERVER_ID,
    IMG_EMAIL_OUTGOING_PORT_ID,
    IMG_EMAIL_DISPLAY_NAME_ID,
    IMG_EMAIL_EMAIL_ADDRESS_ID,
    IMG_EMAIL_AUTH_ID,
    IMG_EMAIL_AUTH_SAME_ID,
    /* incoming server */
    IMG_EMAIL_INCOMING_SERVER_ID,
    IMG_EMAIL_INCOMING_PORT_ID,
    IMG_EMAIL_USER_NAME_ID,
    IMG_EMAIL_PASSWORD_ID,
    IMG_EMAIL_DOWNLOAD_OPTION_ID,
    IMG_EMAIL_SERVER_COPY_ID,
    IMG_EMAIL_DEL_AFTER_N_DAYS_ID,
    IMG_EMAIL_DEL_SERVER_MAILS_ID,
    IMG_EMAIL_DRAFT_FOLDER_ID,
    IMG_EMAIL_SENT_FOLDER_ID,
    /* signature */
    IMG_EMAIL_SIGNATURE_IMAGE_ID,
    IMG_EMAIL_SIGNATURE_TEXT_ID,
    EMAIL_IMAGE_ID_DEFINES_MAX
} email_img_id_enum;

#endif	/* __MMI_EMAIL__ */

#endif /* EMAILAPPRESDEF_H */ 
