#ifndef INC_LCD_H_
#define INC_LCD_H_

#include <stdint.h>

typedef enum {
    COLOR_NORMAL,
    COLOR_DARK,
    COLOR_HIGHLIGHT,
    COLOR_NORMAL_FADE,
    COLOR_DARK_FADE,
    COLOR_HIGHLIGHT_FADE
} color_t;

void LCD_init(void);
void LCD_update_screen(void);
void LCD_update_tile(uint32_t x, uint32_t y);
void LCD_draw(uint8_t tile, uint32_t x, uint32_t y, color_t color);
uint32_t LCD_is_DMA_ready(void);

#endif /* INC_LCD_H_ */
