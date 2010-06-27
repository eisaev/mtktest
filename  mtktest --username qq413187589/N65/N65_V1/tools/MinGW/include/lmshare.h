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
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/lmshare.h,v 1.1 2007/05/17 07:25:30 bw Exp $
*
* $Id: lmshare.h,v 1.1 2007/05/17 07:25:30 bw Exp $
*
* $Date: 2007/05/17 07:25:30 $
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
* $Log: lmshare.h,v $
* Revision 1.1  2007/05/17 07:25:30  bw
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
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/lmshare.h,v 1.1 2007/05/14 09:46:42 bw Exp $
*
* ~Id: lmshare.h,v 1.1 2007/05/14 09:46:42 bw Exp $
*
* ~Date: 2007/05/14 09:46:42 $
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
* ~Log: lmshare.h,v $
* Revision 1.1  2007/05/14 09:46:42  bw
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
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/lmshare.h,v 1.2 2007/04/04 06:51:32 bw Exp $
*
* ~Id: lmshare.h,v 1.2 2007/04/04 06:51:32 bw Exp $
*
* ~Date: 2007/04/04 06:51:32 $
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
* ~Log: lmshare.h,v $
* Revision 1.2  2007/04/04 06:51:32  bw
* 增加.c.h文件头模板
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

#ifndef _LMSHARE_H
#define _LMSHARE_H
#if __GNUC__ >=3
#pragma GCC system_header
#endif

