#ifndef INC_LCD_H_
#define INC_LCD_H_

#include <stdint.h>
#include <stdbool.h>

#define ROW_COUNT    30
#define COLUMN_COUNT 40

typedef uint8_t symbol_t;

typedef enum {
    COLOR_NORMAL,
    COLOR_NORMAL_FADE,
    COLOR_DARK,
    COLOR_DARK_FADE,
    COLOR_HIGHLIGHT,
    COLOR_COUNT
} color_t;

typedef struct {
    symbol_t symbol;
    color_t color;
} tile_t;

void LCD_init(void);
void LCD_draw(symbol_t symbol, color_t color, int32_t x, int32_t y);
void LCD_change_symbol(symbol_t symbol, int32_t x, int32_t y);
void LCD_change_color(color_t color, int32_t x, int32_t y);
void LCD_update_screen(void);
void LCD_update_one_tile(void);
void LCD_update_tile(int32_t x, int32_t y);
bool LCD_is_DMA_ready(void);

#endif /* INC_LCD_H_ */
