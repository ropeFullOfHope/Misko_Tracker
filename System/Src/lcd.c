#include "lcd.h"
#include "lcd_tileset.h"
#include "ili9341.h"
#include "backlight.h"
#include "millis.h"

#define QUEUE_SIZE (ROW_COUNT * COLUMN_COUNT)

typedef struct {
    tile_t tile;
    uint8_t dirty;
} screen_t;

typedef struct {
    int8_t x;
    int8_t y;
} coordinates_t;

static void LCD_enqueue_tile(coordinates_t coordinates);
static coordinates_t LCD_dequeue_tile(void);

static screen_t screen[ROW_COUNT][COLUMN_COUNT] = {0};
static coordinates_t queue[QUEUE_SIZE] = {0};
static uint32_t queued_tiles = 0;
static uint32_t queue_read_head = 0;
static uint32_t queue_write_head = 0;

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

void LCD_draw(symbol_t symbol, color_t color, int32_t x, int32_t y)
{
    if (symbol >= TILESET_TILE_COUNT)
        return;

    if (color >= COLOR_COUNT)
        return;

    if (x < 0 || x >= COLUMN_COUNT)
        return;

    if (y < 0 || y >= ROW_COUNT)
        return;

    if (symbol == screen[y][x].tile.symbol && color == screen[y][x].tile.color)
        return;

    screen[y][x].tile.symbol = symbol;
    screen[y][x].tile.color = color;

    if (screen[y][x].dirty == 0) {
        screen[y][x].dirty = 1;

        LCD_enqueue_tile((coordinates_t){(int8_t)x, (int8_t)y});
    }
}

void LCD_change_symbol(symbol_t symbol, int32_t x, int32_t y)
{
    if (symbol >= TILESET_TILE_COUNT)
        return;

    if (x < 0 || x >= COLUMN_COUNT)
        return;

    if (y < 0 || y >= ROW_COUNT)
        return;

    if (symbol == screen[y][x].tile.symbol)
        return;

    screen[y][x].tile.symbol = symbol;

    if (screen[y][x].dirty == 0) {
        screen[y][x].dirty = 1;

        LCD_enqueue_tile((coordinates_t){(int8_t)x, (int8_t)y});
    }
}

void LCD_change_color(color_t color, int32_t x, int32_t y)
{
    if (color >= COLOR_COUNT)
        return;

    if (x < 0 || x >= COLUMN_COUNT)
        return;

    if (y < 0 || y >= ROW_COUNT)
        return;

    if (color == screen[y][x].tile.color)
        return;

    screen[y][x].tile.color = color;

    if (screen[y][x].dirty == 0) {
        screen[y][x].dirty = 1;

        LCD_enqueue_tile((coordinates_t){(int8_t)x, (int8_t)y});
    }
}

void LCD_update_screen(void)
{
    while (queued_tiles != 0)
        LCD_update_one_tile();
}

void LCD_update_one_tile(void)
{
    if (queued_tiles == 0)
        return;

    while (LCD_is_DMA_ready() == 0);
    coordinates_t coordiantes = LCD_dequeue_tile();
    LCD_update_tile(coordiantes.x, coordiantes.y);
}

void LCD_update_tile(int32_t x, int32_t y)
{
    if (x < 0 || x >= COLUMN_COUNT)
        return;

    if (y < 0 || y >= ROW_COUNT)
        return;

    if (screen[y][x].dirty == 0)
        return;

    ILI9341_column_address_set((uint16_t)(x * 8), (uint16_t)(x * 8 + 7));
    ILI9341_page_address_set((uint16_t)(y * 8), (uint16_t)(y * 8 + 7));
    ILI9341_memory_write_start();

    while (LCD_is_DMA_ready() == 0);

    ILI9341_send_data_DMA((uint16_t*) TILESET[screen[y][x].tile.color][screen[y][x].tile.symbol], 8 * 8);

    screen[y][x].dirty = 0;
}

bool LCD_is_DMA_ready(void)
{
    return ILI9341_is_DMA_ready() ? true : false;
}

void LCD_enqueue_tile(coordinates_t coordinates)
{
    if (queued_tiles >= QUEUE_SIZE)
        return;

    queued_tiles += 1;

    queue[queue_write_head] = coordinates;

    queue_write_head = (queue_write_head + 1) % QUEUE_SIZE;
}

coordinates_t LCD_dequeue_tile(void)
{
    if (queued_tiles == 0)
        return (coordinates_t){-1, -1};

    queued_tiles -= 1;

    coordinates_t coordinates = queue[queue_read_head];

    queue_read_head = (queue_read_head + 1) % QUEUE_SIZE;

    return coordinates;
}