#ifdef __cplusplus
extern "C" {
#endif
#include <lmcons.h> 
#define SHARE_NETNAME_PARMNUM 1
#define SHARE_TYPE_PARMNUM 3
#define SHARE_REMARK_PARMNUM 4
#define SHARE_PERMISSIONS_PARMNUM 5
#define SHARE_MAX_USES_PARMNUM 6
#define SHARE_CURRENT_USES_PARMNUM 7
#define SHARE_PATH_PARMNUM 8
#define SHARE_PASSWD_PARMNUM 9
#define SHARE_FILE_SD_PARMNUM 501
#define SHARE_REMARK_INFOLEVEL (PARMNUM_BASE_INFOLEVEL+SHARE_REMARK_PARMNUM)
#define SHARE_MAX_USES_INFOLEVEL (PARMNUM_BASE_INFOLEVEL+SHARE_MAX_USES_PARMNUM)
#define SHARE_FILE_SD_INFOLEVEL (PARMNUM_BASE_INFOLEVEL+SHARE_FILE_SD_PARMNUM)
#define SHI1_NUM_ELEMENTS 4
#define SHI2_NUM_ELEMENTS 10
#define STYPE_DISKTREE 0
#define STYPE_PRINTQ 1
#define STYPE_DEVICE 2
#define STYPE_IPC 3
#define STYPE_DFS 100
#define STYPE_SPECIAL 0x80000000
#define SHI_USES_UNLIMITED (DWORD)(-1)
#define SESS_GUEST 1
#define SESS_NOENCRYPTION 2
#define SESI1_NUM_ELEMENTS 8
#define SESI2_NUM_ELEMENTS 9
#define PERM_FILE_READ 1
#define PERM_FILE_WRITE 2
#define PERM_FILE_CREATE 4
typedef struct _FILE_INFO_2 { DWORD fi2_id;} FILE_INFO_2,*PFILE_INFO_2,*LPFILE_INFO_2;
typedef struct _FILE_INFO_3 {
	DWORD fi3_id;
	DWORD fi3_permissions;
	DWORD fi3_num_locks;
	LPTSTR fi3_pathname;
	LPTSTR fi3_username;
} FILE_INFO_3,*PFILE_INFO_3,*LPFILE_INFO_3;
typedef struct _SHARE_INFO_0 { LPTSTR shi0_netname; } SHARE_INFO_0,*PSHARE_INFO_0,*LPSHARE_INFO_0;
typedef struct _SHARE_INFO_1 {
	LPTSTR shi1_netname;
	DWORD shi1_type;
	LPTSTR shi1_remark;
} SHARE_INFO_1,*PSHARE_INFO_1,*LPSHARE_INFO_1;
typedef struct _SHARE_INFO_2 {
	LPTSTR shi2_netname;
	DWORD shi2_type;
	LPTSTR shi2_remark;
	DWORD shi2_permissions;
	DWORD shi2_max_uses;
	DWORD shi2_current_uses;
	LPTSTR shi2_path;
	LPTSTR shi2_passwd;
} SHARE_INFO_2,*PSHARE_INFO_2,*LPSHARE_INFO_2;
typedef struct _SHARE_INFO_502 {
	LPTSTR shi502_netname;
	DWORD shi502_type;
	LPTSTR shi502_remark;
	DWORD shi502_permissions;
	DWORD shi502_max_uses;
	DWORD shi502_current_uses;
	LPTSTR shi502_path;
	LPTSTR shi502_passwd;
	DWORD shi502_reserved;
	PSECURITY_DESCRIPTOR shi502_security_descriptor;
} SHARE_INFO_502,*PSHARE_INFO_502,*LPSHARE_INFO_502;
typedef struct _SHARE_INFO_1004 {
	LPTSTR shi1004_remark;
} SHARE_INFO_1004,*PSHARE_INFO_1004,*LPSHARE_INFO_1004;
typedef struct _SHARE_INFO_1006 {
	DWORD shi1006_max_uses;
} SHARE_INFO_1006,*PSHARE_INFO_1006,*LPSHARE_INFO_1006;
typedef struct _SHARE_INFO_1501 {
	DWORD shi1501_reserved;
	PSECURITY_DESCRIPTOR shi1501_security_descriptor;
} SHARE_INFO_1501,*PSHARE_INFO_1501,*LPSHARE_INFO_1501;
typedef struct _SESSION_INFO_0 { LPWSTR sesi0_cname; } SESSION_INFO_0,*PSESSION_INFO_0,*LPSESSION_INFO_0;
typedef struct _SESSION_INFO_1 {
	LPTSTR sesi1_cname; 
	LPTSTR sesi1_username;
	DWORD sesi1_num_opens;
	DWORD sesi1_time;
	DWORD sesi1_idle_time;
	DWORD sesi1_user_flags;
} SESSION_INFO_1,*PSESSION_INFO_1,*LPSESSION_INFO_1;
typedef struct _SESSION_INFO_2 {
	LPTSTR sesi2_cname; 
	LPTSTR sesi2_username;
	DWORD sesi2_num_opens;
	DWORD sesi2_time;
	DWORD sesi2_idle_time;
	DWORD sesi2_user_flags;
	LPWSTR sesi2_cltype_name;
} SESSION_INFO_2,*PSESSION_INFO_2,*LPSESSION_INFO_2;
typedef struct _SESSION_INFO_10 {
	LPWSTR sesi10_cname; 
	LPWSTR sesi10_username;
	DWORD sesi10_time;
	DWORD sesi10_idle_time;
} SESSION_INFO_10,*PSESSION_INFO_10,*LPSESSION_INFO_10;
typedef struct _SESSION_INFO_502 {
	LPWSTR sesi502_cname; 
	LPWSTR sesi502_username;
	DWORD sesi502_num_opens;
	DWORD sesi502_time;
	DWORD sesi502_idle_time;
	DWORD sesi502_user_flags;
	LPWSTR sesi502_cltype_name;
	LPWSTR sesi502_transport;
} SESSION_INFO_502,*PSESSION_INFO_502,*LPSESSION_INFO_502;
typedef struct _CONNECTION_INFO_0 { DWORD coni0_id; } CONNECTION_INFO_0,*PCONNECTION_INFO_0,*LPCONNECTION_INFO_0;
typedef struct _CONNECTION_INFO_1 {
	DWORD coni1_id;
	DWORD coni1_type;
	DWORD coni1_num_opens;
	DWORD coni1_num_users;
	DWORD coni1_time;
	LPWSTR coni1_username;
	LPWSTR coni1_netname;
} CONNECTION_INFO_1,*PCONNECTION_INFO_1,*LPCONNECTION_INFO_1;
NET_API_STATUS WINAPI NetShareAdd(LPWSTR,DWORD,PBYTE,PDWORD);
NET_API_STATUS WINAPI NetShareEnum(LPWSTR,DWORD,PBYTE*,DWORD,PDWORD,PDWORD,PDWORD);
NET_API_STATUS WINAPI NetShareEnumSticky(LPWSTR,DWORD,PBYTE*,DWORD,PDWORD,PDWORD,PDWORD resume_handle);
NET_API_STATUS WINAPI NetShareGetInfo(LPWSTR,LPWSTR,DWORD,PBYTE*);
NET_API_STATUS WINAPI NetShareSetInfo(LPWSTR,LPWSTR,DWORD,PBYTE,PDWORD);
NET_API_STATUS WINAPI NetShareDel(LPWSTR,LPWSTR,DWORD);
NET_API_STATUS WINAPI NetShareDelSticky(LPWSTR,LPWSTR,DWORD);
NET_API_STATUS WINAPI NetShareCheck(LPWSTR,LPWSTR,PDWORD);
NET_API_STATUS WINAPI NetSessionEnum(LPWSTR,LPWSTR,LPWSTR,DWORD,PBYTE*,DWORD,PDWORD,PDWORD,PDWORD);
NET_API_STATUS WINAPI NetSessionDel(LPWSTR,LPWSTR,LPWSTR);
NET_API_STATUS WINAPI NetSessionGetInfo(LPWSTR,LPWSTR,LPWSTR,DWORD,PBYTE*);
NET_API_STATUS WINAPI NetConnectionEnum(LPWSTR,LPWSTR,DWORD,PBYTE*,DWORD,PDWORD,PDWORD,PDWORD);
NET_API_STATUS WINAPI NetFileClose(LPWSTR,DWORD);
NET_API_STATUS WINAPI NetFileEnum(LPWSTR,LPWSTR,LPWSTR,DWORD,PBYTE*,DWORD,PDWORD,PDWORD,PDWORD);
NET_API_STATUS WINAPI NetFileGetInfo(LPWSTR,DWORD,DWORD,PBYTE*);
#ifdef __cplusplus
}
#endif
#endif 
