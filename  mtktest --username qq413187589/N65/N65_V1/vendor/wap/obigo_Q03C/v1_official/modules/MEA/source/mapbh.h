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
 * Copyright (C) Teleca Mobile Technologies AB, 2002-2004.
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
 */

/*! \file mapbh.h
 *  Phone book handler.
 */

#ifndef _MAPBH_H_
#define _MAPBH_H_

/******************************************************************************
 * Constants
 *****************************************************************************/

/*! \enum MeaCoreSignalId
 *  Signals for the CORE FSM */
typedef enum 
{
    /*! Starts the content routing receive FSM
     * u_param1 = The result of the operation, see #MeaPhLaunchResult
     * u_param2 = The id provided in the call to #MEAa_pbLaunch
     * p_param  = The items provided in the result, see #MeaAddrItem.
     */
    MEA_SIG_PBH_LAUNCH_RSP,

    /*! Handles the response for the #MEAa_pbLookupEntry call.
     * u_param1 = result
     * u_param2 = instanceId
     * p_param  = MeaAddrItem
     */
    MEA_SIG_PBH_LOOKUP_RSP
}MeaPbhSignalId;

/******************************************************************************
 * Data-types
 *****************************************************************************/

/* !\struct MeaPbhLookupItem
 */
typedef struct MeaPbhLookupItemSt
{
    MSF_UINT16          id;     /*!< The id of the operation */
    MeaStateMachine     fsm;    /*!< The callback FSM */
    unsigned int        signal; /*!< The callback signal */
    struct MeaPbhLookupItemSt  *next;  /*!< The next item */
}MeaPbhLookupItem;

/******************************************************************************
 * Prototypes 
 *****************************************************************************/

void meaPbhInit(void);
void meaPbhTerminate(void);
void meaPbhLaunchPb(MSF_UINT16 id);
void meaPbhFreeList(MeaPbItem *items);
MeaAddrItem *meaPbhCopyItem(const MeaPbItem *orig);
void meaPbhLookupName(MeaStateMachine fsm, unsigned int signal, char *addr, 
    MeaAddrType addrType);
MeaPbhLookupItem *meaPbhGetLookupEntry(unsigned int id);

#endif


