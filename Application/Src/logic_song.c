#include "logic_song.h"
#include <stdbool.h>
#include "data.h"
#include "lcd.h"
#include "helper_functions.h"

typedef struct {
    int32_t x;
    int32_t y;
} cursor_t;

static void song_draw_title(void);
static void song_draw_editor(void);
static void song_draw_song(void);
static void song_draw_blank_space(void);
static void song_draw_song_channels(void);
static void song_draw_song_row_numbers(void);
static void song_draw_song_blank_space(void);
static void song_draw_song_data(void);
static void song_highlight_cursor(void);
static void song_unhighlight_cursor(void);
static void song_highlight_channel(void);
static void song_unhighlight_channel(void);
static void song_highlight_row_number(void);
static void song_unhighlight_row_number(void);
static void song_update_chain(void);

static cursor_t cursor = {0};
static int32_t scroll = 0;
static uint8_t copied_chain = 0x01;

void song_init(void)
{
    song_draw_title();
    song_draw_editor();

    song_highlight_cursor();
    song_highlight_channel();
    song_highlight_row_number();
}

void song_draw_title(void)
{
    const uint8_t title[4] = {'S','o','n','g'};

    for (int32_t i = 0; i < 4; i++)
        LCD_draw(title[i], i + 1, 1, COLOR_NORMAL);

    for (int32_t i = 4; i < 32; i++)
        LCD_draw(' ', i + 1, 1, COLOR_NORMAL);
}

void song_draw_editor(void)
{
    song_draw_song();
    song_draw_blank_space();
}

void song_draw_song(void)
{
    song_draw_song_channels();
    song_draw_song_row_numbers();
    song_draw_song_blank_space();
    song_draw_song_data();
}

void song_draw_blank_space(void)
{
    for (int32_t y = 3; y <= 28; y++)
        for (int32_t x = 30; x <= 32; x++)
            LCD_draw(' ', x, y, COLOR_NORMAL);
}

void song_draw_song_channels(void)
{
    LCD_draw(' ', 1, 3, COLOR_NORMAL);
    LCD_draw(' ', 2, 3, COLOR_NORMAL);
    LCD_draw(' ', 3, 3, COLOR_NORMAL);

    for (int32_t i = 0; i < CHANNEL_COUNT; i++) {
        LCD_draw('1' + i, 3 * i + 4, 3, COLOR_DARK_FADE);
        LCD_draw(' ', 3 * i + 5, 3, COLOR_DARK_FADE);

        LCD_draw(' ', 3 * i + 6, 3, COLOR_NORMAL);
    }

    LCD_draw(' ', 28, 3, COLOR_NORMAL);
    LCD_draw(' ', 29, 3, COLOR_NORMAL);
}

void song_draw_song_row_numbers(void)
{
    for (int32_t i = 0; i < SONG_ROWS_ON_SCREEN; i++) {
        uint8_t row = scroll + i;
        color_t color;

        if (row % 4 == 0)
            color = COLOR_DARK_FADE;
        else
            color = COLOR_NORMAL_FADE;

        // Left side
        LCD_draw(hex_digit[row / 0x10], 1, i + 4, color);
        LCD_draw(hex_digit[row % 0x10], 2, i + 4, color);

        // Right side
        LCD_draw(hex_digit[row / 0x10], 28, i + 4, color);
        LCD_draw(hex_digit[row % 0x10], 29, i + 4, color);
    }
}

void song_draw_song_blank_space(void)
{
    for (int32_t y = 0; y < SONG_ROWS_ON_SCREEN; y++) {
        uint8_t row = scroll + y;
        for (int32_t x = 0; x < CHANNEL_COUNT + 1; x++) {
            color_t color;

            if (row % 4 == 0)
                color = COLOR_DARK;
            else
                color = COLOR_NORMAL;

            LCD_draw(' ' , 3 * x + 3, y + 4, color);
        }
    }
}

void song_draw_song_data(void)
{
    for (int32_t y = 0; y < SONG_ROWS_ON_SCREEN; y++) {
        uint8_t row = scroll + y;
        for (int32_t x = 0; x < CHANNEL_COUNT; x++) {
            uint8_t chain = data_get_song_chain(x, row);
            color_t color;

            if (row % 4 == 0) {
                if (chain == 0x00)
                    color = COLOR_DARK_FADE;
                else
                    color = COLOR_DARK;
            }
            else {
                if (chain == 0x00)
                    color = COLOR_NORMAL_FADE;
                else
                    color = COLOR_NORMAL;
            }

            if (chain == 0x00) {
                LCD_draw('-', 3 * x + 4, y + 4, color);
                LCD_draw('-', 3 * x + 5, y + 4, color);
            }
            else {
                LCD_draw(hex_digit[chain / 0x10], 3 * x + 4, y + 4, color);
                LCD_draw(hex_digit[chain % 0x10], 3 * x + 5, y + 4, color);
            }
        }
    }
}

