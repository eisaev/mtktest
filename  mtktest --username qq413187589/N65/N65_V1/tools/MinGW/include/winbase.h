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
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/winbase.h,v 1.1 2007/05/17 07:25:35 bw Exp $
*
* $Id: winbase.h,v 1.1 2007/05/17 07:25:35 bw Exp $
*
* $Date: 2007/05/17 07:25:35 $
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
* $Log: winbase.h,v $
* Revision 1.1  2007/05/17 07:25:35  bw
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
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/winbase.h,v 1.1 2007/05/14 09:46:53 bw Exp $
*
* ~Id: winbase.h,v 1.1 2007/05/14 09:46:53 bw Exp $
*
* ~Date: 2007/05/14 09:46:53 $
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
* ~Log: winbase.h,v $
* Revision 1.1  2007/05/14 09:46:53  bw
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
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/winbase.h,v 1.2 2007/04/04 06:51:35 bw Exp $
*
* ~Id: winbase.h,v 1.2 2007/04/04 06:51:35 bw Exp $
*
* ~Date: 2007/04/04 06:51:35 $
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
* ~Log: winbase.h,v $
* Revision 1.2  2007/04/04 06:51:35  bw
* 增加.c.h文件头模板
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

#ifndef _WINBASE_H
#define _WINBASE_H
#if __GNUC__ >= 3
#pragma GCC system_header
#endif

