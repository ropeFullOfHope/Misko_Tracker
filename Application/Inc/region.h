#ifndef INC_REGION_H_
#define INC_REGION_H_

#include <stdint.h>
#include "lcd.h"

typedef struct {
    struct {
        int32_t x;
        int32_t y;
    } start, size;
} region_t;

void region_draw(const region_t *p_region, symbol_t symbol, color_t color, int32_t y, int32_t x);
void region_change_symbol(const region_t *p_region, symbol_t symbol, int32_t x, int32_t y);
void region_change_color(const region_t *p_region, color_t color, int32_t x, int32_t y);
void region_fill(const region_t *p_region, symbol_t symbol, color_t color);
int32_t region_draw_text(const region_t *p_region, symbol_t *text, color_t color, int32_t start_x, int32_t start_y);

extern const region_t REGION_SIDEBAR;
extern const region_t REGION_MAP;

extern const region_t REGION_SONG_TITLE;
extern const region_t REGION_SONG_EDITOR_SONG;

extern const region_t REGION_CHAIN_TITLE;
extern const region_t REGION_CHAIN_EDITOR_CHAIN;
extern const region_t REGION_CHAIN_EDITOR_PHRASE_PREVIEW;

extern const region_t REGION_PHRASE_TITLE;
extern const region_t REGION_PHRASE_EDITOR_PHRASE;
extern const region_t REGION_PHRASE_EDITOR_COMMAND_DESCRIPTION;

#endif /* INC_REGION_H_ */
