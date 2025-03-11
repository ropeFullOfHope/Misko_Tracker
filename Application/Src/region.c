#include "region.h"
#include <stddef.h>

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

    if (0 <= x && x < p_region->size.x &&
        0 <= y && y < p_region->size.y)
    {
        LCD_draw(symbol, color, p_region->start.x + x, p_region->start.y + y);
    }
}

void region_change_symbol(const region_t *p_region, uint8_t symbol, int32_t x, int32_t y)
{
    if (p_region == NULL)
        return;

    if (0 <= x && x < p_region->size.x &&
        0 <= y && y < p_region->size.y)
    {
        LCD_change_symbol(symbol, p_region->start.x + x, p_region->start.y + y);
    }
}


void region_change_color(const region_t *p_region, color_t color, int32_t x, int32_t y)
{
    if (p_region == NULL)
        return;

    if (0 <= x && x < p_region->size.x &&
        0 <= y && y < p_region->size.y)
    {
        LCD_change_color(color, p_region->start.x + x, p_region->start.y + y);
    }
}


void region_fill(const region_t *p_region, uint8_t symbol, color_t color)
{
    if (p_region == NULL)
        return;

    for (int32_t y = 0; y < p_region->size.y; y++)
        for (int32_t x = 0; x < p_region->size.x; x++)
            LCD_draw(symbol, color, p_region->start.x + x, p_region->start.y + y);
}