#ifndef WINBASEAPI
#define WINBASEAPI DECLSPEC_IMPORT
#endif
#ifdef __cplusplus
extern "C" {
#endif

#define SP_SERIALCOMM 1
#define PST_UNSPECIFIED	0
#define PST_RS232	1
#define PST_PARALLELPORT	2
#define PST_RS422	3
#define PST_RS423	4
#define PST_RS449	5
#define PST_MODEM	6
#define PST_FAX	0x21
#define PST_SCANNER	0x22
#define PST_NETWORK_BRIDGE	0x100
#define PST_LAT	0x101
#define PST_TCPIP_TELNET	0x102
#define PST_X25	0x103
#define BAUD_075	1
#define BAUD_110	2
#define BAUD_134_5	4
#define BAUD_150	8
#define BAUD_300	16
#define BAUD_600	32
#define BAUD_1200	64
#define BAUD_1800	128
#define BAUD_2400	256
#define BAUD_4800	512
#define BAUD_7200	1024
#define BAUD_9600	2048
#define BAUD_14400	4096
#define BAUD_19200	8192
#define BAUD_38400	16384
#define BAUD_56K	32768
#define BAUD_128K	65536
#define BAUD_115200	131072
#define BAUD_57600	262144
#define BAUD_USER	0x10000000
#define PCF_DTRDSR	1
#define PCF_RTSCTS	2
#define PCF_RLSD	4
#define PCF_PARITY_CHECK	8
#define PCF_XONXOFF	16
#define PCF_SETXCHAR	32
#define PCF_TOTALTIMEOUTS	64
#define PCF_INTTIMEOUTS	128
#define PCF_SPECIALCHARS	256
#define PCF_16BITMODE	512
#define SP_PARITY	1
#define SP_BAUD	2
#define SP_DATABITS	4
#define SP_STOPBITS	8
#define SP_HANDSHAKING	16
#define SP_PARITY_CHECK	32
#define SP_RLSD	64
#define DATABITS_5	1
#define DATABITS_6	2
#define DATABITS_7	4
#define DATABITS_8	8
#define DATABITS_16	16
#define DATABITS_16X	32
#define STOPBITS_10	1
#define STOPBITS_15	2
#define STOPBITS_20	4
#define PARITY_NONE	256
#define PARITY_ODD	512
#define PARITY_EVEN	1024
#define PARITY_MARK	2048
#define PARITY_SPACE	4096
#define EXCEPTION_DEBUG_EVENT	1
#define CREATE_THREAD_DEBUG_EVENT	2
#define CREATE_PROCESS_DEBUG_EVENT	3
#define EXIT_THREAD_DEBUG_EVENT	4
#define EXIT_PROCESS_DEBUG_EVENT	5
#define LOAD_DLL_DEBUG_EVENT	6
#define UNLOAD_DLL_DEBUG_EVENT	7
#define OUTPUT_DEBUG_STRING_EVENT	8
#define RIP_EVENT	9
#define HFILE_ERROR ((HFILE)-1)
#define FILE_BEGIN	0
#define FILE_CURRENT	1
#define FILE_END	2
#define INVALID_SET_FILE_POINTER	((DWORD)-1)
#define OF_READ 0
#define OF_READWRITE	2
#define OF_WRITE	1
#define OF_SHARE_COMPAT	0
#define OF_SHARE_DENY_NONE	64
#define OF_SHARE_DENY_READ	48
#define OF_SHARE_DENY_WRITE	32
#define OF_SHARE_EXCLUSIVE	16
#define OF_CANCEL	2048
#define OF_CREATE	4096
#define OF_DELETE	512
#define OF_EXIST	16384
#define OF_PARSE	256
#define OF_PROMPT	8192
#define OF_REOPEN	32768
#define OF_VERIFY	1024
#define NMPWAIT_NOWAIT	1
#define NMPWAIT_WAIT_FOREVER	((DWORD)-1)
#define NMPWAIT_USE_DEFAULT_WAIT	0
#define CE_BREAK	16
#define CE_DNS	2048
#define CE_FRAME	8
#define CE_IOE	1024
#define CE_MODE	32768
#define CE_OOP	4096
#define CE_OVERRUN	2
#define CE_PTO	512
#define CE_RXOVER	1
#define CE_RXPARITY	4
#define CE_TXFULL	256
#define PROGRESS_CONTINUE	0
#define PROGRESS_CANCEL	1
#define PROGRESS_STOP	2
#define PROGRESS_QUIET	3
#define CALLBACK_CHUNK_FINISHED	0
#define CALLBACK_STREAM_SWITCH	1
#define COPY_FILE_FAIL_IF_EXISTS	1
#define COPY_FILE_RESTARTABLE	2
#define OFS_MAXPATHNAME 128
#define FILE_MAP_ALL_ACCESS     0xf001f
#define FILE_MAP_READ   4
#define FILE_MAP_WRITE  2
#define FILE_MAP_COPY   1
#define MUTEX_ALL_ACCESS	0x1f0001
#define MUTEX_MODIFY_STATE	1
#define SEMAPHORE_ALL_ACCESS	0x1f0003
#define SEMAPHORE_MODIFY_STATE	2
#define EVENT_ALL_ACCESS	0x1f0003
#define EVENT_MODIFY_STATE	2
#define PIPE_ACCESS_DUPLEX      3
#define PIPE_ACCESS_INBOUND     1
#define PIPE_ACCESS_OUTBOUND    2
#define PIPE_TYPE_BYTE	0
#define PIPE_TYPE_MESSAGE	4
#define PIPE_READMODE_BYTE	0
#define PIPE_READMODE_MESSAGE	2
#define PIPE_WAIT	0
#define PIPE_NOWAIT	1
#define PIPE_CLIENT_END 0
#define PIPE_SERVER_END 1
#define PIPE_UNLIMITED_INSTANCES 255
#define DEBUG_PROCESS			0x00000001
#define DEBUG_ONLY_THIS_PROCESS		0x00000002
#define CREATE_SUSPENDED		0x00000004
#define DETACHED_PROCESS		0x00000008
#define CREATE_NEW_CONSOLE		0x00000010
#define NORMAL_PRIORITY_CLASS		0x00000020
#define IDLE_PRIORITY_CLASS		0x00000040
#define HIGH_PRIORITY_CLASS		0x00000080
#define REALTIME_PRIORITY_CLASS		0x00000100
#define CREATE_NEW_PROCESS_GROUP	0x00000200
#define CREATE_UNICODE_ENVIRONMENT	0x00000400
#define CREATE_SEPARATE_WOW_VDM		0x00000800
#define CREATE_SHARED_WOW_VDM		0x00001000
#define CREATE_FORCEDOS			0x00002000
#define BELOW_NORMAL_PRIORITY_CLASS	0x00004000
#define ABOVE_NORMAL_PRIORITY_CLASS	0x00008000
#define CREATE_BREAKAWAY_FROM_JOB	0x01000000
#define CREATE_WITH_USERPROFILE		0x02000000
#define CREATE_DEFAULT_ERROR_MODE	0x04000000
#define CREATE_NO_WINDOW		0x08000000
#define PROFILE_USER			0x10000000
#define PROFILE_KERNEL			0x20000000
#define PROFILE_SERVER			0x40000000
#define CONSOLE_TEXTMODE_BUFFER 1
#define CREATE_NEW	1
#define CREATE_ALWAYS	2
#define OPEN_EXISTING	3
#define OPEN_ALWAYS	4
#define TRUNCATE_EXISTING	5
#define FILE_FLAG_WRITE_THROUGH	0x80000000
#define FILE_FLAG_OVERLAPPED	1073741824
#define FILE_FLAG_NO_BUFFERING	536870912
#define FILE_FLAG_RANDOM_ACCESS	268435456
#define FILE_FLAG_SEQUENTIAL_SCAN	134217728
#define FILE_FLAG_DELETE_ON_CLOSE	67108864
#define FILE_FLAG_BACKUP_SEMANTICS	33554432
#define FILE_FLAG_POSIX_SEMANTICS	16777216
#define FILE_FLAG_OPEN_REPARSE_POINT	2097152
#define FILE_FLAG_OPEN_NO_RECALL	1048576
#if (_WIN32_WINNT >= 0x0500)
#define FILE_FLAG_FIRST_PIPE_INSTANCE	524288
#endif
#define CLRDTR 6
#define CLRRTS 4
#define SETDTR 5
#define SETRTS 3
#define SETXOFF 1
#define SETXON 2
#define SETBREAK 8
#define CLRBREAK 9
#define STILL_ACTIVE 0x103
#define FIND_FIRST_EX_CASE_SENSITIVE 1
#define SCS_32BIT_BINARY 0
#define SCS_DOS_BINARY 1
#define SCS_OS216_BINARY 5
#define SCS_PIF_BINARY 3
#define SCS_POSIX_BINARY 4
#define SCS_WOW_BINARY 2
#define MAX_COMPUTERNAME_LENGTH 15
#define HW_PROFILE_GUIDLEN	39
#define MAX_PROFILE_LEN	80
#define DOCKINFO_UNDOCKED	1
#define DOCKINFO_DOCKED	2
#define DOCKINFO_USER_SUPPLIED	4
#define DOCKINFO_USER_UNDOCKED	(DOCKINFO_USER_SUPPLIED|DOCKINFO_UNDOCKED)
#define DOCKINFO_USER_DOCKED	(DOCKINFO_USER_SUPPLIED|DOCKINFO_DOCKED)
#define DRIVE_REMOVABLE 2
#define DRIVE_FIXED 3
#define DRIVE_REMOTE 4
#define DRIVE_CDROM 5
#define DRIVE_RAMDISK 6
#define DRIVE_UNKNOWN 0
#define DRIVE_NO_ROOT_DIR 1
#define FILE_TYPE_UNKNOWN 0
#define FILE_TYPE_DISK 1
#define FILE_TYPE_CHAR 2
#define FILE_TYPE_PIPE 3
#define FILE_TYPE_REMOTE 0x8000
/* also in ddk/ntapi.h */
#define HANDLE_FLAG_INHERIT		0x01
#define HANDLE_FLAG_PROTECT_FROM_CLOSE	0x02
/* end ntapi.h */
#define STD_INPUT_HANDLE (DWORD)(0xfffffff6)
#define STD_OUTPUT_HANDLE (DWORD)(0xfffffff5)
#define STD_ERROR_HANDLE (DWORD)(0xfffffff4)
#define INVALID_HANDLE_VALUE (HANDLE)(-1)
#define GET_TAPE_MEDIA_INFORMATION 0
#define GET_TAPE_DRIVE_INFORMATION 1
#define SET_TAPE_MEDIA_INFORMATION 0
#define SET_TAPE_DRIVE_INFORMATION 1
#define THREAD_PRIORITY_ABOVE_NORMAL 1
#define THREAD_PRIORITY_BELOW_NORMAL (-1)
#define THREAD_PRIORITY_HIGHEST 2
#define THREAD_PRIORITY_IDLE (-15)
#define THREAD_PRIORITY_LOWEST (-2)
#define THREAD_PRIORITY_NORMAL 0
#define THREAD_PRIORITY_TIME_CRITICAL 15
#define THREAD_PRIORITY_ERROR_RETURN 2147483647
#define TIME_ZONE_ID_UNKNOWN 0
#define TIME_ZONE_ID_STANDARD 1
#define TIME_ZONE_ID_DAYLIGHT 2
#define TIME_ZONE_ID_INVALID 0xFFFFFFFF
#define FS_CASE_IS_PRESERVED 2
#define FS_CASE_SENSITIVE 1
#define FS_UNICODE_STORED_ON_DISK 4
#define FS_PERSISTENT_ACLS 8
#define FS_FILE_COMPRESSION 16
#define FS_VOL_IS_COMPRESSED 32768
#define GMEM_FIXED 0
#define GMEM_MOVEABLE 2
#define GMEM_MODIFY 128
#define GPTR 64
#define GHND 66
#define GMEM_DDESHARE 8192
#define GMEM_DISCARDABLE 256
#define GMEM_LOWER 4096
#define GMEM_NOCOMPACT 16
#define GMEM_NODISCARD 32
#define GMEM_NOT_BANKED 4096
#define GMEM_NOTIFY 16384
#define GMEM_SHARE 8192
#define GMEM_ZEROINIT 64
#define GMEM_DISCARDED 16384
#define GMEM_INVALID_HANDLE 32768
#define GMEM_LOCKCOUNT 255
#define GMEM_VALID_FLAGS 32626
#define STATUS_WAIT_0 0
#define STATUS_ABANDONED_WAIT_0 0x80
#define STATUS_USER_APC 0xC0
#define STATUS_TIMEOUT 0x102
#define STATUS_PENDING 0x103
#define STATUS_SEGMENT_NOTIFICATION 0x40000005
#define STATUS_GUARD_PAGE_VIOLATION 0x80000001
#define STATUS_DATATYPE_MISALIGNMENT 0x80000002
#define STATUS_BREAKPOINT 0x80000003
#define STATUS_SINGLE_STEP 0x80000004
#define STATUS_ACCESS_VIOLATION 0xC0000005
#define STATUS_IN_PAGE_ERROR 0xC0000006
#define STATUS_INVALID_HANDLE 0xC0000008L
#define STATUS_NO_MEMORY 0xC0000017
#define STATUS_ILLEGAL_INSTRUCTION 0xC000001D
#define STATUS_NONCONTINUABLE_EXCEPTION 0xC0000025
#define STATUS_INVALID_DISPOSITION 0xC0000026
#define STATUS_ARRAY_BOUNDS_EXCEEDED 0xC000008C
#define STATUS_FLOAT_DENORMAL_OPERAND 0xC000008D
#define STATUS_FLOAT_DIVIDE_BY_ZERO 0xC000008E
#define STATUS_FLOAT_INEXACT_RESULT 0xC000008F
#define STATUS_FLOAT_INVALID_OPERATION 0xC0000090
#define STATUS_FLOAT_OVERFLOW 0xC0000091
#define STATUS_FLOAT_STACK_CHECK 0xC0000092
#define STATUS_FLOAT_UNDERFLOW 0xC0000093
#define STATUS_INTEGER_DIVIDE_BY_ZERO 0xC0000094
#define STATUS_INTEGER_OVERFLOW 0xC0000095
#define STATUS_PRIVILEGED_INSTRUCTION 0xC0000096
#define STATUS_STACK_OVERFLOW 0xC00000FD
#define STATUS_CONTROL_C_EXIT 0xC000013A
#define EXCEPTION_ACCESS_VIOLATION	STATUS_ACCESS_VIOLATION
#define EXCEPTION_DATATYPE_MISALIGNMENT	STATUS_DATATYPE_MISALIGNMENT
#define EXCEPTION_BREAKPOINT	STATUS_BREAKPOINT
#define EXCEPTION_SINGLE_STEP	STATUS_SINGLE_STEP
#define EXCEPTION_ARRAY_BOUNDS_EXCEEDED	STATUS_ARRAY_BOUNDS_EXCEEDED
#define EXCEPTION_FLT_DENORMAL_OPERAND	STATUS_FLOAT_DENORMAL_OPERAND
#define EXCEPTION_FLT_DIVIDE_BY_ZERO	STATUS_FLOAT_DIVIDE_BY_ZERO
#define EXCEPTION_FLT_INEXACT_RESULT	STATUS_FLOAT_INEXACT_RESULT
#define EXCEPTION_FLT_INVALID_OPERATION	STATUS_FLOAT_INVALID_OPERATION
#define EXCEPTION_FLT_OVERFLOW	STATUS_FLOAT_OVERFLOW
#define EXCEPTION_FLT_STACK_CHECK	STATUS_FLOAT_STACK_CHECK
#define EXCEPTION_FLT_UNDERFLOW	STATUS_FLOAT_UNDERFLOW
#define EXCEPTION_INT_DIVIDE_BY_ZERO	STATUS_INTEGER_DIVIDE_BY_ZERO
#define EXCEPTION_INT_OVERFLOW	STATUS_INTEGER_OVERFLOW
#define EXCEPTION_PRIV_INSTRUCTION	STATUS_PRIVILEGED_INSTRUCTION
#define EXCEPTION_IN_PAGE_ERROR	STATUS_IN_PAGE_ERROR
#define EXCEPTION_ILLEGAL_INSTRUCTION	STATUS_ILLEGAL_INSTRUCTION
#define EXCEPTION_NONCONTINUABLE_EXCEPTION	STATUS_NONCONTINUABLE_EXCEPTION
#define EXCEPTION_STACK_OVERFLOW	STATUS_STACK_OVERFLOW
#define EXCEPTION_INVALID_DISPOSITION	STATUS_INVALID_DISPOSITION
#define EXCEPTION_GUARD_PAGE	STATUS_GUARD_PAGE_VIOLATION
#define EXCEPTION_INVALID_HANDLE	STATUS_INVALID_HANDLE
#define CONTROL_C_EXIT	STATUS_CONTROL_C_EXIT
#define PROCESS_HEAP_REGION 1
#define PROCESS_HEAP_UNCOMMITTED_RANGE 2
#define PROCESS_HEAP_ENTRY_BUSY 4
#define PROCESS_HEAP_ENTRY_MOVEABLE 16
#define PROCESS_HEAP_ENTRY_DDESHARE 32
#define DONT_RESOLVE_DLL_REFERENCES 1
#define LOAD_LIBRARY_AS_DATAFILE 2
#define LOAD_WITH_ALTERED_SEARCH_PATH 8
#define LMEM_FIXED 0
#define LMEM_MOVEABLE 2
#define LMEM_NONZEROLHND 2
#define LMEM_NONZEROLPTR 0
#define LMEM_DISCARDABLE 3840
#define LMEM_NOCOMPACT 16
#define LMEM_NODISCARD 32
#define LMEM_ZEROINIT 64
#define LMEM_DISCARDED 16384
#define LMEM_MODIFY 128
#define LMEM_INVALID_HANDLE 32768
#define LMEM_LOCKCOUNT 255
#define LPTR 64
#define LHND 66
#define NONZEROLHND 2
#define NONZEROLPTR 0
#define LOCKFILE_FAIL_IMMEDIATELY 1
#define LOCKFILE_EXCLUSIVE_LOCK 2
#define LOGON32_PROVIDER_DEFAULT	0
#define LOGON32_PROVIDER_WINNT35	1
#define LOGON32_LOGON_INTERACTIVE	2
#define LOGON32_LOGON_BATCH	4
#define LOGON32_LOGON_SERVICE	5
#define MOVEFILE_REPLACE_EXISTING 1
#define MOVEFILE_COPY_ALLOWED 2
#define MOVEFILE_DELAY_UNTIL_REBOOT 4
#define MOVEFILE_WRITE_THROUGH 8
#define MAXIMUM_WAIT_OBJECTS 64
#define MAXIMUM_SUSPEND_COUNT 0x7F
#define WAIT_OBJECT_0 0
#define WAIT_ABANDONED_0 128
#ifndef WAIT_TIMEOUT /* also in winerror.h */
#define WAIT_TIMEOUT 258
#endif
#define WAIT_IO_COMPLETION 0xC0
#define WAIT_ABANDONED 128
#define WAIT_FAILED ((DWORD)0xFFFFFFFF)
#define PURGE_TXABORT 1
#define PURGE_RXABORT 2
#define PURGE_TXCLEAR 4
#define PURGE_RXCLEAR 8
#define EVENTLOG_SUCCESS 0
#define EVENTLOG_FORWARDS_READ 4
#define EVENTLOG_BACKWARDS_READ 8
#define EVENTLOG_SEEK_READ 2
#define EVENTLOG_SEQUENTIAL_READ 1
#define EVENTLOG_ERROR_TYPE 1
#define EVENTLOG_WARNING_TYPE 2
#define EVENTLOG_INFORMATION_TYPE 4
#define EVENTLOG_AUDIT_SUCCESS 8
#define EVENTLOG_AUDIT_FAILURE 16
#define FORMAT_MESSAGE_ALLOCATE_BUFFER 256
#define FORMAT_MESSAGE_IGNORE_INSERTS 512
#define FORMAT_MESSAGE_FROM_STRING 1024
#define FORMAT_MESSAGE_FROM_HMODULE 2048
#define FORMAT_MESSAGE_FROM_SYSTEM 4096
#define FORMAT_MESSAGE_ARGUMENT_ARRAY 8192
#define FORMAT_MESSAGE_MAX_WIDTH_MASK 255
#define EV_BREAK 64
#define EV_CTS 8
#define EV_DSR 16
#define EV_ERR 128
#define EV_EVENT1 2048
#define EV_EVENT2 4096
#define EV_PERR 512
#define EV_RING 256
#define EV_RLSD 32
#define EV_RX80FULL 1024
#define EV_RXCHAR 1
#define EV_RXFLAG 2
#define EV_TXEMPTY 4
/* also in ddk/ntapi.h */
#define SEM_FAILCRITICALERRORS		0x0001
#define SEM_NOGPFAULTERRORBOX		0x0002
#define SEM_NOALIGNMENTFAULTEXCEPT	0x0004
#define SEM_NOOPENFILEERRORBOX		0x8000
/* end ntapi.h */
#define SLE_ERROR 1
#define SLE_MINORERROR 2
#define SLE_WARNING 3
#define SHUTDOWN_NORETRY 1
#define EXCEPTION_EXECUTE_HANDLER 1
#define EXCEPTION_CONTINUE_EXECUTION (-1)
#define EXCEPTION_CONTINUE_SEARCH 0
#define MAXINTATOM 0xC000
#define INVALID_ATOM ((ATOM)0)
#define IGNORE	0
#define INFINITE	0xFFFFFFFF
#define NOPARITY	0
#define ODDPARITY	1
#define EVENPARITY	2
#define MARKPARITY	3
#define SPACEPARITY	4
#define ONESTOPBIT	0
#define ONE5STOPBITS	1
#define TWOSTOPBITS	2
#define CBR_110	110
#define CBR_300	300
#define CBR_600	600
#define CBR_1200	1200
#define CBR_2400	2400
#define CBR_4800	4800
#define CBR_9600	9600
#define CBR_14400	14400
#define CBR_19200	19200
#define CBR_38400	38400
#define CBR_56000	56000
#define CBR_57600	57600
#define CBR_115200	115200
#define CBR_128000	128000
#define CBR_256000	256000
#define BACKUP_INVALID	0
#define BACKUP_DATA 1
#define BACKUP_EA_DATA 2
#define BACKUP_SECURITY_DATA 3
#define BACKUP_ALTERNATE_DATA 4
#define BACKUP_LINK 5
#define BACKUP_PROPERTY_DATA 6
#define BACKUP_OBJECT_ID 7
#define BACKUP_REPARSE_DATA 8
#define BACKUP_SPARSE_BLOCK 9
#define STREAM_NORMAL_ATTRIBUTE 0
#define STREAM_MODIFIED_WHEN_READ 1
#define STREAM_CONTAINS_SECURITY 2
#define STREAM_CONTAINS_PROPERTIES 4
#define STARTF_USESHOWWINDOW 1
#define STARTF_USESIZE 2
#define STARTF_USEPOSITION 4
#define STARTF_USECOUNTCHARS 8
#define STARTF_USEFILLATTRIBUTE 16
#define STARTF_RUNFULLSCREEN 32
#define STARTF_FORCEONFEEDBACK 64
#define STARTF_FORCEOFFFEEDBACK 128
#define STARTF_USESTDHANDLES 256
#define STARTF_USEHOTKEY 512
#define TC_NORMAL 0
#define TC_HARDERR 1
#define TC_GP_TRAP 2
#define TC_SIGNAL 3
#define AC_LINE_OFFLINE 0
#define AC_LINE_ONLINE 1
#define AC_LINE_BACKUP_POWER 2
#define AC_LINE_UNKNOWN 255
#define BATTERY_FLAG_HIGH 1
#define BATTERY_FLAG_LOW 2
#define BATTERY_FLAG_CRITICAL 4
#define BATTERY_FLAG_CHARGING 8
#define BATTERY_FLAG_NO_BATTERY 128
#define BATTERY_FLAG_UNKNOWN 255
#define BATTERY_PERCENTAGE_UNKNOWN 255
#define BATTERY_LIFE_UNKNOWN 0xFFFFFFFF
#define DDD_RAW_TARGET_PATH 1
#define DDD_REMOVE_DEFINITION 2
#define DDD_EXACT_MATCH_ON_REMOVE 4
#define HINSTANCE_ERROR 32
#define MS_CTS_ON 16
#define MS_DSR_ON 32
#define MS_RING_ON 64
#define MS_RLSD_ON 128
#define DTR_CONTROL_DISABLE 0
#define DTR_CONTROL_ENABLE 1
#define DTR_CONTROL_HANDSHAKE 2
#define RTS_CONTROL_DISABLE 0
#define RTS_CONTROL_ENABLE 1
#define RTS_CONTROL_HANDSHAKE 2
#define RTS_CONTROL_TOGGLE 3
#define SECURITY_ANONYMOUS (SecurityAnonymous<<16)
#define SECURITY_IDENTIFICATION (SecurityIdentification<<16)
#define SECURITY_IMPERSONATION (SecurityImpersonation<<16)
#define SECURITY_DELEGATION (SecurityDelegation<<16)
#define SECURITY_CONTEXT_TRACKING 0x40000
#define SECURITY_EFFECTIVE_ONLY 0x80000
#define SECURITY_SQOS_PRESENT 0x100000
#define SECURITY_VALID_SQOS_FLAGS 0x1F0000
#define INVALID_FILE_SIZE 0xFFFFFFFF
#define TLS_OUT_OF_INDEXES (DWORD)0xFFFFFFFF

#ifndef RC_INVOKED
typedef struct _FILETIME {
	DWORD dwLowDateTime;
	DWORD dwHighDateTime;
} FILETIME,*PFILETIME,*LPFILETIME;
typedef struct _BY_HANDLE_FILE_INFORMATION {
	DWORD	dwFileAttributes;
	FILETIME	ftCreationTime;
	FILETIME	ftLastAccessTime;
	FILETIME	ftLastWriteTime;
	DWORD	dwVolumeSerialNumber;
	DWORD	nFileSizeHigh;
	DWORD	nFileSizeLow;
	DWORD	nNumberOfLinks;
	DWORD	nFileIndexHigh;
	DWORD	nFileIndexLow;
} BY_HANDLE_FILE_INFORMATION,*LPBY_HANDLE_FILE_INFORMATION;
typedef struct _DCB {
	DWORD DCBlength;
	DWORD BaudRate;
	DWORD fBinary:1;
	DWORD fParity:1;
	DWORD fOutxCtsFlow:1;
	DWORD fOutxDsrFlow:1;
	DWORD fDtrControl:2;
	DWORD fDsrSensitivity:1;
	DWORD fTXContinueOnXoff:1;
	DWORD fOutX:1;
	DWORD fInX:1;
	DWORD fErrorChar:1;
	DWORD fNull:1;
	DWORD fRtsControl:2;
	DWORD fAbortOnError:1;
	DWORD fDummy2:17;
	WORD wReserved;
	WORD XonLim;
	WORD XoffLim;
	BYTE ByteSize;
	BYTE Parity;
	BYTE StopBits;
	char XonChar;
	char XoffChar;
	char ErrorChar;
	char EofChar;
	char EvtChar;
	WORD wReserved1;
} DCB,*LPDCB;
typedef struct _COMM_CONFIG {
	DWORD dwSize;
	WORD  wVersion;
	WORD  wReserved;
	DCB   dcb;
	DWORD dwProviderSubType;
	DWORD dwProviderOffset;
	DWORD dwProviderSize;
	WCHAR wcProviderData[1];
} COMMCONFIG,*LPCOMMCONFIG;
typedef struct _COMMPROP {
	WORD	wPacketLength;
	WORD	wPacketVersion;
	DWORD	dwServiceMask;
	DWORD	dwReserved1;
	DWORD	dwMaxTxQueue;
	DWORD	dwMaxRxQueue;
	DWORD	dwMaxBaud;
	DWORD	dwProvSubType;
	DWORD	dwProvCapabilities;
	DWORD	dwSettableParams;
	DWORD	dwSettableBaud;
	WORD	wSettableData;
	WORD	wSettableStopParity;
	DWORD	dwCurrentTxQueue;
	DWORD	dwCurrentRxQueue;
	DWORD	dwProvSpec1;
	DWORD	dwProvSpec2;
	WCHAR	wcProvChar[1];
} COMMPROP,*LPCOMMPROP;
typedef struct _COMMTIMEOUTS {
	DWORD ReadIntervalTimeout;
	DWORD ReadTotalTimeoutMultiplier;
	DWORD ReadTotalTimeoutConstant;
	DWORD WriteTotalTimeoutMultiplier;
	DWORD WriteTotalTimeoutConstant;
} COMMTIMEOUTS,*LPCOMMTIMEOUTS;
typedef struct _COMSTAT {
	DWORD fCtsHold:1;
	DWORD fDsrHold:1;
	DWORD fRlsdHold:1;
	DWORD fXoffHold:1;
	DWORD fXoffSent:1;
	DWORD fEof:1;
	DWORD fTxim:1;
	DWORD fReserved:25;
	DWORD cbInQue;
	DWORD cbOutQue;
} COMSTAT,*LPCOMSTAT;
typedef DWORD (WINAPI *LPTHREAD_START_ROUTINE)(LPVOID);
typedef struct _CREATE_PROCESS_DEBUG_INFO {
	HANDLE hFile;
	HANDLE hProcess;
	HANDLE hThread;
	LPVOID lpBaseOfImage;
	DWORD dwDebugInfoFileOffset;
	DWORD nDebugInfoSize;
	LPVOID lpThreadLocalBase;
	LPTHREAD_START_ROUTINE lpStartAddress;
	LPVOID lpImageName;
	WORD fUnicode;
} CREATE_PROCESS_DEBUG_INFO,*LPCREATE_PROCESS_DEBUG_INFO;
typedef struct _CREATE_THREAD_DEBUG_INFO {
	HANDLE hThread;
	LPVOID lpThreadLocalBase;
	LPTHREAD_START_ROUTINE lpStartAddress;
} CREATE_THREAD_DEBUG_INFO,*LPCREATE_THREAD_DEBUG_INFO;
typedef struct _EXCEPTION_DEBUG_INFO {
	EXCEPTION_RECORD ExceptionRecord;
	DWORD dwFirstChance;
} EXCEPTION_DEBUG_INFO,*LPEXCEPTION_DEBUG_INFO;
typedef struct _EXIT_THREAD_DEBUG_INFO {
	DWORD dwExitCode;
} EXIT_THREAD_DEBUG_INFO,*LPEXIT_THREAD_DEBUG_INFO;
typedef struct _EXIT_PROCESS_DEBUG_INFO {
	DWORD dwExitCode;
} EXIT_PROCESS_DEBUG_INFO,*LPEXIT_PROCESS_DEBUG_INFO;
typedef struct _LOAD_DLL_DEBUG_INFO {
	HANDLE hFile;
	LPVOID lpBaseOfDll;
	DWORD dwDebugInfoFileOffset;
	DWORD nDebugInfoSize;
	LPVOID lpImageName;
	WORD fUnicode;
} LOAD_DLL_DEBUG_INFO,*LPLOAD_DLL_DEBUG_INFO;
typedef struct _UNLOAD_DLL_DEBUG_INFO {
	LPVOID lpBaseOfDll;
} UNLOAD_DLL_DEBUG_INFO,*LPUNLOAD_DLL_DEBUG_INFO;
typedef struct _OUTPUT_DEBUG_STRING_INFO {
	LPSTR lpDebugStringData;
	WORD fUnicode;
	WORD nDebugStringLength;
} OUTPUT_DEBUG_STRING_INFO,*LPOUTPUT_DEBUG_STRING_INFO;
typedef struct _RIP_INFO {
	DWORD dwError;
	DWORD dwType;
} RIP_INFO,*LPRIP_INFO;
typedef struct _DEBUG_EVENT {
	DWORD dwDebugEventCode;
	DWORD dwProcessId;
	DWORD dwThreadId;
	union {
		EXCEPTION_DEBUG_INFO Exception;
		CREATE_THREAD_DEBUG_INFO CreateThread;
		CREATE_PROCESS_DEBUG_INFO CreateProcessInfo;
		EXIT_THREAD_DEBUG_INFO ExitThread;
		EXIT_PROCESS_DEBUG_INFO ExitProcess;
		LOAD_DLL_DEBUG_INFO LoadDll;
		UNLOAD_DLL_DEBUG_INFO UnloadDll;
		OUTPUT_DEBUG_STRING_INFO DebugString;
		RIP_INFO RipInfo;
	} u;
} DEBUG_EVENT,*LPDEBUG_EVENT;
typedef struct _OVERLAPPED {
	DWORD Internal;
	DWORD InternalHigh;
	DWORD Offset;
	DWORD OffsetHigh;
	HANDLE hEvent;
} OVERLAPPED,*POVERLAPPED,*LPOVERLAPPED;
typedef struct _STARTUPINFOA {
	DWORD	cb;
	LPSTR	lpReserved;
	LPSTR	lpDesktop;
	LPSTR	lpTitle;
	DWORD	dwX;
	DWORD	dwY;
	DWORD	dwXSize;
	DWORD	dwYSize;
	DWORD	dwXCountChars;
	DWORD	dwYCountChars;
	DWORD	dwFillAttribute;
	DWORD	dwFlags;
	WORD	wShowWindow;
	WORD	cbReserved2;
	PBYTE	lpReserved2;
	HANDLE	hStdInput;
	HANDLE	hStdOutput;
	HANDLE	hStdError;
} STARTUPINFOA,*LPSTARTUPINFOA;
typedef struct _STARTUPINFOW {
	DWORD	cb;
	LPWSTR	lpReserved;
	LPWSTR	lpDesktop;
	LPWSTR	lpTitle;
	DWORD	dwX;
	DWORD	dwY;
	DWORD	dwXSize;
	DWORD	dwYSize;
	DWORD	dwXCountChars;
	DWORD	dwYCountChars;
	DWORD	dwFillAttribute;
	DWORD	dwFlags;
	WORD	wShowWindow;
	WORD	cbReserved2;
	PBYTE	lpReserved2;
	HANDLE	hStdInput;
	HANDLE	hStdOutput;
	HANDLE	hStdError;
} STARTUPINFOW,*LPSTARTUPINFOW;
typedef struct _PROCESS_INFORMATION {
	HANDLE hProcess;
	HANDLE hThread;
	DWORD dwProcessId;
	DWORD dwThreadId;
} PROCESS_INFORMATION,*LPPROCESS_INFORMATION;
typedef struct _CRITICAL_SECTION_DEBUG {
	WORD Type;
	WORD CreatorBackTraceIndex;
	struct _CRITICAL_SECTION *CriticalSection;
	LIST_ENTRY ProcessLocksList;
	DWORD EntryCount;
	DWORD ContentionCount;
	DWORD Spare [2];
} CRITICAL_SECTION_DEBUG,*PCRITICAL_SECTION_DEBUG;
typedef struct _CRITICAL_SECTION {
	PCRITICAL_SECTION_DEBUG DebugInfo;
	LONG LockCount;
	LONG RecursionCount;
	HANDLE OwningThread;
	HANDLE LockSemaphore;
	DWORD SpinCount;
} CRITICAL_SECTION,*PCRITICAL_SECTION,*LPCRITICAL_SECTION;
typedef struct _SYSTEMTIME {
	WORD wYear;
	WORD wMonth;
	WORD wDayOfWeek;
	WORD wDay;
	WORD wHour;
	WORD wMinute;
	WORD wSecond;
	WORD wMilliseconds;
} SYSTEMTIME,*LPSYSTEMTIME;
typedef struct _WIN32_FILE_ATTRIBUTE_DATA {
	DWORD	dwFileAttributes;
	FILETIME	ftCreationTime;
	FILETIME	ftLastAccessTime;
	FILETIME	ftLastWriteTime;
	DWORD	nFileSizeHigh;
	DWORD	nFileSizeLow;
} WIN32_FILE_ATTRIBUTE_DATA,*LPWIN32_FILE_ATTRIBUTE_DATA;
typedef struct _WIN32_FIND_DATAA {
	DWORD dwFileAttributes;
	FILETIME ftCreationTime;
	FILETIME ftLastAccessTime;
	FILETIME ftLastWriteTime;
	DWORD nFileSizeHigh;
	DWORD nFileSizeLow;
	DWORD dwReserved0;
	DWORD dwReserved1;
	CHAR cFileName[MAX_PATH];
	CHAR cAlternateFileName[14];
} WIN32_FIND_DATAA,*PWIN32_FIND_DATAA,*LPWIN32_FIND_DATAA;
typedef struct _WIN32_FIND_DATAW {
	DWORD dwFileAttributes;
	FILETIME ftCreationTime;
	FILETIME ftLastAccessTime;
	FILETIME ftLastWriteTime;
	DWORD nFileSizeHigh;
	DWORD nFileSizeLow;
	DWORD dwReserved0;
	DWORD dwReserved1;
	WCHAR cFileName[MAX_PATH];
	WCHAR cAlternateFileName[14];
} WIN32_FIND_DATAW,*PWIN32_FIND_DATAW,*LPWIN32_FIND_DATAW;
typedef struct _WIN32_STREAM_ID {
	DWORD dwStreamId;
	DWORD dwStreamAttributes;
	LARGE_INTEGER Size;
	DWORD dwStreamNameSize;
	WCHAR cStreamName[ANYSIZE_ARRAY];
} WIN32_STREAM_ID;
typedef enum _FINDEX_INFO_LEVELS {
	FindExInfoStandard,
	FindExInfoMaxInfoLevel
} FINDEX_INFO_LEVELS;
typedef enum _FINDEX_SEARCH_OPS {
	FindExSearchNameMatch,
	FindExSearchLimitToDirectories,
	FindExSearchLimitToDevices,
	FindExSearchMaxSearchOp
} FINDEX_SEARCH_OPS;
typedef enum _ACL_INFORMATION_CLASS {
	AclRevisionInformation=1,
	AclSizeInformation
} ACL_INFORMATION_CLASS;
typedef struct tagHW_PROFILE_INFOA {
	DWORD dwDockInfo;
	CHAR szHwProfileGuid[HW_PROFILE_GUIDLEN];
	CHAR szHwProfileName[MAX_PROFILE_LEN];
} HW_PROFILE_INFOA,*LPHW_PROFILE_INFOA;
typedef struct tagHW_PROFILE_INFOW {
	DWORD dwDockInfo;
	WCHAR szHwProfileGuid[HW_PROFILE_GUIDLEN];
	WCHAR szHwProfileName[MAX_PROFILE_LEN];
} HW_PROFILE_INFOW,*LPHW_PROFILE_INFOW;
typedef enum _GET_FILEEX_INFO_LEVELS {
	GetFileExInfoStandard,
	GetFileExMaxInfoLevel
} GET_FILEEX_INFO_LEVELS;
typedef struct _SYSTEM_INFO {
	_ANONYMOUS_UNION union {
		DWORD dwOemId;
		_ANONYMOUS_STRUCT struct {
			WORD wProcessorArchitecture;
			WORD wReserved;
		} DUMMYSTRUCTNAME;
	} DUMMYUNIONNAME;
	DWORD dwPageSize;
	PVOID lpMinimumApplicationAddress;
	PVOID lpMaximumApplicationAddress;
	DWORD dwActiveProcessorMask;
	DWORD dwNumberOfProcessors;
	DWORD dwProcessorType;
	DWORD dwAllocationGranularity;
	WORD wProcessorLevel;
	WORD wProcessorRevision;
} SYSTEM_INFO,*LPSYSTEM_INFO;
typedef struct _SYSTEM_POWER_STATUS {
	BYTE ACLineStatus;
	BYTE BatteryFlag;
	BYTE BatteryLifePercent;
	BYTE Reserved1;
	DWORD BatteryLifeTime;
	DWORD BatteryFullLifeTime;
} SYSTEM_POWER_STATUS,*LPSYSTEM_POWER_STATUS;
typedef struct _TIME_ZONE_INFORMATION {
	LONG Bias;
	WCHAR StandardName[32];
	SYSTEMTIME StandardDate;
	LONG StandardBias;
	WCHAR DaylightName[32];
	SYSTEMTIME DaylightDate;
	LONG DaylightBias;
} TIME_ZONE_INFORMATION,*LPTIME_ZONE_INFORMATION;
typedef struct _MEMORYSTATUS {
	DWORD dwLength;
	DWORD dwMemoryLoad;
	DWORD dwTotalPhys;
	DWORD dwAvailPhys;
	DWORD dwTotalPageFile;
	DWORD dwAvailPageFile;
	DWORD dwTotalVirtual;
	DWORD dwAvailVirtual;
} MEMORYSTATUS,*LPMEMORYSTATUS;
#if (_WIN32_WINNT >= 0x0500)
typedef struct _MEMORYSTATUSEX {
	DWORD dwLength;
	DWORD dwMemoryLoad;
	DWORDLONG ullTotalPhys;
	DWORDLONG ullAvailPhys;
	DWORDLONG ullTotalPageFile;
	DWORDLONG ullAvailPageFile;
	DWORDLONG ullTotalVirtual;
	DWORDLONG ullAvailVirtual;
	DWORDLONG ullAvailExtendedVirtual;
} MEMORYSTATUSEX, *LPMEMORYSTATUSEX;
#endif
typedef struct _LDT_ENTRY {
	WORD LimitLow;
	WORD BaseLow;
	union {
		struct {
			BYTE BaseMid;
			BYTE Flags1;
			BYTE Flags2;
			BYTE BaseHi;
		} Bytes;
		struct {
			DWORD BaseMid:8;
			DWORD Type:5;
			DWORD Dpl:2;
			DWORD Pres:1;
			DWORD LimitHi:4;
			DWORD Sys:1;
			DWORD Reserved_0:1;
			DWORD Default_Big:1;
			DWORD Granularity:1;
			DWORD BaseHi:8;
		} Bits;
	} HighWord;
} LDT_ENTRY,*PLDT_ENTRY,*LPLDT_ENTRY;
typedef struct _PROCESS_HEAP_ENTRY {
	PVOID lpData;
	DWORD cbData;
	BYTE cbOverhead;
	BYTE iRegionIndex;
	WORD wFlags;
	_ANONYMOUS_UNION union {
		struct {
			HANDLE hMem;
			DWORD dwReserved[3];
		} Block;
		struct {
			DWORD dwCommittedSize;
			DWORD dwUnCommittedSize;
			LPVOID lpFirstBlock;
			LPVOID lpLastBlock;
		} Region;
	} DUMMYUNIONNAME;
} PROCESS_HEAP_ENTRY,*LPPROCESS_HEAP_ENTRY;
typedef struct _OFSTRUCT {
	BYTE cBytes;
	BYTE fFixedDisk;
	WORD nErrCode;
	WORD Reserved1;
	WORD Reserved2;
	CHAR szPathName[OFS_MAXPATHNAME];
} OFSTRUCT,*LPOFSTRUCT,*POFSTRUCT;
typedef struct _WIN_CERTIFICATE {
      DWORD dwLength;
      WORD wRevision;
      WORD wCertificateType;
      BYTE bCertificate[1];
} WIN_CERTIFICATE, *LPWIN_CERTIFICATE;

typedef DWORD(WINAPI *LPPROGRESS_ROUTINE)(LARGE_INTEGER,LARGE_INTEGER,LARGE_INTEGER,LARGE_INTEGER,DWORD,DWORD,HANDLE,HANDLE,LPVOID);
typedef void(WINAPI *LPFIBER_START_ROUTINE)(PVOID);
typedef BOOL(CALLBACK *ENUMRESLANGPROC)(HMODULE,LPCTSTR,LPCTSTR,WORD,LONG);
typedef BOOL(CALLBACK *ENUMRESNAMEPROC)(HMODULE,LPCTSTR,LPTSTR,LONG);
typedef BOOL(CALLBACK *ENUMRESTYPEPROC)(HMODULE,LPTSTR,LONG);
typedef void(CALLBACK *LPOVERLAPPED_COMPLETION_ROUTINE)(DWORD,DWORD,LPOVERLAPPED);
typedef LONG(CALLBACK *PTOP_LEVEL_EXCEPTION_FILTER)(LPEXCEPTION_POINTERS);
typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;
typedef void(APIENTRY *PAPCFUNC)(DWORD);
typedef void(CALLBACK *PTIMERAPCROUTINE)(PVOID,DWORD,DWORD);
#define MAKEINTATOM(i) (LPTSTR)((DWORD)((WORD)(i)))
/* Functions */
#ifndef UNDER_CE
int APIENTRY WinMain(HINSTANCE,HINSTANCE,LPSTR,int);
#else
int APIENTRY WinMain(HINSTANCE,HINSTANCE,LPWSTR,int);
#endif
int APIENTRY wWinMain(HINSTANCE,HINSTANCE,LPWSTR,int);
long WINAPI _hread(HFILE,LPVOID,long);
long WINAPI _hwrite(HFILE,LPCSTR,long);
HFILE WINAPI _lclose(HFILE);
HFILE WINAPI _lcreat(LPCSTR,int);
LONG WINAPI _llseek(HFILE,LONG,int);
HFILE WINAPI _lopen(LPCSTR,int);
UINT WINAPI _lread(HFILE,LPVOID,UINT);
UINT WINAPI _lwrite(HFILE,LPCSTR,UINT);
#define AbnormalTermination() FALSE
BOOL WINAPI AccessCheck(PSECURITY_DESCRIPTOR,HANDLE,DWORD,PGENERIC_MAPPING,PPRIVILEGE_SET,PDWORD,PDWORD,PBOOL);
BOOL WINAPI AccessCheckAndAuditAlarmA(LPCSTR,LPVOID,LPSTR,LPSTR,PSECURITY_DESCRIPTOR,DWORD,PGENERIC_MAPPING,BOOL,PDWORD,PBOOL,PBOOL);
BOOL WINAPI AccessCheckAndAuditAlarmW(LPCWSTR,LPVOID,LPWSTR,LPWSTR,PSECURITY_DESCRIPTOR,DWORD,PGENERIC_MAPPING,BOOL,PDWORD,PBOOL,PBOOL);
BOOL WINAPI AddAccessAllowedAce(PACL,DWORD,DWORD,PSID);
BOOL WINAPI AddAccessDeniedAce(PACL,DWORD,DWORD,PSID);
#if (_WIN32_WINNT >= 0x0500)
BOOL WINAPI AddAccessAllowedAceEx(PACL,DWORD,DWORD,DWORD,PSID);
BOOL WINAPI AddAccessDeniedAceEx(PACL,DWORD,DWORD,DWORD,PSID);
#endif
BOOL WINAPI AddAce(PACL,DWORD,DWORD,PVOID,DWORD);
ATOM WINAPI AddAtomA(LPCSTR);
ATOM WINAPI AddAtomW(LPCWSTR);
BOOL WINAPI AddAuditAccessAce(PACL,DWORD,DWORD,PSID,BOOL,BOOL);
BOOL WINAPI AdjustTokenGroups(HANDLE,BOOL,PTOKEN_GROUPS,DWORD,PTOKEN_GROUPS,PDWORD);
BOOL WINAPI AdjustTokenPrivileges(HANDLE,BOOL,PTOKEN_PRIVILEGES,DWORD,PTOKEN_PRIVILEGES,PDWORD);
BOOL WINAPI AllocateAndInitializeSid(PSID_IDENTIFIER_AUTHORITY,BYTE,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,PSID*);
BOOL WINAPI AllocateLocallyUniqueId(PLUID);
BOOL WINAPI AreAllAccessesGranted(DWORD,DWORD);
BOOL WINAPI AreAnyAccessesGranted(DWORD,DWORD);
BOOL WINAPI AreFileApisANSI(void);
BOOL WINAPI BackupEventLogA(HANDLE,LPCSTR);
BOOL WINAPI BackupEventLogW(HANDLE,LPCWSTR);
BOOL WINAPI BackupRead(HANDLE,LPBYTE,DWORD,LPDWORD,BOOL,BOOL,LPVOID*);
BOOL WINAPI BackupSeek(HANDLE,DWORD,DWORD,LPDWORD,LPDWORD,LPVOID*);
BOOL WINAPI BackupWrite(HANDLE,LPBYTE,DWORD,LPDWORD,BOOL,BOOL,LPVOID*);
BOOL WINAPI Beep(DWORD,DWORD);
HANDLE WINAPI BeginUpdateResourceA(LPCSTR,BOOL);
HANDLE WINAPI BeginUpdateResourceW(LPCWSTR,BOOL);
BOOL WINAPI BuildCommDCBA(LPCSTR,LPDCB);
BOOL WINAPI BuildCommDCBW(LPCWSTR,LPDCB);
BOOL WINAPI BuildCommDCBAndTimeoutsA(LPCSTR,LPDCB,LPCOMMTIMEOUTS);
BOOL WINAPI BuildCommDCBAndTimeoutsW(LPCWSTR,LPDCB,LPCOMMTIMEOUTS);
BOOL WINAPI CallNamedPipeA(LPCSTR,PVOID,DWORD,PVOID,DWORD,PDWORD,DWORD);
BOOL WINAPI CallNamedPipeW(LPCWSTR,PVOID,DWORD,PVOID,DWORD,PDWORD,DWORD);
BOOL WINAPI CancelIo(HANDLE);
BOOL WINAPI CancelWaitableTimer(HANDLE);
BOOL WINAPI ClearCommBreak(HANDLE);
BOOL WINAPI ClearCommError(HANDLE,PDWORD,LPCOMSTAT);
BOOL WINAPI ClearEventLogA(HANDLE,LPCSTR);
BOOL WINAPI ClearEventLogW(HANDLE,LPCWSTR);
BOOL WINAPI CloseEventLog(HANDLE);
BOOL WINAPI CloseHandle(HANDLE);
BOOL WINAPI CommConfigDialogA(LPCSTR,HWND,LPCOMMCONFIG);
BOOL WINAPI CommConfigDialogW(LPCWSTR,HWND,LPCOMMCONFIG);
LONG WINAPI CompareFileTime(CONST FILETIME*,CONST FILETIME*);
BOOL WINAPI ConnectNamedPipe(HANDLE,LPOVERLAPPED);
BOOL WINAPI ContinueDebugEvent(DWORD,DWORD,DWORD);
PVOID WINAPI ConvertThreadToFiber(PVOID);
BOOL WINAPI CopyFileA(LPCSTR,LPCSTR,BOOL);
BOOL WINAPI CopyFileW(LPCWSTR,LPCWSTR,BOOL);
BOOL WINAPI CopyFileExA(LPCSTR,LPCSTR,LPPROGRESS_ROUTINE,LPVOID,LPBOOL,DWORD);
BOOL WINAPI CopyFileExW(LPCWSTR,LPCWSTR,LPPROGRESS_ROUTINE,LPVOID,LPBOOL,DWORD);
#define RtlMoveMemory memmove
#define RtlCopyMemory memcpy
#define RtlFillMemory(d,l,f) memset((d), (f), (l))
#define RtlZeroMemory(d,l) RtlFillMemory((d),(l),0)
#define MoveMemory RtlMoveMemory
#define CopyMemory RtlCopyMemory
#define FillMemory RtlFillMemory
#define ZeroMemory RtlZeroMemory
BOOL WINAPI CopySid(DWORD,PSID,PSID);
BOOL WINAPI CreateDirectoryA(LPCSTR,LPSECURITY_ATTRIBUTES);
BOOL WINAPI CreateDirectoryW(LPCWSTR,LPSECURITY_ATTRIBUTES);
BOOL WINAPI CreateDirectoryExA(LPCSTR,LPCSTR,LPSECURITY_ATTRIBUTES);
BOOL WINAPI CreateDirectoryExW(LPCWSTR,LPCWSTR,LPSECURITY_ATTRIBUTES);
HANDLE WINAPI CreateEventA(LPSECURITY_ATTRIBUTES,BOOL,BOOL,LPCSTR);
HANDLE WINAPI CreateEventW(LPSECURITY_ATTRIBUTES,BOOL,BOOL,LPCWSTR);
LPVOID WINAPI CreateFiber(SIZE_T,LPFIBER_START_ROUTINE,LPVOID);
LPVOID WINAPI CreateFiberEx(SIZE_T,SIZE_T,DWORD,LPFIBER_START_ROUTINE,LPVOID);
HANDLE WINAPI CreateFileA(LPCSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES,DWORD,DWORD,HANDLE);
HANDLE WINAPI CreateFileW(LPCWSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES,DWORD,DWORD,HANDLE);
HANDLE WINAPI CreateFileMappingA(HANDLE,LPSECURITY_ATTRIBUTES,DWORD,DWORD,DWORD,LPCSTR);
HANDLE WINAPI CreateFileMappingW(HANDLE,LPSECURITY_ATTRIBUTES,DWORD,DWORD,DWORD,LPCWSTR);
#if (_WIN32_WINNT >= 0x0500)
BOOL WINAPI CreateHardLinkA(LPCSTR,LPCSTR,LPSECURITY_ATTRIBUTES);
BOOL WINAPI CreateHardLinkW(LPCWSTR,LPCWSTR,LPSECURITY_ATTRIBUTES);
#endif
HANDLE WINAPI CreateIoCompletionPort(HANDLE,HANDLE,DWORD,DWORD);
#if (_WIN32_WINNT >= 0x0500)
HANDLE WINAPI CreateJobObjectA(LPSECURITY_ATTRIBUTES,LPCSTR);
HANDLE WINAPI CreateJobObjectW(LPSECURITY_ATTRIBUTES,LPCWSTR);
BOOL WINAPI TerminateJobObject(HANDLE,UINT);
BOOL WINAPI AssignProcessToJobObject(HANDLE,HANDLE);
#endif
HANDLE WINAPI CreateMailslotA(LPCSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES);
HANDLE WINAPI CreateMailslotW(LPCWSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES);
HANDLE WINAPI CreateMutexA(LPSECURITY_ATTRIBUTES,BOOL,LPCSTR);
HANDLE WINAPI CreateMutexW(LPSECURITY_ATTRIBUTES,BOOL,LPCWSTR);
HANDLE WINAPI CreateNamedPipeA(LPCSTR,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,LPSECURITY_ATTRIBUTES);
HANDLE WINAPI CreateNamedPipeW(LPCWSTR,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,LPSECURITY_ATTRIBUTES);
BOOL WINAPI CreatePipe(PHANDLE,PHANDLE,LPSECURITY_ATTRIBUTES,DWORD);
BOOL WINAPI CreatePrivateObjectSecurity(PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR*,BOOL,HANDLE,PGENERIC_MAPPING);
BOOL WINAPI CreateProcessA(LPCSTR,LPSTR,LPSECURITY_ATTRIBUTES,LPSECURITY_ATTRIBUTES,BOOL,DWORD,PVOID,LPCSTR,LPSTARTUPINFOA,LPPROCESS_INFORMATION);
BOOL WINAPI CreateProcessW(LPCWSTR,LPWSTR,LPSECURITY_ATTRIBUTES,LPSECURITY_ATTRIBUTES,BOOL,DWORD,PVOID,LPCWSTR,LPSTARTUPINFOW,LPPROCESS_INFORMATION);
BOOL WINAPI CreateProcessAsUserA(HANDLE,LPCSTR,LPSTR,LPSECURITY_ATTRIBUTES,LPSECURITY_ATTRIBUTES,BOOL,DWORD,PVOID,LPCSTR,LPSTARTUPINFOA,LPPROCESS_INFORMATION);
BOOL WINAPI CreateProcessAsUserW(HANDLE,LPCWSTR,LPWSTR,LPSECURITY_ATTRIBUTES,LPSECURITY_ATTRIBUTES,BOOL,DWORD,PVOID,LPCWSTR,LPSTARTUPINFOW,LPPROCESS_INFORMATION);
HANDLE WINAPI CreateRemoteThread(HANDLE,LPSECURITY_ATTRIBUTES,DWORD,LPTHREAD_START_ROUTINE,LPVOID,DWORD,LPDWORD);
HANDLE WINAPI CreateSemaphoreA(LPSECURITY_ATTRIBUTES,LONG,LONG,LPCSTR);
HANDLE WINAPI CreateSemaphoreW(LPSECURITY_ATTRIBUTES,LONG,LONG,LPCWSTR);
DWORD WINAPI CreateTapePartition(HANDLE,DWORD,DWORD,DWORD);
HANDLE WINAPI CreateThread(LPSECURITY_ATTRIBUTES,DWORD,LPTHREAD_START_ROUTINE,PVOID,DWORD,PDWORD);
HANDLE WINAPI CreateWaitableTimerA(LPSECURITY_ATTRIBUTES,BOOL,LPCSTR);
HANDLE WINAPI CreateWaitableTimerW(LPSECURITY_ATTRIBUTES,BOOL,LPCWSTR);
BOOL WINAPI DebugActiveProcess(DWORD);
void WINAPI DebugBreak(void);
BOOL WINAPI DefineDosDeviceA(DWORD,LPCSTR,LPCSTR);
BOOL WINAPI DefineDosDeviceW(DWORD,LPCWSTR,LPCWSTR);
#define DefineHandleTable(w) ((w),TRUE)
BOOL WINAPI DeleteAce(PACL,DWORD);
ATOM WINAPI DeleteAtom(ATOM);
void WINAPI DeleteCriticalSection(PCRITICAL_SECTION);
void WINAPI DeleteFiber(PVOID);
BOOL WINAPI DeleteFileA(LPCSTR);
BOOL WINAPI DeleteFileW(LPCWSTR);
#if (_WIN32_WINNT >= 0x0500)
BOOL WINAPI DeleteVolumeMountPointA(LPCSTR);
BOOL WINAPI DeleteVolumeMountPointW(LPCWSTR);
#endif
BOOL WINAPI DeregisterEventSource(HANDLE);
BOOL WINAPI DestroyPrivateObjectSecurity(PSECURITY_DESCRIPTOR*);
BOOL WINAPI DeviceIoControl(HANDLE,DWORD,PVOID,DWORD,PVOID,DWORD,PDWORD,POVERLAPPED);
BOOL WINAPI DisableThreadLibraryCalls(HMODULE);
BOOL WINAPI DisconnectNamedPipe(HANDLE);
BOOL WINAPI DosDateTimeToFileTime(WORD,WORD,LPFILETIME);
BOOL WINAPI DuplicateHandle(HANDLE,HANDLE,HANDLE,PHANDLE,DWORD,BOOL,DWORD);
BOOL WINAPI DuplicateToken(HANDLE,SECURITY_IMPERSONATION_LEVEL,PHANDLE);
BOOL WINAPI DuplicateTokenEx(HANDLE,DWORD,LPSECURITY_ATTRIBUTES,SECURITY_IMPERSONATION_LEVEL,TOKEN_TYPE,PHANDLE);
BOOL WINAPI EncryptFileA(LPCSTR);
BOOL WINAPI EncryptFileW(LPCWSTR);
BOOL WINAPI EndUpdateResourceA(HANDLE,BOOL);
BOOL WINAPI EndUpdateResourceW(HANDLE,BOOL);
void WINAPI EnterCriticalSection(LPCRITICAL_SECTION);
BOOL WINAPI EnumResourceLanguagesA(HMODULE,LPCSTR,LPCSTR,ENUMRESLANGPROC,LONG_PTR);
BOOL WINAPI EnumResourceLanguagesW(HMODULE,LPCWSTR,LPCWSTR,ENUMRESLANGPROC,LONG_PTR);
BOOL WINAPI EnumResourceNamesA(HMODULE,LPCSTR,ENUMRESNAMEPROC,LONG_PTR);
BOOL WINAPI EnumResourceNamesW(HMODULE,LPCWSTR,ENUMRESNAMEPROC,LONG_PTR);
BOOL WINAPI EnumResourceTypesA(HMODULE,ENUMRESTYPEPROC,LONG_PTR);
BOOL WINAPI EnumResourceTypesW(HMODULE,ENUMRESTYPEPROC,LONG_PTR);
BOOL WINAPI EqualPrefixSid(PSID,PSID);
BOOL WINAPI EqualSid(PSID,PSID);
DWORD WINAPI EraseTape(HANDLE,DWORD,BOOL);
BOOL WINAPI EscapeCommFunction(HANDLE,DWORD);
DECLSPEC_NORETURN void WINAPI ExitProcess(UINT);
DECLSPEC_NORETURN void WINAPI ExitThread(DWORD);
DWORD WINAPI ExpandEnvironmentStringsA(LPCSTR,LPSTR,DWORD);
DWORD WINAPI ExpandEnvironmentStringsW(LPCWSTR,LPWSTR,DWORD);
void WINAPI FatalAppExitA(UINT,LPCSTR);
void WINAPI FatalAppExitW(UINT,LPCWSTR);
void WINAPI FatalExit(int);
BOOL WINAPI FileEncryptionStatusA(LPCSTR,LPDWORD);
BOOL WINAPI FileEncryptionStatusW(LPCWSTR,LPDWORD);
BOOL WINAPI FileTimeToDosDateTime(CONST FILETIME *,LPWORD,LPWORD);
BOOL WINAPI FileTimeToLocalFileTime(CONST FILETIME *,LPFILETIME);
BOOL WINAPI FileTimeToSystemTime(CONST FILETIME *,LPSYSTEMTIME);
ATOM WINAPI FindAtomA(LPCSTR);
ATOM WINAPI FindAtomW(LPCWSTR);
BOOL WINAPI FindClose(HANDLE);
BOOL WINAPI FindCloseChangeNotification(HANDLE);
HANDLE WINAPI FindFirstChangeNotificationA(LPCSTR,BOOL,DWORD);
HANDLE WINAPI FindFirstChangeNotificationW(LPCWSTR,BOOL,DWORD);
HANDLE WINAPI FindFirstFileA(LPCSTR,LPWIN32_FIND_DATAA);
HANDLE WINAPI FindFirstFileW(LPCWSTR,LPWIN32_FIND_DATAW);
HANDLE WINAPI FindFirstFileExA(LPCSTR,FINDEX_INFO_LEVELS,PVOID,FINDEX_SEARCH_OPS,PVOID,DWORD);
HANDLE WINAPI FindFirstFileExW(LPCWSTR,FINDEX_INFO_LEVELS,PVOID,FINDEX_SEARCH_OPS,PVOID,DWORD);
BOOL WINAPI FindFirstFreeAce(PACL,PVOID*);
#if (_WIN32_WINNT >= 0x0500)
HANDLE WINAPI FindFirstVolumeA(LPCSTR,DWORD);
HANDLE WINAPI FindFirstVolumeW(LPCWSTR,DWORD);
HANDLE WINAPI FindFirstVolumeMountPointA(LPSTR,LPSTR,DWORD);
HANDLE WINAPI FindFirstVolumeMountPointW(LPWSTR,LPWSTR,DWORD);
#endif
BOOL WINAPI FindNextChangeNotification(HANDLE);
BOOL WINAPI FindNextFileA(HANDLE,LPWIN32_FIND_DATAA);
BOOL WINAPI FindNextFileW(HANDLE,LPWIN32_FIND_DATAW);
#if (_WIN32_WINNT >= 0x0500)
BOOL WINAPI FindNextVolumeA(HANDLE,LPCSTR,DWORD);
BOOL WINAPI FindNextVolumeW(HANDLE,LPWSTR,DWORD);
BOOL WINAPI FindNextVolumeMountPointA(HANDLE,LPSTR,DWORD);
BOOL WINAPI FindNextVolumeMountPointW(HANDLE,LPWSTR,DWORD);
BOOL WINAPI FindVolumeClose(HANDLE);
BOOL WINAPI FindVolumeMountPointClose(HANDLE);
#endif
HRSRC WINAPI FindResourceA(HMODULE,LPCSTR,LPCSTR);
HRSRC WINAPI FindResourceW(HINSTANCE,LPCWSTR,LPCWSTR);
HRSRC WINAPI FindResourceExA(HINSTANCE,LPCSTR,LPCSTR,WORD);
HRSRC WINAPI FindResourceExW(HINSTANCE,LPCWSTR,LPCWSTR,WORD);
BOOL WINAPI FlushFileBuffers(HANDLE);
BOOL WINAPI FlushInstructionCache(HANDLE,PCVOID,DWORD);
BOOL WINAPI FlushViewOfFile(PCVOID,DWORD);
DWORD WINAPI FormatMessageA(DWORD,PCVOID,DWORD,DWORD,LPSTR,DWORD,va_list*);
DWORD WINAPI FormatMessageW(DWORD,PCVOID,DWORD,DWORD,LPWSTR,DWORD,va_list*);
BOOL WINAPI FreeEnvironmentStringsA(LPSTR);
BOOL WINAPI FreeEnvironmentStringsW(LPWSTR);
BOOL WINAPI FreeLibrary(HMODULE);
DECLSPEC_NORETURN void WINAPI FreeLibraryAndExitThread(HMODULE,DWORD);
#define FreeModule(m) FreeLibrary(m)
#define FreeProcInstance(p) (void)(p)
#ifndef XFree86Server
BOOL WINAPI FreeResource(HGLOBAL);
#endif /* ndef XFree86Server */
PVOID WINAPI FreeSid(PSID);
BOOL WINAPI GetAce(PACL,DWORD,LPVOID*);
BOOL WINAPI GetAclInformation(PACL,PVOID,DWORD,ACL_INFORMATION_CLASS);
UINT WINAPI GetAtomNameA(ATOM,LPSTR,int);
UINT WINAPI GetAtomNameW(ATOM,LPWSTR,int);
BOOL WINAPI GetBinaryTypeA(LPCSTR,PDWORD);
BOOL WINAPI GetBinaryTypeW(LPCWSTR,PDWORD);
LPSTR WINAPI GetCommandLineA(VOID);
LPWSTR WINAPI GetCommandLineW(VOID);
BOOL WINAPI GetCommConfig(HANDLE,LPCOMMCONFIG,PDWORD);
BOOL WINAPI GetCommMask(HANDLE,PDWORD);
BOOL WINAPI GetCommModemStatus(HANDLE,PDWORD);
BOOL WINAPI GetCommProperties(HANDLE,LPCOMMPROP);
BOOL WINAPI GetCommState(HANDLE,LPDCB);
BOOL WINAPI GetCommTimeouts(HANDLE,LPCOMMTIMEOUTS);
DWORD WINAPI GetCompressedFileSizeA(LPCSTR,PDWORD);
DWORD WINAPI GetCompressedFileSizeW(LPCWSTR,PDWORD);
BOOL WINAPI GetComputerNameA(LPSTR,PDWORD);
BOOL WINAPI GetComputerNameW(LPWSTR,PDWORD);
DWORD WINAPI GetCurrentDirectoryA(DWORD,LPSTR);
DWORD WINAPI GetCurrentDirectoryW(DWORD,LPWSTR);
BOOL WINAPI GetCurrentHwProfileA(LPHW_PROFILE_INFOA);
BOOL WINAPI GetCurrentHwProfileW(LPHW_PROFILE_INFOW);
HANDLE WINAPI GetCurrentProcess(void);
DWORD WINAPI GetCurrentProcessId(void);
HANDLE WINAPI GetCurrentThread(void);
DWORD WINAPI GetCurrentThreadId(void);
#define GetCurrentTime GetTickCount
BOOL WINAPI GetDefaultCommConfigA(LPCSTR,LPCOMMCONFIG,PDWORD);
BOOL WINAPI GetDefaultCommConfigW(LPCWSTR,LPCOMMCONFIG,PDWORD);
BOOL WINAPI GetDiskFreeSpaceA(LPCSTR,PDWORD,PDWORD,PDWORD,PDWORD);
BOOL WINAPI GetDiskFreeSpaceW(LPCWSTR,PDWORD,PDWORD,PDWORD,PDWORD);
BOOL WINAPI GetDiskFreeSpaceExA(LPCSTR,PULARGE_INTEGER,PULARGE_INTEGER,PULARGE_INTEGER);
BOOL WINAPI GetDiskFreeSpaceExW(LPCWSTR,PULARGE_INTEGER,PULARGE_INTEGER,PULARGE_INTEGER);
UINT WINAPI GetDriveTypeA(LPCSTR);
UINT WINAPI GetDriveTypeW(LPCWSTR);
LPSTR WINAPI GetEnvironmentStrings(void);
LPSTR WINAPI GetEnvironmentStringsA(void);
LPWSTR WINAPI GetEnvironmentStringsW(void);
DWORD WINAPI GetEnvironmentVariableA(LPCSTR,LPSTR,DWORD);
DWORD WINAPI GetEnvironmentVariableW(LPCWSTR,LPWSTR,DWORD);
BOOL WINAPI GetExitCodeProcess(HANDLE,PDWORD);
BOOL WINAPI GetExitCodeThread(HANDLE,PDWORD);
DWORD WINAPI GetFileAttributesA(LPCSTR);
DWORD WINAPI GetFileAttributesW(LPCWSTR);
BOOL WINAPI GetFileAttributesExA(LPCSTR,GET_FILEEX_INFO_LEVELS,PVOID);
BOOL WINAPI GetFileAttributesExW(LPCWSTR,GET_FILEEX_INFO_LEVELS,PVOID);
BOOL WINAPI GetFileInformationByHandle(HANDLE,LPBY_HANDLE_FILE_INFORMATION);
BOOL WINAPI GetFileSecurityA(LPCSTR,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,PDWORD);
BOOL WINAPI GetFileSecurityW(LPCWSTR,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,PDWORD);
DWORD WINAPI GetFileSize(HANDLE,PDWORD);
BOOL WINAPI GetFileSizeEx(HANDLE,PLARGE_INTEGER);
BOOL WINAPI GetFileTime(HANDLE,LPFILETIME,LPFILETIME,LPFILETIME);
DWORD WINAPI GetFileType(HANDLE);
#define GetFreeSpace(w) (0x100000L)
DWORD WINAPI GetFullPathNameA(LPCSTR,DWORD,LPSTR,LPSTR*);
DWORD WINAPI GetFullPathNameW(LPCWSTR,DWORD,LPWSTR,LPWSTR*);
BOOL WINAPI GetHandleInformation(HANDLE,PDWORD);
BOOL WINAPI GetKernelObjectSecurity(HANDLE,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,PDWORD);
DWORD WINAPI GetLengthSid(PSID);
void WINAPI GetLocalTime(LPSYSTEMTIME);
DWORD WINAPI GetLogicalDrives(void);
DWORD WINAPI GetLogicalDriveStringsA(DWORD,LPSTR);
DWORD WINAPI GetLogicalDriveStringsW(DWORD,LPWSTR);
#if (_WIN32_WINNT >= 0x0500 || _WIN32_WINDOWS >= 0x0410)
DWORD WINAPI GetLongPathNameA(LPCSTR,LPSTR,DWORD);
DWORD WINAPI GetLongPathNameW(LPCWSTR,LPWSTR,DWORD);
#endif
BOOL WINAPI GetMailslotInfo(HANDLE,PDWORD,PDWORD,PDWORD,PDWORD);
DWORD WINAPI GetModuleFileNameA(HINSTANCE,LPSTR,DWORD);
DWORD WINAPI GetModuleFileNameW(HINSTANCE,LPWSTR,DWORD);
HMODULE WINAPI GetModuleHandleA(LPCSTR);
HMODULE WINAPI GetModuleHandleW(LPCWSTR);
#if (_WIN32_WINNT >= 0x0500)
BOOL WINAPI GetModuleHandleExA(DWORD, LPCSTR, HMODULE*);
BOOL WINAPI GetModuleHandleExW(DWORD, LPCWSTR, HMODULE*);
#endif
BOOL WINAPI GetNamedPipeHandleStateA(HANDLE,PDWORD,PDWORD,PDWORD,PDWORD,LPSTR,DWORD);
BOOL WINAPI GetNamedPipeHandleStateW(HANDLE,PDWORD,PDWORD,PDWORD,PDWORD,LPWSTR,DWORD);
BOOL WINAPI GetNamedPipeInfo(HANDLE,PDWORD,PDWORD,PDWORD,PDWORD);
BOOL WINAPI GetNumberOfEventLogRecords(HANDLE,PDWORD);
BOOL WINAPI GetOldestEventLogRecord(HANDLE,PDWORD);
BOOL WINAPI GetOverlappedResult(HANDLE,LPOVERLAPPED,PDWORD,BOOL);
DWORD WINAPI GetPriorityClass(HANDLE);
BOOL WINAPI GetPrivateObjectSecurity(PSECURITY_DESCRIPTOR,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,PDWORD);
UINT WINAPI GetPrivateProfileIntA(LPCSTR,LPCSTR,INT,LPCSTR);
UINT WINAPI GetPrivateProfileIntW(LPCWSTR,LPCWSTR,INT,LPCWSTR);
DWORD WINAPI GetPrivateProfileSectionA(LPCSTR,LPSTR,DWORD,LPCSTR);
DWORD WINAPI GetPrivateProfileSectionW(LPCWSTR,LPWSTR,DWORD,LPCWSTR);
DWORD WINAPI GetPrivateProfileSectionNamesA(LPSTR,DWORD,LPCSTR);
DWORD WINAPI GetPrivateProfileSectionNamesW(LPWSTR,DWORD,LPCWSTR);
DWORD WINAPI GetPrivateProfileStringA(LPCSTR,LPCSTR,LPCSTR,LPSTR,DWORD,LPCSTR);
DWORD WINAPI GetPrivateProfileStringW(LPCWSTR,LPCWSTR,LPCWSTR,LPWSTR,DWORD,LPCWSTR);
BOOL WINAPI GetPrivateProfileStructA(LPCSTR,LPCSTR,LPVOID,UINT,LPCSTR);
BOOL WINAPI GetPrivateProfileStructW(LPCWSTR,LPCWSTR,LPVOID,UINT,LPCWSTR);
FARPROC WINAPI GetProcAddress(HINSTANCE,LPCSTR);
BOOL WINAPI GetProcessAffinityMask(HANDLE,PDWORD,PDWORD);
HANDLE WINAPI GetProcessHeap(VOID);
DWORD WINAPI GetProcessHeaps(DWORD,PHANDLE);
BOOL WINAPI GetProcessPriorityBoost(HANDLE,PBOOL);
BOOL WINAPI GetProcessShutdownParameters(PDWORD,PDWORD);
BOOL WINAPI GetProcessTimes(HANDLE,LPFILETIME,LPFILETIME,LPFILETIME,LPFILETIME);
DWORD WINAPI GetProcessVersion(DWORD);
HWINSTA WINAPI GetProcessWindowStation(void);
BOOL WINAPI GetProcessWorkingSetSize(HANDLE,PSIZE_T,PSIZE_T);
UINT WINAPI GetProfileIntA(LPCSTR,LPCSTR,INT);
UINT WINAPI GetProfileIntW(LPCWSTR,LPCWSTR,INT);
DWORD WINAPI GetProfileSectionA(LPCSTR,LPSTR,DWORD);
DWORD WINAPI GetProfileSectionW(LPCWSTR,LPWSTR,DWORD);
DWORD WINAPI GetProfileStringA(LPCSTR,LPCSTR,LPCSTR,LPSTR,DWORD);
DWORD WINAPI GetProfileStringW(LPCWSTR,LPCWSTR,LPCWSTR,LPWSTR,DWORD);
BOOL WINAPI GetQueuedCompletionStatus(HANDLE,PDWORD,PDWORD,LPOVERLAPPED*,DWORD);
BOOL WINAPI GetSecurityDescriptorControl(PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR_CONTROL,PDWORD);
BOOL WINAPI GetSecurityDescriptorDacl(PSECURITY_DESCRIPTOR,LPBOOL,PACL*,LPBOOL);
BOOL WINAPI GetSecurityDescriptorGroup(PSECURITY_DESCRIPTOR,PSID*,LPBOOL);
DWORD WINAPI GetSecurityDescriptorLength(PSECURITY_DESCRIPTOR);
BOOL WINAPI GetSecurityDescriptorOwner(PSECURITY_DESCRIPTOR,PSID*,LPBOOL);
BOOL WINAPI GetSecurityDescriptorSacl(PSECURITY_DESCRIPTOR,LPBOOL,PACL*,LPBOOL);
DWORD WINAPI GetShortPathNameA(LPCSTR,LPSTR,DWORD);
DWORD WINAPI GetShortPathNameW(LPCWSTR,LPWSTR,DWORD);
PSID_IDENTIFIER_AUTHORITY WINAPI GetSidIdentifierAuthority(PSID);
DWORD WINAPI GetSidLengthRequired(UCHAR);
PDWORD WINAPI GetSidSubAuthority(PSID,DWORD);
PUCHAR WINAPI GetSidSubAuthorityCount(PSID);
VOID WINAPI GetStartupInfoA(LPSTARTUPINFOA);
VOID WINAPI GetStartupInfoW(LPSTARTUPINFOW);
HANDLE WINAPI GetStdHandle(DWORD);
UINT WINAPI GetSystemDirectoryA(LPSTR,UINT);
UINT WINAPI GetSystemDirectoryW(LPWSTR,UINT);
VOID WINAPI GetSystemInfo(LPSYSTEM_INFO);
BOOL WINAPI GetSystemPowerStatus(LPSYSTEM_POWER_STATUS);
VOID WINAPI GetSystemTime(LPSYSTEMTIME);
#if (_WIN32_WINNT >= 0x0501)
BOOL WINAPI GetSystemTimes(LPFILETIME,LPFILETIME,LPFILETIME);
#endif
BOOL WINAPI GetSystemTimeAdjustment(PDWORD,PDWORD,PBOOL);
void WINAPI GetSystemTimeAsFileTime(LPFILETIME);
DWORD WINAPI GetTapeParameters(HANDLE,DWORD,PDWORD,PVOID);
DWORD WINAPI GetTapePosition(HANDLE,DWORD,PDWORD,PDWORD,PDWORD);
DWORD WINAPI GetTapeStatus(HANDLE);
UINT WINAPI GetTempFileNameA(LPCSTR,LPCSTR,UINT,LPSTR);
UINT WINAPI GetTempFileNameW(LPCWSTR,LPCWSTR,UINT,LPWSTR);
DWORD WINAPI GetTempPathA(DWORD,LPSTR);
DWORD WINAPI GetTempPathW(DWORD,LPWSTR);
BOOL WINAPI GetThreadContext(HANDLE,LPCONTEXT);
int WINAPI GetThreadPriority(HANDLE);
BOOL WINAPI GetThreadPriorityBoost(HANDLE,PBOOL);
BOOL WINAPI GetThreadSelectorEntry(HANDLE,DWORD,LPLDT_ENTRY);
BOOL WINAPI GetThreadTimes(HANDLE,LPFILETIME,LPFILETIME,LPFILETIME,LPFILETIME);
DWORD WINAPI GetTickCount(VOID);
DWORD WINAPI GetTimeZoneInformation(LPTIME_ZONE_INFORMATION);
BOOL WINAPI GetTokenInformation(HANDLE,TOKEN_INFORMATION_CLASS,PVOID,DWORD,PDWORD);
BOOL WINAPI GetUserNameA (LPSTR,PDWORD);
BOOL WINAPI GetUserNameW(LPWSTR,PDWORD);
DWORD WINAPI GetVersion(void);
BOOL WINAPI GetVersionExA(LPOSVERSIONINFOA);
BOOL WINAPI GetVersionExW(LPOSVERSIONINFOW);
BOOL WINAPI GetVolumeInformationA(LPCSTR,LPSTR,DWORD,PDWORD,PDWORD,PDWORD,LPSTR,DWORD);
BOOL WINAPI GetVolumeInformationW(LPCWSTR,LPWSTR,DWORD,PDWORD,PDWORD,PDWORD,LPWSTR,DWORD);
#if (_WIN32_WINNT >= 0x0500)
BOOL WINAPI GetVolumeNameForVolumeMountPointA(LPCSTR,LPSTR,DWORD);
BOOL WINAPI GetVolumeNameForVolumeMountPointW(LPCWSTR,LPWSTR,DWORD);
BOOL WINAPI GetVolumePathNameA(LPCSTR,LPSTR,DWORD);
BOOL WINAPI GetVolumePathNameW(LPCWSTR,LPWSTR,DWORD);
BOOL WINAPI GetVolumePathNamesForVolumeNameA(LPCSTR,LPSTR,DWORD,PDWORD);
BOOL WINAPI GetVolumePathNamesForVolumeNameW(LPCWSTR,LPWSTR,DWORD,PDWORD);
#endif
UINT WINAPI GetWindowsDirectoryA(LPSTR,UINT);
UINT WINAPI GetWindowsDirectoryW(LPWSTR,UINT);
DWORD WINAPI GetWindowThreadProcessId(HWND,PDWORD);
ATOM WINAPI GlobalAddAtomA(LPCSTR);
ATOM WINAPI GlobalAddAtomW( LPCWSTR);
HGLOBAL WINAPI GlobalAlloc(UINT,DWORD);
SIZE_T WINAPI GlobalCompact(DWORD); /* Obsolete: Has no effect. */
ATOM WINAPI GlobalDeleteAtom(ATOM);
HGLOBAL GlobalDiscard(HGLOBAL);
ATOM WINAPI GlobalFindAtomA(LPCSTR);
ATOM WINAPI GlobalFindAtomW(LPCWSTR);
VOID WINAPI GlobalFix(HGLOBAL); /* Obsolete: Has no effect. */
UINT WINAPI GlobalFlags(HGLOBAL); /* Obsolete: Has no effect. */
HGLOBAL WINAPI GlobalFree(HGLOBAL);
UINT WINAPI GlobalGetAtomNameA(ATOM,LPSTR,int);
UINT WINAPI GlobalGetAtomNameW(ATOM,LPWSTR,int);
HGLOBAL WINAPI GlobalHandle(PCVOID);
LPVOID WINAPI GlobalLock(HGLOBAL);
VOID WINAPI GlobalMemoryStatus(LPMEMORYSTATUS);
#if (_WIN32_WINNT >= 0x0500)
BOOL WINAPI GlobalMemoryStatusEx(LPMEMORYSTATUSEX);
#endif
HGLOBAL WINAPI GlobalReAlloc(HGLOBAL,DWORD,UINT);
DWORD WINAPI GlobalSize(HGLOBAL);
VOID WINAPI GlobalUnfix(HGLOBAL); /* Obsolete: Has no effect. */
BOOL WINAPI GlobalUnlock(HGLOBAL); 
BOOL WINAPI GlobalUnWire(HGLOBAL); /* Obsolete: Has no effect. */
PVOID WINAPI GlobalWire(HGLOBAL); /* Obsolete: Has no effect. */
#define HasOverlappedIoCompleted(lpOverlapped)  ((lpOverlapped)->Internal != STATUS_PENDING)
PVOID WINAPI HeapAlloc(HANDLE,DWORD,DWORD);
SIZE_T WINAPI HeapCompact(HANDLE,DWORD);
HANDLE WINAPI HeapCreate(DWORD,DWORD,DWORD);
BOOL WINAPI HeapDestroy(HANDLE);
BOOL WINAPI HeapFree(HANDLE,DWORD,PVOID);
BOOL WINAPI HeapLock(HANDLE);
PVOID WINAPI HeapReAlloc(HANDLE,DWORD,PVOID,DWORD);
DWORD WINAPI HeapSize(HANDLE,DWORD,PCVOID);
BOOL WINAPI HeapUnlock(HANDLE);
BOOL WINAPI HeapValidate(HANDLE,DWORD,PCVOID);
BOOL WINAPI HeapWalk(HANDLE,LPPROCESS_HEAP_ENTRY);
BOOL WINAPI ImpersonateLoggedOnUser(HANDLE);
BOOL WINAPI ImpersonateNamedPipeClient(HANDLE);
BOOL WINAPI ImpersonateSelf(SECURITY_IMPERSONATION_LEVEL);
BOOL WINAPI InitAtomTable(DWORD);
BOOL WINAPI InitializeAcl(PACL,DWORD,DWORD);
VOID WINAPI InitializeCriticalSection(LPCRITICAL_SECTION);
BOOL WINAPI InitializeCriticalSectionAndSpinCount(LPCRITICAL_SECTION,DWORD);
DWORD WINAPI SetCriticalSectionSpinCount(LPCRITICAL_SECTION,DWORD);
BOOL WINAPI InitializeSecurityDescriptor(PSECURITY_DESCRIPTOR,DWORD);
BOOL WINAPI InitializeSid (PSID,PSID_IDENTIFIER_AUTHORITY,BYTE);
#ifndef __INTERLOCKED_DECLARED
#define __INTERLOCKED_DECLARED
LONG WINAPI InterlockedCompareExchange(LPLONG,LONG,LONG);
/* PVOID WINAPI InterlockedCompareExchangePointer(PVOID*,PVOID,PVOID); */
#define InterlockedCompareExchangePointer(d,e,c) \
    (PVOID)InterlockedCompareExchange((LPLONG)(d),(LONG)(e),(LONG)(c))
LONG WINAPI InterlockedDecrement(LPLONG);
LONG WINAPI InterlockedExchange(LPLONG,LONG);
/* PVOID WINAPI InterlockedExchangePointer(PVOID*,PVOID); */
#define InterlockedExchangePointer(t,v) \
    (PVOID)InterlockedExchange((LPLONG)(t),(LONG)(v))
LONG WINAPI InterlockedExchangeAdd(LPLONG,LONG);
LONG WINAPI InterlockedIncrement(LPLONG);
#endif /* __INTERLOCKED_DECLARED */
BOOL WINAPI IsBadCodePtr(FARPROC);
BOOL WINAPI IsBadHugeReadPtr(PCVOID,UINT);
BOOL WINAPI IsBadHugeWritePtr(PVOID,UINT);
BOOL WINAPI IsBadReadPtr(PCVOID,UINT);
BOOL WINAPI IsBadStringPtrA(LPCSTR,UINT);
BOOL WINAPI IsBadStringPtrW(LPCWSTR,UINT);
BOOL WINAPI IsBadWritePtr(PVOID,UINT);
BOOL WINAPI IsDebuggerPresent(void);
BOOL WINAPI IsProcessorFeaturePresent(DWORD);
BOOL WINAPI IsTextUnicode(PCVOID,int,LPINT);
BOOL WINAPI IsValidAcl(PACL);
BOOL WINAPI IsValidSecurityDescriptor(PSECURITY_DESCRIPTOR);
BOOL WINAPI IsValidSid(PSID);
void WINAPI LeaveCriticalSection(LPCRITICAL_SECTION);
#define LimitEmsPages(n)
HINSTANCE WINAPI LoadLibraryA(LPCSTR);
HINSTANCE WINAPI LoadLibraryExA(LPCSTR,HANDLE,DWORD);
HINSTANCE WINAPI LoadLibraryExW(LPCWSTR,HANDLE,DWORD);
HINSTANCE WINAPI LoadLibraryW(LPCWSTR);
DWORD WINAPI LoadModule(LPCSTR,PVOID);
HGLOBAL WINAPI LoadResource(HINSTANCE,HRSRC);
HLOCAL WINAPI LocalAlloc(UINT,SIZE_T);
SIZE_T WINAPI LocalCompact(UINT); /* Obsolete: Has no effect. */
HLOCAL LocalDiscard(HLOCAL);
BOOL WINAPI LocalFileTimeToFileTime(CONST FILETIME *,LPFILETIME);
UINT WINAPI LocalFlags(HLOCAL); /* Obsolete: Has no effect. */
HLOCAL WINAPI LocalFree(HLOCAL);
HLOCAL WINAPI LocalHandle(LPCVOID);
PVOID WINAPI LocalLock(HLOCAL);
HLOCAL WINAPI LocalReAlloc(HLOCAL,SIZE_T,UINT);
SIZE_T WINAPI LocalShrink(HLOCAL,UINT);  /* Obsolete: Has no effect. */
UINT WINAPI LocalSize(HLOCAL);
BOOL WINAPI LocalUnlock(HLOCAL);
BOOL WINAPI LockFile(HANDLE,DWORD,DWORD,DWORD,DWORD);
BOOL WINAPI LockFileEx(HANDLE,DWORD,DWORD,DWORD,DWORD,LPOVERLAPPED);
PVOID WINAPI LockResource(HGLOBAL);
#define LockSegment(w) GlobalFix((HANDLE)(w)) /* Obsolete: Has no effect. */
BOOL WINAPI LogonUserA(LPSTR,LPSTR,LPSTR,DWORD,DWORD,PHANDLE);
BOOL WINAPI LogonUserW(LPWSTR,LPWSTR,LPWSTR,DWORD,DWORD,PHANDLE);
BOOL WINAPI LookupAccountNameA(LPCSTR,LPCSTR,PSID,PDWORD,LPSTR,PDWORD,PSID_NAME_USE);
BOOL WINAPI LookupAccountNameW(LPCWSTR,LPCWSTR,PSID,PDWORD,LPWSTR,PDWORD,PSID_NAME_USE);
BOOL WINAPI LookupAccountSidA(LPCSTR,PSID,LPSTR,PDWORD,LPSTR,PDWORD,PSID_NAME_USE);
BOOL WINAPI LookupAccountSidW(LPCWSTR,PSID,LPWSTR,PDWORD,LPWSTR,PDWORD,PSID_NAME_USE);
BOOL WINAPI LookupPrivilegeDisplayNameA(LPCSTR,LPCSTR,LPSTR,PDWORD,PDWORD);
BOOL WINAPI LookupPrivilegeDisplayNameW(LPCWSTR,LPCWSTR,LPWSTR,PDWORD,PDWORD);
BOOL WINAPI LookupPrivilegeNameA(LPCSTR,PLUID,LPSTR,PDWORD);
BOOL WINAPI LookupPrivilegeNameW(LPCWSTR,PLUID,LPWSTR,PDWORD);
BOOL WINAPI LookupPrivilegeValueA(LPCSTR,LPCSTR,PLUID);
BOOL WINAPI LookupPrivilegeValueW(LPCWSTR,LPCWSTR,PLUID);
LPSTR WINAPI lstrcatA(LPSTR,LPCSTR);
LPWSTR WINAPI lstrcatW(LPWSTR,LPCWSTR);
int WINAPI lstrcmpA(LPCSTR,LPCSTR);
int WINAPI lstrcmpiA(LPCSTR,LPCSTR);
int WINAPI lstrcmpiW( LPCWSTR,LPCWSTR);
int WINAPI lstrcmpW(LPCWSTR,LPCWSTR);
LPSTR WINAPI lstrcpyA(LPSTR,LPCSTR);
LPSTR WINAPI lstrcpynA(LPSTR,LPCSTR,int);
LPWSTR WINAPI lstrcpynW(LPWSTR,LPCWSTR,int);
LPWSTR WINAPI lstrcpyW(LPWSTR,LPCWSTR);
int WINAPI lstrlenA(LPCSTR);
int WINAPI lstrlenW(LPCWSTR);
BOOL WINAPI MakeAbsoluteSD(PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR,PDWORD,PACL,PDWORD,PACL,PDWORD,PSID,PDWORD,PSID,PDWORD);
#define MakeProcInstance(p,i) (p)
BOOL WINAPI MakeSelfRelativeSD(PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR,PDWORD);
VOID WINAPI MapGenericMask(PDWORD,PGENERIC_MAPPING);
PVOID WINAPI MapViewOfFile(HANDLE,DWORD,DWORD,DWORD,DWORD);
PVOID WINAPI MapViewOfFileEx(HANDLE,DWORD,DWORD,DWORD,DWORD,PVOID);
BOOL WINAPI MoveFileA(LPCSTR,LPCSTR);
BOOL WINAPI MoveFileExA(LPCSTR,LPCSTR,DWORD);
BOOL WINAPI MoveFileExW(LPCWSTR,LPCWSTR,DWORD);
BOOL WINAPI MoveFileW(LPCWSTR,LPCWSTR);
int WINAPI MulDiv(int,int,int);
BOOL WINAPI NotifyChangeEventLog(HANDLE,HANDLE);
BOOL WINAPI ObjectCloseAuditAlarmA(LPCSTR,PVOID,BOOL);
BOOL WINAPI ObjectCloseAuditAlarmW(LPCWSTR,PVOID,BOOL);
BOOL WINAPI ObjectDeleteAuditAlarmA(LPCSTR,PVOID,BOOL);
BOOL WINAPI ObjectDeleteAuditAlarmW(LPCWSTR,PVOID,BOOL);
BOOL WINAPI ObjectOpenAuditAlarmA(LPCSTR,PVOID,LPSTR,LPSTR,PSECURITY_DESCRIPTOR,HANDLE,DWORD,DWORD,PPRIVILEGE_SET,BOOL,BOOL,PBOOL);
BOOL WINAPI ObjectOpenAuditAlarmW(LPCWSTR,PVOID,LPWSTR,LPWSTR,PSECURITY_DESCRIPTOR,HANDLE,DWORD,DWORD,PPRIVILEGE_SET,BOOL,BOOL,PBOOL);
BOOL WINAPI ObjectPrivilegeAuditAlarmA(LPCSTR,PVOID,HANDLE,DWORD,PPRIVILEGE_SET,BOOL);
BOOL WINAPI ObjectPrivilegeAuditAlarmW(LPCWSTR,PVOID,HANDLE,DWORD,PPRIVILEGE_SET,BOOL);
HANDLE WINAPI OpenBackupEventLogA(LPCSTR,LPCSTR);
HANDLE WINAPI OpenBackupEventLogW(LPCWSTR,LPCWSTR);
HANDLE WINAPI OpenEventA(DWORD,BOOL,LPCSTR);
HANDLE WINAPI OpenEventLogA (LPCSTR,LPCSTR);
HANDLE WINAPI OpenEventLogW(LPCWSTR,LPCWSTR);
HANDLE WINAPI OpenEventW(DWORD,BOOL,LPCWSTR);
HFILE WINAPI OpenFile(LPCSTR,LPOFSTRUCT,UINT);
HANDLE WINAPI OpenFileMappingA(DWORD,BOOL,LPCSTR);
HANDLE WINAPI OpenFileMappingW(DWORD,BOOL,LPCWSTR);
HANDLE WINAPI OpenMutexA(DWORD,BOOL,LPCSTR);
HANDLE WINAPI OpenMutexW(DWORD,BOOL,LPCWSTR);
HANDLE WINAPI OpenProcess(DWORD,BOOL,DWORD);
BOOL WINAPI OpenProcessToken(HANDLE,DWORD,PHANDLE);
HANDLE WINAPI OpenSemaphoreA(DWORD,BOOL,LPCSTR);
HANDLE WINAPI OpenSemaphoreW(DWORD,BOOL,LPCWSTR);
#if (_WIN32_WINNT >= 0x0500) || (_WIN32_WINDOWS >= 0x0490)
HANDLE WINAPI OpenThread(DWORD,BOOL,DWORD);
#endif
BOOL WINAPI OpenThreadToken(HANDLE,DWORD,BOOL,PHANDLE);
HANDLE WINAPI OpenWaitableTimerA(DWORD,BOOL,LPCSTR);
HANDLE WINAPI OpenWaitableTimerW(DWORD,BOOL,LPCWSTR);
void WINAPI OutputDebugStringA(LPCSTR);
void WINAPI OutputDebugStringW(LPCWSTR);
BOOL WINAPI PeekNamedPipe(HANDLE,PVOID,DWORD,PDWORD,PDWORD,PDWORD);
BOOL WINAPI PostQueuedCompletionStatus(HANDLE,DWORD,DWORD,LPOVERLAPPED);
DWORD WINAPI PrepareTape(HANDLE,DWORD,BOOL);
BOOL WINAPI PrivilegeCheck (HANDLE,PPRIVILEGE_SET,PBOOL);
BOOL WINAPI PrivilegedServiceAuditAlarmA(LPCSTR,LPCSTR,HANDLE,PPRIVILEGE_SET,BOOL);
BOOL WINAPI PrivilegedServiceAuditAlarmW(LPCWSTR,LPCWSTR,HANDLE,PPRIVILEGE_SET,BOOL);
BOOL WINAPI PulseEvent(HANDLE);
BOOL WINAPI PurgeComm(HANDLE,DWORD);
DWORD WINAPI QueryDosDeviceA(LPCSTR,LPSTR,DWORD);
DWORD WINAPI QueryDosDeviceW(LPCWSTR,LPWSTR,DWORD);
BOOL WINAPI QueryPerformanceCounter(PLARGE_INTEGER);
BOOL WINAPI QueryPerformanceFrequency(PLARGE_INTEGER);
DWORD WINAPI QueueUserAPC(PAPCFUNC,HANDLE,DWORD);
void WINAPI RaiseException(DWORD,DWORD,DWORD,const DWORD*);
BOOL WINAPI ReadDirectoryChangesW(HANDLE,PVOID,DWORD,BOOL,DWORD,PDWORD,LPOVERLAPPED,LPOVERLAPPED_COMPLETION_ROUTINE);
BOOL WINAPI ReadEventLogA(HANDLE,DWORD,DWORD,PVOID,DWORD,DWORD *,DWORD *);
BOOL WINAPI ReadEventLogW(HANDLE,DWORD,DWORD,PVOID,DWORD,DWORD *,DWORD *);
BOOL WINAPI ReadFile(HANDLE,PVOID,DWORD,PDWORD,LPOVERLAPPED);
BOOL WINAPI ReadFileEx(HANDLE,PVOID,DWORD,LPOVERLAPPED,LPOVERLAPPED_COMPLETION_ROUTINE);
BOOL WINAPI ReadFileScatter(HANDLE,FILE_SEGMENT_ELEMENT*,DWORD,LPDWORD,LPOVERLAPPED);
BOOL WINAPI ReadProcessMemory(HANDLE,PCVOID,PVOID,DWORD,PDWORD);
HANDLE WINAPI RegisterEventSourceA (LPCSTR,LPCSTR);
HANDLE WINAPI RegisterEventSourceW(LPCWSTR,LPCWSTR);
BOOL WINAPI ReleaseMutex(HANDLE);
BOOL WINAPI ReleaseSemaphore(HANDLE,LONG,LPLONG);
BOOL WINAPI RemoveDirectoryA(LPCSTR);
BOOL WINAPI RemoveDirectoryW(LPCWSTR);
BOOL WINAPI ReportEventA(HANDLE,WORD,WORD,DWORD,PSID,WORD,DWORD,LPCSTR*,PVOID);
BOOL WINAPI ReportEventW(HANDLE,WORD,WORD,DWORD,PSID,WORD,DWORD,LPCWSTR*,PVOID);
BOOL WINAPI ResetEvent(HANDLE);
DWORD WINAPI ResumeThread(HANDLE);
BOOL WINAPI RevertToSelf(void);
DWORD WINAPI SearchPathA(LPCSTR,LPCSTR,LPCSTR,DWORD,LPSTR,LPSTR*);
DWORD WINAPI SearchPathW(LPCWSTR,LPCWSTR,LPCWSTR,DWORD,LPWSTR,LPWSTR*);
BOOL WINAPI SetAclInformation(PACL,PVOID,DWORD,ACL_INFORMATION_CLASS);
BOOL WINAPI SetCommBreak(HANDLE);
BOOL WINAPI SetCommConfig(HANDLE,LPCOMMCONFIG,DWORD);
BOOL WINAPI SetCommMask(HANDLE,DWORD);
BOOL WINAPI SetCommState(HANDLE,LPDCB);
BOOL WINAPI SetCommTimeouts(HANDLE,LPCOMMTIMEOUTS);
BOOL WINAPI SetComputerNameA(LPCSTR);
BOOL WINAPI SetComputerNameW(LPCWSTR);
BOOL WINAPI SetCurrentDirectoryA(LPCSTR);
BOOL WINAPI SetCurrentDirectoryW(LPCWSTR);
BOOL WINAPI SetDefaultCommConfigA(LPCSTR,LPCOMMCONFIG,DWORD);
BOOL WINAPI SetDefaultCommConfigW(LPCWSTR,LPCOMMCONFIG,DWORD);
BOOL WINAPI SetEndOfFile(HANDLE);
BOOL WINAPI SetEnvironmentVariableA(LPCSTR,LPCSTR);
BOOL WINAPI SetEnvironmentVariableW(LPCWSTR,LPCWSTR);
UINT WINAPI SetErrorMode(UINT);
BOOL WINAPI SetEvent(HANDLE);
VOID WINAPI SetFileApisToANSI(void);
VOID WINAPI SetFileApisToOEM(void);
BOOL WINAPI SetFileAttributesA(LPCSTR,DWORD);
BOOL WINAPI SetFileAttributesW(LPCWSTR,DWORD);
DWORD WINAPI SetFilePointer(HANDLE,LONG,PLONG,DWORD);
BOOL WINAPI SetFilePointerEx(HANDLE,LARGE_INTEGER,PLARGE_INTEGER,DWORD);
BOOL WINAPI SetFileSecurityA(LPCSTR,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR);
BOOL WINAPI SetFileSecurityW(LPCWSTR,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR);
BOOL WINAPI SetFileTime(HANDLE,const FILETIME*,const FILETIME*,const FILETIME*);
UINT WINAPI SetHandleCount(UINT);
BOOL WINAPI SetHandleInformation(HANDLE,DWORD,DWORD);
BOOL WINAPI SetKernelObjectSecurity(HANDLE,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR);
void WINAPI SetLastError(DWORD);
void WINAPI SetLastErrorEx(DWORD,DWORD);
BOOL WINAPI SetLocalTime(const SYSTEMTIME*);
BOOL WINAPI SetMailslotInfo(HANDLE,DWORD);
BOOL WINAPI SetNamedPipeHandleState(HANDLE,PDWORD,PDWORD,PDWORD);
BOOL WINAPI SetPriorityClass(HANDLE,DWORD);
BOOL WINAPI SetPrivateObjectSecurity(SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,PSECURITY_DESCRIPTOR *,PGENERIC_MAPPING,HANDLE);
BOOL WINAPI SetProcessAffinityMask(HANDLE,DWORD);
BOOL WINAPI SetProcessPriorityBoost(HANDLE,BOOL);
BOOL WINAPI SetProcessShutdownParameters(DWORD,DWORD);
BOOL WINAPI SetProcessWorkingSetSize(HANDLE,DWORD,DWORD);
BOOL WINAPI SetSecurityDescriptorControl(PSECURITY_DESCRIPTOR,SECURITY_DESCRIPTOR_CONTROL,SECURITY_DESCRIPTOR_CONTROL);
BOOL WINAPI SetSecurityDescriptorDacl(PSECURITY_DESCRIPTOR,BOOL,PACL,BOOL);
BOOL WINAPI SetSecurityDescriptorGroup(PSECURITY_DESCRIPTOR,PSID,BOOL);
BOOL WINAPI SetSecurityDescriptorOwner(PSECURITY_DESCRIPTOR,PSID,BOOL);
BOOL WINAPI SetSecurityDescriptorSacl(PSECURITY_DESCRIPTOR,BOOL,PACL,BOOL);
BOOL WINAPI SetStdHandle(DWORD,HANDLE);
#define SetSwapAreaSize(w) (w)
BOOL WINAPI SetSystemPowerState(BOOL,BOOL);
BOOL WINAPI SetSystemTime(const SYSTEMTIME*);
BOOL WINAPI SetSystemTimeAdjustment(DWORD,BOOL);
DWORD WINAPI SetTapeParameters(HANDLE,DWORD,PVOID);
DWORD WINAPI SetTapePosition(HANDLE,DWORD,DWORD,DWORD,DWORD,BOOL);
DWORD WINAPI SetThreadAffinityMask(HANDLE,DWORD);
BOOL WINAPI SetThreadContext(HANDLE,const CONTEXT*);
DWORD WINAPI SetThreadIdealProcessor(HANDLE,DWORD);
BOOL WINAPI SetThreadPriority(HANDLE,int);
BOOL WINAPI SetThreadPriorityBoost(HANDLE,BOOL);
BOOL WINAPI SetThreadToken (PHANDLE,HANDLE);
BOOL WINAPI SetTimeZoneInformation(const TIME_ZONE_INFORMATION *);
BOOL WINAPI SetTokenInformation(HANDLE,TOKEN_INFORMATION_CLASS,PVOID,DWORD);
LPTOP_LEVEL_EXCEPTION_FILTER WINAPI SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER);
BOOL WINAPI SetupComm(HANDLE,DWORD,DWORD);
BOOL WINAPI SetVolumeLabelA(LPCSTR,LPCSTR);
BOOL WINAPI SetVolumeLabelW(LPCWSTR,LPCWSTR);
#if (_WIN32_WINNT >= 0x0500)
BOOL WINAPI SetVolumeMountPointA(LPCSTR,LPCSTR);
BOOL WINAPI SetVolumeMountPointW(LPCWSTR,LPCWSTR);
#endif
BOOL WINAPI SetWaitableTimer(HANDLE,const LARGE_INTEGER*,LONG,PTIMERAPCROUTINE,PVOID,BOOL);
DWORD WINAPI SignalObjectAndWait(HANDLE,HANDLE,DWORD,BOOL);
DWORD WINAPI SizeofResource(HINSTANCE,HRSRC);
void WINAPI Sleep(DWORD);
DWORD WINAPI SleepEx(DWORD,BOOL);
DWORD WINAPI SuspendThread(HANDLE);
void WINAPI SwitchToFiber(PVOID);
BOOL WINAPI SwitchToThread(void);
BOOL WINAPI SystemTimeToFileTime(const SYSTEMTIME*,LPFILETIME);
BOOL WINAPI SystemTimeToTzSpecificLocalTime(LPTIME_ZONE_INFORMATION,LPSYSTEMTIME,LPSYSTEMTIME);
BOOL WINAPI TerminateProcess(HANDLE,UINT);
BOOL WINAPI TerminateThread(HANDLE,DWORD);
DWORD WINAPI TlsAlloc(VOID);
BOOL WINAPI TlsFree(DWORD);
PVOID WINAPI TlsGetValue(DWORD);
BOOL WINAPI TlsSetValue(DWORD,PVOID);
BOOL WINAPI TransactNamedPipe(HANDLE,PVOID,DWORD,PVOID,DWORD,PDWORD,LPOVERLAPPED);
BOOL WINAPI TransmitCommChar(HANDLE,char);
BOOL WINAPI TryEnterCriticalSection(LPCRITICAL_SECTION);
LONG WINAPI UnhandledExceptionFilter(LPEXCEPTION_POINTERS);
BOOL WINAPI UnlockFile(HANDLE,DWORD,DWORD,DWORD,DWORD);
BOOL WINAPI UnlockFileEx(HANDLE,DWORD,DWORD,DWORD,LPOVERLAPPED);
#define UnlockResource(h) (h)
#define UnlockSegment(w) GlobalUnfix((HANDLE)(w)) /* Obsolete: Has no effect. */
BOOL WINAPI UnmapViewOfFile(PVOID);
BOOL WINAPI UpdateResourceA(HANDLE,LPCSTR,LPCSTR,WORD,PVOID,DWORD);
BOOL WINAPI UpdateResourceW(HANDLE,LPCWSTR,LPCWSTR,WORD,PVOID,DWORD);
BOOL WINAPI VerifyVersionInfoA(LPOSVERSIONINFOEXA,DWORD,DWORDLONG);
BOOL WINAPI VerifyVersionInfoW(LPOSVERSIONINFOEXW,DWORD,DWORDLONG);
PVOID WINAPI VirtualAlloc(PVOID,DWORD,DWORD,DWORD);
PVOID WINAPI VirtualAllocEx(HANDLE,PVOID,DWORD,DWORD,DWORD);
BOOL WINAPI VirtualFree(PVOID,DWORD,DWORD);
BOOL WINAPI VirtualFreeEx(HANDLE,PVOID,DWORD,DWORD);
BOOL WINAPI VirtualLock(PVOID,DWORD);
BOOL WINAPI VirtualProtect(PVOID,DWORD,DWORD,PDWORD);
BOOL WINAPI VirtualProtectEx(HANDLE,PVOID,DWORD,DWORD,PDWORD);
DWORD WINAPI VirtualQuery(LPCVOID,PMEMORY_BASIC_INFORMATION,DWORD);
DWORD WINAPI VirtualQueryEx(HANDLE,LPCVOID,PMEMORY_BASIC_INFORMATION,DWORD);
BOOL WINAPI VirtualUnlock(PVOID,DWORD);
BOOL WINAPI WaitCommEvent(HANDLE,PDWORD,LPOVERLAPPED);
BOOL WINAPI WaitForDebugEvent(LPDEBUG_EVENT,DWORD);
DWORD WINAPI WaitForMultipleObjects(DWORD,const HANDLE*,BOOL,DWORD);
DWORD WINAPI WaitForMultipleObjectsEx(DWORD,const HANDLE*,BOOL,DWORD,BOOL);
DWORD WINAPI WaitForSingleObject(HANDLE,DWORD);
DWORD WINAPI WaitForSingleObjectEx(HANDLE,DWORD,BOOL);
BOOL WINAPI WaitNamedPipeA(LPCSTR,DWORD);
BOOL WINAPI WaitNamedPipeW(LPCWSTR,DWORD);
BOOL WINAPI WinLoadTrustProvider(GUID*);
BOOL WINAPI WriteFile(HANDLE,PCVOID,DWORD,PDWORD,LPOVERLAPPED);
BOOL WINAPI WriteFileEx(HANDLE,PCVOID,DWORD,LPOVERLAPPED,LPOVERLAPPED_COMPLETION_ROUTINE);
BOOL WINAPI WriteFileGather(HANDLE,FILE_SEGMENT_ELEMENT*,DWORD,LPDWORD,LPOVERLAPPED);
BOOL WINAPI WritePrivateProfileSectionA(LPCSTR,LPCSTR,LPCSTR);
BOOL WINAPI WritePrivateProfileSectionW(LPCWSTR,LPCWSTR,LPCWSTR);
BOOL WINAPI WritePrivateProfileStringA(LPCSTR,LPCSTR,LPCSTR,LPCSTR);
BOOL WINAPI WritePrivateProfileStringW(LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR);
BOOL WINAPI WritePrivateProfileStructA(LPCSTR,LPCSTR,LPVOID,UINT,LPCSTR);
BOOL WINAPI WritePrivateProfileStructW(LPCWSTR,LPCWSTR,LPVOID,UINT,LPCWSTR);
BOOL WINAPI WriteProcessMemory(HANDLE,LPVOID,LPCVOID,SIZE_T,SIZE_T*);
BOOL WINAPI WriteProfileSectionA(LPCSTR,LPCSTR);
BOOL WINAPI WriteProfileSectionW(LPCWSTR,LPCWSTR);
BOOL WINAPI WriteProfileStringA(LPCSTR,LPCSTR,LPCSTR);
BOOL WINAPI WriteProfileStringW(LPCWSTR,LPCWSTR,LPCWSTR);
DWORD WINAPI WriteTapemark(HANDLE,DWORD,DWORD,BOOL);
#define Yield()
#if (_WIN32_WINNT >= 0x0500)
BOOL WINAPI AllocateUserPhysicalPages(HANDLE,PULONG_PTR,PULONG_PTR);
BOOL WINAPI FreeUserPhysicalPages(HANDLE,PULONG_PTR,PULONG_PTR);
BOOL WINAPI MapUserPhysicalPages(PVOID,ULONG_PTR,PULONG_PTR);
BOOL WINAPI MapUserPhysicalPagesScatter(PVOID*,ULONG_PTR,PULONG_PTR);
typedef enum _COMPUTER_NAME_FORMAT
{
  ComputerNameNetBIOS, 
  ComputerNameDnsHostname, 
  ComputerNameDnsDomain, 
  ComputerNameDnsFullyQualified, 
  ComputerNamePhysicalNetBIOS, 
  ComputerNamePhysicalDnsHostname, 
  ComputerNamePhysicalDnsDomain, 
  ComputerNamePhysicalDnsFullyQualified, 
  ComputerNameMax
} COMPUTER_NAME_FORMAT;
#endif

