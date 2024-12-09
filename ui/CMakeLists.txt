SET(SOURCES screens/ui_qLockTwo.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    fonts/ui_font_SFPROMEDIUM30.c
    fonts/ui_font_SFPROMEDIUM300.c
    fonts/ui_font_SFClock200.c
    fonts/ui_font_SFPROMEDIUM50.c
    fonts/ui_font_Monaco40.c)

add_library(ui ${SOURCES})
