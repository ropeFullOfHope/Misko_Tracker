#include "region.h"
#include <stddef.h>

#define MAX_LINE_LENGTH COLUMN_COUNT

const region_t REGION_SIDEBAR = {.start = {34,  1}, .size = {5, 13}};
const region_t REGION_MAP     = {.start = {34, 15}, .size = {5,  5}};

const region_t REGION_SONG_TITLE       = {.start = {1, 1}, .size = { 4,  1}};
const region_t REGION_SONG_EDITOR_SONG = {.start = {1, 3}, .size = {29, 26}};

const region_t REGION_CHAIN_TITLE                 = {.start = { 1, 1}, .size = { 8,  1}};
const region_t REGION_CHAIN_EDITOR_CHAIN          = {.start = { 1, 3}, .size = { 7, 17}};
const region_t REGION_CHAIN_EDITOR_PHRASE_PREVIEW = {.start = {10, 3}, .size = {11, 17}};

const region_t REGION_PHRASE_TITLE                      = {.start = {1,  1}, .size = { 9,  1}};
const region_t REGION_PHRASE_EDITOR_PHRASE              = {.start = {1,  3}, .size = {30, 17}};
const region_t REGION_PHRASE_EDITOR_COMMAND_DESCRIPTION = {.start = {1, 21}, .size = {38,  8}};

void region_draw(const region_t *p_region, uint8_t symbol, color_t color, int32_t x, int32_t y)
{
    if (p_region == NULL)
        return;

    if (x < 0 || y < 0)
        return;

    if (x >= p_region->size.x || y >= p_region->size.y)
        return;

    LCD_draw(symbol, color, p_region->start.x + x, p_region->start.y + y);
}

void region_change_symbol(const region_t *p_region, uint8_t symbol, int32_t x, int32_t y)
{
    if (p_region == NULL)
        return;

    if (x < 0 || y < 0)
        return;

    if (x >= p_region->size.x || y >= p_region->size.y)
        return;

    LCD_change_symbol(symbol, p_region->start.x + x, p_region->start.y + y);
}


void region_change_color(const region_t *p_region, color_t color, int32_t x, int32_t y)
{
    if (p_region == NULL)
        return;

    if (x < 0 || y < 0)
        return;

    if (x >= p_region->size.x || y >= p_region->size.y)
        return;

    LCD_change_color(color, p_region->start.x + x, p_region->start.y + y);
}


void region_fill(const region_t *p_region, uint8_t symbol, color_t color)
{
    if (p_region == NULL)
        return;

    for (int32_t y = 0; y < p_region->size.y; y++)
        for (int32_t x = 0; x < p_region->size.x; x++)
            LCD_draw(symbol, color, p_region->start.x + x, p_region->start.y + y);
}

int32_t region_draw_text(const region_t *p_region, uint8_t *text, color_t color, int32_t start_x, int32_t start_y)
{
    if (p_region == NULL)
        return 0;

    if (start_x < 0 || start_y < 0)
        return 0;

    if (start_x >= p_region->size.x || start_y >= p_region->size.y)
        return 0;

    const int32_t TEXTBOX_WIDTH  = p_region->size.x - start_x;
    const int32_t TEXTBOX_HEIGHT = p_region->size.y - start_y;

    if (TEXTBOX_WIDTH > MAX_LINE_LENGTH)
        return 0;

    if (*text == '\0')
        return 0;

    uint8_t text_line[MAX_LINE_LENGTH + 1] = {0};

    int32_t row;

    for (row = 0; row < TEXTBOX_HEIGHT; row++) {
        while (*text == ' ')
            text++;

        int32_t last_space = -1;
        for (int32_t index = 0; index < TEXTBOX_WIDTH + 1; index++) {
            if (*text == '\n' || *text == '\0') {
                last_space = index;
                break;
            }

            if (*text == ' ')
                last_space = index;

            text_line[index] = *(text++);
        }

        for (int32_t index = 0; index < (last_space == -1 ? TEXTBOX_WIDTH : last_space); index++)
            LCD_draw(text_line[index], color, p_region->start.x + start_x + index, p_region->start.y + start_y + row);

        if (*text == '\0')
            break;

        if (*text == '\n') {
            text++;
            continue;
        }

        text -= (last_space == -1 ? 1 : TEXTBOX_WIDTH - last_space);
    }

    const int32_t USED_ROWS = (row == TEXTBOX_HEIGHT ? TEXTBOX_HEIGHT : row + 1);

    return USED_ROWS;
}
