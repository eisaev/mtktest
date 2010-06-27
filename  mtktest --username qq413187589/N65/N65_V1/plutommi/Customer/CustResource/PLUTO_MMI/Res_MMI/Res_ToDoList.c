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
/**
 *	Copyright Notice
 *	?2002 - 2003, Pixtel Communications, Inc., 1489 43rd Ave. W.,
 *	Vancouver, B.C. V6M 4K8 Canada. All Rights Reserved.
 *  (It is illegal to remove this copyright notice from this software or any
 *  portion of it)
 */

/**************************************************************

	FILENAME	: Res_.c

  	PURPOSE		: Populate Resource for 

	REMARKS		: nil

	AUTHOR		: Yogesh

	DATE		: August-11-2003

**************************************************************/
#include "MMI_features.h"

#include "MMIDataType.h"
#include "CustomCfg.h"


#ifdef FIRST_PASS
#include "BuildCfg.h"
#endif

#include "ToDoListResDef.h"
#include "vObjectsResDef.h"

#ifdef DEVELOPER_BUILD_FIRST_PASS
#include "PopulateRes.h"

/**************************************************************

	FUNCTION NAME		: PopulateToDoList()

  	PURPOSE				: Populate the To Do List

	INPUT PARAMETERS	: void

	OUTPUT PARAMETERS	: nil

	RETURNS				: void

	REMARKS				: 

**************************************************************/

void PopulateToDoList(void)
{
#ifdef __MMI_TODOLIST__

	ADD_APPLICATION_STRING2(STR_TODO_LIST_EMPTY_NOTE_MSG,"Empty Note","Message to User:- empty note");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_DELETE_ONE_MSG,"Deleting","Message to User:- deleting ");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_DELETE_ALL_MSG,"Deleting All","Message to User:- deleta all ");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_WRONG_DATE_MSG,"Enter Correct Date"," Notification Msg fro date ");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_LIST_FULL_MSG,"Task List Full!"," Notification Msg task list is full ");

	
	ADD_APPLICATION_STRING2(STR_TODO_LIST_CAP_TASK_LIST ,"Task List","Title String for To Do List screen");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_CAP_OPTION ,"Option","Option Screen for a Task");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_CAP_VIEW ,"View"," View Screen for a Task");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_CAP_NOTE ,"Note"," View Screen for a Task");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_CAP_REMINDER ,"Reminder"," Reminder Screen for a Task");

	ADD_APPLICATION_STRING2(STR_TODO_LIST_TIME ,"Time","To Do List string for Time");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_LSK_EDIT ,"Edit","LSK String for To Do List");


	// MTK modified, Max: to remove extra blank 1118
	ADD_APPLICATION_STRING2(STR_TODO_LIST_EMPTY,"<Empty>"," Empty string to show on Task List");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_VIEW,"View Task"," View a to do list ");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_ADD,"Add Task"," Add a to do list ");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_EDIT,"Edit Task","Edit a to do list");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_DELETE,"Delete Task"," Delete a to do list");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_DELETE_ALL,"Delete All"," Delete all to do list");
	// MTK end

	ADD_APPLICATION_STRING2(STR_TODO_LIST_SAVE,"Save"," View a to do list ");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_USE_TEMPLATE,"Templates"," View a to do list ");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_INPUT_METHOD ,"Input Method","Note Option ");

	ADD_APPLICATION_STRING2(STR_TODO_LIST_DELETE_ONE_TASK_QUERY,"Delete","Querry to User");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_DELETE_ALL_TASK_QUERY,"Delete All","Querry to User");
	ADD_APPLICATION_STRING2(STR_TODO_LIST_SAVE_TASK_QUERY,"Save","Querry to User");
	
	ADD_APPLICATION_STRING2(STR_TODO_TEMPLATE_1,"Have a date with somebody","To do list Template");
	ADD_APPLICATION_STRING2(STR_TODO_TEMPLATE_2,"Meeting on Tue","To do list Template");
	ADD_APPLICATION_STRING2(STR_TODO_TEMPLATE_3,"Make a phone call to somebody","To do list Template");
	ADD_APPLICATION_STRING2(STR_TODO_TEMPLATE_4,"Go shopping with somebody","To do list Template");
	ADD_APPLICATION_STRING2(STR_TODO_TEMPLATE_5,"Send mail to somebody","To do list Template");
	ADD_APPLICATION_STRING2(STR_TODO_TEMPLATE_6,"Remember to bring something","To do list Template");
	ADD_APPLICATION_STRING2(STR_TODO_TEMPLATE_7,"Buy something","To do list Template");
	ADD_APPLICATION_STRING2(STR_TODO_TEMPLATE_8,"Take child at 12:00","To do list Template");
	ADD_APPLICATION_STRING2(STR_TODO_TEMPLATE_9,"Somebody's birthday","To do list Template");
	ADD_APPLICATION_STRING2(STR_TODO_TEMPLATE_10,"Wedding anniversary","To do list Template");

	ADD_APPLICATION_STRING2(STR_TODO_SUN,"Sun","Week Day");
	ADD_APPLICATION_STRING2(STR_TODO_MON,"Mon","Week Day");
	ADD_APPLICATION_STRING2(STR_TODO_TUE,"Tue","Week Day");
	ADD_APPLICATION_STRING2(STR_TODO_WED,"Wed","Week Day");
	ADD_APPLICATION_STRING2(STR_TODO_THU,"Thu","Week Day");
	ADD_APPLICATION_STRING2(STR_TODO_FRI,"Fri","Week Day");
	ADD_APPLICATION_STRING2(STR_TODO_SAT,"Sat","Week Day");


	ADD_APPLICATION_STRING2(STR_TODO_ALARM,"Alarm","Inline Edit Screen Item Caption");
	ADD_APPLICATION_STRING2(STR_TODO_NOTE,"Note","Inline Edit Screen Item Caption");
	ADD_APPLICATION_STRING2(STR_TODO_REPEAT,"Repeat","Inline Edit Screen Item Caption");
	ADD_APPLICATION_STRING2(CAL_STRING_VIEW,"View tasks","Menu Item.");
    
	ADD_APPLICATION_STRING2(STR_TODO_START_TIME,"Starts","Starts");
	ADD_APPLICATION_STRING2(STR_TODO_END_TIME,"Ends","Ends");	
	
