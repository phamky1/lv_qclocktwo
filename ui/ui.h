// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 9.1.0
// Project name: licheeMac

#ifndef _LICHEEMAC_UI_H
#define _LICHEEMAC_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

void flipOn_Animation(lv_obj_t * TargetObject, int delay);
void clockFadeDownOff_Animation(lv_obj_t * TargetObject, int delay);
void clockFadeDownOn_Animation(lv_obj_t * TargetObject, int delay);

// SCREEN: ui_qLockTwo
void ui_qLockTwo_screen_init(void);
extern lv_obj_t * ui_qLockTwo;
extern lv_obj_t * ui_qClockTwo_Background;
extern lv_obj_t * ui_Time_Text;
// CUSTOM VARIABLES
extern lv_obj_t * uic_qLockTwo;
extern lv_obj_t * uic_qClockTwo_Background;
extern lv_obj_t * uic_Time_Text;

// EVENTS
void ui_event____initial_actions0(lv_event_t * e);
extern lv_obj_t * ui____initial_actions0;

// FONTS
LV_FONT_DECLARE(ui_font_SFPROMEDIUM30);
LV_FONT_DECLARE(ui_font_SFPROMEDIUM300);
LV_FONT_DECLARE(ui_font_SFClock200);
LV_FONT_DECLARE(ui_font_SFPROMEDIUM50);
LV_FONT_DECLARE(ui_font_Monaco40);

// UI INIT
void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif