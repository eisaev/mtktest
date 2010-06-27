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
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/odbcinst.h,v 1.1 2007/05/17 07:25:31 bw Exp $
*
* $Id: odbcinst.h,v 1.1 2007/05/17 07:25:31 bw Exp $
*
* $Date: 2007/05/17 07:25:31 $
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
* $Log: odbcinst.h,v $
* Revision 1.1  2007/05/17 07:25:31  bw
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
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/odbcinst.h,v 1.1 2007/05/14 09:46:45 bw Exp $
*
* ~Id: odbcinst.h,v 1.1 2007/05/14 09:46:45 bw Exp $
*
* ~Date: 2007/05/14 09:46:45 $
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
* ~Log: odbcinst.h,v $
* Revision 1.1  2007/05/14 09:46:45  bw
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
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/odbcinst.h,v 1.2 2007/04/04 06:51:33 bw Exp $
*
* ~Id: odbcinst.h,v 1.2 2007/04/04 06:51:33 bw Exp $
*
* ~Date: 2007/04/04 06:51:33 $
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
* ~Log: odbcinst.h,v $
* Revision 1.2  2007/04/04 06:51:33  bw
* 增加.c.h文件头模板
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

#ifndef _ODBCINST_H
#define _ODBCINST_H
#if __GNUC__ >=3
#pragma GCC system_header
#endif
#include <sql.h>
#ifdef __cplusplus
extern "C" {
#endif
#ifndef ODBCVER
#define ODBCVER 0x0351
#endif
#define INSTAPI __stdcall
#define  ODBC_ADD_DSN     1
#define  ODBC_CONFIG_DSN  2
#define  ODBC_REMOVE_DSN  3
#if (ODBCVER >= 0x0250)
#define ODBC_ADD_SYS_DSN 4
#define ODBC_CONFIG_SYS_DSN 5
#define ODBC_REMOVE_SYS_DSN 6
#define ODBC_INSTALL_INQUIRY 1 
#define ODBC_INSTALL_COMPLETE 2
#define ODBC_INSTALL_DRIVER 1
#define ODBC_REMOVE_DRIVER 2
#define ODBC_CONFIG_DRIVER 3
#define ODBC_CONFIG_DRIVER_MAX 100
#endif /* (ODBCVER >= 0x0250) */
#if (ODBCVER >= 0x0300)
#define ODBC_REMOVE_DEFAULT_DSN 7
#define ODBC_BOTH_DSN 0
#define ODBC_USER_DSN 1
#define ODBC_SYSTEM_DSN 2
#define ODBC_ERROR_GENERAL_ERR 1
#define ODBC_ERROR_INVALID_BUFF_LEN 2
#define ODBC_ERROR_INVALID_HWND 3
#define ODBC_ERROR_INVALID_STR 4
#define ODBC_ERROR_INVALID_REQUEST_TYPE 5
#define ODBC_ERROR_COMPONENT_NOT_FOUND 6
#define ODBC_ERROR_INVALID_NAME 7
#define ODBC_ERROR_INVALID_KEYWORD_VALUE 8
#define ODBC_ERROR_INVALID_DSN 9
#define ODBC_ERROR_INVALID_INF 10
#define ODBC_ERROR_REQUEST_FAILED 11
#define ODBC_ERROR_INVALID_PATH 12
#define ODBC_ERROR_LOAD_LIB_FAILED 13
#define ODBC_ERROR_INVALID_PARAM_SEQUENCE 14
#define ODBC_ERROR_INVALID_LOG_FILE 15
#define ODBC_ERROR_USER_CANCELED 16
#define ODBC_ERROR_USAGE_UPDATE_FAILED 17
#define ODBC_ERROR_CREATE_DSN_FAILED 18
#define ODBC_ERROR_WRITING_SYSINFO_FAILED 19
#define ODBC_ERROR_REMOVE_DSN_FAILED 20
#define ODBC_ERROR_OUT_OF_MEM 21
#define ODBC_ERROR_OUTPUT_STRING_TRUNCATED 22
#endif /* ODBCVER >= 0x0300 */

#ifndef RC_INVOKED
BOOL INSTAPI ConfigDSN(HWND,WORD,LPCSTR,LPCSTR);
BOOL INSTAPI ConfigDSNW(HWND,WORD,LPCWSTR,LPCWSTR);
BOOL INSTAPI ConfigTranslator(HWND,DWORD*);
BOOL INSTAPI SQLConfigDataSource(HWND,WORD,LPCSTR,LPCSTR);
BOOL INSTAPI SQLConfigDataSourceW(HWND,WORD,LPCWSTR,LPCWSTR);
BOOL INSTAPI SQLCreateDataSource(HWND,LPCSTR);
BOOL INSTAPI SQLCreateDataSourceW(HWND,LPCWSTR);
BOOL INSTAPI SQLGetAvailableDrivers(LPCSTR,LPSTR,WORD,WORD*);
BOOL INSTAPI SQLGetAvailableDriversW(LPCWSTR,LPWSTR,WORD,WORD*);
BOOL INSTAPI SQLGetInstalledDrivers(LPSTR,WORD,WORD*);
BOOL INSTAPI SQLGetInstalledDriversW(LPWSTR,WORD,WORD*);
int INSTAPI SQLGetPrivateProfileString(LPCSTR,LPCSTR,LPCSTR,LPSTR,int,LPCSTR);
int INSTAPI SQLGetPrivateProfileStringW(LPCWSTR,LPCWSTR,LPCWSTR,LPWSTR,int,LPCWSTR);
BOOL INSTAPI SQLGetTranslator(HWND,LPSTR,WORD,WORD*,LPSTR,WORD,WORD*,DWORD*);
BOOL INSTAPI SQLGetTranslatorW(HWND,LPWSTR,WORD,WORD*,LPWSTR,WORD,WORD*,DWORD*);
BOOL INSTAPI SQLInstallDriver(LPCSTR,LPCSTR,LPSTR,WORD,WORD*);
BOOL INSTAPI SQLInstallDriverManager(LPSTR,WORD,WORD*);
BOOL INSTAPI SQLInstallDriverManagerW(LPWSTR,WORD,WORD*);
BOOL INSTAPI SQLInstallDriverW(LPCWSTR,LPCWSTR,LPWSTR,WORD,WORD*);
BOOL INSTAPI SQLInstallODBC(HWND,LPCSTR,LPCSTR,LPCSTR);
BOOL INSTAPI SQLInstallODBCW(HWND,LPCWSTR,LPCWSTR,LPCWSTR);
BOOL INSTAPI SQLManageDataSources(HWND);
BOOL INSTAPI SQLRemoveDefaultDataSource(void);
BOOL INSTAPI SQLRemoveDSNFromIni(LPCSTR);
BOOL INSTAPI SQLRemoveDSNFromIniW(LPCWSTR);
BOOL INSTAPI SQLValidDSN(LPCSTR);
BOOL INSTAPI SQLValidDSNW(LPCWSTR);
BOOL INSTAPI SQLWriteDSNToIni(LPCSTR,LPCSTR);
BOOL INSTAPI SQLWriteDSNToIniW(LPCWSTR,LPCWSTR);
BOOL INSTAPI SQLWritePrivateProfileString(LPCSTR,LPCSTR,LPCSTR,LPCSTR);
BOOL INSTAPI SQLWritePrivateProfileStringW(LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR);
#if(ODBCVER >= 0x0250) 
BOOL INSTAPI ConfigDriver(HWND,WORD,LPCSTR,LPCSTR,LPSTR,WORD,WORD*);
BOOL INSTAPI ConfigDriverW(HWND,WORD,LPCWSTR,LPCWSTR,LPWSTR,WORD,WORD*);
BOOL INSTAPI SQLConfigDriver(HWND,WORD,LPCSTR,LPCSTR,LPSTR,WORD,WORD*);
BOOL INSTAPI SQLConfigDriverW(HWND,WORD,LPCWSTR,LPCWSTR,LPWSTR,WORD,WORD*);
BOOL INSTAPI SQLInstallTranslator(LPCSTR,LPCSTR,LPCSTR,LPSTR,WORD,WORD*,WORD,LPDWORD);
BOOL INSTAPI SQLInstallTranslatorW(LPCWSTR,LPCWSTR,LPCWSTR,LPWSTR,WORD,WORD*,WORD,LPDWORD);
BOOL INSTAPI SQLRemoveDriver(LPCSTR,BOOL,LPDWORD);
BOOL INSTAPI SQLRemoveDriverManager(LPDWORD);
BOOL INSTAPI SQLRemoveDriverW(LPCWSTR,BOOL,LPDWORD);
BOOL INSTAPI SQLRemoveTranslator(LPCSTR,LPDWORD);
BOOL INSTAPI SQLRemoveTranslatorW(LPCWSTR,LPDWORD);
#endif /* ODBCVER >= 0x0250 */  
#if (ODBCVER >= 0x0300) 
BOOL INSTAPI SQLGetConfigMode(UWORD*);
BOOL INSTAPI SQLInstallDriverEx(LPCSTR,LPCSTR,LPSTR,WORD,WORD*,WORD,LPDWORD);
BOOL INSTAPI SQLInstallDriverExW(LPCWSTR,LPCWSTR,LPWSTR,WORD,WORD*,WORD,LPDWORD);
SQLRETURN INSTAPI SQLInstallerError(WORD,DWORD*,LPSTR,WORD,WORD*);
SQLRETURN INSTAPI SQLInstallerErrorW(WORD,DWORD*,LPWSTR,WORD,WORD*);
BOOL INSTAPI SQLInstallTranslatorEx(LPCSTR,LPCSTR,LPSTR,WORD,WORD*,WORD,LPDWORD);
BOOL INSTAPI SQLInstallTranslatorExW(LPCWSTR,LPCWSTR,LPWSTR,WORD,WORD*,WORD,LPDWORD);
SQLRETURN INSTAPI SQLPostInstallerError(DWORD,LPCSTR);
SQLRETURN INSTAPI SQLPostInstallerErrorW(DWORD,LPCWSTR);
BOOL INSTAPI SQLReadFileDSN(LPCSTR,LPCSTR,LPCSTR,LPSTR,WORD,WORD*);
BOOL INSTAPI SQLReadFileDSNW(LPCWSTR,LPCWSTR,LPCWSTR,LPWSTR,WORD,WORD*);
BOOL INSTAPI SQLSetConfigMode(UWORD);
BOOL INSTAPI SQLWriteFileDSN(LPCSTR,LPCSTR,LPCSTR,LPCSTR);
BOOL INSTAPI SQLWriteFileDSNW(LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR);
#endif /* ODBCVER >= 0x0300 */  

#if defined (UNICODE) && !defined (SQL_NOUNICODEMAP)
#define SQLConfigDataSource SQLConfigDataSourceW
#define SQLConfigDriver SQLConfigDriverW
#define SQLCreateDataSource SQLCreateDataSourceW 
#define SQLGetAvailableDrivers SQLGetAvailableDriversW 
#define SQLGetInstalledDrivers SQLGetInstalledDriversW
#define SQLGetPrivateProfileString SQLGetPrivateProfileStringW
#define SQLGetTranslator SQLGetTranslatorW 
#define SQLInstallDriver SQLInstallDriverW 
#define SQLInstallDriverEx SQLInstallDriverExW
#define SQLInstallDriverManager SQLInstallDriverManagerW
#define SQLInstallerError SQLInstallerErrorW
#define SQLInstallODBC SQLInstallODBCW 
#define SQLInstallTranslator SQLInstallTranslatorW
#define SQLInstallTranslatorEx SQLInstallTranslatorExW
#define SQLPostInstallerError SQLPostInstallerErrorW
#define SQLReadFileDSN SQLReadFileDSNW
#define SQLRemoveDriver SQLRemoveDriverW
#define SQLRemoveDSNFromIni SQLRemoveDSNFromIniW 
#define SQLRemoveTranslator SQLRemoveTranslatorW
#define SQLValidDSN SQLValidDSNW 
#define SQLWriteDSNToIni SQLWriteDSNToIniW 
#define SQLWriteFileDSN SQLWriteFileDSNW
#define SQLWritePrivateProfileString SQLWritePrivateProfileStringW
#endif /* UNICODE && !SQL_NOUNICODEMAP */
#endif /* RC_INVOKED */
#ifdef __cplusplus
}
#endif
#endif /* _ODBCINST_H */
