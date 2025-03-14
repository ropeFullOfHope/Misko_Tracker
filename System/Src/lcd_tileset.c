#include "lcd_tileset.h"

// Color palette NORMAL
#define FG_COLOR_NORMAL 0xFFFF
#define BG_COLOR_NORMAL 0x0318

// Color palette NORMAL_FADE
#define FG_COLOR_NORMAL_FADE 0x859C
#define BG_COLOR_NORMAL_FADE 0x0318

// Color palette DARK
#define FG_COLOR_DARK 0xFFFF
#define BG_COLOR_DARK 0x0210

// Color palette DARK_FADE
#define FG_COLOR_DARK_FADE 0x8518
#define BG_COLOR_DARK_FADE 0x0210

// Color palette HIGHLIGHT
#define FG_COLOR_HIGHLIGHT 0x0000
#define BG_COLOR_HIGHLIGHT 0xFC00

#define TILESET_MACRO(fg_color, bg_color) \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, bg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, bg_color, bg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, \
        fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, bg_color, bg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, bg_color, bg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, bg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, bg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, bg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, bg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, bg_color, bg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, bg_color, bg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, bg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, bg_color, fg_color, fg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, bg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, bg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, bg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, fg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, fg_color, bg_color, \
        bg_color, fg_color, bg_color, fg_color, fg_color, fg_color, fg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, fg_color, fg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }, \
    { \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, \
        bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color, bg_color \
    }


const uint16_t TILESET[TILESET_COLOR_COUNT][TILESET_TILE_COUNT][TILESET_TILE_SIZE] =
{
    {
        TILESET_MACRO(FG_COLOR_NORMAL, BG_COLOR_NORMAL)
    },
    {
        TILESET_MACRO(FG_COLOR_NORMAL_FADE, BG_COLOR_NORMAL_FADE)
    },
    {
        TILESET_MACRO(FG_COLOR_DARK, BG_COLOR_DARK)
    },
    {
        TILESET_MACRO(FG_COLOR_DARK_FADE, BG_COLOR_DARK_FADE)
    },
    {
        TILESET_MACRO(FG_COLOR_HIGHLIGHT, BG_COLOR_HIGHLIGHT)
    }
};
