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
 *  CustThemesRes.h
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  
 *
 * Author:
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

/**
 * Copyright Notice
 * ?2002 - 2003, Pixtel Communications, Inc., 1489 43rd Ave. W.,
 * Vancouver, B.C. V6M 4K8 Canada. All Rights Reserved.
 *  (It is illegal to remove this copyright notice from this software or any
 *  portion of it)
 */
/**************************************************************
   FILENAME : CustThemesRes.h

      PURPOSE     : To define Common Structures used by the UI Elements and Cutomization Tool 
              for Customizing Themes

   REMARKS     : nil

   AUTHOR      : Yogesh

   DATE     : 01thSept 2003.

   Copyright (c) 2002 All rights reserved by Pixtel Communications
*************************************************************/

#ifndef _PIXCOM_CUSTTHEMESRES_H
#define _PIXCOM_CUSTTHEMESRES_H

/* JL #include "MMIDataType.h" */
#include "gui_data_types.h"

#define MAX_COMPONENTS    1000
#define MAX_THEME_COMP_NAME_SIZE 55

typedef enum
{
    THEME_COMP_FA,
    THEME_COMP_COLOR,
    THEME_COMP_GRADIENT_COLOR
} THEME_COMP_TYPE;

typedef struct _gradient_color
{
    color *c;   /* List of colors in the gradient   */
    U8 *p;      /* Percentage of each color      */
    U8 n;       /* Number of colors in the list  */
} gradient_color;

typedef struct _UI_filled_area
{
    U32 flags;
    PU8 b;
    gradient_color *gc;
    color c;
    color ac;   /* alternate color used for hatch fills   */
    color border_color;
    color shadow_color;
    UI_transparent_color_type transparent_color;
} UI_filled_area;