#ifdef __MMI_ADVANCED_TODO__
    ADD_APPLICATION_STRING2(STR_TODO_MEETING,"Meeting","Menu Item.");
    ADD_APPLICATION_STRING2(STR_TODO_COURSE,"Course","Menu Item.");
    ADD_APPLICATION_STRING2(STR_TODO_DATE,"Date","Menu Item.");
    ADD_APPLICATION_STRING2(STR_TODO_CALL,"Call","Menu Item.");
    ADD_APPLICATION_STRING2(STR_TODO_ANNIVERSARY,"Anniversary","Menu Item.");
    ADD_APPLICATION_STRING2(STR_TODO_REMINDER,"Reminder","Menu Item.");
    ADD_APPLICATION_STRING2(STR_TODO_SELECT_TASK_TYPE,"Select Task Type","Menu Item.");
    ADD_APPLICATION_STRING2(STR_TODO_ALARM_BEFORE_5_MINS,"Before 5 Mins","Menu Item.");
    ADD_APPLICATION_STRING2(STR_TODO_ALARM_BEFORE_15_MINS,"Before 15 Mins","Menu Item.");
    ADD_APPLICATION_STRING2(STR_TODO_ALARM_BEFORE_30_MINS,"Before 30 Mins","Menu Item.");
    ADD_APPLICATION_STRING2(STR_TODO_LOCATION,"Location","Menu Item.");
    ADD_APPLICATION_STRING2(STR_TODO_PRIORITY,"Priority","Menu Item.");
    ADD_APPLICATION_STRING2(STR_TODO_PRIORITY_LOW,"Low","Menu Item.");
    ADD_APPLICATION_STRING2(STR_TODO_PRIORITY_MEDIUM,"Medium","Menu Item.");
    ADD_APPLICATION_STRING2(STR_TODO_PRIORITY_HIGH,"High","Menu Item.");
    ADD_APPLICATION_STRING2(STR_TODO_SET_REPEAT_ONCE,"Repeat should be Once","Menu Item.");    