void song_highlight_cursor(void)
{
    int32_t relative_row = cursor.y - scroll;

    if (cursor.x < 0 || CHANNEL_COUNT <= cursor.x)
        return;

    if (relative_row < 0 || SONG_ROWS_ON_SCREEN <= relative_row)
        return;

    LCD_change_color(COLOR_HIGHLIGHT, cursor.x * 3 + 4, relative_row + 4);
    LCD_change_color(COLOR_HIGHLIGHT, cursor.x * 3 + 5, relative_row + 4);
}

void song_unhighlight_cursor(void)
{
    if (cursor.x < 0 || CHANNEL_COUNT <= cursor.x)
        return;

    int32_t relative_row = cursor.y - scroll;

    if (relative_row < 0 || SONG_ROWS_ON_SCREEN <= relative_row)
        return;

    color_t color_normal;
    color_t color_fade;

    if (cursor.y % 4 == 0) {
        color_normal = COLOR_DARK;
        color_fade = COLOR_DARK_FADE;
    }
    else {
        color_normal = COLOR_NORMAL;
        color_fade = COLOR_NORMAL_FADE;
    }

    if (data_get_song_chain(cursor.x, cursor.y) == 0x00) {
        LCD_change_color(color_fade, cursor.x * 3 + 4, relative_row + 4);
        LCD_change_color(color_fade, cursor.x * 3 + 5, relative_row + 4);
    }
    else {
        LCD_change_color(color_normal, cursor.x * 3 + 4, relative_row + 4);
        LCD_change_color(color_normal, cursor.x * 3 + 5, relative_row + 4);
    }
}

void song_highlight_channel(void)
{
    if (cursor.x < 0 || CHANNEL_COUNT <= cursor.x)
        return;

    LCD_change_color(COLOR_DARK, cursor.x * 3 + 4, 3);
}

void song_unhighlight_channel(void)
{
    if (cursor.x < 0 || CHANNEL_COUNT <= cursor.x)
        return;

    LCD_change_color(COLOR_DARK_FADE, cursor.x * 3 + 4, 3);
}

void song_highlight_row_number(void)
{
    int32_t relative_row = cursor.y - scroll;

    if (relative_row < 0 || SONG_ROWS_ON_SCREEN <= relative_row)
        return;

    if (cursor.y % 4 == 0) {
        LCD_change_color(COLOR_DARK, 1,  relative_row + 4);
        LCD_change_color(COLOR_DARK, 2,  relative_row + 4);
        LCD_change_color(COLOR_DARK, 28, relative_row + 4);
        LCD_change_color(COLOR_DARK, 29, relative_row + 4);
    }
    else {
        LCD_change_color(COLOR_NORMAL, 1,  relative_row + 4);
        LCD_change_color(COLOR_NORMAL, 2,  relative_row + 4);
        LCD_change_color(COLOR_NORMAL, 28, relative_row + 4);
        LCD_change_color(COLOR_NORMAL, 29, relative_row + 4);
    }
}

void song_unhighlight_row_number(void)
{
    int32_t relative_row = cursor.y - scroll;

    if (relative_row < 0 || SONG_ROWS_ON_SCREEN <= relative_row)
        return;

    if (cursor.y % 4 == 0) {
        LCD_change_color(COLOR_DARK_FADE, 1,  relative_row + 4);
        LCD_change_color(COLOR_DARK_FADE, 2,  relative_row + 4);
        LCD_change_color(COLOR_DARK_FADE, 28, relative_row + 4);
        LCD_change_color(COLOR_DARK_FADE, 29, relative_row + 4);
    }
    else {
        LCD_change_color(COLOR_NORMAL_FADE, 1,  relative_row + 4);
        LCD_change_color(COLOR_NORMAL_FADE, 2,  relative_row + 4);
        LCD_change_color(COLOR_NORMAL_FADE, 28, relative_row + 4);
        LCD_change_color(COLOR_NORMAL_FADE, 29, relative_row + 4);
    }
}

void song_update_chain(void)
{
    uint8_t selected_chain = data_get_song_chain(cursor.x, cursor.y);
    int32_t relative_row = cursor.y - scroll;

    if (selected_chain == 0x00) {
        LCD_change_tile('-', 3 * cursor.x + 4, relative_row + 4);
        LCD_change_tile('-', 3 * cursor.x + 5, relative_row + 4);
    }
    else {
        LCD_change_tile(hex_digit[selected_chain / 0x10], 3 * cursor.x + 4, relative_row + 4);
        LCD_change_tile(hex_digit[selected_chain % 0x10], 3 * cursor.x + 5, relative_row + 4);
    }
}

