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
******************************************************************************
*
* File:            $Workfile:   saph.h  $
*
* Date:            $Date:   May 17 2005 03:06:20  $
*
* Revision:        $Revision:   1.6  $
*
* Description:     Packet handling.
*
*****************************************************************************/

/* !\file saph.h
*/

#ifndef _SAPH_H_
#define _SAPH_H_

/******************************************************************************
* Constants
*****************************************************************************/

/******************************************************************************
* Prototypes 
*****************************************************************************/

MSF_BOOL smaPhInit(void);
void smaPhTerminate(MSF_BOOL panic);
MSF_BOOL smaPhHandleSignal(MSF_UINT16, void *p);
#ifdef WAP_SUPPORT
MSF_UINT32 smaCreateSaveAs(SmaStateMachine fsm, int signal, 
	const char *mimeTypes, const char *fileName, char *data, MSF_UINT32 dataLen, 
    const char *drmRights);
#else
MSF_UINT32 smaCreateSaveAs(SmaStateMachine fsm, int signal, 
    char *mimeTypes, const char *fileName, char *data, MSF_UINT32 dataLen, 
    const char *drmRights);
#endif /* WAP_SUPPORT */

MSF_BOOL smaDreGetMsgHeader(SmaStateMachine fsm, int signal, char *filePath,
    MSF_UINT32 offset, const char *boundary);
MSF_BOOL smaDreGetObject(SmaStateMachine fsm, int signal, char *inFilePath, 
    char **outPipePath, char *drmHeader, const char* boundary, 
    MSF_UINT32 offset, MSF_BOOL asBuffer);

#endif /* _SAPH_H_ */