#endif    
	
#if !defined (__MMI_MAINLCD_128X128__)
	ADD_APPLICATION_STRING2(STR_TODO_ALARM_OFF_DONE,"Done. Alarm is off.","Done. Alarm is turned off .");	
    ADD_APPLICATION_STRING2(STR_TODO_INVALID_END_TIME,"Done. Invalid EndTime.","Done. Invalid EndTime.");	
#endif

ADD_APPLICATION_IMAGE2(IMG_TODO_LIST_DATE,CUST_IMG_PATH"\\\\MainLCD\\\\ToDoList\\\\OT_CALEN.PBM","image of Date");
ADD_APPLICATION_IMAGE2(IMG_TODO_LIST_TIME,CUST_IMG_PATH"\\\\MainLCD\\\\ToDoList\\\\OT_TIME.PBM","image of Time");
ADD_APPLICATION_IMAGE2(IMG_TODO_LIST_NOTE,CUST_IMG_PATH"\\\\MainLCD\\\\ToDoList\\\\OT_NOTE.PBM","image of Note");
ADD_APPLICATION_IMAGE2(IMG_TODO_LIST_ALARM,CUST_IMG_PATH"\\\\MainLCD\\\\ToDoList\\\\OT_ALARM.PBM","image of Alarm");
ADD_APPLICATION_IMAGE2(IMG_TODO_LIST_REPEAT,CUST_IMG_PATH"\\\\MainLCD\\\\ToDoList\\\\OT_REPT.PBM","image of Repeat");
ADD_APPLICATION_IMAGE2(IMG_TODO_ICON,CUST_IMG_PATH"\\\\MainLCD\\\\ToDoList\\\\OT_ToDo.PBM","image of Repeat");

	ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_TASK_OPTION_1,0,
			#if defined(__MMI_VCALENDAR__)
					6,
			#else
					5,
			#endif
					MITEM_TODO_LIST_VIEW,
					MITEM_TODO_LIST_ADD,
					MITEM_TODO_LIST_EDIT,
					MITEM_TODO_LIST_DELETE,
					MITEM_TODO_LIST_DELETE_ALL,
			#if defined(__MMI_VCALENDAR__)	
					MENU_VCLNDR_FORWARD,
			#endif
					SHOW, NONMOVEABLE, DISP_LIST,STR_GLOBAL_OPTIONS,0));
			
		
	ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_TASK_OPTION_2,0,
			#if defined(__MMI_VCALENDAR__)
					5,
			#else
					4,
			#endif
					MITEM_TODO_LIST_VIEW,
					MITEM_TODO_LIST_EDIT,
					MITEM_TODO_LIST_DELETE,
					MITEM_TODO_LIST_DELETE_ALL,
			#if defined(__MMI_VCALENDAR__)	
					MENU_VCLNDR_FORWARD,
			#endif
					SHOW, NONMOVEABLE, DISP_LIST,STR_GLOBAL_OPTIONS,0));

	ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_VIEW,MITEM_TODO_LIST_TASK_OPTION_1,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_GLOBAL_VIEW,0));

	ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_ADD,MITEM_TODO_LIST_TASK_OPTION_1,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_GLOBAL_ADD,0));

	ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_EDIT,MITEM_TODO_LIST_TASK_OPTION_1,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_GLOBAL_EDIT,0));

	ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_DELETE,MITEM_TODO_LIST_TASK_OPTION_1,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_GLOBAL_DELETE,0));

	ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_DELETE_ALL,MITEM_TODO_LIST_TASK_OPTION_1,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_GLOBAL_DELETE_ALL,0));	

	ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_NOTE_OPTION,0,3,
		MITEM_TODO_LIST_SAVE,
		MITEM_TODO_LIST_USE_TEMPLATE,
		MITEM_TODO_LIST_BOPOMOFO,
		SHOW, NONMOVEABLE, DISP_LIST,STR_GLOBAL_OPTIONS,0));
		
	ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_SAVE,MITEM_TODO_LIST_NOTE_OPTION,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_TODO_LIST_SAVE,0));

	ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_USE_TEMPLATE,MITEM_TODO_LIST_NOTE_OPTION,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_GLOBAL_USE_TEMPLATE,0));

	ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_BOPOMOFO,MITEM_TODO_LIST_NOTE_OPTION,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_TODO_LIST_INPUT_METHOD,0));
