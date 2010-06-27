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
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/winuser.h,v 1.1 2007/05/17 07:25:37 bw Exp $
*
* $Id: winuser.h,v 1.1 2007/05/17 07:25:37 bw Exp $
*
* $Date: 2007/05/17 07:25:37 $
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
* $Log: winuser.h,v $
* Revision 1.1  2007/05/17 07:25:37  bw
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
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/winuser.h,v 1.1 2007/05/14 09:46:55 bw Exp $
*
* ~Id: winuser.h,v 1.1 2007/05/14 09:46:55 bw Exp $
*
* ~Date: 2007/05/14 09:46:55 $
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
* ~Log: winuser.h,v $
* Revision 1.1  2007/05/14 09:46:55  bw
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
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/winuser.h,v 1.2 2007/04/04 06:51:35 bw Exp $
*
* ~Id: winuser.h,v 1.2 2007/04/04 06:51:35 bw Exp $
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
* ~Log: winuser.h,v $
* Revision 1.2  2007/04/04 06:51:35  bw
* 增加.c.h文件头模板
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

#ifndef _WINUSER_H
#define _WINUSER_H
#if __GNUC__ >= 3
#pragma GCC system_header
#endif

#ifdef __cplusplus
extern "C" {
#endif
#define WC_DIALOG MAKEINTATOM(0x8002)
#define FALT	16
#define FCONTROL	8
#define FNOINVERT	2
#define FSHIFT	4
#define FVIRTKEY	1
#define ATF_TIMEOUTON	1
#define ATF_ONOFFFEEDBACK	2
#define ATF_AVAILABLE	4 /* May be obsolete. Not in recent MS docs. */
#define WH_MIN	(-1)
#define WH_MSGFILTER	(-1)
#define WH_JOURNALRECORD	0
#define WH_JOURNALPLAYBACK	1
#define WH_KEYBOARD	2
#define WH_GETMESSAGE	3
#define WH_CALLWNDPROC	4
#define WH_CBT	5
#define WH_SYSMSGFILTER	6
#define WH_MOUSE	7
#define WH_HARDWARE	8
#define WH_DEBUG	9
#define WH_SHELL	10
#define WH_FOREGROUNDIDLE	11
#define WH_CALLWNDPROCRET	12
#define WH_KEYBOARD_LL	13
#define WH_MOUSE_LL	14
#define WH_MAX		14
#define WH_MINHOOK	WH_MIN
#define WH_MAXHOOK	WH_MAX
#define HC_ACTION	0
#define HC_GETNEXT	1
#define HC_SKIP	2
#define HC_NOREMOVE	3
#define HC_NOREM	3
#define HC_SYSMODALON	4
#define HC_SYSMODALOFF	5
#define HCBT_MOVESIZE	0
#define HCBT_MINMAX	1
#define HCBT_QS	2
#define HCBT_CREATEWND	3
#define HCBT_DESTROYWND	4
#define HCBT_ACTIVATE	5
#define HCBT_CLICKSKIPPED	6
#define HCBT_KEYSKIPPED	7
#define HCBT_SYSCOMMAND	8
#define HCBT_SETFOCUS	9
#define CF_TEXT	1
#define CF_BITMAP	2
#define CF_METAFILEPICT	3
#define CF_SYLK	4
#define CF_DIF	5
#define CF_TIFF	6
#define CF_OEMTEXT	7
#define CF_DIB	8
#define CF_PALETTE	9
#define CF_PENDATA	10
#define CF_RIFF	11
#define CF_WAVE	12
#define CF_UNICODETEXT	13
#define CF_ENHMETAFILE	14
#define CF_HDROP	15
#define CF_LOCALE	16
#define CF_MAX	17
#define CF_OWNERDISPLAY	128
#define CF_DSPTEXT	129
#define CF_DSPBITMAP	130
#define CF_DSPMETAFILEPICT	131
#define CF_DSPENHMETAFILE	142
#define CF_PRIVATEFIRST	512
#define CF_PRIVATELAST	767
#define CF_GDIOBJFIRST	768
#define CF_GDIOBJLAST	1023
#define HKL_NEXT	1
#define HKL_PREV	0
#define KLF_ACTIVATE	1
#define KLF_SUBSTITUTE_OK	2
#define KLF_UNLOADPREVIOUS	4
#define KLF_REORDER	8
#define KLF_REPLACELANG	16
#define KLF_NOTELLSHELL	128
#define KLF_SETFORPROCESS	256
#define KL_NAMELENGTH 9
#define MF_ENABLED	0
#define MF_GRAYED	1
#define MF_DISABLED	2
#define MF_BITMAP	4
#define MF_CHECKED	8
#define MF_MENUBARBREAK 32
#define MF_MENUBREAK	64
#define MF_OWNERDRAW	256
#define MF_POPUP	16
#define MF_SEPARATOR	0x800
#define MF_STRING	0
#define MF_UNCHECKED	0
#define MF_DEFAULT	4096
#define MF_SYSMENU	0x2000
#define MF_HELP	0x4000
#define MF_END	128
#define MF_RIGHTJUSTIFY	0x4000
#define MF_MOUSESELECT	0x8000
#define MF_INSERT 0
#define MF_CHANGE 128
#define MF_APPEND 256
#define MF_DELETE 512
#define MF_REMOVE 4096
#define MF_USECHECKBITMAPS 512
#define MF_UNHILITE 0
#define MF_HILITE 128
#define BSF_IGNORECURRENTTASK	2
#define BSF_QUERY	1
#define BSF_FLUSHDISK	4
#define BSF_NOHANG	8
#define BSF_POSTMESSAGE 16
#define BSF_FORCEIFHUNG	32
#define BSF_NOTIMEOUTIFNOTHUNG 64
#define BSM_ALLCOMPONENTS	0
#define BSM_APPLICATIONS	8
#define BSM_ALLDESKTOPS		16
#define BSM_INSTALLABLEDRIVERS	4
#define BSM_NETDRIVER	2
#define BSM_VXDS	1
#define BROADCAST_QUERY_DENY	1112363332
#define ENUM_CURRENT_SETTINGS	((DWORD)-1)
#define ENUM_REGISTRY_SETTINGS	((DWORD)-2)
#define DM_BITSPERPEL	0x40000
#define DM_PELSWIDTH	0x80000
#define DM_PELSHEIGHT	0x100000
#define DM_DISPLAYFLAGS 0x200000
#define DM_DISPLAYFREQUENCY 0x400000
#define CDS_UPDATEREGISTRY	1
#define CDS_TEST	2
#define CDS_FULLSCREEN	4
#define CDS_GLOBAL	8
#define CDS_SET_PRIMARY	16
#define CDS_RESET	0x40000000
#define CDS_SETRECT	0x20000000
#define CDS_NORESET	0x10000000
#define DISP_CHANGE_SUCCESSFUL	0
#define DISP_CHANGE_RESTART	1
#define DISP_CHANGE_BADFLAGS	(-4)
#define DISP_CHANGE_BADPARAM	(-5)
#define DISP_CHANGE_FAILED	(-1)
#define DISP_CHANGE_BADMODE	(-2)
#define DISP_CHANGE_NOTUPDATED	(-3)
#define BST_CHECKED	1
#define BST_INDETERMINATE	2
#define BST_UNCHECKED	0
#define BST_FOCUS	8
#define BST_PUSHED	4
#define MF_BYCOMMAND	0
#define MF_BYPOSITION	1024
#define MF_UNCHECKED	0
#define MF_HILITE	128
#define MF_UNHILITE	0
#define CWP_ALL 0
#define CWP_SKIPINVISIBLE	1
#define CWP_SKIPDISABLED	2
#define CWP_SKIPTRANSPARENT	4
#define IMAGE_BITMAP	0
#define IMAGE_ICON	1
#define IMAGE_CURSOR	2
#define IMAGE_ENHMETAFILE	3
#define DF_ALLOWOTHERACCOUNTHOOK	1
#define DESKTOP_CREATEMENU	4
#define DESKTOP_CREATEWINDOW	2
#define DESKTOP_ENUMERATE	64
#define DESKTOP_HOOKCONTROL	8
#define DESKTOP_JOURNALPLAYBACK	32
#define DESKTOP_JOURNALRECORD	16
#define DESKTOP_READOBJECTS	1
#define DESKTOP_SWITCHDESKTOP	256
#define DESKTOP_WRITEOBJECTS	128
#define CW_USEDEFAULT	0x80000000
#define WS_BORDER	0x800000
#define WS_CAPTION	0xc00000
#define WS_CHILD	0x40000000
#define WS_CHILDWINDOW	0x40000000
#define WS_CLIPCHILDREN 0x2000000
#define WS_CLIPSIBLINGS 0x4000000
#define WS_DISABLED	0x8000000
#define WS_DLGFRAME	0x400000
#define WS_GROUP	0x20000
#define WS_HSCROLL	0x100000
#define WS_ICONIC	0x20000000
#define WS_MAXIMIZE	0x1000000
#define WS_MAXIMIZEBOX	0x10000
#define WS_MINIMIZE	0x20000000
#define WS_MINIMIZEBOX	0x20000
#define WS_OVERLAPPED	0
#define WS_OVERLAPPEDWINDOW	0xcf0000
#define WS_POPUP	0x80000000
#define WS_POPUPWINDOW	0x80880000
#define WS_SIZEBOX	0x40000
#define WS_SYSMENU	0x80000
#define WS_TABSTOP	0x10000
#define WS_THICKFRAME	0x40000
#define WS_TILED	0
#define WS_TILEDWINDOW	0xcf0000
#define WS_VISIBLE	0x10000000
#define WS_VSCROLL	0x200000
#define MDIS_ALLCHILDSTYLES	1
#define BS_3STATE	5
#define BS_AUTO3STATE	6
#define BS_AUTOCHECKBOX	3
#define BS_AUTORADIOBUTTON	9
#define BS_BITMAP	128
#define BS_BOTTOM	0x800
#define BS_CENTER	0x300
#define BS_CHECKBOX	2
#define BS_DEFPUSHBUTTON	1
#define BS_GROUPBOX	7
#define BS_ICON	64
#define BS_LEFT	256
#define BS_LEFTTEXT	32
#define BS_MULTILINE	0x2000
#define BS_NOTIFY	0x4000
#define BS_OWNERDRAW	0xb
#define BS_PUSHBUTTON	0
#define BS_PUSHLIKE	4096
#define BS_RADIOBUTTON 4
#define BS_RIGHT	512
#define BS_RIGHTBUTTON	32
#define BS_TEXT	0
#define BS_TOP	0x400
#define BS_USERBUTTON	8
#define BS_VCENTER	0xc00
#define BS_FLAT	0x8000
#define CBS_AUTOHSCROLL	64
#define CBS_DISABLENOSCROLL	0x800
#define CBS_DROPDOWN	2
#define CBS_DROPDOWNLIST	3
#define CBS_HASSTRINGS	512
#define CBS_LOWERCASE	0x4000
#define CBS_NOINTEGRALHEIGHT	0x400
#define CBS_OEMCONVERT	128
#define CBS_OWNERDRAWFIXED	16
#define CBS_OWNERDRAWVARIABLE	32
#define CBS_SIMPLE	1
#define CBS_SORT	256
#define CBS_UPPERCASE	0x2000
#define ES_AUTOHSCROLL	128
#define ES_AUTOVSCROLL	64
#define ES_CENTER	1
#define ES_LEFT	0
#define ES_LOWERCASE 16
#define ES_MULTILINE 4
#define ES_NOHIDESEL 256
#define ES_NUMBER 0x2000
#define ES_OEMCONVERT 0x400
#define ES_PASSWORD 32
#define ES_READONLY 0x800
#define ES_RIGHT 2
#define ES_UPPERCASE 8
#define ES_WANTRETURN 4096
#define LBS_DISABLENOSCROLL 4096
#define LBS_EXTENDEDSEL 0x800
#define LBS_HASSTRINGS 64
#define LBS_MULTICOLUMN 512
#define LBS_MULTIPLESEL 8
#define LBS_NODATA	0x2000
#define LBS_NOINTEGRALHEIGHT 256
#define LBS_NOREDRAW 4
#define LBS_NOSEL 0x4000
#define LBS_NOTIFY 1
#define LBS_OWNERDRAWFIXED 16
#define LBS_OWNERDRAWVARIABLE 32
#define LBS_SORT 2
#define LBS_STANDARD 0xa00003
#define LBS_USETABSTOPS 128
#define LBS_WANTKEYBOARDINPUT 0x400
#define SBS_BOTTOMALIGN 4
#define SBS_HORZ 0
#define SBS_LEFTALIGN 2
#define SBS_RIGHTALIGN 4
#define SBS_SIZEBOX 8
#define SBS_SIZEBOXBOTTOMRIGHTALIGN 4
#define SBS_SIZEBOXTOPLEFTALIGN 2
#define SBS_SIZEGRIP 16
#define SBS_TOPALIGN 2
#define SBS_VERT 1
#define SS_BITMAP 14
#define SS_BLACKFRAME 7
#define SS_BLACKRECT 4
#define SS_CENTER 1
#define SS_CENTERIMAGE 512
#define SS_ENHMETAFILE 15
#define SS_ETCHEDFRAME 18
#define SS_ETCHEDHORZ 16
#define SS_ETCHEDVERT 17
#define SS_GRAYFRAME 8
#define SS_GRAYRECT 5
#define SS_ICON 3
#define SS_LEFT 0
#define SS_LEFTNOWORDWRAP 0xc
#define SS_NOPREFIX 128
#define SS_NOTIFY 256
#define SS_OWNERDRAW 0xd
#define SS_REALSIZEIMAGE 0x800
#define SS_RIGHT 2
#define SS_RIGHTJUST 0x400
#define SS_SIMPLE 11
#define SS_SUNKEN 4096
#define SS_WHITEFRAME 9
#define SS_WHITERECT	6
#define SS_USERITEM	10
#define SS_TYPEMASK	0x0000001FL
#define SS_ENDELLIPSIS	0x00004000L
#define SS_PATHELLIPSIS	0x00008000L
#define SS_WORDELLIPSIS	0x0000C000L
#define SS_ELLIPSISMASK 0x0000C000L
#define DS_3DLOOK 4
#define DS_ABSALIGN 1
#define DS_CENTER 0x800
#define DS_CENTERMOUSE 4096
#define DS_CONTEXTHELP 0x2000
#define DS_CONTROL 0x400
#define DS_FIXEDSYS 8
#define DS_LOCALEDIT 32
#define DS_MODALFRAME 128
#define DS_NOFAILCREATE 16
#define DS_NOIDLEMSG	256
#define DS_SETFONT 64
#define DS_SETFOREGROUND 512
#define DS_SYSMODAL 2
#define DS_SHELLFONT (DS_SETFONT | DS_FIXEDSYS)
#define WS_EX_ACCEPTFILES 16
#define WS_EX_APPWINDOW	0x40000
#define WS_EX_CLIENTEDGE 512
#define WS_EX_COMPOSITED 0x2000000 /* XP */
#define WS_EX_CONTEXTHELP 0x400
#define WS_EX_CONTROLPARENT 0x10000
#define WS_EX_DLGMODALFRAME 1
#define WS_EX_LAYERED 0x80000   /* w2k */
#define WS_EX_LAYOUTRTL 0x400000 /* w98, w2k */
#define WS_EX_LEFT	0
#define WS_EX_LEFTSCROLLBAR	0x4000
#define WS_EX_LTRREADING	0
#define WS_EX_MDICHILD	64
#define WS_EX_NOACTIVATE 0x8000000 /* w2k */
#define WS_EX_NOINHERITLAYOUT 0x100000 /* w2k */
#define WS_EX_NOPARENTNOTIFY	4
#define WS_EX_OVERLAPPEDWINDOW	0x300
#define WS_EX_PALETTEWINDOW	0x188
#define WS_EX_RIGHT	0x1000
#define WS_EX_RIGHTSCROLLBAR	0
#define WS_EX_RTLREADING	0x2000
#define WS_EX_STATICEDGE	0x20000
#define WS_EX_TOOLWINDOW	128
#define WS_EX_TOPMOST	8
#define WS_EX_TRANSPARENT	32
#define WS_EX_WINDOWEDGE	256
#define WINSTA_ACCESSCLIPBOARD	4
#define WINSTA_ACCESSGLOBALATOMS	32
#define WINSTA_CREATEDESKTOP	8
#define WINSTA_ENUMDESKTOPS	1
#define WINSTA_ENUMERATE	256
#define WINSTA_EXITWINDOWS	64
#define WINSTA_READATTRIBUTES	2
#define WINSTA_READSCREEN	512
#define WINSTA_WRITEATTRIBUTES	16
#define DDL_READWRITE	0
#define DDL_READONLY	1
#define DDL_HIDDEN	2
#define DDL_SYSTEM	4
#define DDL_DIRECTORY	16
#define DDL_ARCHIVE	32
#define DDL_POSTMSGS	8192
#define DDL_DRIVES	16384
#define DDL_EXCLUSIVE	32768
#define DC_ACTIVE	1
#define DC_SMALLCAP	2
#define DC_ICON	4
#define DC_TEXT	8
#define DC_INBUTTON	16
#if (_WIN32_WINDOWS >= 0x0410 || _WIN32_WINNT >= 0x0500)
#define DC_GRADIENT	32
#endif
#if ( _WIN32_WINNT >= 0x0501)
#define DC_BUTTONS	0x1000
#endif
/* Where are these documented?   */
#define DC_CAPTION	(DC_ICON|DC_TEXT|DC_BUTTONS)
#define DC_NC	(DC_CAPTION|DC_FRAME)

#define BDR_RAISEDOUTER	1
#define BDR_SUNKENOUTER	2
#define BDR_RAISEDINNER	4
#define BDR_SUNKENINNER	8
#define BDR_OUTER	3
#define BDR_INNER	0xc
#define BDR_RAISED	5
#define BDR_SUNKEN	10
#define EDGE_RAISED	(BDR_RAISEDOUTER|BDR_RAISEDINNER)
#define EDGE_SUNKEN	(BDR_SUNKENOUTER|BDR_SUNKENINNER)
#define EDGE_ETCHED	(BDR_SUNKENOUTER|BDR_RAISEDINNER)
#define EDGE_BUMP	(BDR_RAISEDOUTER|BDR_SUNKENINNER)
#define BF_LEFT	1
#define BF_TOP	2
#define BF_RIGHT	4
#define BF_BOTTOM	8
#define BF_TOPLEFT	(BF_TOP|BF_LEFT)
#define BF_TOPRIGHT	(BF_TOP|BF_RIGHT)
#define BF_BOTTOMLEFT	(BF_BOTTOM|BF_LEFT)
#define BF_BOTTOMRIGHT	(BF_BOTTOM|BF_RIGHT)
#define BF_RECT	(BF_LEFT|BF_TOP|BF_RIGHT|BF_BOTTOM)
#define BF_DIAGONAL	16
#define BF_DIAGONAL_ENDTOPRIGHT	(BF_DIAGONAL|BF_TOP|BF_RIGHT)
#define BF_DIAGONAL_ENDTOPLEFT	(BF_DIAGONAL|BF_TOP|BF_LEFT)
#define BF_DIAGONAL_ENDBOTTOMLEFT	(BF_DIAGONAL|BF_BOTTOM|BF_LEFT)
#define BF_DIAGONAL_ENDBOTTOMRIGHT	(BF_DIAGONAL|BF_BOTTOM|BF_RIGHT)
#define BF_MIDDLE	0x800
#define BF_SOFT	0x1000
#define BF_ADJUST	0x2000
#define BF_FLAT	0x4000
#define BF_MONO	0x8000
#define DFC_CAPTION	1
#define DFC_MENU	2
#define DFC_SCROLL	3
#define DFC_BUTTON	4
#define DFCS_CAPTIONCLOSE	0
#define DFCS_CAPTIONMIN	1
#define DFCS_CAPTIONMAX	2
#define DFCS_CAPTIONRESTORE	3
#define DFCS_CAPTIONHELP	4
#define DFCS_MENUARROW	0
#define DFCS_MENUCHECK	1
#define DFCS_MENUBULLET	2
#define DFCS_MENUARROWRIGHT	4
#define DFCS_SCROLLUP	0
#define DFCS_SCROLLDOWN	1
#define DFCS_SCROLLLEFT	2
#define DFCS_SCROLLRIGHT	3
#define DFCS_SCROLLCOMBOBOX	5
#define DFCS_SCROLLSIZEGRIP	8
#define DFCS_SCROLLSIZEGRIPRIGHT	16
#define DFCS_BUTTONCHECK	0
#define DFCS_BUTTONRADIOIMAGE	1
#define DFCS_BUTTONRADIOMASK	2
#define DFCS_BUTTONRADIO	4
#define DFCS_BUTTON3STATE	8
#define DFCS_BUTTONPUSH	16
#define DFCS_INACTIVE	256
#define DFCS_PUSHED	512
#define DFCS_CHECKED	1024
#if (WINVER >= _W2K)
#define DFCS_TRANSPARENT	0x800
#define DFCS_HOT	0x1000
#endif /* WINVER >= _W2K */
#define DFCS_ADJUSTRECT	0x2000
#define DFCS_FLAT	0x4000
#define DFCS_MONO	0x8000
#define DST_COMPLEX	0
#define DST_TEXT	1
#define DST_PREFIXTEXT	2
#define DST_ICON	3
#define DST_BITMAP	4
#define DSS_NORMAL	0
#define DSS_UNION	16
#define DSS_DISABLED	32
#define DSS_MONO	128
#define DSS_RIGHT	0x8000
#define DT_BOTTOM	8
#define DT_CALCRECT	1024
#define DT_CENTER	1
#define DT_EDITCONTROL	8192
#define DT_END_ELLIPSIS	32768
#define DT_PATH_ELLIPSIS	16384
#define DT_WORD_ELLIPSIS 0x40000
#define DT_EXPANDTABS	64
#define DT_EXTERNALLEADING	512
#define DT_LEFT	0
#define DT_MODIFYSTRING	65536
#define DT_NOCLIP	256
#define DT_NOPREFIX	2048
#define DT_RIGHT	2
#define DT_RTLREADING	131072
#define DT_SINGLELINE	32
#define DT_TABSTOP	128
#define DT_TOP	0
#define DT_VCENTER	4
#define DT_WORDBREAK	16
#define DT_INTERNAL	4096
#define WB_ISDELIMITER	2
#define WB_LEFT	0
#define WB_RIGHT	1
#define SB_HORZ	0
#define SB_VERT	1
#define SB_CTL	2
#define SB_BOTH	3
#define ESB_DISABLE_BOTH	3
#define ESB_DISABLE_DOWN	2
#define ESB_DISABLE_LEFT	1
#define ESB_DISABLE_LTUP	1
#define ESB_DISABLE_RIGHT	2
#define ESB_DISABLE_RTDN	2
#define ESB_DISABLE_UP	1
#define ESB_ENABLE_BOTH	0
#define SB_LINEUP	0
#define SB_LINEDOWN	1
#define SB_LINELEFT	0
#define SB_LINERIGHT	1
#define SB_PAGEUP	2
#define SB_PAGEDOWN	3
#define SB_PAGELEFT	2
#define SB_PAGERIGHT	3
#define SB_THUMBPOSITION	4
#define SB_THUMBTRACK	5
#define SB_ENDSCROLL	8
#define SB_LEFT	6
#define SB_RIGHT	7
#define SB_BOTTOM	7
#define SB_TOP	6
#define MAKEINTRESOURCEA(i) (LPSTR)((DWORD)((WORD)(i)))
#define MAKEINTRESOURCEW(i) (LPWSTR)((DWORD)((WORD)(i)))
#ifndef XFree86Server
# define RT_CURSOR MAKEINTRESOURCE(1)
# define RT_FONT MAKEINTRESOURCE(8)
#endif /* ndef XFree86Server */
#define RT_BITMAP MAKEINTRESOURCE(2)
#define RT_ICON MAKEINTRESOURCE(3)
#define RT_MENU MAKEINTRESOURCE(4)
#define RT_DIALOG MAKEINTRESOURCE(5)
#define RT_STRING MAKEINTRESOURCE(6)
#define RT_FONTDIR MAKEINTRESOURCE(7)
#define RT_ACCELERATOR MAKEINTRESOURCE(9)
#define RT_RCDATA MAKEINTRESOURCE(10)
#define RT_MESSAGETABLE MAKEINTRESOURCE(11)
#define DIFFERENCE 11
#define RT_GROUP_CURSOR MAKEINTRESOURCE((DWORD)RT_CURSOR+DIFFERENCE)
#define RT_GROUP_ICON MAKEINTRESOURCE((DWORD)RT_ICON+DIFFERENCE)
#define RT_VERSION MAKEINTRESOURCE(16)
#define RT_DLGINCLUDE MAKEINTRESOURCE(17)
#define RT_PLUGPLAY MAKEINTRESOURCE(19)
#define RT_VXD MAKEINTRESOURCE(20)
#define RT_ANICURSOR MAKEINTRESOURCE(21)
#define RT_ANIICON MAKEINTRESOURCE(22)
#define RT_HTML MAKEINTRESOURCE(23)
#define EWX_FORCE 4
#define EWX_LOGOFF 0
#define EWX_POWEROFF 8
#define EWX_REBOOT 2
#define EWX_SHUTDOWN 1
#if(_WIN32_WINNT >= 0x0500)
#define EWX_FORCEIFHUNG 16
#endif
#define CS_BYTEALIGNCLIENT 4096
#define CS_BYTEALIGNWINDOW 8192
#define CS_KEYCVTWINDOW 4
#define CS_NOKEYCVT 256
#define CS_CLASSDC 64
#define CS_DBLCLKS 8
#define CS_GLOBALCLASS 16384
#define CS_HREDRAW 2
#define CS_NOCLOSE 512
#define CS_OWNDC 32
#define CS_PARENTDC 128
#define CS_SAVEBITS 2048
#define CS_VREDRAW 1
#define CS_IME 0x10000
#define GCW_ATOM (-32)
#define GCL_CBCLSEXTRA (-20)
#define GCL_CBWNDEXTRA (-18)
#define GCL_HBRBACKGROUND (-10)
#define GCL_HCURSOR (-12)
#define GCL_HICON (-14)
#define GCL_HICONSM (-34)
#define GCL_HMODULE (-16)
#define GCL_MENUNAME (-8)
#define GCL_STYLE (-26)
#define GCL_WNDPROC (-24)
#if 0
    /* This is supposed to be defined by the program using it not defined
       in the win32api headers.  I've left it here for documentation purposes.
    */
#ifndef IDC_STATIC  /* May be predefined by resource compiler.  */
#define IDC_STATIC (-1)
#endif
#endif
#define IDC_ARROW MAKEINTRESOURCE(32512)
#define IDC_IBEAM MAKEINTRESOURCE(32513)
#define IDC_WAIT MAKEINTRESOURCE(32514)
#define IDC_CROSS MAKEINTRESOURCE(32515)
#define IDC_UPARROW MAKEINTRESOURCE(32516)
#define IDC_SIZENWSE MAKEINTRESOURCE(32642)
#define IDC_SIZENESW MAKEINTRESOURCE(32643)
#define IDC_SIZEWE MAKEINTRESOURCE(32644)
#define IDC_SIZENS MAKEINTRESOURCE(32645)
#define IDC_SIZEALL MAKEINTRESOURCE(32646)
#define IDC_NO MAKEINTRESOURCE(32648)
#define IDC_HAND MAKEINTRESOURCE(32649)
#define IDC_APPSTARTING MAKEINTRESOURCE(32650)
#define IDC_HELP MAKEINTRESOURCE(32651)
#define IDC_ICON MAKEINTRESOURCE(32641)
#define IDC_SIZE MAKEINTRESOURCE(32640)
#ifndef RC_INVOKED
#define IDI_APPLICATION MAKEINTRESOURCE(32512)
#define IDI_HAND MAKEINTRESOURCE(32513)
#define IDI_QUESTION MAKEINTRESOURCE(32514)
#define IDI_EXCLAMATION MAKEINTRESOURCE(32515)
#define IDI_ASTERISK MAKEINTRESOURCE(32516)
#define IDI_WINLOGO MAKEINTRESOURCE(32517)
#else
#define IDI_APPLICATION 32512
#define IDI_HAND 32513
#define IDI_QUESTION 32514
#define IDI_EXCLAMATION 32515
#define IDI_ASTERISK 32516
#define IDI_WINLOGO 32517
#endif
#define IDI_WARNING IDI_EXCLAMATION
#define IDI_ERROR IDI_HAND
#define IDI_INFORMATION IDI_ASTERISK
#define MIIM_STATE 1
#define MIIM_ID 2
#define MIIM_SUBMENU 4
#define MIIM_CHECKMARKS 8
#define MIIM_TYPE 16
#define MIIM_DATA 32
#define MIIM_STRING 64
#define MIIM_BITMAP 128
#define MIIM_FTYPE 256
#define MFT_BITMAP 4
#define MFT_MENUBARBREAK 32
#define MFT_MENUBREAK 64
#define MFT_OWNERDRAW 256
#define MFT_RADIOCHECK 512
#define MFT_RIGHTJUSTIFY 0x4000
#define MFT_SEPARATOR 0x800
#define MFT_RIGHTORDER 0x2000L
#define MFT_STRING 0
#define MFS_CHECKED 8
#define MFS_DEFAULT 4096
#define MFS_DISABLED 3
#define MFS_ENABLED 0
#define MFS_GRAYED 3
#define MFS_HILITE 128
#define MFS_UNCHECKED 0
#define MFS_UNHILITE 0
#define GW_HWNDNEXT 2
#define GW_HWNDPREV 3
#define GW_CHILD 5
#define GW_HWNDFIRST 0
#define GW_HWNDLAST 1
#define GW_OWNER 4
#define SW_HIDE 0
#define SW_NORMAL 1
#define SW_SHOWNORMAL 1
#define SW_SHOWMINIMIZED 2
#define SW_MAXIMIZE 3
#define SW_SHOWMAXIMIZED 3
#define SW_SHOWNOACTIVATE 4
#define SW_SHOW 5
#define SW_MINIMIZE 6
#define SW_SHOWMINNOACTIVE 7
#define SW_SHOWNA 8
#define SW_RESTORE 9
#define SW_SHOWDEFAULT 10
#define SW_FORCEMINIMIZE 11
#define SW_MAX  11
#define MB_USERICON 128
#define MB_ICONASTERISK 64
#define MB_ICONEXCLAMATION 0x30
#define MB_ICONWARNING 0x30
#define MB_ICONERROR 16
#define MB_ICONHAND 16
#define MB_ICONQUESTION 32
#define MB_OK 0
#define MB_ABORTRETRYIGNORE 2
#define MB_APPLMODAL 0
#define MB_DEFAULT_DESKTOP_ONLY 0x20000
#define MB_HELP 0x4000
#define MB_RIGHT 0x80000
#define MB_RTLREADING 0x100000
#define MB_TOPMOST 0x40000
#define MB_DEFBUTTON1 0
#define MB_DEFBUTTON2 256
#define MB_DEFBUTTON3 512
#define MB_DEFBUTTON4 0x300
#define MB_ICONINFORMATION 64
#define MB_ICONSTOP 16
#define MB_OKCANCEL 1
#define MB_RETRYCANCEL 5
#ifdef _WIN32_WINNT
#if (_WIN32_WINNT >= 0x0400)
#define MB_SERVICE_NOTIFICATION  0x00200000
#else
#define MB_SERVICE_NOTIFICATION  0x00040000
#endif
#define MB_SERVICE_NOTIFICATION_NT3X  0x00040000
#endif
#define MB_SETFOREGROUND 0x10000
#define MB_SYSTEMMODAL 4096
#define MB_TASKMODAL 0x2000
#define MB_YESNO 4
#define MB_YESNOCANCEL 3
#define MB_ICONMASK 240
#define MB_DEFMASK 3840
#define MB_MODEMASK 0x00003000
#define MB_MISCMASK 0x0000C000
#define MB_NOFOCUS 0x00008000
#define MB_TYPEMASK 15
#define MB_TOPMOST 0x40000

#define IDOK 1
#define IDCANCEL 2
#define IDABORT 3
#define IDRETRY 4
#define IDIGNORE 5
#define IDYES 6
#define IDNO 7
#if (WINVER >= 0x0400)
#  define IDCLOSE 8
#  define IDHELP 9
#endif
#if (WINVER >= 0x0500)
#  define IDTRYAGAIN 10
#  define IDCONTINUE 11
#endif

#define GWL_EXSTYLE (-20)
#define GWL_STYLE (-16)
#define GWL_WNDPROC (-4)
#define GWLP_WNDPROC (-4)
#define GWL_HINSTANCE (-6)
#define GWLP_HINSTANCE (-6)
#define GWL_HWNDPARENT (-8)
#define GWLP_HWNDPARENT (-8)
#define GWL_ID (-12)
#define GWLP_ID (-12)
#define GWL_USERDATA (-21)
#define GWLP_USERDATA (-21)
#define DWL_DLGPROC 4
#define DWLP_DLGPROC 4
#define DWL_MSGRESULT 0
#define DWLP_MSGRESULT 0
#define DWL_USER 8
#define DWLP_USER 8
#if (_WIN32_WINNT >= 0x0501)
#define QS_ALLEVENTS 1215
#define QS_ALLINPUT 1279
#else
#define QS_ALLEVENTS 191
#define QS_ALLINPUT 255
#endif
#define QS_ALLPOSTMESSAGE 256
#define QS_HOTKEY 128
#if (_WIN32_WINNT >= 0x0501)
#define QS_INPUT 1031
#else
#define QS_INPUT 7
#endif
#define QS_KEY 1
#define QS_MOUSE 6
#define QS_MOUSEBUTTON 4
#define QS_MOUSEMOVE 2
#define QS_PAINT 32
#define QS_POSTMESSAGE 8
#if (_WIN32_WINNT >= 0x0501)
#define QS_RAWINPUT 1024
#endif
#define QS_SENDMESSAGE 64
#define QS_TIMER 16
#define MWMO_WAITALL 1
#define MWMO_ALERTABLE 2
#define MWMO_INPUTAVAILABLE 4
#define COLOR_3DDKSHADOW 21
#define COLOR_3DFACE 15
#define COLOR_3DHILIGHT 20
#define COLOR_3DHIGHLIGHT 20
#define COLOR_3DLIGHT 22
#define COLOR_BTNHILIGHT 20
#define COLOR_3DSHADOW 16
#define COLOR_ACTIVEBORDER 10
#define COLOR_ACTIVECAPTION 2
#define COLOR_APPWORKSPACE 12
#define COLOR_BACKGROUND 1
#define COLOR_DESKTOP 1
#define COLOR_BTNFACE 15
#define COLOR_BTNHIGHLIGHT 20
#define COLOR_BTNSHADOW 16
#define COLOR_BTNTEXT 18
#define COLOR_CAPTIONTEXT 9
#define COLOR_GRAYTEXT 17
#define COLOR_HIGHLIGHT 13
#define COLOR_HIGHLIGHTTEXT 14
#define COLOR_INACTIVEBORDER 11
#define COLOR_INACTIVECAPTION 3
#define COLOR_INACTIVECAPTIONTEXT 19
#define COLOR_INFOBK 24
#define COLOR_INFOTEXT 23
#define COLOR_MENU 4
#define COLOR_MENUTEXT 7
#define COLOR_SCROLLBAR 0
#define COLOR_WINDOW 5
#define COLOR_WINDOWFRAME 6
#define COLOR_WINDOWTEXT 8
#define CTLCOLOR_MSGBOX 0
#define CTLCOLOR_EDIT 1
#define CTLCOLOR_LISTBOX 2
#define CTLCOLOR_BTN 3
#define CTLCOLOR_DLG 4
#define CTLCOLOR_SCROLLBAR 5
#define CTLCOLOR_STATIC 6
#define CTLCOLOR_MAX 7
#define SM_CXSCREEN 0
#define SM_CYSCREEN 1
#define SM_CXVSCROLL 2
#define SM_CYHSCROLL 3
#define SM_CYCAPTION 4
#define SM_CXBORDER 5
#define SM_CYBORDER 6
#define SM_CXDLGFRAME 7
#define SM_CXFIXEDFRAME 7
#define SM_CYDLGFRAME 8
#define SM_CYFIXEDFRAME 8
#define SM_CYVTHUMB 9
#define SM_CXHTHUMB 10
#define SM_CXICON 11
#define SM_CYICON 12
#define SM_CXCURSOR 13
#define SM_CYCURSOR 14
#define SM_CYMENU 15
#define SM_CXFULLSCREEN 16
#define SM_CYFULLSCREEN 17
#define SM_CYKANJIWINDOW 18
#define SM_MOUSEPRESENT 19
#define SM_CYVSCROLL 20
#define SM_CXHSCROLL 21
#define SM_DEBUG 22
#define SM_SWAPBUTTON 23
#define SM_RESERVED1 24
#define SM_RESERVED2 25
#define SM_RESERVED3 26
#define SM_RESERVED4 27
#define SM_CXMIN 28
#define SM_CYMIN 29
#define SM_CXSIZE 30
#define SM_CYSIZE 31
#define SM_CXSIZEFRAME 32
#define SM_CXFRAME 32
#define SM_CYSIZEFRAME 33
#define SM_CYFRAME 33
#define SM_CXMINTRACK 34
#define SM_CYMINTRACK 35
#define SM_CXDOUBLECLK 36
#define SM_CYDOUBLECLK 37
#define SM_CXICONSPACING 38
#define SM_CYICONSPACING 39
#define SM_MENUDROPALIGNMENT 40
#define SM_PENWINDOWS 41
#define SM_DBCSENABLED 42
#define SM_CMOUSEBUTTONS 43
#define SM_SECURE 44
#define SM_CXEDGE 45
#define SM_CYEDGE 46
#define SM_CXMINSPACING 47
#define SM_CYMINSPACING 48
#define SM_CXSMICON 49
#define SM_CYSMICON 50
#define SM_CYSMCAPTION 51
#define SM_CXSMSIZE 52
#define SM_CYSMSIZE 53
#define SM_CXMENUSIZE 54
#define SM_CYMENUSIZE 55
#define SM_ARRANGE 56
#define SM_CXMINIMIZED 57
#define SM_CYMINIMIZED 58
#define SM_CXMAXTRACK 59
#define SM_CYMAXTRACK 60
#define SM_CXMAXIMIZED 61
#define SM_CYMAXIMIZED 62
#define SM_NETWORK 63
#define LR_DEFAULTSIZE 64
#define SM_CLEANBOOT 67
#define SM_CXDRAG 68
#define SM_CYDRAG 69
#define SM_SHOWSOUNDS 70
#define SM_CXMENUCHECK 71
#define SM_CYMENUCHECK 72
#define SM_SLOWMACHINE 73
#define SM_MIDEASTENABLED 74
#define SM_MOUSEWHEELPRESENT 75
#define SM_XVIRTUALSCREEN 76
#define SM_YVIRTUALSCREEN 77
#define SM_CXVIRTUALSCREEN 78
#define SM_CYVIRTUALSCREEN 79
#define SM_CMONITORS 80
#define SM_SAMEDISPLAYFORMAT 81
#if (_WIN32_WINNT < 0x0400)
#define SM_CMETRICS 76
#else
#define SM_CMETRICS 83
#endif
#define ARW_BOTTOMLEFT 0
#define ARW_BOTTOMRIGHT 1
#define ARW_HIDE 8
#define ARW_TOPLEFT 2
#define ARW_TOPRIGHT 3
#define ARW_DOWN 4
#define ARW_LEFT 0
#define ARW_RIGHT 0
#define ARW_UP 4
#define UOI_FLAGS 1
#define UOI_NAME 2
#define UOI_TYPE 3
#define UOI_USER_SID 4
#define LR_DEFAULTCOLOR 0
#define LR_MONOCHROME 1
#define LR_COLOR 2
#define LR_COPYRETURNORG 4
#define LR_COPYDELETEORG 8
#define LR_LOADFROMFILE 16
#define LR_LOADTRANSPARENT 32
#define LR_LOADREALSIZE 128
#define LR_LOADMAP3DCOLORS 4096
#define LR_CREATEDIBSECTION 8192
#define LR_COPYFROMRESOURCE 0x4000
#define LR_SHARED 32768
#define KEYEVENTF_EXTENDEDKEY 1
#define KEYEVENTF_KEYUP 2
#define OBM_BTNCORNERS 32758
#define OBM_BTSIZE 32761
#define OBM_CHECK 32760
#define OBM_CHECKBOXES 32759
#define OBM_CLOSE 32754
#define OBM_COMBO 32738
#define OBM_DNARROW 32752
#define OBM_DNARROWD 32742
#define OBM_DNARROWI 32736
#define OBM_LFARROW 32750
#define OBM_LFARROWI 32734
#define OBM_LFARROWD 32740
#define OBM_MNARROW 32739
#define OBM_OLD_CLOSE 32767
#define OBM_OLD_DNARROW 32764
#define OBM_OLD_LFARROW 32762
#define OBM_OLD_REDUCE 32757
#define OBM_OLD_RESTORE 32755
#define OBM_OLD_RGARROW 32763
#define OBM_OLD_UPARROW 32765
#define OBM_OLD_ZOOM 32756
#define OBM_REDUCE 32749
#define OBM_REDUCED 32746
#define OBM_RESTORE 32747
#define OBM_RESTORED 32744
#define OBM_RGARROW 32751
#define OBM_RGARROWD 32741
#define OBM_RGARROWI 32735
#define OBM_SIZE 32766
#define OBM_UPARROW 32753
#define OBM_UPARROWD 32743
#define OBM_UPARROWI 32737
#define OBM_ZOOM 32748
#define OBM_ZOOMD 32745
#define OCR_NORMAL 32512
#define OCR_IBEAM 32513
#define OCR_WAIT 32514
#define OCR_CROSS 32515
#define OCR_UP 32516
#define OCR_SIZE 32640
#define OCR_ICON 32641
#define OCR_SIZENWSE 32642
#define OCR_SIZENESW 32643
#define OCR_SIZEWE 32644
#define OCR_SIZENS 32645
#define OCR_SIZEALL 32646
#define OCR_NO 32648
#define OCR_APPSTARTING 32650
#define OIC_SAMPLE 32512
#define OIC_HAND 32513
#define OIC_QUES 32514
#define OIC_BANG 32515
#define OIC_NOTE 32516
#define OIC_WINLOGO 32517
#define OIC_WARNING OIC_BANG
#define OIC_ERROR OIC_HAND
#define OIC_INFORMATION OIC_NOTE
#define HELPINFO_MENUITEM 2
#define HELPINFO_WINDOW 1
#define MSGF_DIALOGBOX 0
#define MSGF_MESSAGEBOX 1
#define MSGF_MENU 2
#define MSGF_MOVE 3
#define MSGF_SIZE 4
#define MSGF_SCROLLBAR 5
#define MSGF_NEXTWINDOW 6
#define MSGF_MAINLOOP 8
#define MSGF_USER 4096
#define MOUSEEVENTF_MOVE 1
#define MOUSEEVENTF_LEFTDOWN 2
#define MOUSEEVENTF_LEFTUP 4
#define MOUSEEVENTF_RIGHTDOWN 8
#define MOUSEEVENTF_RIGHTUP 16
#define MOUSEEVENTF_MIDDLEDOWN 32
#define MOUSEEVENTF_MIDDLEUP 64
#define MOUSEEVENTF_WHEEL 0x0800
#define MOUSEEVENTF_ABSOLUTE 32768
#define PM_NOREMOVE 0
#define PM_REMOVE 1
#define PM_NOYIELD 2
#if (WINVER >= 0x0500)
# define PM_QS_INPUT (QS_INPUT << 16)
# define PM_QS_POSTMESSAGE ((QS_POSTMESSAGE|QS_HOTKEY|QS_TIMER) << 16)
# define PM_QS_PAINT (QS_PAINT << 16)
# define PM_QS_SENDMESSAGE (QS_SENDMESSAGE << 16)
#endif
#define HWND_BROADCAST  ((HWND)0xffff)
#define HWND_BOTTOM ((HWND)1)
#define HWND_NOTOPMOST ((HWND)(-2))
#define HWND_TOP ((HWND)0)
#define HWND_TOPMOST ((HWND)(-1))
#define HWND_DESKTOP (HWND)0
#define HWND_MESSAGE ((HWND)(-3)) /* w2k */
#define RDW_ERASE 4
#define RDW_FRAME 1024
#define RDW_INTERNALPAINT 2
#define RDW_INVALIDATE 1
#define RDW_NOERASE 32
#define RDW_NOFRAME 2048
#define RDW_NOINTERNALPAINT 16
#define RDW_VALIDATE 8
#define RDW_ERASENOW 512
#define RDW_UPDATENOW 256
#define RDW_ALLCHILDREN 128
#define RDW_NOCHILDREN 64
#define SMTO_ABORTIFHUNG 2
#define SMTO_BLOCK 1
#define SMTO_NORMAL 0
#define SIF_ALL 23
#define SIF_PAGE 2
#define SIF_POS 4
#define SIF_RANGE 1
#define SIF_DISABLENOSCROLL 8
#define SIF_TRACKPOS   16
#define SWP_DRAWFRAME 32
#define SWP_FRAMECHANGED 32
#define SWP_HIDEWINDOW 128
#define SWP_NOACTIVATE 16
#define SWP_NOCOPYBITS 256
#define SWP_NOMOVE 2
#define SWP_NOSIZE 1
#define SWP_NOREDRAW 8
#define SWP_NOZORDER 4
#define SWP_SHOWWINDOW 64
#define SWP_NOOWNERZORDER 512
#define SWP_NOREPOSITION 512
#define SWP_NOSENDCHANGING 1024
#define SWP_DEFERERASE 8192
#define SWP_ASYNCWINDOWPOS  16384
#define HSHELL_ACTIVATESHELLWINDOW 3
#define HSHELL_GETMINRECT 5
#define HSHELL_LANGUAGE 8
#define HSHELL_REDRAW 6
#define HSHELL_TASKMAN 7
#define HSHELL_WINDOWACTIVATED 4
#define HSHELL_WINDOWCREATED 1
#define HSHELL_WINDOWDESTROYED 2
#define SPI_GETACCESSTIMEOUT 60
#define SPI_GETACTIVEWINDOWTRACKING 4096
#define SPI_GETACTIVEWNDTRKTIMEOUT 8194
#define SPI_GETACTIVEWNDTRKZORDER 4108
#define SPI_GETANIMATION 72
#define SPI_GETBEEP 1
#define SPI_GETBORDER 5
#define SPI_GETDEFAULTINPUTLANG 89
#define SPI_GETDRAGFULLWINDOWS 38
#define SPI_GETFASTTASKSWITCH 35
#define SPI_GETFILTERKEYS 50
#define SPI_GETFONTSMOOTHING 74
#define SPI_GETGRIDGRANULARITY 18
#define SPI_GETHIGHCONTRAST 66
#define SPI_GETICONMETRICS 45
#define SPI_GETICONTITLELOGFONT 31
#define SPI_GETICONTITLEWRAP 25
#define SPI_GETKEYBOARDDELAY 22
#define SPI_GETKEYBOARDPREF 68
#define SPI_GETKEYBOARDSPEED 10
#define SPI_GETLOWPOWERACTIVE 83
#define SPI_GETLOWPOWERTIMEOUT 79
#define SPI_GETMENUDROPALIGNMENT 27
#define SPI_GETMINIMIZEDMETRICS 43
#define SPI_GETMOUSE 3
#define SPI_GETMOUSEKEYS 54
#define SPI_GETMOUSETRAILS 94
#define SPI_GETNONCLIENTMETRICS 41
#define SPI_GETPOWEROFFACTIVE 84
#define SPI_GETPOWEROFFTIMEOUT 80
#define SPI_GETSCREENREADER 70
#define SPI_GETSCREENSAVEACTIVE 16
#define SPI_GETSCREENSAVETIMEOUT 14
#define SPI_GETSERIALKEYS 62
#define SPI_GETSHOWSOUNDS 56
#define SPI_GETSOUNDSENTRY 64
#define SPI_GETSTICKYKEYS 58
#define SPI_GETTOGGLEKEYS 52
#define SPI_GETWHEELSCROLLLINES 104 
#define SPI_GETWINDOWSEXTENSION 92
#define SPI_GETWORKAREA 48
#define SPI_ICONHORIZONTALSPACING 13
#define SPI_ICONVERTICALSPACING 24
#define SPI_LANGDRIVER 12
#define SPI_SCREENSAVERRUNNING 97
#define SPI_SETACCESSTIMEOUT 61
#define SPI_SETACTIVEWINDOWTRACKING 4097
#define SPI_SETACTIVEWNDTRKTIMEOUT 8195
#define SPI_SETACTIVEWNDTRKZORDER 4109
#define SPI_SETANIMATION 73
#define SPI_SETBEEP 2
#define SPI_SETBORDER 6
#define SPI_SETDEFAULTINPUTLANG 90
#define SPI_SETDESKPATTERN 21
#define SPI_SETDESKWALLPAPER 20
#define SPI_SETDOUBLECLICKTIME 32
#define SPI_SETDOUBLECLKHEIGHT 30
#define SPI_SETDOUBLECLKWIDTH 29
#define SPI_SETDRAGFULLWINDOWS 37
#define SPI_SETDRAGHEIGHT 77
#define SPI_SETDRAGWIDTH 76
#define SPI_SETFASTTASKSWITCH 36
#define SPI_SETFILTERKEYS 51
#define SPI_SETFONTSMOOTHING 75
#define SPI_SETGRIDGRANULARITY 19
#define SPI_SETHANDHELD 78
#define SPI_SETHIGHCONTRAST 67
#define SPI_SETICONMETRICS 46
#define SPI_SETICONTITLELOGFONT 34
#define SPI_SETICONTITLEWRAP 26
#define SPI_SETKEYBOARDDELAY 23
#define SPI_SETKEYBOARDPREF 69
#define SPI_SETKEYBOARDSPEED 11
#define SPI_SETLANGTOGGLE 91
#define SPI_SETLOWPOWERACTIVE 85
#define SPI_SETLOWPOWERTIMEOUT 81
#define SPI_SETMENUDROPALIGNMENT 28
#define SPI_SETMINIMIZEDMETRICS 44
#define SPI_SETMOUSE 4
#define SPI_SETMOUSEBUTTONSWAP 33
#define SPI_SETMOUSEKEYS 55
#define SPI_SETMOUSETRAILS 93
#define SPI_SETNONCLIENTMETRICS 42
#define SPI_SETPENWINDOWS 49
#define SPI_SETPOWEROFFACTIVE 86
#define SPI_SETPOWEROFFTIMEOUT 82
#define SPI_SETSCREENREADER 71
#define SPI_SETSCREENSAVEACTIVE 17
#define SPI_SETSCREENSAVERRUNNING 97
#define SPI_SETSCREENSAVETIMEOUT 15
#define SPI_SETSERIALKEYS 63
#define SPI_SETSHOWSOUNDS 57
#define SPI_SETSOUNDSENTRY 65
#define SPI_SETSTICKYKEYS 59
#define SPI_SETTOGGLEKEYS 53
#define SPI_SETWHEELSCROLLLINES 105
#define SPI_SETWORKAREA 47
#define SPIF_UPDATEINIFILE 1
#define SPIF_SENDWININICHANGE 2
#define SPIF_SENDCHANGE 2
#define ATF_ONOFFFEEDBACK 2
#define ATF_TIMEOUTON 1
#define WM_APP 32768
#define WM_ACTIVATE 6
#define WM_ACTIVATEAPP 28
/* FIXME/CHECK: Are WM_AFX{FIRST,LAST} valid for WINVER < 0x400? */
#define WM_AFXFIRST 864
#define WM_AFXLAST 895
#define WM_ASKCBFORMATNAME 780
#define WM_CANCELJOURNAL 75
#define WM_CANCELMODE 31
#define WM_CAPTURECHANGED 533
#define WM_CHANGECBCHAIN 781
#define WM_CHAR 258
#define WM_CHARTOITEM 47
#define WM_CHILDACTIVATE 34
#define WM_CLEAR 771
#define WM_CLOSE 16
#define WM_COMMAND 273
#define WM_COMMNOTIFY 68		/* obsolete */
#define WM_COMPACTING 65
#define WM_COMPAREITEM 57
#define WM_CONTEXTMENU 123
#define WM_COPY 769
#define WM_COPYDATA 74
#define WM_CREATE 1
#define WM_CTLCOLORBTN 309
#define WM_CTLCOLORDLG 310
#define WM_CTLCOLOREDIT 307
#define WM_CTLCOLORLISTBOX 308
#define WM_CTLCOLORMSGBOX 306
#define WM_CTLCOLORSCROLLBAR 311
#define WM_CTLCOLORSTATIC 312
#define WM_CUT 768
#define WM_DEADCHAR 259
#define WM_DELETEITEM 45
#define WM_DESTROY 2
#define WM_DESTROYCLIPBOARD 775
#define WM_DEVICECHANGE 537
#define WM_DEVMODECHANGE 27
#define WM_DISPLAYCHANGE 126
#define WM_DRAWCLIPBOARD 776
#define WM_DRAWITEM 43
#define WM_DROPFILES 563
#define WM_ENABLE 10
#define WM_ENDSESSION 22
#define WM_ENTERIDLE 289
#define WM_ENTERMENULOOP 529
#define WM_ENTERSIZEMOVE 561
#define WM_ERASEBKGND 20
#define WM_EXITMENULOOP 530
#define WM_EXITSIZEMOVE 562
#define WM_FONTCHANGE 29
#define WM_GETDLGCODE 135
#define WM_GETFONT 49
#define WM_GETHOTKEY 51
#define WM_GETICON 127
#define WM_GETMINMAXINFO 36
#define WM_GETTEXT 13
#define WM_GETTEXTLENGTH 14
/* FIXME/CHECK: Are WM_HANDHEL{FIRST,LAST} valid for WINVER < 0x400? */
#define WM_HANDHELDFIRST 856
#define WM_HANDHELDLAST 863
#define WM_HELP 83
#define WM_HOTKEY 786
#define WM_HSCROLL 276
#define WM_HSCROLLCLIPBOARD 782
#define WM_ICONERASEBKGND 39
#define WM_INITDIALOG 272
#define WM_INITMENU 278
#define WM_INITMENUPOPUP 279
#define WM_INPUTLANGCHANGE 81
#define WM_INPUTLANGCHANGEREQUEST 80
#define WM_KEYDOWN 256
#define WM_KEYUP 257
#define WM_KILLFOCUS 8
#define WM_MDIACTIVATE 546
#define WM_MDICASCADE 551
#define WM_MDICREATE 544
#define WM_MDIDESTROY 545
#define WM_MDIGETACTIVE 553
#define WM_MDIICONARRANGE 552
#define WM_MDIMAXIMIZE 549
#define WM_MDINEXT 548
#define WM_MDIREFRESHMENU 564
#define WM_MDIRESTORE 547
#define WM_MDISETMENU 560
#define WM_MDITILE 550
#define WM_MEASUREITEM 44
#if(WINVER >= 0x0500)
#define WM_MENURBUTTONUP 290
#endif
#define WM_MENUCHAR 288
#define WM_MENUSELECT 287
#define WM_NEXTMENU 531
#define WM_MOVE 3
#define WM_MOVING 534
#define WM_NCACTIVATE 134
#define WM_NCCALCSIZE 131
#define WM_NCCREATE 129
#define WM_NCDESTROY 130
#define WM_NCHITTEST 132
#define WM_NCLBUTTONDBLCLK 163
#define WM_NCLBUTTONDOWN 161
#define WM_NCLBUTTONUP 162
#define WM_NCMBUTTONDBLCLK 169
#define WM_NCMBUTTONDOWN 167
#define WM_NCMBUTTONUP 168
#define WM_NCMOUSEMOVE 160
#define WM_NCPAINT 133
#define WM_NCRBUTTONDBLCLK 166
#define WM_NCRBUTTONDOWN 164
#define WM_NCRBUTTONUP 165
#define WM_NEXTDLGCTL 40
#define WM_NEXTMENU 531
#define WM_NOTIFY 78
#define WM_NOTIFYFORMAT 85
#define WM_NULL 0
#define WM_PAINT 15
#define WM_PAINTCLIPBOARD 777
#define WM_PAINTICON 38
#define WM_PALETTECHANGED 785
#define WM_PALETTEISCHANGING 784
#define WM_PARENTNOTIFY 528
#define WM_PASTE 770
#define WM_PENWINFIRST 896
#define WM_PENWINLAST 911
#define WM_POWER 72
#define WM_POWERBROADCAST 536
#define WM_PRINT 791
#define WM_PRINTCLIENT 792
#define WM_QUERYDRAGICON 55
#define WM_QUERYENDSESSION 17
#define WM_QUERYNEWPALETTE 783
#define WM_QUERYOPEN 19
#define WM_QUEUESYNC 35
#define WM_QUIT 18
#define WM_RENDERALLFORMATS 774
#define WM_RENDERFORMAT 773
#define WM_SETCURSOR 32
#define WM_SETFOCUS 7
#define WM_SETFONT 48
#define WM_SETHOTKEY 50
#define WM_SETICON 128
#define WM_SETREDRAW 11
#define WM_SETTEXT 12
#define WM_SETTINGCHANGE 26
#define WM_SHOWWINDOW 24
#define WM_SIZE 5
#define WM_SIZECLIPBOARD 779
#define WM_SIZING 532
#define WM_SPOOLERSTATUS 42
#define WM_STYLECHANGED 125
#define WM_STYLECHANGING 124
#define WM_SYSCHAR 262
#define WM_SYSCOLORCHANGE 21
#define WM_SYSCOMMAND 274
#define WM_SYSDEADCHAR 263
#define WM_SYSKEYDOWN 260
#define WM_SYSKEYUP 261
#define WM_TCARD 82
#define WM_TIMECHANGE 30
#define WM_TIMER 275
#define WM_UNDO 772
#define WM_USER 1024
#define WM_USERCHANGED 84
#define WM_VKEYTOITEM 46
#define WM_VSCROLL 277
#define WM_VSCROLLCLIPBOARD 778
#define WM_WINDOWPOSCHANGED 71
#define WM_WINDOWPOSCHANGING 70
#define WM_WININICHANGE 26
#define WM_KEYFIRST 256
#define WM_KEYLAST 264
#define WM_SYNCPAINT  136
#define WM_MOUSEACTIVATE 33
#define WM_MOUSEMOVE 512
#define WM_LBUTTONDOWN 513
#define WM_LBUTTONUP 514
#define WM_LBUTTONDBLCLK 515
#define WM_RBUTTONDOWN 516
#define WM_RBUTTONUP 517
#define WM_RBUTTONDBLCLK 518
#define WM_MBUTTONDOWN 519
#define WM_MBUTTONUP 520
#define WM_MBUTTONDBLCLK 521
#define WM_MOUSEWHEEL 522
#define WM_MOUSEFIRST 512
#define WM_MOUSELAST 522
#define WM_MOUSEHOVER	0x2A1
#define WM_MOUSELEAVE	0x2A3
#if(_WIN32_WINNT >= 0x0400)
#define WHEEL_DELTA 120
#define GET_WHEEL_DELTA_WPARAM(wparam) ((short)HIWORD (wparam))
#define WHEEL_PAGESCROLL UINT_MAX
#endif
#define BM_CLICK 245
#define BM_GETCHECK 240
#define BM_GETIMAGE 246
#define BM_GETSTATE 242
#define BM_SETCHECK 241
#define BM_SETIMAGE 247
#define BM_SETSTATE 243
#define BM_SETSTYLE 244
#define BN_CLICKED 0
#define BN_DBLCLK 5
#define BN_DISABLE 4
#define BN_DOUBLECLICKED 5
#define BN_HILITE 2
#define BN_KILLFOCUS 7
#define BN_PAINT 1
#define BN_PUSHED 2
#define BN_SETFOCUS 6
#define BN_UNHILITE 3
#define BN_UNPUSHED 3
#define CB_ADDSTRING 323
#define CB_DELETESTRING 324
#define CB_DIR 325
#define CB_FINDSTRING 332
#define CB_FINDSTRINGEXACT 344
#define CB_GETCOUNT 326
#define CB_GETCURSEL 327
#define CB_GETDROPPEDCONTROLRECT 338
#define CB_GETDROPPEDSTATE 343
#define CB_GETDROPPEDWIDTH 351
#define CB_GETEDITSEL 320
#define CB_GETEXTENDEDUI 342
#define CB_GETHORIZONTALEXTENT 349
#define CB_GETITEMDATA 336
#define CB_GETITEMHEIGHT 340
#define CB_GETLBTEXT 328
#define CB_GETLBTEXTLEN 329
#define CB_GETLOCALE 346
#define CB_GETTOPINDEX 347
#define CB_INITSTORAGE 353
#define CB_INSERTSTRING 330
#define CB_LIMITTEXT 321
#define CB_RESETCONTENT 331
#define CB_SELECTSTRING 333
#define CB_SETCURSEL 334
#define CB_SETDROPPEDWIDTH 352
#define CB_SETEDITSEL 322
#define CB_SETEXTENDEDUI 341
#define CB_SETHORIZONTALEXTENT 350
#define CB_SETITEMDATA 337
#define CB_SETITEMHEIGHT 339
#define CB_SETLOCALE 345
#define CB_SETTOPINDEX 348
#define CB_SHOWDROPDOWN 335
#define CBN_CLOSEUP 8
#define CBN_DBLCLK 2
#define CBN_DROPDOWN 7
#define CBN_EDITCHANGE 5
#define CBN_EDITUPDATE 6
#define CBN_ERRSPACE (-1)
#define CBN_KILLFOCUS 4
#define CBN_SELCHANGE 1
#define CBN_SELENDCANCEL 10
#define CBN_SELENDOK 9
#define CBN_SETFOCUS 3
#define EM_CANUNDO 198
#define EM_CHARFROMPOS 215
#define EM_EMPTYUNDOBUFFER 205
#define EM_FMTLINES 200
#define EM_GETFIRSTVISIBLELINE 206
#define EM_GETHANDLE 189
#define EM_GETLIMITTEXT 213
#define EM_GETLINE 196
#define EM_GETLINECOUNT 186
#define EM_GETMARGINS 212
#define EM_GETMODIFY 184
#define EM_GETPASSWORDCHAR 210
#define EM_GETRECT 178
#define EM_GETSEL 176
#define EM_GETTHUMB 190
#define EM_GETWORDBREAKPROC 209
#define EM_LIMITTEXT 197
#define EM_LINEFROMCHAR 201
#define EM_LINEINDEX 187
#define EM_LINELENGTH 193
#define EM_LINESCROLL 182
#define EM_POSFROMCHAR 214
#define EM_REPLACESEL 194
#define EM_SCROLL 181
#define EM_SCROLLCARET 183
#define EM_SETHANDLE 188
#define EM_SETLIMITTEXT 197
#define EM_SETMARGINS 211
#define EM_SETMODIFY 185
#define EM_SETPASSWORDCHAR 204
#define EM_SETREADONLY 207
#define EM_SETRECT 179
#define EM_SETRECTNP 180
#define EM_SETSEL 177
#define EM_SETTABSTOPS 203
#define EM_SETWORDBREAKPROC 208
#define EM_UNDO 199
#define EN_CHANGE 768
#define EN_ERRSPACE 1280
#define EN_HSCROLL 1537
#define EN_KILLFOCUS 512
#define EN_MAXTEXT 1281
#define EN_SETFOCUS 256
#define EN_UPDATE 1024
#define EN_VSCROLL 1538
#define LB_ADDFILE 406
#define LB_ADDSTRING 384
#define LB_DELETESTRING 386
#define LB_DIR 397
#define LB_FINDSTRING 399
#define LB_FINDSTRINGEXACT 418
#define LB_GETANCHORINDEX 413
#define LB_GETCARETINDEX 415
#define LB_GETCOUNT 395
#define LB_GETCURSEL 392
#define LB_GETHORIZONTALEXTENT 403
#define LB_GETITEMDATA 409
#define LB_GETITEMHEIGHT 417
#define LB_GETITEMRECT 408
#define LB_GETLOCALE 422
#define LB_GETSEL 391
#define LB_GETSELCOUNT 400
#define LB_GETSELITEMS 401
#define LB_GETTEXT 393
#define LB_GETTEXTLEN 394
#define LB_GETTOPINDEX 398
#define LB_INITSTORAGE 424
#define LB_INSERTSTRING 385
#define LB_ITEMFROMPOINT 425
#define LB_RESETCONTENT 388
#define LB_SELECTSTRING 396
#define LB_SELITEMRANGE 411
#define LB_SELITEMRANGEEX 387
#define LB_SETANCHORINDEX 412
#define LB_SETCARETINDEX 414
#define LB_SETCOLUMNWIDTH 405
#define LB_SETCOUNT 423
#define LB_SETCURSEL 390
#define LB_SETHORIZONTALEXTENT 404
#define LB_SETITEMDATA 410
#define LB_SETITEMHEIGHT 416
#define LB_SETLOCALE 421
#define LB_SETSEL 389
#define LB_SETTABSTOPS 402
#define LB_SETTOPINDEX 407
#define LBN_DBLCLK 2
#define LBN_ERRSPACE (-2)
#define LBN_KILLFOCUS 5
#define LBN_SELCANCEL 3
#define LBN_SELCHANGE 1
#define LBN_SETFOCUS 4
#define SBM_ENABLE_ARROWS 228
#define SBM_GETPOS 225
#define SBM_GETRANGE 227
#define SBM_GETSCROLLINFO 234
#define SBM_SETPOS 224
#define SBM_SETRANGE 226
#define SBM_SETRANGEREDRAW 230
#define SBM_SETSCROLLINFO 233
#define STM_GETICON 369
#define STM_GETIMAGE 371
#define STM_SETICON 368
#define STM_SETIMAGE 370
#define STN_CLICKED 0
#define STN_DBLCLK 1
#define STN_DISABLE 3
#define STN_ENABLE 2
#define DM_GETDEFID WM_USER
#define DM_SETDEFID (WM_USER+1)
#define DM_REPOSITION (WM_USER+2)
#define PSM_PAGEINFO (WM_USER+100)
#define PSM_SHEETINFO (WM_USER+101)
#define PSI_SETACTIVE 1
#define PSI_KILLACTIVE 2
#define PSI_APPLY 3
#define PSI_RESET 4
#define PSI_HASHELP 5
#define PSI_HELP 6
#define PSI_CHANGED 1
#define PSI_GUISTART 2
#define PSI_REBOOT 3
#define PSI_GETSIBLINGS 4
#define DCX_WINDOW 1
#define DCX_CACHE 2
#define DCX_PARENTCLIP 32
#define DCX_CLIPSIBLINGS 16
#define DCX_CLIPCHILDREN 8
#define DCX_NORESETATTRS 4
#define DCX_LOCKWINDOWUPDATE 0x400
#define DCX_EXCLUDERGN 64
#define DCX_INTERSECTRGN 128
#define DCX_VALIDATE 0x200000
#define GMDI_GOINTOPOPUPS 2
#define GMDI_USEDISABLED 1
#define FKF_AVAILABLE 2
#define FKF_CLICKON 64
#define FKF_FILTERKEYSON 1
#define FKF_HOTKEYACTIVE 4
#define FKF_HOTKEYSOUND 16
#define FKF_CONFIRMHOTKEY 8
#define FKF_INDICATOR 32
#define HCF_HIGHCONTRASTON 1
#define HCF_AVAILABLE 2
#define HCF_HOTKEYACTIVE 4
#define HCF_CONFIRMHOTKEY 8
#define HCF_HOTKEYSOUND 16
#define HCF_INDICATOR 32
#define HCF_HOTKEYAVAILABLE 64
#define MKF_AVAILABLE 2
#define MKF_CONFIRMHOTKEY 8
#define MKF_HOTKEYACTIVE 4
#define MKF_HOTKEYSOUND 16
#define MKF_INDICATOR 32
#define MKF_MOUSEKEYSON 1
#define MKF_MODIFIERS 64
#define MKF_REPLACENUMBERS 128
#define SERKF_ACTIVE 8 /* May be obsolete. Not in recent MS docs. */
#define SERKF_AVAILABLE 2
#define SERKF_INDICATOR 4
#define SERKF_SERIALKEYSON 1
#define SSF_AVAILABLE 2
#define SSF_SOUNDSENTRYON 1
#define SSTF_BORDER 2
#define SSTF_CHARS 1
#define SSTF_DISPLAY 3
#define SSTF_NONE 0
#define SSGF_DISPLAY 3
#define SSGF_NONE 0
#define SSWF_CUSTOM 4
#define SSWF_DISPLAY 3
#define SSWF_NONE 0
#define SSWF_TITLE 1
#define SSWF_WINDOW 2
#define SKF_AUDIBLEFEEDBACK 64
#define SKF_AVAILABLE 2
#define SKF_CONFIRMHOTKEY 8
#define SKF_HOTKEYACTIVE 4
#define SKF_HOTKEYSOUND 16
#define SKF_INDICATOR 32
#define SKF_STICKYKEYSON 1
#define SKF_TRISTATE 128
#define SKF_TWOKEYSOFF 256
#define TKF_AVAILABLE 2
#define TKF_CONFIRMHOTKEY 8
#define TKF_HOTKEYACTIVE 4
#define TKF_HOTKEYSOUND 16
#define TKF_TOGGLEKEYSON 1
#define MDITILE_SKIPDISABLED 2
#define MDITILE_HORIZONTAL 1
#define MDITILE_VERTICAL 0
#define VK_LBUTTON	1
#define VK_RBUTTON	2
#define VK_CANCEL	3
#define VK_MBUTTON	4
#if (_WIN32_WINNT >= 0x0500)
#define VK_XBUTTON1	5
#define VK_XBUTTON2	6
#endif
#define VK_BACK	8
#define VK_TAB	9
#define VK_CLEAR	12
#define VK_RETURN	13
#define VK_SHIFT	16
#define VK_CONTROL	17
#define VK_MENU	18
#define VK_PAUSE	19
#define VK_CAPITAL	20
#define VK_KANA	0x15
#define VK_HANGEUL	0x15
#define VK_HANGUL	0x15
#define VK_JUNJA	0x17
#define VK_FINAL	0x18
#define VK_HANJA	0x19
#define VK_KANJI	0x19
#define VK_ESCAPE	0x1B
#define VK_CONVERT	0x1C
#define VK_NONCONVERT	0x1D
#define VK_ACCEPT	0x1E
#define VK_MODECHANGE	0x1F
#define VK_SPACE	32
#define VK_PRIOR	33
#define VK_NEXT	34
#define VK_END	35
#define VK_HOME	36
#define VK_LEFT	37
#define VK_UP	38
#define VK_RIGHT	39
#define VK_DOWN	40
#define VK_SELECT	41
#define VK_PRINT	42
#define VK_EXECUTE	43
#define VK_SNAPSHOT	44
#define VK_INSERT	45
#define VK_DELETE	46
#define VK_HELP	47
#define VK_LWIN	0x5B
#define VK_RWIN	0x5C
#define VK_APPS	0x5D
#define VK_SLEEP	0x5F
#define VK_NUMPAD0	0x60
#define VK_NUMPAD1	0x61
#define VK_NUMPAD2	0x62
#define VK_NUMPAD3	0x63
#define VK_NUMPAD4	0x64
#define VK_NUMPAD5	0x65
#define VK_NUMPAD6	0x66
#define VK_NUMPAD7	0x67
#define VK_NUMPAD8	0x68
#define VK_NUMPAD9	0x69
#define VK_MULTIPLY	0x6A
#define VK_ADD	0x6B
#define VK_SEPARATOR	0x6C
#define VK_SUBTRACT	0x6D
#define VK_DECIMAL	0x6E
#define VK_DIVIDE	0x6F
#define VK_F1	0x70
#define VK_F2	0x71
#define VK_F3	0x72
#define VK_F4	0x73
#define VK_F5	0x74
#define VK_F6	0x75
#define VK_F7	0x76
#define VK_F8	0x77
#define VK_F9	0x78
#define VK_F10	0x79
#define VK_F11	0x7A
#define VK_F12	0x7B
#define VK_F13	0x7C
#define VK_F14	0x7D
#define VK_F15	0x7E
#define VK_F16	0x7F
#define VK_F17	0x80
#define VK_F18	0x81
#define VK_F19	0x82
#define VK_F20	0x83
#define VK_F21	0x84
#define VK_F22	0x85
#define VK_F23	0x86
#define VK_F24	0x87
#define VK_NUMLOCK	0x90
#define VK_SCROLL	0x91
#define VK_LSHIFT	0xA0
#define VK_RSHIFT	0xA1
#define VK_LCONTROL	0xA2
#define VK_RCONTROL	0xA3
#define VK_LMENU	0xA4
#define VK_RMENU	0xA5
#if (_WIN32_WINNT >= 0x0500)
#define VK_BROWSER_BACK	0xA6
#define VK_BROWSER_FORWARD	0xA7
#define VK_BROWSER_REFRESH	0xA8
#define VK_BROWSER_STOP	0xA9
#define VK_BROWSER_SEARCH	0xAA
#define VK_BROWSER_FAVORITES	0xAB
#define VK_BROWSER_HOME	0xAC
#define VK_VOLUME_MUTE	0xAD
#define VK_VOLUME_DOWN	0xAE
#define VK_VOLUME_UP	0xAF
#define VK_MEDIA_NEXT_TRACK	0xB0
#define VK_MEDIA_PREV_TRACK	0xB1
#define VK_MEDIA_STOP	0xB2
#define VK_MEDIA_PLAY_PAUSE	0xB3
#define VK_LAUNCH_MAIL	0xB4
#define VK_LAUNCH_MEDIA_SELECT	0xB5
#define VK_LAUNCH_APP1	0xB6
#define VK_LAUNCH_APP2	0xB7
#endif
#define VK_OEM_1	0xBA
#if (_WIN32_WINNT >= 0x0500)
#define VK_OEM_PLUS	0xBB
#define VK_OEM_COMMA	0xBC
#define VK_OEM_MINUS	0xBD
#define VK_OEM_PERIOD	0xBE
#endif
#define VK_OEM_2	0xBF
#define VK_OEM_3	0xC0
#define VK_OEM_4	0xDB
#define VK_OEM_5	0xDC
#define VK_OEM_6	0xDD
#define VK_OEM_7	0xDE
#define VK_OEM_8	0xDF
#if (_WIN32_WINNT >= 0x0500)
#define VK_OEM_102	0xE2
#endif
#define VK_PROCESSKEY	0xE5
#if (_WIN32_WINNT >= 0x0500)
#define VK_PACKET	0xE7
#endif
#define VK_ATTN	0xF6
#define VK_CRSEL	0xF7
#define VK_EXSEL	0xF8
#define VK_EREOF	0xF9
#define VK_PLAY	0xFA
#define VK_ZOOM	0xFB
#define VK_NONAME	0xFC
#define VK_PA1	0xFD
#define VK_OEM_CLEAR	0xFE
#define TME_HOVER	1
#define TME_LEAVE	2
#define TME_QUERY	0x40000000
#define TME_CANCEL	0x80000000
#define HOVER_DEFAULT	0xFFFFFFFF
#define MK_LBUTTON	1
#define MK_RBUTTON	2
#define MK_SHIFT	4
#define MK_CONTROL	8
#define MK_MBUTTON	16
#define TPM_CENTERALIGN 4
#define TPM_LEFTALIGN 0
#define TPM_RIGHTALIGN 8
#define TPM_LEFTBUTTON 0
#define TPM_RIGHTBUTTON 2
#define TPM_HORIZONTAL 0
#define TPM_VERTICAL 64
#define TPM_TOPALIGN 0
#define TPM_VCENTERALIGN 16
#define TPM_BOTTOMALIGN 32
#define TPM_NONOTIFY 128
#define TPM_RETURNCMD 256
#if (_WIN32_WINNT >= _NT5 || _WIN32_WINDOWS >= _W98)
#define TPM_RECURSE 1
#endif
#define HELP_COMMAND 0x102
#define HELP_CONTENTS 3
#define HELP_CONTEXT 1
#define HELP_CONTEXTPOPUP 8
#define HELP_FORCEFILE 9
#define HELP_HELPONHELP 4
#define HELP_INDEX 3
#define HELP_KEY 0x101
#define HELP_MULTIKEY 0x201
#define HELP_PARTIALKEY 0x105
#define HELP_QUIT 2
#define HELP_SETCONTENTS 5
#define HELP_SETINDEX 5
#define HELP_CONTEXTMENU 0xa
#define HELP_FINDER 0xb
#define HELP_WM_HELP 0xc
#define HELP_TCARD 0x8000
#define HELP_TCARD_DATA 16
#define HELP_TCARD_OTHER_CALLER 0x11
#define IDH_NO_HELP	28440
#define IDH_MISSING_CONTEXT	28441
#define IDH_GENERIC_HELP_BUTTON	28442
#define IDH_OK	28443
#define IDH_CANCEL	28444
#define IDH_HELP	28445
#define LB_CTLCODE 0
#define LB_OKAY 0
#define LB_ERR (-1)
#define LB_ERRSPACE (-2)
#define CB_OKAY 0
#define CB_ERR (-1)
#define CB_ERRSPACE (-2)
#define HIDE_WINDOW 0
#define SHOW_OPENWINDOW 1
#define SHOW_ICONWINDOW 2
#define SHOW_FULLSCREEN 3
#define SHOW_OPENNOACTIVATE 4
#define SW_PARENTCLOSING 1
#define SW_OTHERZOOM 2
#define SW_PARENTOPENING 3
#define SW_OTHERUNZOOM 4
#define KF_EXTENDED 256
#define KF_DLGMODE 2048
#define KF_MENUMODE 4096
#define KF_ALTDOWN 8192
#define KF_REPEAT 16384
#define KF_UP 32768
#define WSF_VISIBLE 1
#define PWR_OK 1
#define PWR_FAIL (-1)
#define PWR_SUSPENDREQUEST 1
#define PWR_SUSPENDRESUME 2
#define PWR_CRITICALRESUME 3
#define NFR_ANSI 1
#define NFR_UNICODE 2
#define NF_QUERY 3
#define NF_REQUERY 4
#define MENULOOP_WINDOW 0
#define MENULOOP_POPUP 1
#define WMSZ_LEFT 1
#define WMSZ_RIGHT 2
#define WMSZ_TOP 3
#define WMSZ_TOPLEFT 4
#define WMSZ_TOPRIGHT 5
#define WMSZ_BOTTOM 6
#define WMSZ_BOTTOMLEFT 7
#define WMSZ_BOTTOMRIGHT 8
#define HTERROR (-2)
#define HTTRANSPARENT (-1)
#define HTNOWHERE 0
#define HTCLIENT 1
#define HTCAPTION 2
#define HTSYSMENU 3
#define HTGROWBOX 4
#define HTSIZE 4
#define HTMENU 5
#define HTHSCROLL 6
#define HTVSCROLL 7
#define HTMINBUTTON 8
#define HTMAXBUTTON 9
#define HTREDUCE 8
#define HTZOOM 9
#define HTLEFT 10
#define HTSIZEFIRST 10
#define HTRIGHT 11
#define HTTOP 12
#define HTTOPLEFT 13
#define HTTOPRIGHT 14
#define HTBOTTOM 15
#define HTBOTTOMLEFT 16
#define HTBOTTOMRIGHT 17
#define HTSIZELAST 17
#define HTBORDER 18
#define HTOBJECT 19
#define HTCLOSE 20
#define HTHELP 21
#define MA_ACTIVATE 1
#define MA_ACTIVATEANDEAT 2
#define MA_NOACTIVATE 3
#define MA_NOACTIVATEANDEAT 4
#define SIZE_RESTORED 0
#define SIZE_MINIMIZED 1
#define SIZE_MAXIMIZED 2
#define SIZE_MAXSHOW 3
#define SIZE_MAXHIDE 4
#define SIZENORMAL 0
#define SIZEICONIC 1
#define SIZEFULLSCREEN 2
#define SIZEZOOMSHOW 3
#define SIZEZOOMHIDE 4
#define WVR_ALIGNTOP 16
#define WVR_ALIGNLEFT 32
#define WVR_ALIGNBOTTOM 64
#define WVR_ALIGNRIGHT 128
#define WVR_HREDRAW 256
#define WVR_VREDRAW 512
#define WVR_REDRAW (WVR_HREDRAW|WVR_VREDRAW)
#define WVR_VALIDRECTS 1024
#define PRF_CHECKVISIBLE 1
#define PRF_NONCLIENT 2
#define PRF_CLIENT 4
#define PRF_ERASEBKGND 8
#define PRF_CHILDREN 16
#define PRF_OWNED 32
#define IDANI_OPEN 1
#define IDANI_CLOSE 2
#define IDANI_CAPTION 3
#define WPF_RESTORETOMAXIMIZED 2
#define WPF_SETMINPOSITION 1
#define ODT_MENU 1
#define ODT_LISTBOX 2
#define ODT_COMBOBOX 3
#define ODT_BUTTON 4
#define ODT_STATIC 5
#define ODA_DRAWENTIRE 1
#define ODA_SELECT 2
#define ODA_FOCUS 4
#define ODS_SELECTED 1
#define ODS_GRAYED 2
#define ODS_DISABLED 4
#define ODS_CHECKED 8
#define ODS_FOCUS 16
#define ODS_DEFAULT 32
#define ODS_COMBOBOXEDIT 4096
#define IDHOT_SNAPWINDOW (-1)
#define IDHOT_SNAPDESKTOP (-2)
#define DBWF_LPARAMPOINTER 0x8000
#define DLGWINDOWEXTRA 30
#define MNC_IGNORE 0
#define MNC_CLOSE 1
#define MNC_EXECUTE 2
#define MNC_SELECT 3
#define DOF_EXECUTABLE 0x8001
#define DOF_DOCUMENT 0x8002
#define DOF_DIRECTORY 0x8003
#define DOF_MULTIPLE 0x8004
#define DOF_PROGMAN 1
#define DOF_SHELLDATA 2
#define DO_DROPFILE 0x454C4946
#define DO_PRINTFILE 0x544E5250
#define SW_SCROLLCHILDREN 1
#define SW_INVALIDATE 2
#define SW_ERASE 4
#define SC_SIZE 0xF000
#define SC_MOVE 0xF010
#define SC_MINIMIZE 0xF020
#define SC_ICON 0xf020
#define SC_MAXIMIZE 0xF030
#define SC_ZOOM 0xF030
#define SC_NEXTWINDOW 0xF040
#define SC_PREVWINDOW 0xF050
#define SC_CLOSE 0xF060
#define SC_VSCROLL 0xF070
#define SC_HSCROLL 0xF080
#define SC_MOUSEMENU 0xF090
#define SC_KEYMENU 0xF100
#define SC_ARRANGE 0xF110
#define SC_RESTORE 0xF120
#define SC_TASKLIST 0xF130
#define SC_SCREENSAVE 0xF140
#define SC_HOTKEY 0xF150
#define SC_DEFAULT 0xF160
#define SC_MONITORPOWER 0xF170
#define SC_CONTEXTHELP 0xF180
#define SC_SEPARATOR 0xF00F
#define EC_LEFTMARGIN 1
#define EC_RIGHTMARGIN 2
#define EC_USEFONTINFO 0xffff
#define DC_HASDEFID 0x534B
#define DLGC_WANTARROWS 1
#define DLGC_WANTTAB 2
#define DLGC_WANTALLKEYS 4
#define DLGC_WANTMESSAGE 4
#define DLGC_HASSETSEL 8
#define DLGC_DEFPUSHBUTTON 16
#define DLGC_UNDEFPUSHBUTTON 32
#define DLGC_RADIOBUTTON 64
#define DLGC_WANTCHARS 128
#define DLGC_STATIC 256
#define DLGC_BUTTON 0x2000
#define LB_CTLCODE 0
#define WA_INACTIVE 0
#define WA_ACTIVE 1
#define WA_CLICKACTIVE 2
#define ICON_SMALL 0
#define ICON_BIG 1
#if _WIN32_WINNT >= 0x0501
#define ICON_SMALL2 2
#endif
#define HBMMENU_CALLBACK ((HBITMAP) -1)
#define HBMMENU_SYSTEM ((HBITMAP)1)
#define HBMMENU_MBAR_RESTORE ((HBITMAP)2)
#define HBMMENU_MBAR_MINIMIZE ((HBITMAP)3)
#define HBMMENU_MBAR_CLOSE ((HBITMAP)5)
#define HBMMENU_MBAR_CLOSE_D ((HBITMAP)6)
#define HBMMENU_MBAR_MINIMIZE_D ((HBITMAP)7)
#define HBMMENU_POPUP_CLOSE ((HBITMAP)8)
#define HBMMENU_POPUP_RESTORE ((HBITMAP)9)
#define HBMMENU_POPUP_MAXIMIZE ((HBITMAP)10)
#define HBMMENU_POPUP_MINIMIZE ((HBITMAP)11)
#define MOD_ALT 1
#define MOD_CONTROL 2
#define MOD_SHIFT 4
#define MOD_WIN 8
#define MOD_IGNORE_ALL_MODIFIER 1024
#define MOD_ON_KEYUP  2048
#define MOD_RIGHT 16384
#define MOD_LEFT 32768
#define LLKHF_ALTDOWN  0x00000020
#if(WINVER >= 0x0500)
#define FLASHW_STOP 0
#define FLASHW_CAPTION 1
#define FLASHW_TRAY 2
#define FLASHW_ALL (FLASHW_CAPTION | FLASHW_TRAY)
#define FLASHW_TIMER 4
#define FLASHW_TIMERNOFG 12
#endif /* (WINVER >= 0x0500) */
#define INPUT_MOUSE 0
#define INPUT_KEYBOARD 1
#define INPUT_HARDWARE 2
#define CURSOR_SHOWING 0x00000001
#if(WINVER >= 0x0400)
#define ENDSESSION_LOGOFF    0x80000000
#endif /* WINVER >= 0x0400 */
#if (_WIN32_WINNT >= _NT5 || _WIN32_WINDOWS >= _WME)
#define ASFW_ANY ((DWORD)-1)
#define LSFW_LOCK 1
#define LSFW_UNLOCK 2
#endif
#if(_WIN32_WINNT >= _NT5)
#define LWA_COLORKEY 1
#define LWA_ALPHA 2
#endif
#define GA_PARENT 1
#define GA_ROOT 2
#define GA_ROOTOWNER 3
#if (_WIN32_WINNT >= _NT5 || _WIN32_WINDOWS >= _W98)
#define MONITOR_DEFAULTTONULL 0 
#define MONITOR_DEFAULTTOPRIMARY 1 
#define MONITOR_DEFAULTTONEAREST 2 
#define MONITORINFOF_PRIMARY 1 
#endif

#ifndef RC_INVOKED
typedef BOOL(CALLBACK *DLGPROC)(HWND,UINT,WPARAM,LPARAM);
typedef VOID(CALLBACK *TIMERPROC)(HWND,UINT,UINT,DWORD);
typedef BOOL(CALLBACK *GRAYSTRINGPROC)(HDC,LPARAM,int);
typedef LRESULT(CALLBACK *HOOKPROC)(int,WPARAM,LPARAM);
typedef BOOL(CALLBACK *PROPENUMPROCA)(HWND,LPCSTR,HANDLE);
typedef BOOL(CALLBACK *PROPENUMPROCW)(HWND,LPCWSTR,HANDLE);
typedef BOOL(CALLBACK *PROPENUMPROCEXA)(HWND,LPSTR,HANDLE,DWORD);
typedef BOOL(CALLBACK *PROPENUMPROCEXW)(HWND,LPWSTR,HANDLE,DWORD);
typedef int(CALLBACK *EDITWORDBREAKPROCA)(LPSTR,int,int,int);
typedef int(CALLBACK *EDITWORDBREAKPROCW)(LPWSTR,int,int,int);
typedef LRESULT(CALLBACK *WNDPROC)(HWND,UINT,WPARAM,LPARAM);
typedef BOOL(CALLBACK *DRAWSTATEPROC)(HDC,LPARAM,WPARAM,int,int);
typedef BOOL(CALLBACK *WNDENUMPROC)(HWND,LPARAM);
typedef BOOL(CALLBACK *ENUMWINDOWSPROC)(HWND,LPARAM);
typedef BOOL(CALLBACK* MONITORENUMPROC)(HMONITOR,HDC,LPRECT,LPARAM);
typedef BOOL(CALLBACK *NAMEENUMPROCA)(LPSTR,LPARAM);
typedef BOOL(CALLBACK *NAMEENUMPROCW)(LPWSTR,LPARAM);
typedef NAMEENUMPROCA DESKTOPENUMPROCA;
typedef NAMEENUMPROCW DESKTOPENUMPROCW;
typedef NAMEENUMPROCA WINSTAENUMPROCA;
typedef NAMEENUMPROCW WINSTAENUMPROCW;
typedef void(CALLBACK *SENDASYNCPROC)(HWND,UINT,DWORD,LRESULT);
DECLARE_HANDLE(HHOOK);
DECLARE_HANDLE(HDWP);
DECLARE_HANDLE(HDEVNOTIFY);
typedef struct tagACCEL {
	BYTE fVirt;
	WORD key;
	WORD cmd;
} ACCEL,*LPACCEL;
typedef struct tagACCESSTIMEOUT {
	UINT cbSize;
	DWORD dwFlags;
	DWORD iTimeOutMSec;
} ACCESSTIMEOUT, *LPACCESSTIMEOUT;
typedef struct tagANIMATIONINFO {
	UINT cbSize;
	int iMinAnimate;
} ANIMATIONINFO,*LPANIMATIONINFO;
typedef struct tagCREATESTRUCTA {
	LPVOID	lpCreateParams;
	HINSTANCE	hInstance;
	HMENU	hMenu;
	HWND	hwndParent;
	int	cy;
	int	cx;
	int	y;
	int	x;
	LONG	style;
	LPCSTR	lpszName;
	LPCSTR	lpszClass;
	DWORD	dwExStyle;
} CREATESTRUCTA,*LPCREATESTRUCTA;
typedef struct tagCREATESTRUCTW {
	LPVOID	lpCreateParams;
	HINSTANCE	hInstance;
	HMENU	hMenu;
	HWND	hwndParent;
	int	cy;
	int	cx;
	int	y;
	int	x;
	LONG	style;
	LPCWSTR	lpszName;
	LPCWSTR	lpszClass;
	DWORD	dwExStyle;
} CREATESTRUCTW,*LPCREATESTRUCTW;
typedef struct tagCBT_CREATEWNDA {
	LPCREATESTRUCTA lpcs;
	HWND	hwndInsertAfter;
} CBT_CREATEWNDA, *LPCBT_CREATEWNDA;
typedef struct tagCBT_CREATEWNDW {
	LPCREATESTRUCTW lpcs;
	HWND	hwndInsertAfter;
} CBT_CREATEWNDW, *LPCBT_CREATEWNDW;
typedef struct tagCBTACTIVATESTRUCT {
	BOOL fMouse;
	HWND hWndActive;
} CBTACTIVATESTRUCT,*LPCBTACTIVATESTRUCT;
typedef struct tagCLIENTCREATESTRUCT {
	HANDLE	hWindowMenu;
	UINT	idFirstChild;
} CLIENTCREATESTRUCT,*LPCLIENTCREATESTRUCT;
typedef struct tagCOMPAREITEMSTRUCT {
	UINT	CtlType;
	UINT	CtlID;
	HWND	hwndItem;
	UINT	itemID1;
	DWORD	itemData1;
	UINT	itemID2;
	DWORD	itemData2;
	DWORD	dwLocaleId;
} COMPAREITEMSTRUCT,*LPCOMPAREITEMSTRUCT;
typedef struct tagCOPYDATASTRUCT {
	DWORD dwData;
	DWORD cbData;
	PVOID lpData;
} COPYDATASTRUCT,*PCOPYDATASTRUCT;
typedef struct tagCURSORSHAPE {
	int xHotSpot;
	int yHotSpot;
	int cx;
	int cy;
	int cbWidth;
    BYTE Planes;
    BYTE BitsPixel;
} CURSORSHAPE,*LPCURSORSHAPE;
typedef struct tagCWPRETSTRUCT {
	LRESULT lResult;
	LPARAM lParam;
	WPARAM wParam;
	DWORD message;
	HWND hwnd;
} CWPRETSTRUCT;
typedef struct tagCWPSTRUCT {
	LPARAM lParam;
	WPARAM wParam;
	UINT message;
	HWND hwnd;
} CWPSTRUCT,*PCWPSTRUCT;
typedef struct tagDEBUGHOOKINFO {
	DWORD idThread;
	DWORD idThreadInstaller;
	LPARAM lParam;
	WPARAM wParam;
	int code;
} DEBUGHOOKINFO,*PDEBUGHOOKINFO,*LPDEBUGHOOKINFO;
typedef struct tagDELETEITEMSTRUCT {
	UINT CtlType;
	UINT CtlID;
	UINT itemID;
	HWND hwndItem;
	UINT itemData;
} DELETEITEMSTRUCT,*PDELETEITEMSTRUCT,*LPDELETEITEMSTRUCT;
#pragma pack(push,2)
typedef struct {
	DWORD style;
	DWORD dwExtendedStyle;
	short x;
	short y;
	short cx;
	short cy;
	WORD id;
} DLGITEMTEMPLATE,*LPDLGITEMTEMPLATE;
typedef struct {
	DWORD style;
	DWORD dwExtendedStyle;
	WORD cdit;
	short x;
	short y;
	short cx;
	short cy;
} DLGTEMPLATE,*LPDLGTEMPLATE,*LPDLGTEMPLATEA,*LPDLGTEMPLATEW;
typedef const DLGTEMPLATE *LPCDLGTEMPLATE;
#pragma pack(pop)
typedef struct tagDRAWITEMSTRUCT {
	UINT CtlType;
	UINT CtlID;
	UINT itemID;
	UINT itemAction;
	UINT itemState;
	HWND hwndItem;
	HDC	hDC;
	RECT rcItem;
	DWORD itemData;
} DRAWITEMSTRUCT,*LPDRAWITEMSTRUCT,*PDRAWITEMSTRUCT;
typedef struct {
	UINT cbSize;
	int iTabLength;
	int iLeftMargin;
	int iRightMargin;
	UINT uiLengthDrawn;
} DRAWTEXTPARAMS,*LPDRAWTEXTPARAMS;
typedef struct tagPAINTSTRUCT {
	HDC	hdc;
	BOOL fErase;
	RECT rcPaint;
	BOOL fRestore;
	BOOL fIncUpdate;
	BYTE rgbReserved[32];
} PAINTSTRUCT,*LPPAINTSTRUCT;
typedef struct tagMSG {
	HWND hwnd;
	UINT message;
	WPARAM wParam;
	LPARAM lParam;
	DWORD time;
	POINT pt;
} MSG,*LPMSG,*PMSG;
typedef struct _ICONINFO {
	BOOL fIcon;
	DWORD xHotspot;
	DWORD yHotspot;
	HBITMAP hbmMask;
	HBITMAP hbmColor;
} ICONINFO,*PICONINFO;
typedef struct tagNMHDR {
	HWND hwndFrom;
	UINT idFrom;
	UINT code;
} NMHDR,*LPNMHDR;
typedef struct _WNDCLASSA {
	UINT style;
	WNDPROC lpfnWndProc;
	int cbClsExtra;
	int cbWndExtra;
	HINSTANCE hInstance;
	HICON hIcon;
	HCURSOR hCursor;
	HBRUSH hbrBackground;
	LPCSTR lpszMenuName;
	LPCSTR lpszClassName;
} WNDCLASSA,*LPWNDCLASSA,*PWNDCLASSA;
typedef struct _WNDCLASSW {
	UINT style;
	WNDPROC lpfnWndProc;
	int cbClsExtra;
	int cbWndExtra;
	HINSTANCE hInstance;
	HICON hIcon;
	HCURSOR hCursor;
	HBRUSH hbrBackground;
	LPCWSTR lpszMenuName;
	LPCWSTR lpszClassName;
} WNDCLASSW,*LPWNDCLASSW,*PWNDCLASSW;
typedef struct _WNDCLASSEXA {
	UINT cbSize;
	UINT style;
	WNDPROC lpfnWndProc;
	int cbClsExtra;
	int cbWndExtra;
	HINSTANCE hInstance;
	HICON hIcon;
	HCURSOR hCursor;
	HBRUSH hbrBackground;
	LPCSTR lpszMenuName;
	LPCSTR lpszClassName;
	HICON hIconSm;
} WNDCLASSEXA,*LPWNDCLASSEXA,*PWNDCLASSEXA;
typedef struct _WNDCLASSEXW {
	UINT cbSize;
	UINT style;
	WNDPROC lpfnWndProc;
	int cbClsExtra;
	int cbWndExtra;
	HINSTANCE hInstance;
	HICON hIcon;
	HCURSOR hCursor;
	HBRUSH hbrBackground;
	LPCWSTR lpszMenuName;
	LPCWSTR lpszClassName;
	HICON hIconSm;
} WNDCLASSEXW,*LPWNDCLASSEXW,*PWNDCLASSEXW;
typedef struct tagMENUITEMINFOA {
	UINT cbSize;
	UINT fMask;
	UINT fType;
	UINT fState;
	UINT wID;
	HMENU hSubMenu;
	HBITMAP hbmpChecked;
	HBITMAP hbmpUnchecked;
	DWORD dwItemData;
	LPSTR dwTypeData;
	UINT cch;
#if (_WIN32_WINNT >= 0x0500)
	HBITMAP hbmpItem;
#endif
} MENUITEMINFOA,*LPMENUITEMINFOA;
typedef const MENUITEMINFOA *LPCMENUITEMINFOA;
typedef struct tagMENUITEMINFOW {
	UINT cbSize;
	UINT fMask;
	UINT fType;
	UINT fState;
	UINT wID;
	HMENU hSubMenu;
	HBITMAP hbmpChecked;
	HBITMAP hbmpUnchecked;
	DWORD dwItemData;
	LPWSTR dwTypeData;
	UINT cch;
#if (_WIN32_WINNT >= 0x0500)
	HBITMAP hbmpItem;
#endif
} MENUITEMINFOW,*LPMENUITEMINFOW;
typedef const MENUITEMINFOW *LPCMENUITEMINFOW;
typedef struct tagSCROLLINFO {
	UINT cbSize;
	UINT fMask;
	int nMin;
	int nMax;
	UINT nPage;
	int nPos;
	int nTrackPos;
} SCROLLINFO,*LPSCROLLINFO;
typedef const SCROLLINFO *LPCSCROLLINFO;
typedef struct _WINDOWPLACEMENT {
	UINT length;
	UINT flags;
	UINT showCmd;
	POINT ptMinPosition;
	POINT ptMaxPosition;
	RECT rcNormalPosition;
} WINDOWPLACEMENT,*LPWINDOWPLACEMENT,*PWINDOWPLACEMENT;
typedef struct {
	WORD versionNumber;
	WORD offset;
} MENUITEMTEMPLATEHEADER;
typedef struct {
	WORD mtOption;
	WORD mtID;
	WCHAR mtString[1];
} MENUITEMTEMPLATE;
typedef void MENUTEMPLATE,MENUTEMPLATEA,MENUTEMPLATEW,*LPMENUTEMPLATEA,*LPMENUTEMPLATEW,*LPMENUTEMPLATE;
typedef struct tagHELPINFO {
	UINT cbSize;
	int iContextType;
	int iCtrlId;
	HANDLE hItemHandle;
	DWORD dwContextId;
	POINT MousePos;
} HELPINFO,*LPHELPINFO;
typedef void(CALLBACK *MSGBOXCALLBACK)(LPHELPINFO);
typedef struct {
	UINT cbSize;
	HWND hwndOwner;
	HINSTANCE hInstance;
	LPCSTR lpszText;
	LPCSTR lpszCaption;
	DWORD dwStyle;
	LPCSTR lpszIcon;
	DWORD dwContextHelpId;
	MSGBOXCALLBACK lpfnMsgBoxCallback;
	DWORD dwLanguageId;
} MSGBOXPARAMSA,*PMSGBOXPARAMSA,*LPMSGBOXPARAMSA;
typedef struct {
	UINT cbSize;
	HWND hwndOwner;
	HINSTANCE hInstance;
	LPCWSTR lpszText;
	LPCWSTR lpszCaption;
	DWORD dwStyle;
	LPCWSTR lpszIcon;
	DWORD dwContextHelpId;
	MSGBOXCALLBACK lpfnMsgBoxCallback;
	DWORD dwLanguageId;
} MSGBOXPARAMSW,*PMSGBOXPARAMSW,*LPMSGBOXPARAMSW;
typedef struct tagUSEROBJECTFLAGS {
	BOOL fInherit;
	BOOL fReserved;
	DWORD dwFlags;
} USEROBJECTFLAGS;
typedef struct tagFILTERKEYS {
	UINT cbSize;
	DWORD dwFlags;
	DWORD iWaitMSec;
	DWORD iDelayMSec;
	DWORD iRepeatMSec;
	DWORD iBounceMSec;
} FILTERKEYS;
typedef struct tagHIGHCONTRASTA {
	UINT cbSize;
	DWORD dwFlags;
	LPSTR lpszDefaultScheme;
} HIGHCONTRASTA,*LPHIGHCONTRASTA;
typedef struct tagHIGHCONTRASTW {
	UINT cbSize;
	DWORD dwFlags;
	LPWSTR lpszDefaultScheme;
} HIGHCONTRASTW,*LPHIGHCONTRASTW;
#ifndef NOGDI
typedef struct tagICONMETRICSA {
	UINT cbSize;
	int iHorzSpacing;
	int iVertSpacing;
	int iTitleWrap;
	LOGFONTA lfFont;
} ICONMETRICSA,*LPICONMETRICSA;
typedef struct tagICONMETRICSW {
	UINT cbSize;
	int iHorzSpacing;
	int iVertSpacing;
	int iTitleWrap;
	LOGFONTW lfFont;
} ICONMETRICSW,*LPICONMETRICSW;
#endif /*  NOGDI */
typedef struct tagMINIMIZEDMETRICS {
	UINT cbSize;
	int iWidth;
	int iHorzGap;
	int iVertGap;
	int iArrange;
} MINIMIZEDMETRICS,*LPMINIMIZEDMETRICS;
typedef struct tagMOUSEKEYS{
	UINT cbSize;
	DWORD dwFlags;
	DWORD iMaxSpeed;
	DWORD iTimeToMaxSpeed;
	DWORD iCtrlSpeed;
	DWORD dwReserved1;
	DWORD dwReserved2;
} MOUSEKEYS, *LPMOUSEKEYS;
#ifndef NOGDI
typedef struct tagNONCLIENTMETRICSA {
	UINT cbSize;
	int iBorderWidth;
	int iScrollWidth;
	int iScrollHeight;
	int iCaptionWidth;
	int iCaptionHeight;
	LOGFONTA lfCaptionFont;
	int iSmCaptionWidth;
	int iSmCaptionHeight;
	LOGFONTA lfSmCaptionFont;
	int iMenuWidth;
	int iMenuHeight;
	LOGFONTA lfMenuFont;
	LOGFONTA lfStatusFont;
	LOGFONTA lfMessageFont;
} NONCLIENTMETRICSA,*LPNONCLIENTMETRICSA;
typedef struct tagNONCLIENTMETRICSW {
	UINT cbSize;
	int iBorderWidth;
	int iScrollWidth;
	int iScrollHeight;
	int iCaptionWidth;
	int iCaptionHeight;
	LOGFONTW lfCaptionFont;
	int iSmCaptionWidth;
	int iSmCaptionHeight;
	LOGFONTW lfSmCaptionFont;
	int iMenuWidth;
	int iMenuHeight;
	LOGFONTW lfMenuFont;
	LOGFONTW lfStatusFont;
	LOGFONTW lfMessageFont;
} NONCLIENTMETRICSW,*LPNONCLIENTMETRICSW;
#endif
typedef struct tagSERIALKEYSA {
	UINT cbSize;
	DWORD dwFlags;
	LPSTR lpszActivePort;
	LPSTR lpszPort;
	UINT iBaudRate;
	UINT iPortState;
	UINT iActive;
} SERIALKEYSA,*LPSERIALKEYSA;
typedef struct tagSERIALKEYSW {
	UINT cbSize;
	DWORD dwFlags;
	LPWSTR lpszActivePort;
	LPWSTR lpszPort;
	UINT iBaudRate;
	UINT iPortState;
	UINT iActive;
} SERIALKEYSW,*LPSERIALKEYSW;
typedef struct tagSOUNDSENTRYA {
	UINT cbSize;
	DWORD dwFlags;
	DWORD iFSTextEffect;
	DWORD iFSTextEffectMSec;
	DWORD iFSTextEffectColorBits;
	DWORD iFSGrafEffect;
	DWORD iFSGrafEffectMSec;
	DWORD iFSGrafEffectColor;
	DWORD iWindowsEffect;
	DWORD iWindowsEffectMSec;
	LPSTR lpszWindowsEffectDLL;
	DWORD iWindowsEffectOrdinal;
} SOUNDSENTRYA,*LPSOUNDSENTRYA;
typedef struct tagSOUNDSENTRYW {
	UINT cbSize;
	DWORD dwFlags;
	DWORD iFSTextEffect;
	DWORD iFSTextEffectMSec;
	DWORD iFSTextEffectColorBits;
	DWORD iFSGrafEffect;
	DWORD iFSGrafEffectMSec;
	DWORD iFSGrafEffectColor;
	DWORD iWindowsEffect;
	DWORD iWindowsEffectMSec;
	LPWSTR lpszWindowsEffectDLL;
	DWORD iWindowsEffectOrdinal;
} SOUNDSENTRYW,*LPSOUNDSENTRYW;
typedef struct tagSTICKYKEYS {
	DWORD cbSize;
	DWORD dwFlags;
} STICKYKEYS,*LPSTICKYKEYS;
typedef struct tagTOGGLEKEYS {
	DWORD cbSize;
	DWORD dwFlags;
} TOGGLEKEYS;
typedef struct tagMOUSEHOOKSTRUCT {
	POINT pt;
	HWND hwnd;
	UINT wHitTestCode;
	DWORD dwExtraInfo;
} MOUSEHOOKSTRUCT, FAR *LPMOUSEHOOKSTRUCT, *PMOUSEHOOKSTRUCT;
typedef struct tagTRACKMOUSEEVENT {
	DWORD cbSize;
	DWORD dwFlags;
	HWND  hwndTrack;
	DWORD dwHoverTime;
} TRACKMOUSEEVENT,*LPTRACKMOUSEEVENT;
typedef struct tagTPMPARAMS {
	UINT cbSize;
	RECT rcExclude;
} TPMPARAMS,*LPTPMPARAMS;
typedef struct tagEVENTMSG {
	UINT message;
	UINT paramL;
	UINT paramH;
	DWORD time;
	HWND hwnd;
} EVENTMSG,*PEVENTMSGMSG,*LPEVENTMSGMSG, *PEVENTMSG, *LPEVENTMSG;
typedef struct _WINDOWPOS {
	HWND hwnd;
	HWND hwndInsertAfter;
	int x;
	int y;
	int cx;
	int cy;
	UINT flags;
} WINDOWPOS,*PWINDOWPOS,*LPWINDOWPOS;
typedef struct tagMDICREATESTRUCTA {
	LPCSTR szClass;
	LPCSTR szTitle;
	HANDLE hOwner;
	int x;
	int y;
	int cx;
	int cy;
	DWORD style;
	LPARAM lParam;
} MDICREATESTRUCTA,*LPMDICREATESTRUCTA;
typedef struct tagMDICREATESTRUCTW {
	LPCWSTR szClass;
	LPCWSTR szTitle;
	HANDLE hOwner;
	int x;
	int y;
	int cx;
	int cy;
	DWORD style;
	LPARAM lParam;
} MDICREATESTRUCTW,*LPMDICREATESTRUCTW;
typedef struct tagMINMAXINFO {
	POINT ptReserved;
	POINT ptMaxSize;
	POINT ptMaxPosition;
	POINT ptMinTrackSize;
	POINT ptMaxTrackSize;
} MINMAXINFO,*PMINMAXINFO,*LPMINMAXINFO;
typedef struct tagMDINEXTMENU {
	HMENU hmenuIn;
	HMENU hmenuNext;
	HWND hwndNext;
} MDINEXTMENU,*PMDINEXTMENU,*LPMDINEXTMENU;
typedef struct tagMEASUREITEMSTRUCT {
	UINT CtlType;
	UINT CtlID;
	UINT itemID;
	UINT itemWidth;
	UINT itemHeight;
	DWORD itemData;
} MEASUREITEMSTRUCT,*PMEASUREITEMSTRUCT,*LPMEASUREITEMSTRUCT;
typedef struct tagDROPSTRUCT {
	HWND hwndSource;
	HWND hwndSink;
	DWORD wFmt;
	DWORD dwData;
	POINT ptDrop;
	DWORD dwControlData;
} DROPSTRUCT,*PDROPSTRUCT,*LPDROPSTRUCT;
typedef DWORD HELPPOLY;
typedef struct tagMULTIKEYHELPA {
	DWORD mkSize;
	CHAR mkKeylist;
	CHAR szKeyphrase[1];
} MULTIKEYHELPA,*PMULTIKEYHELPA,*LPMULTIKEYHELPA;
typedef struct tagMULTIKEYHELPW {
	DWORD mkSize;
	WCHAR mkKeylist;
	WCHAR szKeyphrase[1];
} MULTIKEYHELPW,*PMULTIKEYHELPW,*LPMULTIKEYHELPW;
typedef struct tagHELPWININFOA {
	int wStructSize;
	int x;
	int y;
	int dx;
	int dy;
	int wMax;
	CHAR rgchMember[2];
} HELPWININFOA,*PHELPWININFOA,*LPHELPWININFOA;
typedef struct tagHELPWININFOW {
	int wStructSize;
	int x;
	int y;
	int dx;
	int dy;
	int wMax;
	WCHAR rgchMember[2];
} HELPWININFOW,*PHELPWININFOW,*LPHELPWININFOW;
typedef struct tagSTYLESTRUCT { 
	DWORD styleOld;
	DWORD styleNew;
} STYLESTRUCT,*LPSTYLESTRUCT;
typedef struct tagALTTABINFO {
	DWORD cbSize;
	int   cItems;
	int   cColumns;
	int   cRows;
	int   iColFocus;
	int   iRowFocus;
	int   cxItem;
	int   cyItem;
	POINT ptStart;
} ALTTABINFO, *PALTTABINFO, *LPALTTABINFO;
typedef struct tagCOMBOBOXINFO {
	DWORD cbSize;
	RECT rcItem;
	RECT rcButton;
	DWORD stateButton;
	HWND hwndCombo;
	HWND hwndItem;
	HWND hwndList;
} COMBOBOXINFO, *PCOMBOBOXINFO, *LPCOMBOBOXINFO;
typedef struct tagCURSORINFO {
	DWORD cbSize;
	DWORD flags;
	HCURSOR hCursor;
	POINT ptScreenPos;
} CURSORINFO,*PCURSORINFO,*LPCURSORINFO;
typedef struct tagMENUBARINFO {
	DWORD cbSize;
	RECT  rcBar;
	HMENU hMenu;
	HWND  hwndMenu;
	BOOL  fBarFocused:1;
	BOOL  fFocused:1;
} MENUBARINFO, *PMENUBARINFO;
typedef struct tagMENUINFO {
	DWORD cbSize;
	DWORD fMask;
	DWORD dwStyle;
	UINT cyMax;
	HBRUSH  hbrBack;
	DWORD   dwContextHelpID;
	ULONG_PTR dwMenuData;
} MENUINFO, *LPMENUINFO;
typedef MENUINFO CONST *LPCMENUINFO;
#define CCHILDREN_SCROLLBAR 5
typedef struct tagSCROLLBARINFO {
	DWORD cbSize;
	RECT  rcScrollBar;
	int   dxyLineButton;
	int   xyThumbTop;
	int   xyThumbBottom;
	int   reserved;
	DWORD rgstate[CCHILDREN_SCROLLBAR + 1];
} SCROLLBARINFO, *PSCROLLBARINFO, *LPSCROLLBARINFO;
#define CCHILDREN_TITLEBAR 5
typedef struct tagTITLEBARINFO {
	DWORD cbSize;
	RECT  rcTitleBar;
	DWORD rgstate[CCHILDREN_TITLEBAR + 1];
} TITLEBARINFO, *PTITLEBARINFO, *LPTITLEBARINFO;
typedef struct tagWINDOWINFO {
	DWORD cbSize;
	RECT  rcWindow;
	RECT  rcClient;
	DWORD dwStyle;
	DWORD dwExStyle;
	DWORD dwWindowStatus;
	UINT  cxWindowBorders;
	UINT  cyWindowBorders;
	ATOM  atomWindowType;
	WORD  wCreatorVersion;
} WINDOWINFO, *PWINDOWINFO, *LPWINDOWINFO;
typedef struct tagLASTINPUTINFO {
	UINT cbSize;
	DWORD dwTime;
} LASTINPUTINFO, * PLASTINPUTINFO;
typedef struct tagMONITORINFO {
	DWORD cbSize;
	RECT rcMonitor;
	RECT rcWork;
	DWORD dwFlags;
} MONITORINFO,*LPMONITORINFO;
#define CCHDEVICENAME 32
typedef struct tagMONITORINFOEXA {
	DWORD	cbSize;
	RECT	rcMonitor;
	RECT	rcWork;
	DWORD	dwFlags;
	CHAR	szDevice[CCHDEVICENAME];
} MONITORINFOEXA, *LPMONITORINFOEXA;
typedef struct tagMONITORINFOEXW {
	DWORD	cbSize;
	RECT	rcMonitor;
	RECT	rcWork;
	DWORD	dwFlags;
	WCHAR	szDevice[CCHDEVICENAME];
} MONITORINFOEXW, *LPMONITORINFOEXW;
typedef struct tagKBDLLHOOKSTRUCT {
	DWORD vkCode;
	DWORD scanCode;
	DWORD flags;
	DWORD time;
	DWORD dwExtraInfo;
} KBDLLHOOKSTRUCT, FAR *LPKBDLLHOOKSTRUCT, *PKBDLLHOOKSTRUCT;
#if(WINVER >= 0x0500)
typedef struct {
  UINT  cbSize;
  HWND  hwnd;
  DWORD dwFlags;
  UINT  uCount;
  DWORD dwTimeout;
} FLASHWINFO, *PFLASHWINFO;
#endif /* (WINVER >= 0x0500) */
typedef struct tagMOUSEMOVEPOINT {
  int x;
  int y;
  DWORD time;
  ULONG_PTR dwExtraInfo;
} MOUSEMOVEPOINT, *PMOUSEMOVEPOINT;
typedef struct tagMOUSEINPUT {
  LONG dx;
  LONG dy;
  DWORD mouseData;
  DWORD dwFlags;
  DWORD time;
  ULONG_PTR dwExtraInfo;
} MOUSEINPUT, *PMOUSEINPUT;
typedef struct tagKEYBDINPUT {
  WORD wVk;
  WORD wScan;
  DWORD dwFlags;
  DWORD time;
  ULONG_PTR dwExtraInfo;
} KEYBDINPUT, *PKEYBDINPUT;
typedef struct tagHARDWAREINPUT {
  DWORD uMsg;
  WORD wParamL;
  WORD wParamH;
} HARDWAREINPUT, *PHARDWAREINPUT;
typedef struct tagINPUT {
  DWORD type;
  _ANONYMOUS_UNION union {
		MOUSEINPUT mi;
		KEYBDINPUT ki;
		HARDWAREINPUT hi;
  } DUMMYUNIONNAME;
} INPUT, *PINPUT, FAR *LPINPUT;
typedef struct tagGUITHREADINFO {
	DWORD cbSize;
	DWORD flags;
	HWND hwndActive;
	HWND hwndFocus;
	HWND hwndCapture;
	HWND hwndMenuOwner;
	HWND hwndMoveSize;
	HWND hwndCaret;
	RECT rcCaret;
} GUITHREADINFO, *PGUITHREADINFO;

#define AnsiToOem CharToOemA
#define OemToAnsi OemToCharA
#define AnsiToOemBuff CharToOemBuffA
#define OemToAnsiBuff OemToCharBuffA
#define AnsiUpper CharUpperA
#define AnsiUpperBuff CharUpperBuffA
#define AnsiLower CharLowerA
#define AnsiLowerBuff CharLowerBuffA
#define AnsiNext CharNextA
#define AnsiPrev CharPrevA
#define MAKELPARAM(l,h) ((LPARAM)MAKELONG(l,h))
#define MAKEWPARAM(l,h) ((WPARAM)MAKELONG(l,h))
#define MAKELRESULT(l,h) ((LRESULT)MAKELONG(l,h))
#define POINTSTOPOINT(p,ps) { \
  (p).x=LOWORD(*(DWORD *)&ps); \
  (p).y=HIWORD(*(DWORD *)&ps); \
}
#define POINTTOPOINTS(p) ((POINTS)MAKELONG((p).x,(p).y))

