#include "lcd_tileset.h"

// Color palette 0 - NORMAL
#define FGC_0 0xFFFF
#define BGC_0 0x0318

// Color palette 1 - DARK
#define FGC_1 0xFFFF
#define BGC_1 0x0210

// Color palette 2 - HIGHLIGHT
#define FGC_2 0x0000
#define BGC_2 0xFC00

// Color palette 3 - NORMAL_FADE
#define FGC_3 0x859C
#define BGC_3 0x0318

// Color palette 4 - DARK_FADE
#define FGC_4 0x8518
#define BGC_4 0x0210

// Color palette 5 - HIGHLIGHT_FADE
#define FGC_5 0x8200
#define BGC_5 0xFC00

const uint16_t tileset[6][256][8 * 8] =
{
    {
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0,
            FGC_0, BGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0, FGC_0,
            FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0,
            FGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, FGC_0,
            FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0,
            FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0
        },
        {
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0,
            FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0,
            FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0,
            FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0,
            FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, FGC_0,
            FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0,
            FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0,
            FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, FGC_0,
            FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0,
            FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0,
            FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, FGC_0,
            FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0,
            FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0,
            FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0,
            FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0,
            FGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, FGC_0,
            FGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, FGC_0,
            FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0,
            FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0,
            FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, BGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, BGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0,
            FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, FGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0, FGC_0, BGC_0,
            BGC_0, FGC_0, BGC_0, FGC_0, FGC_0, FGC_0, FGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, FGC_0, FGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        },
        {
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0,
            BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0, BGC_0
        }
    },
    {
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1,
            FGC_1, BGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1, FGC_1,
            FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1,
            FGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, FGC_1,
            FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1,
            FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1
        },
        {
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1,
            FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1,
            FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1,
            FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1,
            FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, FGC_1,
            FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1,
            FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1,
            FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, FGC_1,
            FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1,
            FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1,
            FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, FGC_1,
            FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1,
            FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1,
            FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1,
            FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1,
            FGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, FGC_1,
            FGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, FGC_1,
            FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1,
            FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1,
            FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, BGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, BGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1,
            FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, FGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1, FGC_1, BGC_1,
            BGC_1, FGC_1, BGC_1, FGC_1, FGC_1, FGC_1, FGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, FGC_1, FGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        },
        {
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1,
            BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1, BGC_1
        }
    },
    {
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2,
            FGC_2, BGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2, FGC_2,
            FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2,
            FGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, FGC_2,
            FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2,
            FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2
        },
        {
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2,
            FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2,
            FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2,
            FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2,
            FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, FGC_2,
            FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2,
            FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2,
            FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, FGC_2,
            FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2,
            FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2,
            FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, FGC_2,
            FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2,
            FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2,
            FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2,
            FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2,
            FGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, FGC_2,
            FGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, FGC_2,
            FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2,
            FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2,
            FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, BGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, BGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2,
            FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, FGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2, FGC_2, BGC_2,
            BGC_2, FGC_2, BGC_2, FGC_2, FGC_2, FGC_2, FGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, FGC_2, FGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        },
        {
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2,
            BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2, BGC_2
        }
    },
    {
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3,
            FGC_3, BGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3, FGC_3,
            FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3,
            FGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, FGC_3,
            FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3,
            FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3
        },
        {
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3,
            FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3,
            FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3,
            FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3,
            FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, FGC_3,
            FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3,
            FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3,
            FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, FGC_3,
            FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3,
            FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3,
            FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, FGC_3,
            FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3,
            FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3,
            FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3,
            FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3,
            FGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, FGC_3,
            FGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, FGC_3,
            FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3,
            FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3,
            FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, BGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, BGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3,
            FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, FGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3, FGC_3, BGC_3,
            BGC_3, FGC_3, BGC_3, FGC_3, FGC_3, FGC_3, FGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, FGC_3, FGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        },
        {
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3,
            BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3, BGC_3
        }
    },
    {
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4,
            FGC_4, BGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4, FGC_4,
            FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4,
            FGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, FGC_4,
            FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4,
            FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4
        },
        {
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4,
            FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4,
            FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4,
            FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4,
            FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, FGC_4,
            FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4,
            FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4,
            FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, FGC_4,
            FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4,
            FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4,
            FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, FGC_4,
            FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4,
            FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4,
            FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4,
            FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4,
            FGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, FGC_4,
            FGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, FGC_4,
            FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4,
            FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4,
            FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, BGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, BGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4,
            FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, FGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4, FGC_4, BGC_4,
            BGC_4, FGC_4, BGC_4, FGC_4, FGC_4, FGC_4, FGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, FGC_4, FGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        },
        {
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4,
            BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4, BGC_4
        }
    },
    {
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5,
            FGC_5, BGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5, FGC_5,
            FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5,
            FGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, FGC_5,
            FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5,
            FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5
        },
        {
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5,
            FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5,
            FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5,
            FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5,
            FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, FGC_5,
            FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5,
            FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5,
            FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, FGC_5,
            FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5,
            FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5,
            FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, FGC_5,
            FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5,
            FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5,
            FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5,
            FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5,
            FGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, FGC_5,
            FGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, FGC_5,
            FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5,
            FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5,
            FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, BGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, BGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5,
            FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, FGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5, FGC_5, BGC_5,
            BGC_5, FGC_5, BGC_5, FGC_5, FGC_5, FGC_5, FGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, FGC_5, FGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        },
        {
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5,
            BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5, BGC_5
        }
    }
};
