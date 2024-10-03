#include "lcd.h"
#include "LCD_tileset.h"
#include "ili9341.h"
#include "backlight.h"
#include "millis.h"

typedef struct {
    uint8_t tile;
    color_t color;
    uint8_t dirty;
} tile_t;

static tile_t screen[30][40] = {{{0, 0, 0}}};

void LCD_init(void)
{
    // Initialize ILI9341.
    ILI9341_init();

    // Clear Screen
    ILI9341_column_address_set(0, 319);
    ILI9341_page_address_set(0, 239);
    ILI9341_memory_write_start();

    uint16_t data = 0x0000;
    for (int i = 0; i < 320 * 240; i++)
        ILI9341_send_data(&data, 1);

    // Wait for data to be sent completly.
    delay_millis(100);

    // Turn on backlight.
    backlight_set_brightness(50);
}

void LCD_update_screen(void)
{
    for (uint32_t y = 0; y < 30; y++) {
        for (uint32_t x = 0; x < 40; x++) {
            while (LCD_is_DMA_ready() == 0);
            LCD_update_tile(x, y);
        }
    }
}

void LCD_update_tile(uint32_t x, uint32_t y)
{
    if (screen[y][x].dirty == 0)
        return;

    ILI9341_column_address_set(x * 8, x * 8 + 7);
    ILI9341_page_address_set(y * 8, y * 8 + 7);
    ILI9341_memory_write_start();

    ILI9341_send_data_DMA((uint16_t*) tileset[screen[y][x].color][screen[y][x].tile], 8 * 8);
}

void LCD_draw(uint8_t tile, uint32_t x, uint32_t y, color_t color)
{
    screen[y][x].tile  = tile;
    screen[y][x].color = color;
    screen[y][x].dirty = 1;
}

uint32_t LCD_is_DMA_ready(void)
{
    return ILI9341_is_DMA_ready();
}
