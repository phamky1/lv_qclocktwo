// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 9.1.0
// Project name: licheeMac

#include "../ui.h"

void ui_qLockTwo_screen_init(void)
{
    ui_qLockTwo = lv_obj_create(NULL);
    lv_obj_remove_flag(ui_qLockTwo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_qLockTwo, lv_color_hex(0x0F1110), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_qLockTwo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_qClockTwo_Background = lv_label_create(ui_qLockTwo);
    lv_obj_set_width(ui_qClockTwo_Background, 680);
    lv_obj_set_height(ui_qClockTwo_Background, 430);
    lv_obj_set_align(ui_qClockTwo_Background, LV_ALIGN_CENTER);
    lv_label_set_text(ui_qClockTwo_Background,
                      "ITLISASAMPM\nACQUARTERDC\nTWENTYFIVEX\nHALFBTENFTO\nPASTERUNINE\nONESIXTHREE\nFOURFIVETWO\nEIGHTELEVEN\nSEVENTWELVE\nTENSEOCLOCK");
    lv_obj_set_style_text_color(ui_qClockTwo_Background, lv_color_hex(0x5A5555), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_qClockTwo_Background, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_qClockTwo_Background, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_qClockTwo_Background, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_qClockTwo_Background, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_qClockTwo_Background, &ui_font_Monaco40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Time_Text = lv_label_create(ui_qLockTwo);
    lv_obj_set_width(ui_Time_Text, 680);
    lv_obj_set_height(ui_Time_Text, 430);
    lv_obj_set_align(ui_Time_Text, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Time_Text,
                      "ITLISASAMPM\nACQUARTERDC\nTWENTYFIVEX\nHALFBTENFTO\nPASTERUNINE\nONESIXTHREE\nFOURFIVETWO\nEIGHTELEVEN\nSEVENTWELVE\nTENSEOCLOCK");
    lv_obj_set_style_text_color(ui_Time_Text, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Time_Text, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Time_Text, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Time_Text, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Time_Text, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Time_Text, &ui_font_Monaco40, LV_PART_MAIN | LV_STATE_DEFAULT);

    uic_qLockTwo = ui_qLockTwo;
    uic_qClockTwo_Background = ui_qClockTwo_Background;
    uic_Time_Text = ui_Time_Text;

}