HKL WINAPI ActivateKeyboardLayout(HKL,UINT);
BOOL WINAPI AdjustWindowRect(LPRECT,DWORD,BOOL);
BOOL WINAPI AdjustWindowRectEx(LPRECT,DWORD,BOOL,DWORD);
BOOL WINAPI AnyPopup(void);
BOOL WINAPI AppendMenuA(HMENU,UINT,UINT_PTR,LPCSTR);
BOOL WINAPI AppendMenuW(HMENU,UINT,UINT_PTR,LPCWSTR);
UINT WINAPI ArrangeIconicWindows(HWND);
BOOL WINAPI AttachThreadInput(DWORD,DWORD,BOOL);
HDWP WINAPI BeginDeferWindowPos(int);
HDC WINAPI BeginPaint(HWND,LPPAINTSTRUCT);
BOOL WINAPI BringWindowToTop(HWND);
long WINAPI BroadcastSystemMessage(DWORD,LPDWORD,UINT,WPARAM,LPARAM);
BOOL WINAPI CallMsgFilter(PMSG,int);
LRESULT WINAPI CallNextHookEx(HHOOK,int,WPARAM,LPARAM);
LRESULT WINAPI CallWindowProcA(WNDPROC,HWND,UINT,WPARAM,LPARAM);
LRESULT WINAPI CallWindowProcW(WNDPROC,HWND,UINT,WPARAM,LPARAM);
WORD WINAPI CascadeWindows(HWND,UINT,LPCRECT,UINT,const HWND*);
BOOL WINAPI ChangeClipboardChain(HWND,HWND);
#ifndef NOGDI
LONG WINAPI ChangeDisplaySettingsA(PDEVMODEA,DWORD);
LONG WINAPI ChangeDisplaySettingsW(PDEVMODEW,DWORD);
#endif
BOOL WINAPI ChangeMenuA(HMENU,UINT,LPCSTR,UINT,UINT);
BOOL WINAPI ChangeMenuW(HMENU,UINT,LPCWSTR,UINT,UINT);
LPSTR WINAPI CharLowerA(LPSTR);
LPWSTR WINAPI CharLowerW(LPWSTR);
DWORD WINAPI CharLowerBuffA(LPSTR,DWORD);
DWORD WINAPI CharLowerBuffW(LPWSTR,DWORD);
LPSTR WINAPI CharNextA(LPCSTR);
LPWSTR WINAPI CharNextW(LPCWSTR);
LPSTR WINAPI CharNextExA(WORD,LPCSTR,DWORD);
LPWSTR WINAPI CharNextExW(WORD,LPCWSTR,DWORD);
LPSTR WINAPI CharPrevA(LPCSTR,LPCSTR);
LPWSTR WINAPI CharPrevW(LPCWSTR,LPCWSTR);
LPSTR WINAPI CharPrevExA(WORD,LPCSTR,LPCSTR,DWORD);
LPWSTR WINAPI CharPrevExW(WORD,LPCWSTR,LPCWSTR,DWORD);
BOOL WINAPI CharToOemA(LPCSTR,LPSTR);
BOOL WINAPI CharToOemW(LPCWSTR,LPSTR);
BOOL WINAPI CharToOemBuffA(LPCSTR,LPSTR,DWORD);
BOOL WINAPI CharToOemBuffW(LPCWSTR,LPSTR,DWORD);
LPSTR WINAPI CharUpperA(LPSTR);
LPWSTR WINAPI CharUpperW(LPWSTR);
DWORD WINAPI CharUpperBuffA(LPSTR,DWORD);
DWORD WINAPI CharUpperBuffW(LPWSTR,DWORD);
BOOL WINAPI CheckDlgButton(HWND,int,UINT);
DWORD WINAPI CheckMenuItem(HMENU,UINT,UINT);
BOOL WINAPI CheckMenuRadioItem(HMENU,UINT,UINT,UINT,UINT);
BOOL WINAPI CheckRadioButton(HWND,int,int,int);
HWND WINAPI ChildWindowFromPoint(HWND,POINT);
HWND WINAPI ChildWindowFromPointEx(HWND,POINT,UINT);
BOOL WINAPI ClientToScreen(HWND,LPPOINT);
BOOL WINAPI ClipCursor(LPCRECT);
BOOL WINAPI CloseClipboard(void);
BOOL WINAPI CloseDesktop(HDESK);
BOOL WINAPI CloseWindow(HWND);
BOOL WINAPI CloseWindowStation(HWINSTA);
int WINAPI CopyAcceleratorTableA(HACCEL,LPACCEL,int);
int WINAPI CopyAcceleratorTableW(HACCEL,LPACCEL,int);
HCURSOR WINAPI CopyCursor(HCURSOR);
HICON WINAPI CopyIcon(HICON);
HANDLE WINAPI CopyImage(HANDLE,UINT,int,int,UINT);
BOOL WINAPI CopyRect(LPRECT,LPCRECT);
int WINAPI CountClipboardFormats(void);
HACCEL WINAPI CreateAcceleratorTableA(LPACCEL,int);
HACCEL WINAPI CreateAcceleratorTableW(LPACCEL,int);
BOOL WINAPI CreateCaret(HWND,HBITMAP,int,int);
HCURSOR WINAPI CreateCursor(HINSTANCE,int,int,int,int,PCVOID,PCVOID);
#ifndef NOGDI
HDESK WINAPI CreateDesktopA(LPCSTR,LPCSTR,LPDEVMODEA,DWORD,ACCESS_MASK,LPSECURITY_ATTRIBUTES);
HDESK WINAPI CreateDesktopW(LPCWSTR,LPCWSTR,LPDEVMODEW,DWORD,ACCESS_MASK,LPSECURITY_ATTRIBUTES);
#endif
#define CreateDialogA(h,n,w,f) CreateDialogParamA(h,n,w,f,0)
#define CreateDialogW(h,n,w,f) CreateDialogParamW(h,n,w,f,0)
#define CreateDialogIndirectA(h,t,w,f) CreateDialogIndirectParamA(h,t,w,f,0)
#define CreateDialogIndirectW(h,t,w,f) CreateDialogIndirectParamW(h,t,w,f,0)
HWND WINAPI CreateDialogIndirectParamA(HINSTANCE,LPCDLGTEMPLATE,HWND,DLGPROC,LPARAM);
HWND WINAPI CreateDialogIndirectParamW(HINSTANCE,LPCDLGTEMPLATE,HWND,DLGPROC,LPARAM);
HWND WINAPI CreateDialogParamA(HINSTANCE,LPCSTR,HWND,DLGPROC,LPARAM);
HWND WINAPI CreateDialogParamW(HINSTANCE,LPCWSTR,HWND,DLGPROC,LPARAM);
HICON WINAPI CreateIcon(HINSTANCE,int,int,BYTE,BYTE,const BYTE*,const BYTE*);
HICON WINAPI CreateIconFromResource(PBYTE,DWORD,BOOL,DWORD);
HICON WINAPI CreateIconFromResourceEx(PBYTE,DWORD,BOOL,DWORD,int,int,UINT);
HICON WINAPI CreateIconIndirect(PICONINFO);
HWND WINAPI CreateMDIWindowA(LPCSTR,LPCSTR,DWORD,int,int,int,int,HWND,HINSTANCE,LPARAM);
HWND WINAPI CreateMDIWindowW(LPCWSTR,LPCWSTR,DWORD,int,int,int,int,HWND,HINSTANCE,LPARAM);
HMENU WINAPI CreateMenu(void);
HMENU WINAPI CreatePopupMenu(void);
#define CreateWindowA(a,b,c,d,e,f,g,h,i,j,k) CreateWindowExA(0,a,b,c,d,e,f,g,h,i,j,k)
#define CreateWindowW(a,b,c,d,e,f,g,h,i,j,k) CreateWindowExW(0,a,b,c,d,e,f,g,h,i,j,k)
HWND WINAPI CreateWindowExA(DWORD,LPCSTR,LPCSTR,DWORD,int,int,int,int,HWND,HMENU,HINSTANCE,LPVOID);
HWND WINAPI CreateWindowExW(DWORD,LPCWSTR,LPCWSTR,DWORD,int,int,int,int,HWND,HMENU,HINSTANCE,LPVOID);
HWINSTA WINAPI CreateWindowStationA(LPSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES);
HWINSTA WINAPI CreateWindowStationW(LPWSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES);
LRESULT WINAPI DefDlgProcA(HWND,UINT,WPARAM,LPARAM);
LRESULT WINAPI DefDlgProcW(HWND,UINT,WPARAM,LPARAM);
HDWP WINAPI DeferWindowPos(HDWP,HWND,HWND,int,int,int,int,UINT);
LRESULT WINAPI DefFrameProcA(HWND,HWND,UINT,WPARAM,LPARAM);
LRESULT WINAPI DefFrameProcW(HWND,HWND,UINT,WPARAM,LPARAM);
#define DefHookProc(c,p,lp,h) CallNextHookEx((HHOOK)*h,c,p,lp)
LRESULT WINAPI DefMDIChildProcA(HWND,UINT,WPARAM,LPARAM);
LRESULT WINAPI DefMDIChildProcW(HWND,UINT,WPARAM,LPARAM);
LRESULT WINAPI DefWindowProcA(HWND,UINT,WPARAM,LPARAM);
LRESULT WINAPI DefWindowProcW(HWND,UINT,WPARAM,LPARAM);
BOOL WINAPI DeleteMenu(HMENU,UINT,UINT);
BOOL WINAPI DestroyAcceleratorTable(HACCEL);
BOOL WINAPI DestroyCaret(void);
BOOL WINAPI DestroyCursor(HCURSOR);
BOOL WINAPI DestroyIcon(HICON);
BOOL WINAPI DestroyMenu(HMENU);
BOOL WINAPI DestroyWindow(HWND);
#define DialogBoxA(i,t,p,f) DialogBoxParamA(i,t,p,f,0)
#define DialogBoxW(i,t,p,f) DialogBoxParamW(i,t,p,f,0)
#define DialogBoxIndirectA(i,t,p,f) DialogBoxIndirectParamA(i,t,p,f,0)
#define DialogBoxIndirectW(i,t,p,f) DialogBoxIndirectParamW(i,t,p,f,0)
int WINAPI DialogBoxIndirectParamA(HINSTANCE,LPCDLGTEMPLATE,HWND,DLGPROC,LPARAM);
int WINAPI DialogBoxIndirectParamW(HINSTANCE,LPCDLGTEMPLATE,HWND,DLGPROC,LPARAM);
int WINAPI DialogBoxParamA(HINSTANCE,LPCSTR,HWND,DLGPROC,LPARAM);
int WINAPI DialogBoxParamW(HINSTANCE,LPCWSTR,HWND,DLGPROC,LPARAM);
LONG WINAPI DispatchMessageA(const MSG*);
LONG WINAPI DispatchMessageW(const MSG*);
int WINAPI DlgDirListA(HWND,LPSTR,int,int,UINT);
int WINAPI DlgDirListW(HWND,LPWSTR,int,int,UINT);
int WINAPI DlgDirListComboBoxA(HWND,LPSTR,int,int,UINT);
int WINAPI DlgDirListComboBoxW(HWND,LPWSTR,int,int,UINT);
BOOL WINAPI DlgDirSelectComboBoxExA(HWND,LPSTR,int,int);
BOOL WINAPI DlgDirSelectComboBoxExW(HWND,LPWSTR,int,int);
BOOL WINAPI DlgDirSelectExA(HWND,LPSTR,int,int);
BOOL WINAPI DlgDirSelectExW(HWND,LPWSTR,int,int);
BOOL WINAPI DragDetect(HWND,POINT);
DWORD WINAPI DragObject(HWND,HWND,UINT,DWORD,HCURSOR);
BOOL WINAPI DrawAnimatedRects(HWND,int,LPCRECT,LPCRECT);
BOOL WINAPI DrawCaption(HWND,HDC,LPCRECT,UINT);
BOOL WINAPI DrawEdge(HDC,LPRECT,UINT,UINT);
BOOL WINAPI DrawFocusRect(HDC,LPCRECT);
BOOL WINAPI DrawFrameControl(HDC,LPRECT,UINT,UINT);
BOOL WINAPI DrawIcon(HDC,int,int,HICON);
BOOL WINAPI DrawIconEx(HDC,int,int,HICON,int,int,UINT,HBRUSH,UINT);
BOOL WINAPI DrawMenuBar(HWND);
BOOL WINAPI DrawStateA(HDC,HBRUSH,DRAWSTATEPROC,LPARAM,WPARAM,int,int,int,int,UINT);
BOOL WINAPI DrawStateW(HDC,HBRUSH,DRAWSTATEPROC,LPARAM,WPARAM,int,int,int,int,UINT);
int WINAPI DrawTextA(HDC,LPCSTR,int,LPRECT,UINT);
int WINAPI DrawTextW(HDC,LPCWSTR,int,LPRECT,UINT);
int WINAPI DrawTextExA(HDC,LPSTR,int,LPRECT,UINT,LPDRAWTEXTPARAMS);
int WINAPI DrawTextExW(HDC,LPWSTR,int,LPRECT,UINT,LPDRAWTEXTPARAMS);
BOOL WINAPI EmptyClipboard(void);
BOOL WINAPI EnableMenuItem(HMENU,UINT,UINT);
BOOL WINAPI EnableScrollBar(HWND,UINT,UINT);
BOOL WINAPI EnableWindow(HWND,BOOL);
BOOL WINAPI EndDeferWindowPos(HDWP);
BOOL WINAPI EndDialog(HWND,int);
BOOL WINAPI EndMenu(VOID);
BOOL WINAPI EndPaint(HWND,const PAINTSTRUCT*);
BOOL WINAPI EnumChildWindows(HWND,ENUMWINDOWSPROC,LPARAM);
UINT WINAPI EnumClipboardFormats(UINT);
BOOL WINAPI EnumDesktopsA(HWINSTA,DESKTOPENUMPROCA,LPARAM);
BOOL WINAPI EnumDesktopsW(HWINSTA,DESKTOPENUMPROCW,LPARAM);
BOOL WINAPI EnumDesktopWindows(HDESK,ENUMWINDOWSPROC,LPARAM);
BOOL WINAPI EnumDisplayMonitors(HDC,LPCRECT,MONITORENUMPROC,LPARAM);
#ifndef NOGDI
BOOL WINAPI EnumDisplaySettingsA(LPCSTR,DWORD,PDEVMODEA);
BOOL WINAPI EnumDisplaySettingsW(LPCWSTR,DWORD,PDEVMODEW);
BOOL WINAPI EnumDisplayDevicesA(LPCSTR,DWORD,PDISPLAY_DEVICEA,DWORD);
BOOL WINAPI EnumDisplayDevicesW(LPCWSTR,DWORD,PDISPLAY_DEVICEW,DWORD);
#endif
int WINAPI EnumPropsA(HWND,PROPENUMPROCA);
int WINAPI EnumPropsW(HWND,PROPENUMPROCW);
int WINAPI EnumPropsExA(HWND,PROPENUMPROCEXA,LPARAM);
int WINAPI EnumPropsExW(HWND,PROPENUMPROCEXW,LPARAM);
#define EnumTaskWindows(h,f,p) EnumThreadWindows((DWORD)h,f,p)
BOOL WINAPI EnumThreadWindows(DWORD,WNDENUMPROC,LPARAM);
BOOL WINAPI EnumWindows(WNDENUMPROC,LPARAM);
BOOL WINAPI EnumWindowStationsA(WINSTAENUMPROCA,LPARAM);
BOOL WINAPI EnumWindowStationsW(WINSTAENUMPROCW,LPARAM);
BOOL WINAPI EqualRect(LPCRECT,LPCRECT);
#define ExitWindows(r,c) ExitWindowsEx(EWX_LOGOFF,0)
BOOL WINAPI ExitWindowsEx(UINT,DWORD);
HWND WINAPI FindWindowA(LPCSTR,LPCSTR);
HWND WINAPI FindWindowExA(HWND,HWND,LPCSTR,LPCSTR);
HWND WINAPI FindWindowExW(HWND,HWND,LPCWSTR,LPCWSTR);
HWND WINAPI FindWindowW(LPCWSTR,LPCWSTR);
BOOL WINAPI FlashWindow(HWND,BOOL);
int WINAPI FrameRect(HDC,LPCRECT,HBRUSH);
BOOL WINAPI FrameRgn(HDC,HRGN,HBRUSH,int,int);
HWND WINAPI GetActiveWindow(void);
HWND WINAPI GetAncestor(HWND hwnd, UINT gaFlags);
SHORT WINAPI GetAsyncKeyState(int);
HWND WINAPI GetCapture(void);
UINT WINAPI GetCaretBlinkTime(void);
BOOL WINAPI GetCaretPos(LPPOINT);
BOOL WINAPI GetClassInfoA(HINSTANCE,LPCSTR,LPWNDCLASSA);
BOOL WINAPI GetClassInfoExA(HINSTANCE,LPCSTR,LPWNDCLASSEXA);
BOOL WINAPI GetClassInfoW(HINSTANCE,LPCWSTR,LPWNDCLASSW);
BOOL WINAPI GetClassInfoExW(HINSTANCE,LPCWSTR,LPWNDCLASSEXW);
DWORD WINAPI GetClassLongA(HWND,int);
DWORD WINAPI GetClassLongW(HWND,int);
int WINAPI GetClassNameA(HWND,LPSTR,int);
int WINAPI GetClassNameW(HWND,LPWSTR,int);
WORD WINAPI GetClassWord(HWND,int);
BOOL WINAPI GetClientRect(HWND,LPRECT);
HANDLE WINAPI GetClipboardData(UINT);
int WINAPI GetClipboardFormatNameA(UINT,LPSTR,int);
int WINAPI GetClipboardFormatNameW(UINT,LPWSTR,int);
HWND WINAPI GetClipboardOwner(void);
HWND WINAPI GetClipboardViewer(void);
BOOL WINAPI GetClipCursor(LPRECT);
BOOL WINAPI GetCursorPos(LPPOINT);
HDC WINAPI GetDC(HWND);
HDC WINAPI GetDCEx(HWND,HRGN,DWORD);
HWND WINAPI GetDesktopWindow(void);
long WINAPI GetDialogBaseUnits(void);
int WINAPI GetDlgCtrlID(HWND);
HWND WINAPI GetDlgItem(HWND,int);
UINT WINAPI GetDlgItemInt(HWND,int,PBOOL,BOOL);
UINT WINAPI GetDlgItemTextA(HWND,int,LPSTR,int);
UINT WINAPI GetDlgItemTextW(HWND,int,LPWSTR,int);
UINT WINAPI GetDoubleClickTime(void);
HWND WINAPI GetFocus(void);
HWND WINAPI GetForegroundWindow(void);
BOOL WINAPI GetIconInfo(HICON,PICONINFO);
BOOL WINAPI GetInputState(void);
UINT WINAPI GetKBCodePage(void);
HKL WINAPI GetKeyboardLayout(DWORD);
UINT WINAPI GetKeyboardLayoutList(int,HKL*);
BOOL WINAPI GetKeyboardLayoutNameA(LPSTR);
BOOL WINAPI GetKeyboardLayoutNameW(LPWSTR);
BOOL WINAPI GetKeyboardState(PBYTE);
int WINAPI GetKeyboardType(int);
int WINAPI GetKeyNameTextA(LONG,LPSTR,int);
int WINAPI GetKeyNameTextW(LONG,LPWSTR,int);
SHORT WINAPI GetKeyState(int);
HWND WINAPI GetLastActivePopup(HWND);
DWORD WINAPI GetLastError(void);
HMENU WINAPI GetMenu(HWND);
LONG WINAPI GetMenuCheckMarkDimensions(void);
DWORD WINAPI GetMenuContextHelpId(HMENU);
UINT WINAPI GetMenuDefaultItem(HMENU,UINT,UINT);
int WINAPI GetMenuItemCount(HMENU);
UINT WINAPI GetMenuItemID(HMENU,int);
BOOL WINAPI GetMenuItemInfoA(HMENU,UINT,BOOL,LPMENUITEMINFOA);
BOOL WINAPI GetMenuItemInfoW(HMENU,UINT,BOOL,LPMENUITEMINFOW);
BOOL WINAPI GetMenuItemRect(HWND,HMENU,UINT,LPRECT);
UINT WINAPI GetMenuState(HMENU,UINT,UINT);
int WINAPI GetMenuStringA(HMENU,UINT,LPSTR,int,UINT);
int WINAPI GetMenuStringW(HMENU,UINT,LPWSTR,int,UINT);
BOOL WINAPI GetMessageA(LPMSG,HWND,UINT,UINT);
BOOL WINAPI GetMessageW(LPMSG,HWND,UINT,UINT);
LONG WINAPI GetMessageExtraInfo(void);
DWORD WINAPI GetMessagePos(void);
LONG WINAPI GetMessageTime(void);
HWND WINAPI GetNextDlgGroupItem(HWND,HWND,BOOL);
HWND WINAPI GetNextDlgTabItem(HWND,HWND,BOOL);
#define GetNextWindow(h,c) GetWindow(h,c)
HWND WINAPI GetOpenClipboardWindow(void);
HWND WINAPI GetParent(HWND);
int WINAPI GetPriorityClipboardFormat(UINT*,int);
HANDLE WINAPI GetPropA(HWND,LPCSTR);
HANDLE WINAPI GetPropW(HWND,LPCWSTR);
DWORD WINAPI GetQueueStatus(UINT);
BOOL WINAPI GetScrollInfo(HWND,int,LPSCROLLINFO);
int WINAPI GetScrollPos(HWND,int);
BOOL WINAPI GetScrollRange(HWND,int,LPINT,LPINT);
#if (_WIN32_WINNT >= _NT5)
HWND WINAPI GetShellWindow(VOID);
#endif
HMENU WINAPI GetSubMenu(HMENU,int);
DWORD WINAPI GetSysColor(int);
HBRUSH WINAPI GetSysColorBrush(int);
#define GetSysModalWindow() (NULL)
HMENU WINAPI GetSystemMenu(HWND,BOOL);
int WINAPI GetSystemMetrics(int);
DWORD WINAPI GetTabbedTextExtentA(HDC,LPCSTR,int,int,LPINT);
DWORD WINAPI GetTabbedTextExtentW(HDC,LPCWSTR,int,int,LPINT);
LONG WINAPI GetWindowLongA(HWND,int);
LONG WINAPI GetWindowLongW(HWND,int);
#ifdef _WIN64
LONG_PTR WINAPI GetWindowLongPtrA(HWND,int);
LONG_PTR WINAPI GetWindowLongPtrW(HWND,int);
#else
#define GetWindowLongPtrA GetWindowLongA
#define GetWindowLongPtrW GetWindowLongW
#endif
HDESK WINAPI GetThreadDesktop(DWORD);
HWND WINAPI GetTopWindow(HWND);
BOOL WINAPI GetUpdateRect(HWND,LPRECT,BOOL);
int WINAPI GetUpdateRgn(HWND,HRGN,BOOL);
BOOL WINAPI GetUserObjectInformationA(HANDLE,int,PVOID,DWORD,PDWORD);
BOOL WINAPI GetUserObjectInformationW(HANDLE,int,PVOID,DWORD,PDWORD);
BOOL WINAPI GetUserObjectSecurity(HANDLE,PSECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,PDWORD);
HWND WINAPI GetWindow(HWND,UINT);
DWORD WINAPI GetWindowContextHelpId(HWND);
HDC WINAPI GetWindowDC(HWND);
BOOL WINAPI GetWindowExtEx(HDC,LPSIZE);
BOOL WINAPI GetWindowPlacement(HWND,WINDOWPLACEMENT*);
BOOL WINAPI GetWindowRect(HWND,LPRECT);
int WINAPI GetWindowRgn(HWND,HRGN);
#define GetWindowTask(hWnd) ((HANDLE)GetWindowThreadProcessId(hWnd, NULL))
int WINAPI GetWindowTextA(HWND,LPSTR,int);
int WINAPI GetWindowTextLengthA(HWND);
int WINAPI GetWindowTextLengthW(HWND);
int WINAPI GetWindowTextW(HWND,LPWSTR,int);
WORD WINAPI GetWindowWord(HWND,int);
BOOL WINAPI GetAltTabInfoA(HWND,int,PALTTABINFO,LPSTR,UINT);
BOOL WINAPI GetAltTabInfoW(HWND,int,PALTTABINFO,LPWSTR,UINT);
BOOL WINAPI GetComboBoxInfo(HWND,PCOMBOBOXINFO);
BOOL WINAPI GetCursorInfo(PCURSORINFO);
BOOL WINAPI GetLastInputInfo(PLASTINPUTINFO);
DWORD WINAPI GetListBoxInfo(HWND);
BOOL WINAPI GetMenuBarInfo(HWND,LONG,LONG,PMENUBARINFO);
BOOL WINAPI GetMenuInfo(HMENU,LPMENUINFO);
BOOL WINAPI GetScrollBarInfo(HWND,LONG,PSCROLLBARINFO);
BOOL WINAPI GetTitleBarInfo(HWND,PTITLEBARINFO);
BOOL WINAPI GetWindowInfo(HWND,PWINDOWINFO);
BOOL WINAPI GetMonitorInfoA(HMONITOR,LPMONITORINFO);
BOOL WINAPI GetMonitorInfoW(HMONITOR,LPMONITORINFO);
UINT WINAPI GetWindowModuleFileNameA(HWND,LPSTR,UINT);
UINT WINAPI GetWindowModuleFileNameW(HWND,LPWSTR,UINT);
BOOL WINAPI GrayStringA(HDC,HBRUSH,GRAYSTRINGPROC,LPARAM,int,int,int,int,int);
BOOL WINAPI GrayStringW(HDC,HBRUSH,GRAYSTRINGPROC,LPARAM,int,int,int,int,int);
BOOL WINAPI HideCaret(HWND);
BOOL WINAPI HiliteMenuItem(HWND,HMENU,UINT,UINT);
BOOL WINAPI InflateRect(LPRECT,int,int);
BOOL WINAPI InSendMessage(VOID);
BOOL WINAPI InsertMenuA(HMENU,UINT,UINT,UINT,LPCSTR);
BOOL WINAPI InsertMenuW(HMENU,UINT,UINT,UINT,LPCWSTR);
BOOL WINAPI InsertMenuItemA(HMENU,UINT,BOOL,LPCMENUITEMINFOA);
BOOL WINAPI InsertMenuItemW(HMENU,UINT,BOOL,LPCMENUITEMINFOW);
BOOL WINAPI IntersectRect(LPRECT,LPCRECT,LPCRECT);
BOOL WINAPI InvalidateRect(HWND,LPCRECT,BOOL);
BOOL WINAPI InvalidateRgn(HWND,HRGN,BOOL);
BOOL WINAPI InvertRect(HDC,LPCRECT);
BOOL WINAPI IsCharAlphaA(CHAR ch);
BOOL WINAPI IsCharAlphaNumericA(CHAR);
BOOL WINAPI IsCharAlphaNumericW(WCHAR);
BOOL WINAPI IsCharAlphaW(WCHAR);
BOOL WINAPI IsCharLowerA(CHAR);
BOOL WINAPI IsCharLowerW(WCHAR);
BOOL WINAPI IsCharUpperA(CHAR);
BOOL WINAPI IsCharUpperW(WCHAR);
BOOL WINAPI IsChild(HWND,HWND);
BOOL WINAPI IsClipboardFormatAvailable(UINT);
BOOL WINAPI IsDialogMessageA(HWND,LPMSG);
BOOL WINAPI IsDialogMessageW(HWND,LPMSG);
UINT WINAPI IsDlgButtonChecked(HWND,int);
BOOL WINAPI IsIconic(HWND);
BOOL WINAPI IsMenu(HMENU);
BOOL WINAPI IsRectEmpty(LPCRECT);
BOOL WINAPI IsWindow(HWND);
BOOL WINAPI IsWindowEnabled(HWND);
BOOL WINAPI IsWindowUnicode(HWND);
BOOL WINAPI IsWindowVisible(HWND);
BOOL WINAPI IsZoomed(HWND);
VOID WINAPI keybd_event(BYTE,BYTE,DWORD,DWORD);
BOOL WINAPI KillTimer(HWND,UINT);
HACCEL WINAPI LoadAcceleratorsA(HINSTANCE,LPCSTR);
HACCEL WINAPI LoadAcceleratorsW(HINSTANCE,LPCWSTR);
HBITMAP WINAPI LoadBitmapA(HINSTANCE,LPCSTR);
HBITMAP WINAPI LoadBitmapW(HINSTANCE,LPCWSTR);
HCURSOR WINAPI LoadCursorA(HINSTANCE,LPCSTR);
HCURSOR WINAPI LoadCursorFromFileA(LPCSTR);
HCURSOR WINAPI LoadCursorFromFileW(LPCWSTR);
HCURSOR WINAPI LoadCursorW(HINSTANCE,LPCWSTR);
HICON WINAPI LoadIconA(HINSTANCE,LPCSTR);
HICON WINAPI LoadIconW(HINSTANCE,LPCWSTR);
HANDLE WINAPI LoadImageA(HINSTANCE,LPCSTR,UINT,int,int,UINT);
HANDLE WINAPI LoadImageW(HINSTANCE,LPCWSTR,UINT,int,int,UINT);
HKL WINAPI LoadKeyboardLayoutA(LPCSTR,UINT);
HKL WINAPI LoadKeyboardLayoutW(LPCWSTR,UINT);
HMENU WINAPI LoadMenuA(HINSTANCE,LPCSTR);
HMENU WINAPI LoadMenuIndirectA(const MENUTEMPLATE*);
HMENU WINAPI LoadMenuIndirectW(const MENUTEMPLATE*);
HMENU WINAPI LoadMenuW(HINSTANCE,LPCWSTR);
int WINAPI LoadStringA(HINSTANCE,UINT,LPSTR,int);
int WINAPI LoadStringW(HINSTANCE,UINT,LPWSTR,int);
BOOL WINAPI LockWindowUpdate(HWND);
int WINAPI LookupIconIdFromDirectory(PBYTE,BOOL);
int WINAPI LookupIconIdFromDirectoryEx(PBYTE,BOOL,int,int,UINT);
BOOL WINAPI MapDialogRect(HWND,LPRECT);
UINT WINAPI MapVirtualKeyA(UINT,UINT);
UINT WINAPI MapVirtualKeyExA(UINT,UINT,HKL);
UINT WINAPI MapVirtualKeyExW(UINT,UINT,HKL);
UINT WINAPI MapVirtualKeyW(UINT,UINT);
int WINAPI MapWindowPoints(HWND,HWND,LPPOINT,UINT);
int WINAPI MenuItemFromPoint(HWND,HMENU,POINT);
BOOL WINAPI MessageBeep(UINT);
int WINAPI MessageBoxA(HWND,LPCSTR,LPCSTR,UINT);
int WINAPI MessageBoxW(HWND,LPCWSTR,LPCWSTR,UINT);
int WINAPI MessageBoxExA(HWND,LPCSTR,LPCSTR,UINT,WORD);
int WINAPI MessageBoxExW(HWND,LPCWSTR,LPCWSTR,UINT,WORD);
int WINAPI MessageBoxIndirectA(CONST MSGBOXPARAMSA*);
int WINAPI MessageBoxIndirectW(CONST MSGBOXPARAMSW*);
BOOL WINAPI ModifyMenuA(HMENU,UINT,UINT,UINT,LPCSTR);
BOOL WINAPI ModifyMenuW(HMENU,UINT,UINT,UINT,LPCWSTR);
void WINAPI mouse_event(DWORD,DWORD,DWORD,DWORD,ULONG_PTR);
BOOL WINAPI MoveWindow(HWND,int,int,int,int,BOOL);
DWORD WINAPI MsgWaitForMultipleObjects(DWORD,CONST HANDLE*,BOOL,DWORD,DWORD);
DWORD WINAPI MsgWaitForMultipleObjectsEx(DWORD,CONST HANDLE*,DWORD,DWORD,DWORD);
void WINAPI NotifyWinEvent(DWORD,HWND,LONG,LONG);
DWORD WINAPI OemKeyScan(WORD);
BOOL WINAPI OemToCharA(LPCSTR,LPSTR);
BOOL WINAPI OemToCharBuffA(LPCSTR,LPSTR,DWORD);
BOOL WINAPI OemToCharBuffW(LPCSTR,LPWSTR,DWORD);
BOOL WINAPI OemToCharW(LPCSTR,LPWSTR);
BOOL WINAPI OffsetRect(LPRECT,int,int);
BOOL WINAPI OpenClipboard(HWND);
HDESK WINAPI OpenDesktopA(LPSTR,DWORD,BOOL,DWORD);
HDESK WINAPI OpenDesktopW(LPWSTR,DWORD,BOOL,DWORD);
BOOL WINAPI OpenIcon(HWND);
HDESK WINAPI OpenInputDesktop(DWORD,BOOL,DWORD);
HWINSTA WINAPI OpenWindowStationA(LPSTR,BOOL,DWORD);
HWINSTA WINAPI OpenWindowStationW(LPWSTR,BOOL,DWORD);
BOOL WINAPI PaintDesktop(HDC);
BOOL WINAPI PeekMessageA(LPMSG,HWND,UINT,UINT,UINT);
BOOL WINAPI PeekMessageW(LPMSG,HWND,UINT,UINT,UINT);
#define PostAppMessageA(t,m,w,l) PostThreadMessageA((DWORD)t,m,w,l)
#define PostAppMessageW(t,m,w,l) PostThreadMessageW((DWORD)t,m,w,l)
BOOL WINAPI PostMessageA(HWND,UINT,WPARAM,LPARAM);
BOOL WINAPI PostMessageW(HWND,UINT,WPARAM,LPARAM);
void WINAPI PostQuitMessage(int);
BOOL WINAPI PostThreadMessageA(DWORD,UINT,WPARAM,LPARAM);
BOOL WINAPI PostThreadMessageW(DWORD,UINT,WPARAM,LPARAM);
BOOL WINAPI PtInRect(LPCRECT,POINT);
BOOL WINAPI RedrawWindow(HWND,LPCRECT,HRGN,UINT);
ATOM WINAPI RegisterClassA(CONST WNDCLASSA*);
ATOM WINAPI RegisterClassW(CONST WNDCLASSW*);
ATOM WINAPI RegisterClassExA(CONST WNDCLASSEXA*);
ATOM WINAPI RegisterClassExW(CONST WNDCLASSEXW*);
UINT WINAPI RegisterClipboardFormatA(LPCSTR);
UINT WINAPI RegisterClipboardFormatW(LPCWSTR);
BOOL WINAPI RegisterHotKey(HWND,int,UINT,UINT);
UINT WINAPI RegisterWindowMessageA(LPCSTR);
UINT WINAPI RegisterWindowMessageW(LPCWSTR);
BOOL WINAPI ReleaseCapture(void);
int WINAPI ReleaseDC(HWND,HDC);
BOOL WINAPI RemoveMenu(HMENU,UINT,UINT);
HANDLE WINAPI RemovePropA(HWND,LPCSTR);
HANDLE WINAPI RemovePropW(HWND,LPCWSTR);
BOOL WINAPI ReplyMessage(LRESULT);
BOOL WINAPI ScreenToClient(HWND,LPPOINT);
BOOL WINAPI ScrollDC(HDC,int,int,LPCRECT,LPCRECT,HRGN,LPRECT);
BOOL WINAPI ScrollWindow(HWND,int,int,LPCRECT,LPCRECT);
int WINAPI ScrollWindowEx(HWND,int,int,LPCRECT,LPCRECT,HRGN,LPRECT,UINT);
LONG WINAPI SendDlgItemMessageA(HWND,int,UINT,WPARAM,LPARAM);
LONG WINAPI SendDlgItemMessageW(HWND,int,UINT,WPARAM,LPARAM);
UINT WINAPI SendInput(UINT,LPINPUT,int);
LRESULT WINAPI SendMessageA(HWND,UINT,WPARAM,LPARAM);
BOOL WINAPI SendMessageCallbackA(HWND,UINT,WPARAM,LPARAM,SENDASYNCPROC,DWORD);
BOOL WINAPI SendMessageCallbackW(HWND,UINT,WPARAM,LPARAM,SENDASYNCPROC,DWORD);
LRESULT WINAPI SendMessageTimeoutA(HWND,UINT,WPARAM,LPARAM,UINT,UINT,PDWORD);
LRESULT WINAPI SendMessageTimeoutW(HWND,UINT,WPARAM,LPARAM,UINT,UINT,PDWORD);
LRESULT WINAPI SendMessageW(HWND,UINT,WPARAM,LPARAM);
BOOL WINAPI SendNotifyMessageA(HWND,UINT,WPARAM,LPARAM);
BOOL WINAPI SendNotifyMessageW(HWND,UINT,WPARAM,LPARAM);
HWND WINAPI SetActiveWindow(HWND);
HWND WINAPI SetCapture(HWND hWnd);
BOOL WINAPI SetCaretBlinkTime(UINT);
BOOL WINAPI SetCaretPos(int,int);
DWORD WINAPI SetClassLongA(HWND,int,LONG);
DWORD WINAPI SetClassLongW(HWND,int,LONG);
WORD WINAPI SetClassWord(HWND,int,WORD);
HANDLE WINAPI SetClipboardData(UINT,HANDLE);
HWND WINAPI SetClipboardViewer(HWND);
HCURSOR WINAPI SetCursor(HCURSOR);
BOOL WINAPI SetCursorPos(int,int);
VOID WINAPI SetDebugErrorLevel(DWORD);
BOOL WINAPI SetDlgItemInt(HWND,int,UINT,BOOL);
BOOL WINAPI SetDlgItemTextA(HWND,int,LPCSTR);
BOOL WINAPI SetDlgItemTextW(HWND,int,LPCWSTR);
BOOL WINAPI SetDoubleClickTime(UINT);
HWND WINAPI SetFocus(HWND);
BOOL WINAPI SetForegroundWindow(HWND);
BOOL WINAPI SetKeyboardState(PBYTE);
BOOL WINAPI SetMenu(HWND,HMENU);
BOOL WINAPI SetMenuContextHelpId(HMENU,DWORD);
BOOL WINAPI SetMenuDefaultItem(HMENU,UINT,UINT);
BOOL WINAPI SetMenuInfo(HMENU,LPCMENUINFO);
BOOL WINAPI SetMenuItemBitmaps(HMENU,UINT,UINT,HBITMAP,HBITMAP);
BOOL WINAPI SetMenuItemInfoA(HMENU,UINT,BOOL,LPCMENUITEMINFOA);
BOOL WINAPI SetMenuItemInfoW( HMENU,UINT,BOOL,LPCMENUITEMINFOW);
LPARAM WINAPI SetMessageExtraInfo(LPARAM);
BOOL WINAPI SetMessageQueue(int);
HWND WINAPI SetParent(HWND,HWND);
BOOL WINAPI SetProcessWindowStation(HWINSTA);
BOOL WINAPI SetPropA(HWND,LPCSTR,HANDLE);
BOOL WINAPI SetPropW(HWND,LPCWSTR,HANDLE);
BOOL WINAPI SetRect(LPRECT,int,int,int,int);
BOOL WINAPI SetRectEmpty(LPRECT);
int WINAPI SetScrollInfo(HWND,int,LPCSCROLLINFO,BOOL);
int WINAPI SetScrollPos(HWND,int,int,BOOL);
BOOL WINAPI SetScrollRange(HWND,int,int,int,BOOL);
BOOL WINAPI SetSysColors(int,const INT *,const COLORREF *);
#define SetSysModalWindow(h) (NULL)
BOOL WINAPI SetSystemCursor(HCURSOR,DWORD);
BOOL WINAPI SetThreadDesktop(HDESK);
UINT WINAPI SetTimer(HWND,UINT,UINT,TIMERPROC);
BOOL WINAPI SetUserObjectInformationA(HANDLE,int,PVOID,DWORD);
BOOL WINAPI SetUserObjectInformationW(HANDLE,int,PVOID,DWORD);
BOOL WINAPI SetUserObjectSecurity(HANDLE,PSECURITY_INFORMATION,PSECURITY_DESCRIPTOR);
BOOL WINAPI SetWindowContextHelpId(HWND,DWORD);
LONG WINAPI SetWindowLongA(HWND,int,LONG);
LONG WINAPI SetWindowLongW(HWND,int,LONG);
#ifdef _WIN64
LONG_PTR WINAPI SetWindowLongPtrA(HWND,int,LONG_PTR);
LONG_PTR WINAPI SetWindowLongPtrW(HWND,int,LONG_PTR);
#else
#define SetWindowLongPtrA SetWindowLongA
#define SetWindowLongPtrW SetWindowLongW
#endif
BOOL WINAPI SetWindowPlacement(HWND hWnd,const WINDOWPLACEMENT*);
BOOL WINAPI SetWindowPos(HWND,HWND,int,int,int,int,UINT);
int WINAPI SetWindowRgn(HWND,HRGN,BOOL);
HOOKPROC WINAPI SetWindowsHookA(int,HOOKPROC);
HHOOK WINAPI SetWindowsHookExA(int,HOOKPROC,HINSTANCE,DWORD);
HHOOK WINAPI SetWindowsHookExW(int,HOOKPROC,HINSTANCE,DWORD);
BOOL WINAPI SetWindowTextA(HWND,LPCSTR);
BOOL WINAPI SetWindowTextW(HWND,LPCWSTR);
WORD WINAPI SetWindowWord(HWND,int,WORD);
BOOL WINAPI ShowCaret(HWND);
int WINAPI ShowCursor(BOOL);
BOOL WINAPI ShowOwnedPopups(HWND,BOOL);
BOOL WINAPI ShowScrollBar(HWND,int,BOOL);
BOOL WINAPI ShowWindow(HWND,int);
BOOL WINAPI ShowWindowAsync(HWND,int);
BOOL WINAPI SubtractRect(LPRECT,LPCRECT,LPCRECT);
BOOL WINAPI SwapMouseButton(BOOL);
BOOL WINAPI SwitchDesktop(HDESK);
BOOL WINAPI SystemParametersInfoA(UINT,UINT,PVOID,UINT);
BOOL WINAPI SystemParametersInfoW(UINT,UINT,PVOID,UINT);
LONG WINAPI TabbedTextOutA(HDC,int,int,LPCSTR,int,int,LPINT,int);
LONG WINAPI TabbedTextOutW(HDC,int,int,LPCWSTR,int,int,LPINT,int);
WORD WINAPI TileWindows(HWND,UINT,LPCRECT,UINT,const HWND *);
int WINAPI ToAscii(UINT,UINT,PBYTE,LPWORD,UINT);
int WINAPI ToAsciiEx(UINT,UINT,PBYTE,LPWORD,UINT,HKL);
int WINAPI ToUnicode(UINT,UINT,PBYTE,LPWSTR,int,UINT);
int WINAPI ToUnicodeEx(UINT,UINT,PBYTE,LPWSTR,int,UINT,HKL);
BOOL WINAPI TrackMouseEvent(LPTRACKMOUSEEVENT);
BOOL WINAPI TrackPopupMenu(HMENU,UINT,int,int,int,HWND,LPCRECT);
BOOL WINAPI TrackPopupMenuEx(HMENU,UINT,int,int,HWND,LPTPMPARAMS);
int WINAPI TranslateAcceleratorA(HWND,HACCEL,LPMSG);
int WINAPI TranslateAcceleratorW(HWND,HACCEL,LPMSG);
BOOL WINAPI TranslateMDISysAccel(HWND,LPMSG);
BOOL WINAPI TranslateMessage(const MSG*);
BOOL WINAPI UnhookWindowsHook(int,HOOKPROC);
BOOL WINAPI UnhookWindowsHookEx(HHOOK);
BOOL WINAPI UnionRect(LPRECT,LPCRECT,LPCRECT);
BOOL WINAPI UnloadKeyboardLayout(HKL);
BOOL WINAPI UnregisterClassA(LPCSTR,HINSTANCE);
BOOL WINAPI UnregisterClassW(LPCWSTR,HINSTANCE);
BOOL WINAPI UnregisterHotKey(HWND,int);
BOOL WINAPI UpdateWindow(HWND);
BOOL WINAPI ValidateRect(HWND,LPCRECT);
BOOL WINAPI ValidateRgn(HWND,HRGN);
SHORT WINAPI VkKeyScanA(CHAR);
SHORT WINAPI VkKeyScanExA(CHAR,HKL);
SHORT WINAPI VkKeyScanExW(WCHAR,HKL);
SHORT WINAPI VkKeyScanW(WCHAR);
DWORD WINAPI WaitForInputIdle(HANDLE,DWORD);
BOOL WINAPI WaitMessage(void);
HWND WINAPI WindowFromDC(HDC hDC);
HWND WINAPI WindowFromPoint(POINT);
UINT WINAPI WinExec(LPCSTR,UINT);
BOOL WINAPI WinHelpA(HWND,LPCSTR,UINT,DWORD);
BOOL WINAPI WinHelpW(HWND,LPCWSTR,UINT,DWORD);
int WINAPIV wsprintfA(LPSTR,LPCSTR,...);
int WINAPIV wsprintfW(LPWSTR,LPCWSTR,...);
int WINAPI wvsprintfA(LPSTR,LPCSTR,va_list arglist);
int WINAPI wvsprintfW(LPWSTR,LPCWSTR,va_list arglist);
#if(_WIN32_WINNT >= _NT5  || _WIN32_WINDOWS >= _WME)
BOOL WINAPI AllowSetForegroundWindow(DWORD);
BOOL WINAPI LockSetForegroundWindow(UINT);
#endif
#if(_WIN32_WINNT >= _NT5)
BOOL WINAPI SetLayeredWindowAttributes(HWND,COLORREF,BYTE,DWORD);
BOOL WINAPI UpdateLayeredWindow(HWND,HDC,POINT*,SIZE*,HDC,POINT*,COLORREF,BLENDFUNCTION*,DWORD);
#endif
#if(_WIN32_WINNT >= _WXP)
BOOL WINAPI GetLayeredWindowAttributes(HWND,COLORREF*,BYTE*,DWORD*);
#endif
#ifdef UNICODE
#define EDITWORDBREAKPROC EDITWORDBREAKPROCW
#define PROPENUMPROC PROPENUMPROCW
#define PROPENUMPROCEX PROPENUMPROCEXW
#define DEKSTOPENUMPROC DEKSTOPENUMPROCW
#define WINSTAENUMPROC WINSTAENUMPROCW
#define PROPENUMPROC PROPENUMPROCW
#define PROPENUMPROCEX PROPENUMPROCEXW
#define MAKEINTRESOURCE MAKEINTRESOURCEW
typedef WNDCLASSW WNDCLASS,*LPWNDCLASS,*PWNDCLASS;
typedef WNDCLASSEXW WNDCLASSEX,*LPWNDCLASSEX,*PWNDCLASSEX;
typedef MENUITEMINFOW MENUITEMINFO,*LPMENUITEMINFO;
typedef LPCMENUITEMINFOW LPCMENUITEMINFO;
typedef MSGBOXPARAMSW MSGBOXPARAMS,*PMSGBOXPARAMS,*LPMSGBOXPARAMS;
typedef HIGHCONTRASTW HIGHCONTRAST,*LPHIGHCONTRAST;
typedef SERIALKEYSW SERIALKEYS,*LPSERIALKEYS;
typedef SOUNDSENTRYW SOUNDSENTRY,*LPSOUNDSENTRY;
typedef CREATESTRUCTW CREATESTRUCT, *LPCREATESTRUCT;
typedef CBT_CREATEWNDW CBT_CREATEWND, *LPCBT_CREATEWND;
typedef MDICREATESTRUCTW MDICREATESTRUCT,*LPMDICREATESTRUCT;
typedef MULTIKEYHELPW MULTIKEYHELP,*PMULTIKEYHELP,*LPMULTIKEYHELP;
typedef MONITORINFOEXW MONITORINFOEX, *LPMONITORINFOEX;
#define AppendMenu AppendMenuW
#define CallWindowProc CallWindowProcW
#define ChangeMenu ChangeMenuW
#define CharLower CharLowerW
#define CharLowerBuff CharLowerBuffW
#define CharNext CharNextW
#define CharNextEx CharNextExW
#define CharPrev CharPrevW
#define CharPrevEx CharPrevExW
#define CharToOem CharToOemW
#define CharToOemBuff CharToOemBuffW
#define CharUpper CharUpperW
#define CharUpperBuff CharUpperBuffW
#define CopyAcceleratorTable CopyAcceleratorTableW
#define CreateAcceleratorTable CreateAcceleratorTableW
#define CreateDialog CreateDialogW
#define CreateDialogIndirect CreateDialogIndirectW
#define CreateDialogIndirectParam CreateDialogIndirectParamW
#define CreateDialogParam CreateDialogParamW
#define CreateMDIWindow CreateMDIWindowW
#define CreateWindow CreateWindowW
#define CreateWindowEx CreateWindowExW
#define CreateWindowStation CreateWindowStationW
#define DefDlgProc DefDlgProcW
#define DefFrameProc DefFrameProcW
#define DefMDIChildProc DefMDIChildProcW
#define DefWindowProc DefWindowProcW
#define DialogBox DialogBoxW
#define DialogBoxIndirect DialogBoxIndirectW
#define DialogBoxIndirectParam DialogBoxIndirectParamW
#define DialogBoxParam DialogBoxParamW
#define DispatchMessage DispatchMessageW
#define DlgDirList DlgDirListW
#define DlgDirListComboBox DlgDirListComboBoxW
#define DlgDirSelectComboBoxEx DlgDirSelectComboBoxExW
#define DlgDirSelectEx DlgDirSelectExW
#define DrawState DrawStateW
#define DrawText DrawTextW
#define DrawTextEx DrawTextExW
#define EnumDesktops EnumDesktopsW
#define EnumProps EnumPropsW
#define EnumPropsEx EnumPropsExW
#define EnumWindowStations EnumWindowStationsW
#define FindWindow FindWindowW
#define FindWindowEx FindWindowExW
#define GetClassInfo GetClassInfoW
#define GetClassInfoEx GetClassInfoExW
#define GetClassLong GetClassLongW
#define GetClassName GetClassNameW
#define GetClipboardFormatName GetClipboardFormatNameW
#define GetDlgItemText GetDlgItemTextW
#define GetKeyboardLayoutName GetKeyboardLayoutNameW
#define GetKeyNameText GetKeyNameTextW
#define GetMenuItemInfo GetMenuItemInfoW
#define GetMenuString GetMenuStringW
#define GetMessage GetMessageW
#define GetMonitorInfo  GetMonitorInfoW
#define GetProp GetPropW
#define GetTabbedTextExtent GetTabbedTextExtentW
#define GetUserObjectInformation GetUserObjectInformationW
#define GetWindowLong GetWindowLongW
#define GetWindowLongPtr GetWindowLongPtrW
#define GetWindowText GetWindowTextW
#define GetWindowTextLength GetWindowTextLengthW
#define GetAltTabInfo GetAltTabInfoW
#define GetWindowModuleFileName GetWindowModuleFileNameW
#define GrayString GrayStringW
#define InsertMenu InsertMenuW
#define InsertMenuItem InsertMenuItemW
#define IsCharAlpha IsCharAlphaW
#define IsCharAlphaNumeric IsCharAlphaNumericW
#define IsCharLower IsCharLowerW
#define IsCharUpper IsCharUpperW
#define IsDialogMessage IsDialogMessageW
#define LoadAccelerators LoadAcceleratorsW
#define LoadBitmap LoadBitmapW
#define LoadCursor LoadCursorW
#define LoadCursorFromFile LoadCursorFromFileW
#define LoadIcon LoadIconW
#define LoadImage LoadImageW
#define LoadKeyboardLayout LoadKeyboardLayoutW
#define LoadMenu LoadMenuW
#define LoadMenuIndirect LoadMenuIndirectW
#define LoadString LoadStringW
#define MapVirtualKey MapVirtualKeyW
#define MapVirtualKeyEx MapVirtualKeyExW
#define MessageBox MessageBoxW
#define MessageBoxEx MessageBoxExW
#define MessageBoxIndirect MessageBoxIndirectW
#define ModifyMenu ModifyMenuW
#define OemToChar OemToCharW
#define OemToCharBuff OemToCharBuffW
#define OpenDesktop OpenDesktopW
#define OpenWindowStation OpenWindowStationW
#define PeekMessage PeekMessageW
#define PostAppMessage PostAppMessageW
#define PostMessage PostMessageW
#define PostThreadMessage PostThreadMessageW
#define RegisterClass RegisterClassW
#define RegisterClassEx RegisterClassExW
#define RegisterClipboardFormat RegisterClipboardFormatW
#define RegisterWindowMessage RegisterWindowMessageW
#define RemoveProp RemovePropW
#define SendDlgItemMessage SendDlgItemMessageW
#define SendMessage SendMessageW
#define SendMessageCallback SendMessageCallbackW
#define SendMessageTimeout SendMessageTimeoutW
#define SendNotifyMessage SendNotifyMessageW
#define SetClassLong SetClassLongW
#define SetDlgItemText SetDlgItemTextW
#define SetMenuItemInfo SetMenuItemInfoW
#define SetProp SetPropW
#define SetUserObjectInformation SetUserObjectInformationW
#define SetWindowLong SetWindowLongW
#define SetWindowLongPtr SetWindowLongPtrW
#define SetWindowsHook SetWindowsHookW
#define SetWindowsHookEx SetWindowsHookExW
#define SetWindowText SetWindowTextW
#define SystemParametersInfo SystemParametersInfoW
#define TabbedTextOut TabbedTextOutW
#define TranslateAccelerator TranslateAcceleratorW
#define UnregisterClass UnregisterClassW
#define VkKeyScan VkKeyScanW
#define VkKeyScanEx VkKeyScanExW
#define WinHelp WinHelpW
#define wsprintf wsprintfW
#define wvsprintf wvsprintfW
#ifndef NOGDI
typedef ICONMETRICSW ICONMETRICS,*LPICONMETRICS;
typedef NONCLIENTMETRICSW NONCLIENTMETRICS,*LPNONCLIENTMETRICS;
#define ChangeDisplaySettings ChangeDisplaySettingsW
#define CreateDesktop CreateDesktopW
#define EnumDisplaySettings EnumDisplaySettingsW
#define EnumDisplayDevices  EnumDisplayDevicesW
#endif /* NOGDI */
#else /* UNICODE */
#define EDITWORDBREAKPROC EDITWORDBREAKPROCA
#define PROPENUMPROC PROPENUMPROCA
#define PROPENUMPROCEX PROPENUMPROCEXA
#define DEKSTOPENUMPROC DEKSTOPENUMPROCA
#define WINSTAENUMPROC WINSTAENUMPROCA
#define PROPENUMPROC PROPENUMPROCA
#define PROPENUMPROCEX PROPENUMPROCEXA
#define MAKEINTRESOURCE MAKEINTRESOURCEA
typedef WNDCLASSA WNDCLASS,*LPWNDCLASS,*PWNDCLASS;
typedef WNDCLASSEXA WNDCLASSEX,*LPWNDCLASSEX,*PWNDCLASSEX;
typedef MENUITEMINFOA MENUITEMINFO,*LPMENUITEMINFO;
typedef LPCMENUITEMINFOA LPCMENUITEMINFO;
typedef MSGBOXPARAMSA MSGBOXPARAMS,*PMSGBOXPARAMS,*LPMSGBOXPARAMS;
typedef HIGHCONTRASTA HIGHCONTRAST,*LPHIGHCONTRAST;
typedef SERIALKEYSA SERIALKEYS,*LPSERIALKEYS;
typedef SOUNDSENTRYA SOUNDSENTRY,*LPSOUNDSENTRY;
typedef CREATESTRUCTA CREATESTRUCT, *LPCREATESTRUCT;
typedef CBT_CREATEWNDA CBT_CREATEWND, *LPCBT_CREATEWND;
typedef MDICREATESTRUCTA MDICREATESTRUCT,*LPMDICREATESTRUCT;
typedef MULTIKEYHELPA MULTIKEYHELP,*PMULTIKEYHELP,*LPMULTIKEYHELP;
typedef MONITORINFOEXA MONITORINFOEX, *LPMONITORINFOEX;
#define AppendMenu AppendMenuA
#define CallWindowProc CallWindowProcA
#define ChangeMenu ChangeMenuA
#define CharLower CharLowerA
#define CharLowerBuff CharLowerBuffA
#define CharNext CharNextA
#define CharNextEx CharNextExA
#define CharPrev CharPrevA
#define CharPrevEx CharPrevExA
#define CharToOem CharToOemA
#define CharToOemBuff CharToOemBuffA
#define CharUpper CharUpperA
#define CharUpperBuff CharUpperBuffA
#define CopyAcceleratorTable CopyAcceleratorTableA
#define CreateAcceleratorTable CreateAcceleratorTableA
#define CreateDialog CreateDialogA
#define CreateDialogIndirect CreateDialogIndirectA
#define CreateDialogIndirectParam CreateDialogIndirectParamA
#define CreateDialogParam CreateDialogParamA
#define CreateMDIWindow CreateMDIWindowA
#define CreateWindow CreateWindowA
#define CreateWindowEx CreateWindowExA
#define CreateWindowStation CreateWindowStationA
#define DefDlgProc DefDlgProcA
#define DefFrameProc DefFrameProcA
#define DefMDIChildProc DefMDIChildProcA
#define DefWindowProc DefWindowProcA
#define DialogBox DialogBoxA
#define DialogBoxIndirect DialogBoxIndirectA
#define DialogBoxIndirectParam DialogBoxIndirectParamA
#define DialogBoxParam DialogBoxParamA
#define DispatchMessage DispatchMessageA
#define DlgDirList DlgDirListA
#define DlgDirListComboBox DlgDirListComboBoxA
#define DlgDirSelectComboBoxEx DlgDirSelectComboBoxExA
#define DlgDirSelectEx DlgDirSelectExA
#define DrawState DrawStateA
#define DrawText DrawTextA
#define DrawTextEx DrawTextExA
#define EnumDesktops EnumDesktopsA
#define EnumProps EnumPropsA
#define EnumPropsEx EnumPropsExA
#define EnumWindowStations EnumWindowStationsA
#define FindWindow FindWindowA
#define FindWindowEx FindWindowExA
#define GetClassInfo GetClassInfoA
#define GetClassInfoEx GetClassInfoExA
#define GetClassLong GetClassLongA
#define GetClassName GetClassNameA
#define GetClipboardFormatName GetClipboardFormatNameA
#define GetDlgItemText GetDlgItemTextA
#define GetKeyboardLayoutName GetKeyboardLayoutNameA
#define GetKeyNameText GetKeyNameTextA
#define GetMenuItemInfo GetMenuItemInfoA
#define GetMenuString GetMenuStringA
#define GetMessage GetMessageA
#define GetMonitorInfo  GetMonitorInfoA
#define GetProp GetPropA
#define GetTabbedTextExtent GetTabbedTextExtentA
#define GetUserObjectInformation GetUserObjectInformationA
#define GetWindowLong GetWindowLongA
#define GetWindowLongPtr GetWindowLongPtrA
#define GetWindowText GetWindowTextA
#define GetWindowTextLength GetWindowTextLengthA
#define GetAltTabInfo GetAltTabInfoA
#define GetWindowModuleFileName GetWindowModuleFileNameA
#define GrayString GrayStringA
#define InsertMenu InsertMenuA
#define InsertMenuItem InsertMenuItemA
#define IsCharAlpha IsCharAlphaA
#define IsCharAlphaNumeric IsCharAlphaNumericA
#define IsCharLower IsCharLowerA
#define IsCharUpper IsCharUpperA
#define IsDialogMessage IsDialogMessageA
#define LoadAccelerators LoadAcceleratorsA
#define LoadBitmap LoadBitmapA
#define LoadCursor LoadCursorA
#define LoadIcon LoadIconA
#define LoadCursorFromFile LoadCursorFromFileA
#define LoadImage LoadImageA
#define LoadKeyboardLayout LoadKeyboardLayoutA
#define LoadMenu LoadMenuA
#define LoadMenuIndirect LoadMenuIndirectA
#define LoadString LoadStringA
#define MapVirtualKey MapVirtualKeyA
#define MapVirtualKeyEx MapVirtualKeyExA
#define MessageBox MessageBoxA
#define MessageBoxEx MessageBoxExA
#define MessageBoxIndirect MessageBoxIndirectA
#define ModifyMenu ModifyMenuA
#define OemToChar OemToCharA
#define OemToCharBuff OemToCharBuffA
#define OpenDesktop OpenDesktopA
#define OpenWindowStation OpenWindowStationA
#define PeekMessage PeekMessageA
#define PostAppMessage PostAppMessageA
#define PostMessage PostMessageA
#define PostThreadMessage PostThreadMessageA
#define RegisterClass RegisterClassA
#define RegisterClassEx RegisterClassExA
#define RegisterClipboardFormat RegisterClipboardFormatA
#define RegisterWindowMessage RegisterWindowMessageA
#define RemoveProp RemovePropA
#define SendDlgItemMessage SendDlgItemMessageA
#define SendMessage SendMessageA
#define SendMessageCallback SendMessageCallbackA
#define SendMessageTimeout SendMessageTimeoutA
#define SendNotifyMessage SendNotifyMessageA
#define SetClassLong SetClassLongA
#define SetDlgItemText SetDlgItemTextA
#define SetMenuItemInfo SetMenuItemInfoA
#define SetProp SetPropA
#define SetUserObjectInformation SetUserObjectInformationA
#define SetWindowLong SetWindowLongA
#define SetWindowLongPtr SetWindowLongPtrA
#define SetWindowsHook SetWindowsHookA
#define SetWindowsHookEx SetWindowsHookExA
#define SetWindowText SetWindowTextA
#define SystemParametersInfo SystemParametersInfoA
#define TabbedTextOut TabbedTextOutA
#define TranslateAccelerator TranslateAcceleratorA
#define UnregisterClass UnregisterClassA
#define VkKeyScan VkKeyScanA
#define VkKeyScanEx VkKeyScanExA
#define WinHelp WinHelpA
#define wsprintf wsprintfA
#define wvsprintf wvsprintfA
#ifndef NOGDI
typedef ICONMETRICSA ICONMETRICS,*LPICONMETRICS;
typedef NONCLIENTMETRICSA NONCLIENTMETRICS,*LPNONCLIENTMETRICS;
#define ChangeDisplaySettings ChangeDisplaySettingsA
#define CreateDesktop CreateDesktopA
#define EnumDisplaySettings EnumDisplaySettingsA
#define EnumDisplayDevices  EnumDisplayDevicesA
#endif /* NOGDI */
#endif /* UNICODE */
#endif /* RC_INVOKED */
#ifdef __cplusplus
}
#endif
#endif /* _WINUSER_H */
