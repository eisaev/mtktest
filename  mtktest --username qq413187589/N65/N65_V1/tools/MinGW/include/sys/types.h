/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2005
*
*****************************************************************************/
/*============================================================================
*
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/sys/types.h,v 1.1 2007/05/17 07:25:43 bw Exp $
*
* $Id: types.h,v 1.1 2007/05/17 07:25:43 bw Exp $
*
* $Date: 2007/05/17 07:25:43 $
*
* $Name: 1.1 $
*
* $Locker$
*
* $Revision: 1.1 $
*
* $State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* $Log: types.h,v $
* Revision 1.1  2007/05/17 07:25:43  bw
* UNI@bw_20070517 15:10:01 MTK U25 U26 06B V30 version
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/
/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2007
*
*****************************************************************************/
/*============================================================================
*
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/sys/types.h,v 1.1 2007/05/14 09:47:07 bw Exp $
*
* ~Id: types.h,v 1.1 2007/05/14 09:47:07 bw Exp $
*
* ~Date: 2007/05/14 09:47:07 $
*
* ~Name: 1.1 $
*
* ~Locker$
*
* ~Revision: 1.1 $
*
* ~State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* ~Log: types.h,v $
* Revision 1.1  2007/05/14 09:47:07  bw
* UNI@bw_20070514 17:21:01 MTK初始版本.合并U25V20到U26V28.
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/
/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2005
*
*****************************************************************************/
/*============================================================================
*
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/sys/types.h,v 1.2 2007/04/04 06:51:40 bw Exp $
*
* ~Id: types.h,v 1.2 2007/04/04 06:51:40 bw Exp $
*
* ~Date: 2007/04/04 06:51:40 $
*
* ~Name: 1.2 $
*
* ~Locker$
*
* ~Revision: 1.2 $
*
* ~State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* ~Log: types.h,v $
* Revision 1.2  2007/04/04 06:51:40  bw
* 增加.c.h文件头模板
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

/*
 * types.h
 *
 * The definition of constants, data types and global variables.
 *
 * This file is part of the Mingw32 package.
 *
 * Contributors:
 *  Created by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 *  Lots of types supplied by Pedro A. Aranda <paag@tid.es>
 *
 *  THIS SOFTWARE IS NOT COPYRIGHTED
 *
 *  This source code is offered for use in the public domain. You may
 *  use, modify or distribute it freely.
 *
 *  This code is distributed in the hope that it will be useful but
 *  WITHOUT ANY WARRANTY. ALL WARRENTIES, EXPRESS OR IMPLIED ARE HEREBY
 *  DISCLAIMED. This includes but is not limited to warrenties of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * ~Revision: 1.1 $
 * ~Author: bw $
 * ~Date: 2006/04/29 04:42:06 $
 *
 */

#ifndef	_TYPES_H_
#define	_TYPES_H_

/* All the headers include this file. */
#include <_mingw.h>

#define __need_wchar_t
#define __need_size_t
#define __need_ptrdiff_t
#ifndef RC_INVOKED
#include <stddef.h>
#endif	/* Not RC_INVOKED */

#ifndef RC_INVOKED

#ifndef _TIME_T_DEFINED
typedef	long	time_t;
#define	_TIME_T_DEFINED
#endif


#ifndef	__STRICT_ANSI__

#ifndef	_OFF_T_
#define	_OFF_T_
typedef long _off_t;

#ifndef	_NO_OLDNAMES
typedef _off_t	off_t;
#endif
#endif	/* Not _OFF_T_ */


#ifndef _DEV_T_
#define	_DEV_T_
#ifdef __MSVCRT__
typedef unsigned int _dev_t;
#else
typedef short _dev_t;
#endif

#ifndef	_NO_OLDNAMES
typedef _dev_t	dev_t;
#endif
#endif	/* Not _DEV_T_ */


#ifndef _INO_T_
#define	_INO_T_
typedef short _ino_t;

#ifndef	_NO_OLDNAMES
typedef _ino_t	ino_t;
#endif
#endif	/* Not _INO_T_ */


#ifndef _PID_T_
#define	_PID_T_
typedef int	_pid_t;

#ifndef	_NO_OLDNAMES
typedef _pid_t	pid_t;
#endif
#endif	/* Not _PID_T_ */


#ifndef _MODE_T_
#define	_MODE_T_
typedef unsigned short _mode_t;

#ifndef	_NO_OLDNAMES
typedef _mode_t	mode_t;
#endif
#endif	/* Not _MODE_T_ */


#ifndef _SIGSET_T_
#define	_SIGSET_T_
typedef int	_sigset_t;

#ifndef	_NO_OLDNAMES
typedef _sigset_t	sigset_t;
#endif
#endif	/* Not _SIGSET_T_ */

#ifndef _SSIZE_T_
#define _SSIZE_T_
typedef long _ssize_t;

#ifndef	_NO_OLDNAMES
typedef _ssize_t ssize_t;
#endif
#endif /* Not _SSIZE_T_ */ 

#endif	/* Not __STRICT_ANSI__ */

#endif	/* Not RC_INVOKED */

#endif	/* Not _TYPES_H_ */