void song_move_cursor(joystick_position_t joystick_position)
{
    cursor_t new_cursor = cursor;
    int32_t new_scroll = scroll;

    switch (joystick_position) {
        case JOYSTICK_POSITION_DOWN:
            new_cursor.y = change_value_within_bounds(cursor.y, +1, 0x00, SONG_ROW_COUNT - 1);
            new_scroll = change_value_within_bounds(scroll, 0, new_cursor.y - SONG_ROWS_ON_SCREEN + 1, new_cursor.y);
            break;

        case JOYSTICK_POSITION_UP:
            new_cursor.y = change_value_within_bounds(cursor.y, -1, 0x00, SONG_ROW_COUNT - 1);
            new_scroll = change_value_within_bounds(scroll, 0, new_cursor.y - SONG_ROWS_ON_SCREEN + 1, new_cursor.y);
            break;

        case JOYSTICK_POSITION_RIGHT:
            new_cursor.x = change_value_within_bounds(cursor.x, +1, 0, CHANNEL_COUNT - 1);
            break;

        case JOYSTICK_POSITION_LEFT:
            new_cursor.x = change_value_within_bounds(cursor.x, -1, 0, CHANNEL_COUNT - 1);
            break;

        default:
            return;
    }

    if (new_scroll != scroll) {
        scroll = new_scroll;
        cursor.y = new_cursor.y;

        song_draw_song_row_numbers();
        song_draw_song_blank_space();
        song_draw_song_data();

        if (new_cursor.x != cursor.x) {
            song_unhighlight_channel();
            cursor.x = new_cursor.x;
            song_highlight_channel();
        }

        song_highlight_row_number();
        song_highlight_cursor();
    }

    else if (new_cursor.y != cursor.y || new_cursor.x != cursor.x) {
        song_unhighlight_cursor();

        if (new_cursor.y != cursor.y) {
            song_unhighlight_row_number();
            cursor.y = new_cursor.y;
            song_highlight_row_number();
        }

        if (new_cursor.x != cursor.x) {
            song_unhighlight_channel();
            cursor.x = new_cursor.x;
            song_highlight_channel();
        }

        song_highlight_cursor();
    }
}

void song_move_page(joystick_position_t joystick_position)
{
    cursor_t new_cursor = cursor;
    int32_t new_scroll = scroll;

    switch (joystick_position) {
        case JOYSTICK_POSITION_DOWN:
            new_cursor.y = change_value_within_bounds(cursor.y, +16, 0x00, SONG_ROW_COUNT - 1);
            new_scroll = change_value_within_bounds(scroll, 0, new_cursor.y - SONG_ROWS_ON_SCREEN + 1, new_cursor.y);
            break;

        case JOYSTICK_POSITION_UP:
            new_cursor.y = change_value_within_bounds(cursor.y, -16, 0x00, SONG_ROW_COUNT - 1);
            new_scroll = change_value_within_bounds(scroll, 0, new_cursor.y - SONG_ROWS_ON_SCREEN + 1, new_cursor.y);
            break;

        default:
            return;
    }

    if (new_scroll != scroll) {
        scroll = new_scroll;
        cursor.y = new_cursor.y;

        song_draw_song_row_numbers();
        song_draw_song_blank_space();
        song_draw_song_data();

        song_highlight_row_number();
        song_highlight_cursor();
    }

    else if (new_cursor.y != cursor.y) {
        song_unhighlight_cursor();
        song_unhighlight_row_number();

        cursor.y = new_cursor.y;

        song_highlight_row_number();
        song_highlight_cursor();
    }
}

void song_insert_chain()
{
    uint8_t selected_chain = data_get_song_chain(cursor.x, cursor.y);

    if (selected_chain == 0x00) {
        data_set_song_chain(copied_chain, cursor.x, cursor.y);
        song_update_chain();
    }
    else {
        copied_chain = selected_chain;
    }
}

void song_insert_new_chain(void)
{

}

void song_delete_chain(void)
{
    uint8_t chain = data_get_song_chain(cursor.x, cursor.y);

    if (chain == 0x00)
        return;

    copied_chain = chain;

    data_set_song_chain(0x00, cursor.x, cursor.y);
    song_update_chain();
}

void song_change_chain(joystick_position_t joystick_position)
{
    int32_t selected_chain = (int32_t) data_get_song_chain(cursor.x, cursor.y);
    int32_t new_chain = selected_chain;

    if (selected_chain == 0x00)
        return;

    switch (joystick_position) {
        case JOYSTICK_POSITION_UP:
            new_chain = change_value_within_bounds(selected_chain, +1, 0x01, CHAIN_COUNT);
            break;

        case JOYSTICK_POSITION_DOWN:
            new_chain = change_value_within_bounds(selected_chain, -1, 0x01, CHAIN_COUNT);
            break;

        case JOYSTICK_POSITION_RIGHT:
            new_chain = change_value_within_bounds(selected_chain, +16, 0x01, CHAIN_COUNT);
            break;

        case JOYSTICK_POSITION_LEFT:
            new_chain = change_value_within_bounds(selected_chain, -16, 0x01, CHAIN_COUNT);
            break;

        default:
            return;
    }

    if (new_chain != selected_chain) {
        data_set_song_chain(new_chain, cursor.x, cursor.y);
        song_update_chain();
        copied_chain = new_chain;
    }
}

uint32_t song_get_selected_chain(void)
{
    return data_get_song_chain(cursor.x,cursor.y);
}