#ifdef __MMI_ADVANCED_TODO__
    ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_TASK_TYPE,0,6,
             MITEM_TODO_LIST_REMINDER,
		MITEM_TODO_LIST_MEETING,
		MITEM_TODO_LIST_COURSE,
		MITEM_TODO_LIST_DATE,
		MITEM_TODO_LIST_CALL,
		MITEM_TODO_LIST_ANNIVERSARY,
		SHOW, NONMOVEABLE, DISP_LIST,STR_TODO_SELECT_TASK_TYPE,0));

    ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_MEETING,MITEM_TODO_LIST_TASK_TYPE,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_TODO_MEETING,0));
    
    ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_COURSE,MITEM_TODO_LIST_TASK_TYPE,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_TODO_COURSE,0));
    
    ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_DATE,MITEM_TODO_LIST_TASK_TYPE,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_TODO_DATE,0));
    
    ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_CALL,MITEM_TODO_LIST_TASK_TYPE,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_TODO_CALL,0));
    
    ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_ANNIVERSARY,MITEM_TODO_LIST_TASK_TYPE,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_TODO_ANNIVERSARY,0));
    
    ADD_APPLICATION_MENUITEM((MITEM_TODO_LIST_REMINDER,MITEM_TODO_LIST_TASK_TYPE,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_TODO_REMINDER,0));
#endif
#endif
#ifdef __MMI_BIRTHDAY_REMINDER__

    ADD_APPLICATION_STRING2(STR_BIRTHDAY_OPTION,"Birthday Option","Menu Item.");
    ADD_APPLICATION_STRING2(STR_BIRTHDAY_OPTION_MAKE_CALL,"Make Call","Menu Item.");
    ADD_APPLICATION_STRING2(STR_BIRTHDAY_OPTION_SEND_SMS,"Send SMS","Menu Item.");
    ADD_APPLICATION_STRING2(STR_BIRTHDAY_OPTION_SEND_MMS,"Send MMS","Menu Item.");
    ADD_APPLICATION_STRING2(STR_HAPPY_BIRTHDAY,"Happy Birthday!","Menu Item.");
    ADD_APPLICATION_STRING2(STR_BIRTHDAY_EMPTY_PHONE_NUMBER,"Empty Phone Number","Menu Item.");
    
#ifdef MMS_SUPPORT    
    ADD_APPLICATION_MENUITEM((MITEM_BIRTHDAY_OPTION,0,4,
                MITEM_BIRTHDAY_OPTION_MAKE_CALL,
                MITEM_BIRTHDAY_OPTION_SEND_SMS,
                MITEM_BIRTHDAY_OPTION_SEND_MMS,
                MITEM_TODO_LIST_ADD,
                SHOW, NONMOVEABLE, DISP_LIST,STR_BIRTHDAY_OPTION,0));

    ADD_APPLICATION_MENUITEM((MITEM_BIRTHDAY_OPTION_SEND_MMS,MITEM_BIRTHDAY_OPTION,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_BIRTHDAY_OPTION_SEND_MMS,0));    
