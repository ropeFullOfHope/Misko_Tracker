#ifndef INC_LCD_H_
#define INC_LCD_H_

#include <stdint.h>

#define ROW_COUNT    30
#define COLUMN_COUNT 40

typedef enum {
    COLOR_NORMAL,
    COLOR_NORMAL_FADE,
    COLOR_DARK,
    COLOR_DARK_FADE,
    COLOR_HIGHLIGHT
} color_t;

void LCD_init(void);
void LCD_draw(uint8_t tile, uint32_t x, uint32_t y, color_t color);
void LCD_change_tile(uint8_t tile, uint32_t x, uint32_t y);
void LCD_change_color(color_t color, uint32_t x, uint32_t y);
void LCD_update_screen(void);
void LCD_update_one_tile(void);
void LCD_update_tile(uint32_t x, uint32_t y);
uint32_t LCD_is_DMA_ready(void);

#endif /* INC_LCD_H_ */