typedef struct _MMI_theme
{
    /* Multitap area theme */
    UI_filled_area  *multitap_filler;
    /* Editor area theme */
    UI_filled_area  *inputbox_filler;

    /* Back ground filler of scrollbar */
    UI_filled_area  *scrollbar_background_filler;
    /* Indicator filler of scrollbar */
    UI_filled_area  *scrollbar_indicator_filler;

    /* Back ground filler of title */
    UI_filled_area  *title_filler;

    /* List menu background filler */
    UI_filled_area  *list_background_filler;
    /* Normal list menu item background filler */
    UI_filled_area  *list_normal_item_filler;
    /* Highlighted list menu item background filler */
    UI_filled_area  *list_selected_item_filler;
    /* Disabled list menu item background filler */
    UI_filled_area  *list_disabled_item_filler;

    /* Matrix menu background filler */
    UI_filled_area  *matrix_background_filler;
    /* Normal matrix menu item background filler */
    UI_filled_area  *matrix_normal_item_filler;
    /* Highlighted matrix menu item background filler */
    UI_filled_area  *matrix_selected_item_filler;
    /* Disabled matrix menu item background filler */
    UI_filled_area  *matrix_disabled_item_filler;

    UI_filled_area  *formatted_inputbox_normal_filler;
    UI_filled_area  *formatted_inputbox_selected_filler;

    /* Main menu background filler for list and matrix menu */
    UI_filled_area  *main_menu_background_filler;

    /* Normal list main menu item background filler */
    UI_filled_area  *list_main_menu_normal_item_filler;
    /* Highlighted list main menu item background filler */
    UI_filled_area  *list_main_menu_selected_item_filler;
    /* Disabled list main menu item background filler */
    UI_filled_area  *list_main_menu_disabled_item_filler;

    /* Normal matrix main menu item background filler */
    UI_filled_area  *matrix_main_menu_normal_item_filler;
    /* Highlighted matrix main menu item background filler */
    UI_filled_area  *matrix_main_menu_selected_item_filler;
    /* Disabled matrix main menu item background filler */
    UI_filled_area  *matrix_main_menu_disabled_item_filler;

    /* General background filler, background of text and picture, usually is transparent color. 
    preview just an example. */
    UI_filled_area  *general_background_filler;

    UI_filled_area  *popup_description_background_filler;

    /* The theme for memu list seted by Inline Screen. It's the similar to the list filler, 
    such as list_background_filler */
    UI_filled_area  *inline_list_background_filler;
    UI_filled_area  *inline_list_normal_item_filler;
    UI_filled_area  *inline_list_selected_item_filler;
    UI_filled_area  *inline_list_disabled_item_filler;

    /* The filler for inline singleline editor without border. At current, no one use it. */
    UI_filled_area  *inline_edit_focussed_filler;
    UI_filled_area  *inline_edit_unfocussed_filler;
    UI_filled_area  *inline_edit_noboundary_filler;

    /* Pin input editor filler */
    UI_filled_area  *PIN_inputbox_background_filler;
    UI_filled_area  *PIN_screen_background_filler;
    /* Data time background */
    UI_filled_area  *network_screen_background_filler;
    /* Not used */
    UI_filled_area  *aphorism_screen_background_filler;
    /* Background filler of call manager screen */
    UI_filled_area  *CM_screen_background_filler;
    /* Not used */
    UI_filled_area  *progress_screen_background_filler;
    /* The dialer input box background filler */
    UI_filled_area  *dialer_inputbox_background_filler;

    /* background filler of key when it is selected. */
    UI_filled_area  *virtual_keyboard_key_down_filler;

    /* Not used */
    UI_filled_area  *alarm_background_filler;

    /* Menu background filler of small list screen */
    UI_filled_area  *small_list_menu_normal_filler;
    /* Border filler of small list screen */
    UI_filled_area  *small_list_screen_border_filler;
    color           *UI_black_color;
    color           *UI_white_color;

    color           *lite_disp_scr_bg_color;

    /* Text color of normal left softkey */
    color           *LSK_up_text_color;
    /* Text color of down left softkey */
    color           *LSK_down_text_color;
    /* Text color of disabled left softkey */
    color           *LSK_disabled_text_color;
    /* Text color of normal right softkey */
    color           *RSK_up_text_color;
    /* Text color of down right softkey */
    color           *RSK_down_text_color;
    /* Text color of disabled right  softkey */
    color           *RSK_disabled_text_color;

    /* Multitap area theme */
    color           *multitap_selector_color;
    color           *multitap_normal_text_color;
    color           *multitap_selected_text_color;

    /* Editor area theme */
    color           *inputbox_normal_text_color;
    color           *inputbox_selected_text_color;
    color           *inputbox_selector_color;
    color           *inputbox_cursor_color;

    /* Text color in title */
    color           *title_text_color;
    /* Text border color in title */
    color           *title_text_border_color;
    /* Text color of shortcut */
    color           *title_shortcut_text_color;

    /* Text color of the normal (unhighlited) list menu item */
    color           *list_normal_text_color;
    /* Text color of the highlighted list menu item */
    color           *list_selected_text_color;
    /* Text color of the disabled list menu item */
    color           *list_disabled_text_color;

    /* Text color of the normal (unhighlited) matrix menu item */
    color           *matrix_normal_text_color;
    /* Text color of the highlighted matrix menu item */
    color           *matrix_selected_text_color;
    /* Text color of the disabled matrix menu item */
    color           *matrix_disabled_text_color;

    /* OBSOLETE */
    color           *menubar_index_background_color;
    /* OBSOLETE */
    color           *menubar_item_background_color;
    /* OBSOLETE */
    color           *menubar_index_text_color;
    /* OBSOLETE */
    color           *menubar_item_text_color;

    color           *drop_down_normal_text_color;
    color           *drop_down_disabled_text_color;
    color           *drop_down_focussed_text_color;

    /* Not used */
    color           *formatted_inputbox_selector_color;
    /* Not used */
    color           *formatted_inputbox_normal_text_color;
    /* Not used */
    color           *formatted_inputbox_disabled_text_color;
    /* Not used */
    color           *formatted_inputbox_selected_text_color;
    color           *formatted_inputbox_cursor_color;

    /* Text color of the normal (unhighlited) list menu item for category 14*/
    color           *list_main_menu_normal_text_color;
    /* Text color of the highlighted list menu item for category 14 */
    color           *list_main_menu_selected_text_color;
    /* Text color of the disabled list menu item for category 14 */
    color           *list_main_menu_disabled_text_color;

    /* Text color of the normal (unhighlited) matrix menu item for category 14 */
    color           *matrix_main_menu_normal_text_color;
    /* Text color of the highlighted matrix menu item for category 14 */
    color           *matrix_main_menu_selected_text_color;
    /* Text color of the disabled matrix menu item for category 14 */
    color           *matrix_main_menu_disabled_text_color;

    /* Text color of the normal (unhighlited) 3D circular menu item for category 14*/
    color           *circular_main_menu_normal_text_color;
    /* Text color of the highlighted 3D circular menu item for category 14 */
    color           *circular_main_menu_selected_text_color;
    /* Text color of the disabled 3D circular menu item for category 14 */
    color           *circular_main_menu_disabled_text_color;

    /* Popup background color */
    color           *popup_screen_background_color;
    color           *popup_screen_border_color;

    color           *popup_description_text_color;

    /* Call manager screen text color */
    color           *CM_screen_text_color;

    /* Call manager screen data Time background */
    color           *datetime_bar_background_color;
    color           *datetime_bar_duration_background_color;
    color           *datetime_bar_date_text_color;
    color           *datetime_bar_time_text_color;
    color           *datetime_bar_duration_text_color;
    /* AOC text color */
    color           *datetime_bar_AOC_text_color;

    /* UCE information bar color */
    color           *information_bar_color;
    color           *input_method_text_color;
    /* The message remaining length text color */
    color           *remaining_length_text_color;

    /* Inline single line editor text color */
    color           *inline_edit_focussed_text_color;
    /* Not used */
    color           *inline_edit_unfocussed_text_color;
    /* Inline single line editor selected text color */
    color           *inline_edit_selected_text_color;
    /* Inline single line editor selector color */
    color           *inline_edit_selector_color;
    /* Inline single line editor cursor color */
    color           *inline_edit_cursor_color;

    color           *inline_list_normal_text_color;
    color           *inline_list_selected_text_color;
    color           *inline_list_disabled_text_color;

    /* Pin input editor text color */
    color           *PIN_inputbox_normal_text_color;
    /* Pin input editor selected text color	 */
    color           *PIN_inputbox_selected_text_color;
    /* Pin input editor selector color */
    color           *PIN_inputbox_selector_color;
    /* Pin input editor cursor color */
    color           *PIN_inputbox_cursor_color;

    /* The dialer input box text color */
    color           *dialer_inputbox_normal_text_color;
    /* The dialer input box selected text color */
    color           *dialer_inputbox_selected_text_color;
    /* The dialer input box selector color */
    color           *dialer_inputbox_selector_color;
    /* The dialer input box corsor color */
    color           *dialer_inputbox_cursor_color;

    /* text color of key when it is selected */
    color           *virtual_keyboard_key_down_text_color;
    /* text color of key when it is not selected */
    color           *virtual_keyboard_key_up_text_color;
    /* text color of dead key when it is selected */
    color           *virtual_keyboard_dead_key_down_text_color;
    /* text color of dead key when it is not selected */
    color           *virtual_keyboard_dead_key_up_text_color;
    /* text color of display area */
    color           *virtual_keyboard_disp_area_text_color;

    /* Not used */
    color           *calculator_color;
    /* Not used */
    color           *alarm_text_color;

    /* Data color */
    color           *idle_scr_date_color; 
    /* Time color */
    color           *idle_scr_time_color;
    /* Data border color */
    color           *idle_scr_date_border_color; 
    /* Time border color */
    color           *idle_scr_time_border_color;
    /* Network name color */
    color           *idle_scr_network_name_color; 
    /* Network name border color */
    color           *idle_scr_network_name_border_color; 
    /* Network status color */
    color           *idle_scr_network_status_color; 
    /* Network status border color */
    color           *idle_scr_network_status_border_color; 
    /* Network extra color */
    color           *idle_scr_network_extra_color; 
    /* Net work extra border color */
    color           *idle_scr_network_extra_border_color; 

    UI_font_type    button_font;
    UI_font_type    multitap_font;
    UI_font_type    inputbox_font;
    /* Font of title */
    UI_font_type    window_title_font;
    /* Font of list menu */
    UI_font_type    list_menu_font;
    /* Font of matrix menu */
    UI_font_type    matrix_menu_font;
    /* OBSOLETE */
    UI_font_type    menu_bar_index_font;
    /* OBSOLETE */
    UI_font_type    menu_bar_item_font;
    /* Font of shortcut */
    UI_font_type    shortcut_indicator_font;
    /* Font of title */
    UI_font_type    title_text_font;
    /* Not Used */
    UI_font_type    drop_down_control_font;
    /* Font of list main menu */
    UI_font_type    list_main_menu_font;
    /* Font of matrix main menu */
    UI_font_type    matrix_main_menu_font;
    /* text font of custom key */
    UI_font_type    virtual_keyboard_font;

    /* width of vertical scroll bar or height of horizontal scroll bar */
    S32             scrollbar_size;

    /* Full opacity of screen */
    S32             bg_opacity_full;
    /* High opacity of screen (Not used) */
    S32             bg_opacity_high;
    /* Medium opacity of screen */
    S32             bg_opacity_medium;
    /* Low opacity of screen */
    S32             bg_opacity_low;

    /* highlight fillers */
    /*
     * Highlight dimension for menu items
     *
     * HIGHLIGHT WIDTH = LCD_WIDTH - UI_SCROLLBAR_WIDTH - GUI_MENUITEM_X1_GAP - GUI_MENUITEM_X2_GAP
     * HIGHLIGT HEIGHT: 
     *      Single-line     = MMI_MENUITEM_HEIGHT
     *      Two-line        = MMI_MENUITEM_HEIGHT * 2
     *      Multi-row       = MMI_MULTIROW_MENUITEM_HEIGHT
     *      Thick           = MMI_THICK_MENUITEM_HEIGHT = CAT425_MENUITEM_HEIGHT
     *      Thick with tab  = CAT425_MENUITEM_HEIGHT_NO_TAB
     *
     * If the menu item dimension does not fit perfectly, the highlight filler will be list_selected_item_filler.
     */
     /* Single-line highlighted menu item background filler */
    UI_filled_area  *menuitem_single_line_highlight_filler;
    /* Two-line highlighted menu item background filler */
    UI_filled_area  *menuitem_two_line_highlight_filler;
    /* Multi-row highlighted menu item background filler */
    UI_filled_area  *menuitem_multirow_highlight_filler;
    /* Thick highlighted menu item background filler */
    UI_filled_area  *menuitem_thick_highlight_filler;
    /* Thick with tab menu item background filler (Category 425 only)*/
    UI_filled_area  *menuitem_thick_with_tab_highlight_filler;
    /* Symbol picker highlight filler (Category 22 only)*/
    UI_filled_area  *symbol_picker_highlight_filler;
    /* Not used */
    UI_filled_area  *matrix_highlight_filler;

    /* full-screen background */
    /* Main menu background filler */
    UI_filled_area  *main_menu_bkg_filler;
    /* Sub menu background filler */
    UI_filled_area  *sub_menu_bkg_filler;
    /* Idle background filler */
    UI_filled_area  *idle_bkg_filler;

    /* popup background*/
    /* Popup background image */
    PU8             popup_bkg_image;
    color           *popup_text_color;

    /* weekday in idle */
    color           *idle_scr_weekday_color;
    color           *idle_scr_weekday_border_color;

    /* clock */    
    /* Clock component: text font of date text for digital clock in main lcd */
    UI_font_type    date_text_font;
    /* Clock component: text font of time text for digital clock in main lcd */
    UI_font_type    time_text_font;
    /* Clock component: text color of date text for digital clock in main lcd */
    color           *date_text_color;
    /* Clock component: text border color of date text for digital clock in main lcd */
    color           *date_text_border_color;
    /* Clock component: text color of time text for digital clock in main lcd */
    color           *time_text_color;
    /* Clock component: text border color of time text for digital clock in main lcd */
    color           *time_text_border_color;
    /* Clock component: text font of date text for digital clock in sub lcd */
    UI_font_type    date_text_font_sub_lcd;
    /* Clock component: text font of time text for digital clock in sub lcd */
    UI_font_type    time_text_font_sub_lcd;    
    /* Clock component: text color of date text for digital clock in sub lcd */
    color           *date_text_color_sub_lcd;
    /* Clock component: text border color of date text for digital clock in sub lcd */
    color           *date_text_border_color_sub_lcd;
    /* Clock component: text color of time text for digital clock in sub lcd */
    color           *time_text_color_sub_lcd;
    /* Clock component: text border color of time text for digital clock in sub lcd */
    color           *time_text_border_color_sub_lcd;
    /* Clock component: hour hand color of analog clock in main lcd */
    color           *analog_hand_hour_color;
    /* Clock component: minute hand color of analog clock in main lcd */
    color           *analog_hand_min_color;
    /* Clock component: Not used */
    color           *analog_axis_color;

    /* softkey */
    /* Text border color softkey((0, 0, 255)means no border) */
    color           *softkey_text_border_color;
    /* Back ground filler of softkey bar
                            128x128     128x160     176x220     240x320
    Wdith of softkey            50          50          70          74
    Height of softkey           18          19          20          36
    */
    UI_filled_area  *softkey_bar_bkg_filler;

    /* tab title */
    /* Filler of tab title */
    UI_filled_area  *tab_title_filler;
    /* Text color of tab title */
    color           *tab_title_text_color;
    /* Text border color of tab title */
    color           *tab_title_text_border_color;
    /* Shortcut color of tab title */
    color           *tab_title_shortcut_text_color;
    /* Font of tab title */
    UI_font_type    tab_title_text_font;

    /* IME */
    /* Under line color */
    color           *ime_underline_color;
    /* Indicator color */
    color           *ime_indicator_color;
    /* Focused area background color
            128X128  176X220 240X320
    Width       128      176     240
    Height      18       20      24
    */
    color           *ime_focused_background_color;
    /* Non-focused area background color
            128X128  176X220 240X320
    Width       128      176     240
    Height      14       16      20
    */
    color           *ime_background_color;
    /* Focused area border color */
    color           *ime_focused_border_color;
    /* Non-focused area background color */
    color           *ime_border_color;
    /* Text color  */
    color           *ime_text_color;
    /* Label color */
    color           *ime_lable_color;
    /* Highlighted text background color */
    color           *ime_hilite_color;
    /* Highlighted text color */
    color           *ime_hilite_text_color;
    /* Cursor color */
    color           *ime_cursor_color;
    /* Arrow color */
    color           *ime_arrow_color;
    UI_font_type    ime_text_font;
    UI_font_type    ime_lable_font;

    /* inline edit */
    UI_filled_area  *inline_list_default_text_item_filler;

    /* calendar */
    /* text color of title */
    color           *calendar_title_fg_color;
    /* text color of year select */
    color           *calendar_horizontal_fg_color;
    /* text border color of year select */
    color           *calendar_horizontal_border_color;
    /* text color of week number */
    color           *calendar_vertical_fg_color;
    /* text color of month select */
    color           *calendar_horizontal_string_fg_color;
    /* text color of week day */
    color           *calendar_current_color;
    /* cell background color of one task state */
    color           *calendar_one_task_color;
    /* cell background color of more tasks state */
    color           *calendar_more_task_color;
    /* cell background color of menstrual state */
    color           *calendar_menstrual_color;
    /* cell background color of PP state */
    color           *calendar_PP_color;
    /* cell background color of danger state */
    color           *calendar_danger_color;
    /* cell background color of invalid state */
    color           *calendar_invalid_color;
    /* text color of cell valid state */
    color           *calendar_valid_fg_color;
    /* text color of cell invalid state */
    color           *calendar_invalid_fg_color;
    /* cell background color of highlight state */
    color           *calendar_highlight_color;
    /* background color of info box */
    color           *calendar_infobox_bg_color;
    /* background color of info box item */
    color           *calendar_infobox_entry_bg_color;
    /* text color of info box */
    color           *calendar_infobox_fg_color;
    /* text font of info box */
    UI_font_type    calendar_infobox_font;
    /* text font of week day */
    UI_font_type    calendar_horizontal_string_font;
    /* text font of cell text */
    UI_font_type    calendar_cell_font;
    
    /* Status icon bar */
    /* Back ground filler of status icon bar */
    UI_filled_area  *status_icon_bar_filler;

    /* thick title */
    /* thick title back gournd filler */
    UI_filled_area  *thick_title_filler;
    /* text color of thick title */
    color           *thick_title_text_color;
    /* text border of thick title */
    color           *thick_title_text_border_color;
    /* shortcut color of thick title */
    color           *thick_title_shortcut_text_color;

    /* main menu icon */
    PU8             main_menu_icon1;
    PU8             main_menu_icon2;    
    PU8             main_menu_icon3;
    PU8             main_menu_icon4;    
    PU8             main_menu_icon5;
    PU8             main_menu_icon6;    
    PU8             main_menu_icon7;
    PU8             main_menu_icon8;    
    PU8             main_menu_icon9;
    PU8             main_menu_icon10;    
    PU8             main_menu_icon11;
    PU8             main_menu_icon12;    
    PU8             main_menu_icon13;
    PU8             main_menu_icon14;    
    PU8             main_menu_icon15;
    
    /* rotated screen */
    /* back ground filler of rotate screen*/
    UI_filled_area  *rotated_bkg_filler;
    /* back ground image of rotate popup screen */
    PU8             rotated_popup_bkg_image;
    /* filler of title in rotate screen */
    UI_filled_area  *rotated_title_filler;

    /* small screen */    
    /* filler of title in small screen */
    UI_filled_area  *small_screen_title_filler;

    /* tab bar */
    /* normal image for tab bar */
    UI_filled_area  *tab_normal_tab_filler;
    /* focused image for tab bar */
    UI_filled_area  *tab_highlight_tab_filler;
    /* focused image for tab bar */
    UI_filled_area  *tab_blink_tab_filler;

    /* main menu */
    /* high light filler of bidegree main menu */
    UI_filled_area  *main_menu_bidegree_tab_highlight_filler;
    /* high light image of matrix main menu */
    PU8             matrix_main_menu_highlight_image;
    /* background filler of bidegree main menu */
    UI_filled_area  *main_menu_bidegree_tab_background_filler;

    /* list menu */
    /* separator color in list menu */
    color           *list_separator_color;

    /* cascade menu */
    /* separator color of cascade menu */
    color           *cascade_menu_separator_color;
    /* normal text color of cascade menu */
    color           *cascade_menu_normal_text_color;
    /* selected text color of cascade menu */
    color           *cascade_menu_selected_text_color;
    /* disabled text color of cascade menu */
    color           *cascade_menu_disabled_text_color;
    /* border color of cascade menu */
    color           *cascade_menu_border_color;
    /* back ground filler of cascade menu */
    UI_filled_area  *cascade_menu_background_filler;
    /* high light filler of cascade menu */
    UI_filled_area  *cascade_menu_highlight_filler;
    /* left arrow image of cascade submenu */
    PU8             cascade_menu_submenu_left_arrow_image;
    /* right arrow image of cascade submenu */
    PU8             cascade_menu_submenu_right_arrow_image;

    /* check & radio */
    /* selected image for check */
    PU8             list_check_selected_image;
    /* unselected image for check */
    PU8             list_check_unselected_image;
    /* selected image for radio */
    PU8             list_radio_selected_image;
    /* unselected image for radio */
    PU8             list_radio_unselected_image;

    /* Inline edit */
    /* left arrow image in inline edit */
    PU8             inline_edit_left_arrow_image;
    /* right arrow image in inline edit */
    PU8             inline_edit_right_arrow_image;

    /* inputbox */
    /* color of base line in inputbox */
    color           *inputbox_base_line_color;
    /* color of control character base line in ems */
    color           *inputbox_ems_cr_base_line_color;
    
    /* dialing */
    /* text color in dialer inputbox */
    color           *dialer_inputbox_text_color;
    /* border color in dialer inputbox */
    color           *dialer_inputbox_text_border_color;
    /* back ground filler for dialer inputbox for touch screen */
    UI_filled_area  *dialer_inputbox_touch_background_filler;
        
    /* reserved for the future */
    /* left softkey down filler */
    UI_filled_area  *softkey_lsk_down_filler;
    /* left softkey up filler */
    UI_filled_area  *softkey_lsk_up_filler;       
    /* right softkey down filler */
    UI_filled_area  *softkey_rsk_down_filler;        
    /* right softkey up filler */
    UI_filled_area  *softkey_rsk_up_filler; 
} MMI_theme;

typedef struct __ThemesCompInfo
{
    void *themeComponent;
    U8 type;
    U8 themeCompName[MAX_THEME_COMP_NAME_SIZE];

} THEMES_COMPONENT_INFO;
typedef struct
{
#ifdef __MMI_DLT_CACHE_SUPPORT__
    U8 image_type;
#endif 
    U16 image_id;
    U32 image_offset;
#ifdef __MMI_DLT_CACHE_SUPPORT__
    PU8 image_cache_ptr;
#endif 
} theme_image_detail_struct;

typedef struct
{
    MMI_theme *theme;
    theme_image_detail_struct *theme_image_details_list;
    U8 **system_image_list;
} theme_details_struct;

#endif /* _PIXCOM_CUSTTHEMESRES_H */ 