#else
        ADD_APPLICATION_MENUITEM((MITEM_BIRTHDAY_OPTION,0,3,
                MITEM_BIRTHDAY_OPTION_MAKE_CALL,
                MITEM_BIRTHDAY_OPTION_SEND_SMS,
                MITEM_TODO_LIST_ADD,
                SHOW, NONMOVEABLE, DISP_LIST,STR_BIRTHDAY_OPTION,0));
#endif
    ADD_APPLICATION_MENUITEM((MITEM_BIRTHDAY_NO_SIM_OPTION,0,1,
                MITEM_TODO_LIST_ADD,
                SHOW, NONMOVEABLE, DISP_LIST,STR_BIRTHDAY_OPTION,0));

    ADD_APPLICATION_MENUITEM((MITEM_BIRTHDAY_OPTION_MAKE_CALL,MITEM_BIRTHDAY_OPTION,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_BIRTHDAY_OPTION_MAKE_CALL,0));

    ADD_APPLICATION_MENUITEM((MITEM_BIRTHDAY_OPTION_SEND_SMS,MITEM_BIRTHDAY_OPTION,0,
		SHOW, MOVEABLEWITHINPARENT, DISP_LIST,STR_BIRTHDAY_OPTION_SEND_SMS,0));

#endif

#ifdef __MMI_ADVANCED_TODO__
ADD_APPLICATION_IMAGE2 (IMG_TODO_LIST_ICON_CALL, CUST_IMG_PATH"\\\\MainLCD\\\\ToDoList\\\\icon\\\\call.pbm","calendar title left arrow");
ADD_APPLICATION_IMAGE2 (IMG_TODO_LIST_ICON_ANNIVERSIRY, CUST_IMG_PATH"\\\\MainLCD\\\\ToDoList\\\\icon\\\\celebrate.pbm","calendar title left arrow");
ADD_APPLICATION_IMAGE2 (IMG_TODO_LIST_ICON_COURSE, CUST_IMG_PATH"\\\\MainLCD\\\\ToDoList\\\\icon\\\\course.pbm","calendar title left arrow");
ADD_APPLICATION_IMAGE2 (IMG_TODO_LIST_ICON_DATE, CUST_IMG_PATH"\\\\MainLCD\\\\ToDoList\\\\icon\\\\date.pbm","calendar title left arrow");
ADD_APPLICATION_IMAGE2 (IMG_TODO_LIST_ICON_MEETING, CUST_IMG_PATH"\\\\MainLCD\\\\ToDoList\\\\icon\\\\meeting.pbm","calendar title left arrow");
ADD_APPLICATION_IMAGE2 (IMG_TODO_LIST_ICON_REMINDER, CUST_IMG_PATH"\\\\MainLCD\\\\ToDoList\\\\icon\\\\reminder.pbm","calendar title left arrow");
ADD_APPLICATION_IMAGE2 (IMG_TODO_LIST_ICON_ALARM, CUST_IMG_PATH"\\\\MainLCD\\\\ToDoList\\\\daily\\\\alarm.bmp","calendar title left arrow");
ADD_APPLICATION_IMAGE2 (IMG_TODO_LIST_ICON_LOCATION, CUST_IMG_PATH"\\\\MainLCD\\\\ToDoList\\\OT_LOCATION.pbm","calendar title left arrow");
ADD_APPLICATION_IMAGE2 (IMG_TODO_LIST_ICON_PRIORITY, CUST_IMG_PATH"\\\\MainLCD\\\\ToDoList\\\\\OT_PRIORITY.pbm","calendar title left arrow");

#ifdef __MMI_BIRTHDAY_REMINDER__
ADD_APPLICATION_IMAGE2 (IMG_TODO_LIST_BIRTHDAY_REMINDER, CUST_IMG_PATH"\\\\MainLCD\\\\ToDoList\\\\icon\\\\birthday.pbm","calendar title left arrow");
#endif

#endif
}

#endif


