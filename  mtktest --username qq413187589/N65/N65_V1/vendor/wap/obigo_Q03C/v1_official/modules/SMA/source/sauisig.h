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
/*
 * Copyright (C) Teleca Mobile Technologies AB, 2002-2003.
 * All rights reserved.
 *
 * This software is covered by the license agreement between
 * the end user and Teleca Mobile Technologies AB, and may be 
 * used and copied only in accordance with the terms of the 
 * said agreement.
 *
 * Teleca Mobile Technologies AB assumes no responsibility or 
 * liability for any errors or inaccuracies in this software, 
 * or any consequential, incidental or indirect damage arising
 * out of the use of the software.
 *
 *
 *****************************************************************************/

/* !\file sauisig.h
 *  \brief Signal handler for Widgets.
 */

#ifndef _SAUISIG_H_
#define _SAUISIG_H_

/******************************************************************************
 * Constants
 *****************************************************************************/

#define SMA_MAX_ACTIVE_WIN      8   /*!< Default max no of windows */
#define SMA_MAX_ACTIVE_ACTIONS  10  /*!< MsfOk, MsfBack, MsfMenu, MsfCancel 
                                         and so on  */
#define SMA_WIDGET_NA           0x00 /* !< No callback function or signal is 
                                           available */
#define SMA_WIDGET_CALLBACK     0x01 /* !< The widget signal is converted into
                                           a function callback */
#define SMA_WIDGET_SIGNAL       0x02 /* !< The widget signal is converted into 
                                           an internal signal */

/******************************************************************************
 * Types
 *****************************************************************************/
/*! \enum SmaEventType
 *  Type of event */
typedef enum
{
    SMA_NO_EVENT = 0,               /*!< No event defined */
    SMA_ACTION_EVENT,               /*!< Event is an action */
    SMA_NOTIFICATION_EVENT,         /*!< Event is a notification */
    SMA_USR_EVENT                   /*!< User events  */
}SmaEventType;

/******************************************************************************
 * Prototypes
 *****************************************************************************/

typedef void (*SmaActionCallBack)(MsfWindowHandle winHandle);
MsfActionHandle smaCreateAction(MsfWindowHandle winHandle, 
    MsfActionType action, SmaActionCallBack callback, int fsm, int signal,
    MSF_UINT32 strId);
MSF_BOOL smaDeleteAction(MsfActionHandle actionHandle);
MSF_BOOL smaDeleteNotification(MSF_UINT32 widgetHandle);
MSF_BOOL smaDeleteWindow(MsfWindowHandle winHandle);
MSF_BOOL smaDeleteUserEvent(MsfWindowHandle winHandle, MsfEventType eventType);
void smaInitWidgetSignalHandler(void);
MSF_BOOL smaRegisterAction(MsfWindowHandle winHandle, MsfActionHandle actionHandle,
    SmaActionCallBack callback, int fsm, int signal);
MSF_BOOL smaRegisterNotification(MsfWindowHandle winHandle, 
    MsfNotificationType notifType, SmaActionCallBack callback, int fsm, 
    int signal);
MSF_BOOL smaRegisterUserEvent(MsfWindowHandle winHandle, 
    MsfEventType eventType, SmaActionCallBack callback, int fsm, int signal);
void smaTerminateWidgetSignalHandler(void);
void smaWidgetSignalHandler(MSF_UINT16 signal, void *p);
MSF_BOOL smaRegisterEvent(MSF_UINT32 widgetHandle, SmaEventType eventType,
    MsfActionHandle actionHandle, MsfNotificationType notifType,
    MsfEventType usrEvent, SmaActionCallBack callback, int fsm,
    int signal);

#endif