#ifdef UNICODE
typedef STARTUPINFOW STARTUPINFO,*LPSTARTUPINFO;
typedef WIN32_FIND_DATAW WIN32_FIND_DATA,*LPWIN32_FIND_DATA;
typedef HW_PROFILE_INFOW HW_PROFILE_INFO,*LPHW_PROFILE_INFO;
#define AccessCheckAndAuditAlarm AccessCheckAndAuditAlarmW
#define AddAtom AddAtomW
#define BackupEventLog BackupEventLogW
#define BeginUpdateResource BeginUpdateResourceW
#define BuildCommDCB BuildCommDCBW
#define BuildCommDCBAndTimeouts BuildCommDCBAndTimeoutsW
#define CallNamedPipe CallNamedPipeW
#define ClearEventLog ClearEventLogW
#define CommConfigDialog CommConfigDialogW
#define CopyFile CopyFileW
#define CopyFileEx CopyFileExW
#define CreateDirectory CreateDirectoryW
#define CreateDirectoryEx CreateDirectoryExW
#define CreateEvent CreateEventW
#define CreateFile CreateFileW
#define CreateFileMapping CreateFileMappingW
#if (_WIN32_WINNT >= 0x0500)
#define CreateHardLink CreateHardLinkW
#define CreateJobObject CreateJobObjectW
#endif
#define CreateMailslot CreateMailslotW
#define CreateMutex CreateMutexW
#define CreateNamedPipe CreateNamedPipeW
#define CreateProcess CreateProcessW
#define CreateProcessAsUser CreateProcessAsUserW
#define CreateSemaphore CreateSemaphoreW
#define CreateWaitableTimer CreateWaitableTimerW
#define DefineDosDevice DefineDosDeviceW
#define DeleteFile DeleteFileW
#if (_WIN32_WINNT >= 0x0500)
#define DeleteVolumeMountPoint DeleteVolumeMountPointW
#endif
#define EncryptFile EncryptFileW
#define EndUpdateResource EndUpdateResourceW
#define EnumResourceLanguages EnumResourceLanguagesW
#define EnumResourceNames EnumResourceNamesW
#define EnumResourceTypes EnumResourceTypesW
#define ExpandEnvironmentStrings ExpandEnvironmentStringsW
#define FatalAppExit FatalAppExitW
#define FileEncryptionStatus FileEncryptionStatusW
#define FindAtom FindAtomW
#define FindFirstChangeNotification FindFirstChangeNotificationW
#define FindFirstFile FindFirstFileW
#define FindFirstFileEx FindFirstFileExW
#if (_WIN32_WINNT >= 0x0500)
#define FindFirstVolume FindFirstVolumeW
#define FindFirstVolumeMountPoint FindFirstVolumeMountPointW
#endif
#define FindNextFile FindNextFileW
#if (_WIN32_WINNT >= 0x0500)
#define FindNextVolume FindNextVolumeW
#define FindNextVolumeMountPoint  FindNextVolumeMountPointW
#endif
#define FindResource FindResourceW
#define FindResourceEx FindResourceExW
#define FormatMessage FormatMessageW
#define FreeEnvironmentStrings FreeEnvironmentStringsW
#define GetAtomName GetAtomNameW
#define GetBinaryType GetBinaryTypeW
#define GetCommandLine GetCommandLineW
#define GetCompressedFileSize GetCompressedFileSizeW
#define GetComputerName GetComputerNameW
#define GetCurrentDirectory GetCurrentDirectoryW
#define GetDefaultCommConfig GetDefaultCommConfigW
#define GetDiskFreeSpace GetDiskFreeSpaceW
#define GetDiskFreeSpaceEx GetDiskFreeSpaceExW
#define GetDriveType GetDriveTypeW
#define GetEnvironmentStrings GetEnvironmentStringsW
#define GetEnvironmentVariable GetEnvironmentVariableW
#define GetFileAttributes GetFileAttributesW
#define GetFileSecurity GetFileSecurityW
#define GetFileAttributesEx GetFileAttributesExW
#define GetFullPathName GetFullPathNameW
#define GetLogicalDriveStrings GetLogicalDriveStringsW
#if (_WIN32_WINNT >= 0x0500 || _WIN32_WINDOWS >= 0x0410)
#define GetLongPathName GetLongPathNameW
#endif
#define GetModuleFileName GetModuleFileNameW
#define GetModuleHandle GetModuleHandleW
#if (_WIN32_WINNT >= 0x0500)
#define GetModuleHandleEx GetModuleHandleExW
#endif
#define GetNamedPipeHandleState GetNamedPipeHandleStateW
#define GetPrivateProfileInt GetPrivateProfileIntW
#define GetPrivateProfileSection GetPrivateProfileSectionW
#define GetPrivateProfileSectionNames GetPrivateProfileSectionNamesW
#define GetPrivateProfileString GetPrivateProfileStringW
#define GetPrivateProfileStruct GetPrivateProfileStructW
#define GetProfileInt GetProfileIntW
#define GetProfileSection GetProfileSectionW
#define GetProfileString GetProfileStringW
#define GetShortPathName GetShortPathNameW
#define GetStartupInfo GetStartupInfoW
#define GetSystemDirectory GetSystemDirectoryW
#define GetTempFileName GetTempFileNameW
#define GetTempPath GetTempPathW
#define GetUserName GetUserNameW
#define GetVersionEx GetVersionExW
#define GetVolumeInformation GetVolumeInformationW
#define GetVolumeNameForVolumeMountPoint GetVolumeNameForVolumeMountPointW
#define GetVolumePathName GetVolumePathNameW
#define GetVolumePathNamesForVolumeName GetVolumePathNamesForVolumeNameW
#define GetWindowsDirectory GetWindowsDirectoryW
#define GlobalAddAtom GlobalAddAtomW
#define GlobalFindAtom GlobalFindAtomW
#define GlobalGetAtomName GlobalGetAtomNameW
#define IsBadStringPtr IsBadStringPtrW
#define LoadLibrary LoadLibraryW
#define LoadLibraryEx LoadLibraryExW
#define LogonUser LogonUserW
#define LookupAccountName LookupAccountNameW
#define LookupAccountSid LookupAccountSidW
#define LookupPrivilegeDisplayName LookupPrivilegeDisplayNameW
#define LookupPrivilegeName LookupPrivilegeNameW
#define LookupPrivilegeValue LookupPrivilegeValueW
#define lstrcat lstrcatW
#define lstrcmp lstrcmpW
#define lstrcmpi lstrcmpiW
#define lstrcpy lstrcpyW
#define lstrcpyn lstrcpynW
#define lstrlen lstrlenW
#define MoveFile MoveFileW
#define MoveFileEx MoveFileExW
#define ObjectCloseAuditAlarm ObjectCloseAuditAlarmW
#define ObjectDeleteAuditAlarm ObjectDeleteAuditAlarmW
#define ObjectOpenAuditAlarm ObjectOpenAuditAlarmW
#define ObjectPrivilegeAuditAlarm ObjectPrivilegeAuditAlarmW
#define OpenBackupEventLog OpenBackupEventLogW
#define OpenEvent OpenEventW
#define OpenEventLog OpenEventLogW
#define OpenFileMapping OpenFileMappingW
#define OpenMutex OpenMutexW
#define OpenSemaphore OpenSemaphoreW
#define OutputDebugString OutputDebugStringW
#define PrivilegedServiceAuditAlarm PrivilegedServiceAuditAlarmW
#define QueryDosDevice QueryDosDeviceW
#define ReadEventLog ReadEventLogW
#define RegisterEventSource RegisterEventSourceW
#define RemoveDirectory RemoveDirectoryW
#define ReportEvent ReportEventW
#define SearchPath SearchPathW
#define SetComputerName SetComputerNameW
#define SetCurrentDirectory SetCurrentDirectoryW
#define SetDefaultCommConfig SetDefaultCommConfigW
#define SetEnvironmentVariable SetEnvironmentVariableW
#define SetFileAttributes SetFileAttributesW
#define SetFileSecurity SetFileSecurityW
#define SetVolumeLabel SetVolumeLabelW
#define SetVolumeMountPoint SetVolumeMountPointW
#define UpdateResource UpdateResourceW
#define VerifyVersionInfo VerifyVersionInfoW
#define WaitNamedPipe WaitNamedPipeW
#define WritePrivateProfileSection WritePrivateProfileSectionW
#define WritePrivateProfileString WritePrivateProfileStringW
#define WritePrivateProfileStruct WritePrivateProfileStructW
#define WriteProfileSection WriteProfileSectionW
#define WriteProfileString WriteProfileStringW
#else
typedef STARTUPINFOA STARTUPINFO,*LPSTARTUPINFO;
typedef WIN32_FIND_DATAA WIN32_FIND_DATA,*LPWIN32_FIND_DATA;
typedef HW_PROFILE_INFOA HW_PROFILE_INFO,*LPHW_PROFILE_INFO;
#define AccessCheckAndAuditAlarm AccessCheckAndAuditAlarmA
#define AddAtom AddAtomA
#define BackupEventLog BackupEventLogA
#define BeginUpdateResource BeginUpdateResourceA
#define BuildCommDCB BuildCommDCBA
#define BuildCommDCBAndTimeouts BuildCommDCBAndTimeoutsA
#define CallNamedPipe CallNamedPipeA
#define ClearEventLog ClearEventLogA
#define CommConfigDialog CommConfigDialogA
#define CopyFile CopyFileA
#define CopyFileEx CopyFileExA
#define CreateDirectory CreateDirectoryA
#define CreateDirectoryEx CreateDirectoryExA
#define CreateEvent CreateEventA
#define CreateFile CreateFileA
#define CreateFileMapping CreateFileMappingA
#if (_WIN32_WINNT >= 0x0500)
#define CreateHardLink CreateHardLinkA
#define CreateJobObject CreateJobObjectA
#endif
#define CreateMailslot CreateMailslotA
#define CreateMutex CreateMutexA
#define CreateNamedPipe CreateNamedPipeA
#define CreateProcess CreateProcessA
#define CreateProcessAsUser CreateProcessAsUserA
#define CreateSemaphore CreateSemaphoreA
#define CreateWaitableTimer CreateWaitableTimerA
#define DefineDosDevice DefineDosDeviceA
#define DeleteFile DeleteFileA
#if (_WIN32_WINNT >= 0x0500)
#define DeleteVolumeMountPoint DeleteVolumeMountPointA
#endif
#define EncryptFile EncryptFileA
#define EndUpdateResource EndUpdateResourceA
#define EnumResourceLanguages EnumResourceLanguagesA
#define EnumResourceNames EnumResourceNamesA
#define EnumResourceTypes EnumResourceTypesA
#define ExpandEnvironmentStrings ExpandEnvironmentStringsA
#define FatalAppExit FatalAppExitA
#define FileEncryptionStatus FileEncryptionStatusA
#define FindAtom FindAtomA
#define FindFirstChangeNotification FindFirstChangeNotificationA
#define FindFirstFile FindFirstFileA
#define FindFirstFileEx FindFirstFileExA
#if (_WIN32_WINNT >= 0x0500)
#define FindFirstVolume FindFirstVolumeA
#define FindFirstVolumeMountPoint FindFirstVolumeMountPointA
#endif
#define FindNextFile FindNextFileA
#if (_WIN32_WINNT >= 0x0500)
#define FindNextVolume FindNextVolumeA
#define FindNextVolumeMountPoint FindNextVolumeMountPointA
#endif
#define FindResource FindResourceA
#define FindResourceEx FindResourceExA
#define FormatMessage FormatMessageA
#define FreeEnvironmentStrings FreeEnvironmentStringsA
#define GetAtomName GetAtomNameA
#define GetBinaryType GetBinaryTypeA
#define GetCommandLine GetCommandLineA
#define GetComputerName GetComputerNameA
#define GetCompressedFileSize GetCompressedFileSizeA
#define GetCurrentDirectory GetCurrentDirectoryA
#define GetDefaultCommConfig GetDefaultCommConfigA
#define GetDiskFreeSpace GetDiskFreeSpaceA
#define GetDiskFreeSpaceEx GetDiskFreeSpaceExA
#define GetDriveType GetDriveTypeA
#define GetEnvironmentVariable GetEnvironmentVariableA
#define GetFileAttributes GetFileAttributesA
#define GetFileSecurity GetFileSecurityA
#define GetFileAttributesEx GetFileAttributesExA
#define GetFullPathName GetFullPathNameA
#define GetLogicalDriveStrings GetLogicalDriveStringsA
#if (_WIN32_WINNT >= 0x0500 || _WIN32_WINDOWS >= 0x0410)
#define GetLongPathName GetLongPathNameA
#endif
#define GetNamedPipeHandleState GetNamedPipeHandleStateA
#define GetModuleHandle GetModuleHandleA
#if (_WIN32_WINNT >= 0x0500)
#define GetModuleHandleEx GetModuleHandleExA
#endif
#define GetModuleFileName GetModuleFileNameA
#define GetPrivateProfileInt GetPrivateProfileIntA
#define GetPrivateProfileSection GetPrivateProfileSectionA
#define GetPrivateProfileSectionNames GetPrivateProfileSectionNamesA
#define GetPrivateProfileString GetPrivateProfileStringA
#define GetPrivateProfileStruct GetPrivateProfileStructA
#define GetProfileInt GetProfileIntA
#define GetProfileSection GetProfileSectionA
#define GetProfileString GetProfileStringA
#define GetShortPathName GetShortPathNameA
#define GetStartupInfo GetStartupInfoA
#define GetSystemDirectory GetSystemDirectoryA
#define GetTempFileName GetTempFileNameA
#define GetTempPath GetTempPathA
#define GetUserName GetUserNameA
#define GetVersionEx GetVersionExA
#define GetVolumeInformation GetVolumeInformationA
#define GetVolumeNameForVolumeMountPoint GetVolumeNameForVolumeMountPointA
#define GetVolumePathName GetVolumePathNameA
#define GetVolumePathNamesForVolumeName GetVolumePathNamesForVolumeNameA
#define GetWindowsDirectory GetWindowsDirectoryA
#define GlobalAddAtom GlobalAddAtomA
#define GlobalFindAtom GlobalFindAtomA
#define GlobalGetAtomName GlobalGetAtomNameA
#define IsBadStringPtr IsBadStringPtrA
#define LoadLibrary LoadLibraryA
#define LoadLibraryEx LoadLibraryExA
#define LogonUser LogonUserA
#define LookupAccountName LookupAccountNameA
#define LookupAccountSid LookupAccountSidA
#define LookupPrivilegeDisplayName LookupPrivilegeDisplayNameA
#define LookupPrivilegeName LookupPrivilegeNameA
#define LookupPrivilegeValue LookupPrivilegeValueA
#define lstrcat lstrcatA
#define lstrcmp lstrcmpA
#define lstrcmpi lstrcmpiA
#define lstrcpy lstrcpyA
#define lstrcpyn lstrcpynA
#define lstrlen lstrlenA
#define MoveFile MoveFileA
#define MoveFileEx MoveFileExA
#define ObjectCloseAuditAlarm ObjectCloseAuditAlarmA
#define ObjectDeleteAuditAlarm ObjectDeleteAuditAlarmA
#define ObjectOpenAuditAlarm ObjectOpenAuditAlarmA
#define ObjectPrivilegeAuditAlarm ObjectPrivilegeAuditAlarmA
#define OpenBackupEventLog OpenBackupEventLogA
#define OpenEvent OpenEventA
#define OpenEventLog OpenEventLogA
#define OpenFileMapping OpenFileMappingA
#define OpenMutex OpenMutexA
#define OpenSemaphore OpenSemaphoreA
#define OutputDebugString OutputDebugStringA
#define PrivilegedServiceAuditAlarm PrivilegedServiceAuditAlarmA
#define QueryDosDevice QueryDosDeviceA
#define ReadEventLog ReadEventLogA
#define RegisterEventSource RegisterEventSourceA
#define RemoveDirectory RemoveDirectoryA
#define ReportEvent ReportEventA
#define SearchPath SearchPathA
#define SetComputerName SetComputerNameA
#define SetCurrentDirectory SetCurrentDirectoryA
#define SetDefaultCommConfig SetDefaultCommConfigA
#define SetEnvironmentVariable SetEnvironmentVariableA
#define SetFileAttributes SetFileAttributesA
#define SetFileSecurity SetFileSecurityA
#define SetVolumeLabel SetVolumeLabelA
#define SetVolumeMountPoint SetVolumeMountPointA
#define UpdateResource UpdateResourceA
#define VerifyVersionInfo VerifyVersionInfoA
#define WaitNamedPipe WaitNamedPipeA
#define WritePrivateProfileSection WritePrivateProfileSectionA
#define WritePrivateProfileString WritePrivateProfileStringA
#define WritePrivateProfileStruct WritePrivateProfileStructA
#define WriteProfileSection WriteProfileSectionA
#define WriteProfileString WriteProfileStringA
#endif
#endif
#ifdef __cplusplus
}
#endif
#endif /* _WINBASE_H */
