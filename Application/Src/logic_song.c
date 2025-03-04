#include "logic_song.h"
#include <stdbool.h>
#include "data.h"
#include "lcd.h"

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

    for (int32_t i = 0; i < 32; i++)
        LCD_draw(' ', i + 1, 2, COLOR_NORMAL);
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
    for (int32_t y = 4; y <= 28; y++)
        for (int32_t x = 30; x <= 32; x++)
            LCD_draw(' ', x, y, COLOR_NORMAL);
}

void song_draw_song_channels(void)
{
    LCD_draw(' ', 1, 4, COLOR_NORMAL);
    LCD_draw(' ', 2, 4, COLOR_NORMAL);
    LCD_draw(' ', 3, 4, COLOR_NORMAL);

    for (int32_t i = 0; i < CHANNEL_COUNT; i++) {
        LCD_draw('1' + i, 3 * i + 4, 4, COLOR_DARK_FADE);
        LCD_draw(' ', 3 * i + 5, 4, COLOR_DARK_FADE);

        LCD_draw(' ', 3 * i + 6, 4, COLOR_NORMAL);
    }

    LCD_draw(' ', 31, 4, COLOR_NORMAL);
    LCD_draw(' ', 32, 4, COLOR_NORMAL);
}

void song_draw_song_row_numbers(void)
{
    for (int32_t i = 0; i < SONG_CHART_ROWS_ON_SCREEN; i++) {
        uint8_t row = scroll + i;
        color_t color;

        if (row % 4 == 0)
            color = COLOR_DARK_FADE;
        else
            color =COLOR_NORMAL_FADE;

        // Left side
        LCD_draw(hex_digit[row / 0x10], 1, i + 5, color);
        LCD_draw(hex_digit[row % 0x10], 2, i + 5, color);

        // Right side
        LCD_draw(hex_digit[row / 0x10], 28, i + 5, color);
        LCD_draw(hex_digit[row % 0x10], 29, i + 5, color);
    }
}

void song_draw_song_blank_space(void)
{
    for (int32_t y = 0; y < SONG_CHART_ROWS_ON_SCREEN; y++) {
        uint8_t row = scroll + y;
        for (int32_t x = 0; x < CHANNEL_COUNT + 1; x++) {
            color_t color;

            if (row % 4 == 0)
                color = COLOR_DARK;
            else
                color = COLOR_NORMAL;

            LCD_draw(' ' , 3 * x + 3, y + 5, color);
        }
    }
}

void song_draw_song_data(void)
{
    for (int32_t y = 0; y < SONG_CHART_ROWS_ON_SCREEN; y++) {
        uint8_t row = scroll + y;
        for (int32_t x = 0; x < CHANNEL_COUNT; x++) {
            uint8_t chain = data_get_song_chart_chain(x, row);
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
                LCD_draw('-', 3 * x + 4, y + 5, color);
                LCD_draw('-', 3 * x + 5, y + 5, color);
            }
            else {
                LCD_draw(hex_digit[chain / 0x10], 3 * x + 4, y + 5, color);
                LCD_draw(hex_digit[chain % 0x10], 3 * x + 5, y + 5, color);
            }
        }
    }
}

void song_highlight_cursor(void)
{
    int32_t highlighted_row = cursor.y - scroll;

    if (cursor.x < 0 || CHANNEL_COUNT <= cursor.x)
        return;

    if (highlighted_row < 0 || SONG_CHART_ROWS_ON_SCREEN <= highlighted_row)
        return;

    LCD_change_color(COLOR_HIGHLIGHT, cursor.x * 3 + 4, highlighted_row + 5);
    LCD_change_color(COLOR_HIGHLIGHT, cursor.x * 3 + 5, highlighted_row + 5);
}

void song_unhighlight_cursor(void)
{
    if (cursor.x < 0 || CHANNEL_COUNT <= cursor.x)
        return;

    int32_t highlighted_row = cursor.y - scroll;

    if (highlighted_row < 0 || SONG_CHART_ROWS_ON_SCREEN <= highlighted_row)
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

    if (data_get_song_chart_chain(cursor.x, cursor.y) == 0x00) {
        LCD_change_color(color_fade, cursor.x * 3 + 4, highlighted_row + 5);
        LCD_change_color(color_fade, cursor.x * 3 + 5, highlighted_row + 5);
    }
    else {
        LCD_change_color(color_normal, cursor.x * 3 + 4, highlighted_row + 5);
        LCD_change_color(color_normal, cursor.x * 3 + 5, highlighted_row + 5);
    }
}

void song_highlight_channel(void)
{
    if (cursor.x < 0 || CHANNEL_COUNT <= cursor.x)
        return;

    LCD_change_color(COLOR_DARK, cursor.x * 3 + 4, 4);
}

void song_unhighlight_channel(void)
{
    if (cursor.x < 0 || CHANNEL_COUNT <= cursor.x)
        return;

    LCD_change_color(COLOR_DARK_FADE, cursor.x * 3 + 4, 4);
}

void song_highlight_row_number(void)
{
    int32_t highlighted_row = cursor.y - scroll;

    if (highlighted_row < 0 || SONG_CHART_ROWS_ON_SCREEN <= highlighted_row)
        return;

    if (cursor.y % 4 == 0) {
        LCD_change_color(COLOR_DARK, 1,  highlighted_row + 5);
        LCD_change_color(COLOR_DARK, 2,  highlighted_row + 5);
        LCD_change_color(COLOR_DARK, 28, highlighted_row + 5);
        LCD_change_color(COLOR_DARK, 29, highlighted_row + 5);
    }
    else {
        LCD_change_color(COLOR_NORMAL, 1,  highlighted_row + 5);
        LCD_change_color(COLOR_NORMAL, 2,  highlighted_row + 5);
        LCD_change_color(COLOR_NORMAL, 28, highlighted_row + 5);
        LCD_change_color(COLOR_NORMAL, 29, highlighted_row + 5);
    }
}

void song_unhighlight_row_number(void)
{
    int32_t highlighted_row = cursor.y - scroll;

    if (highlighted_row < 0 || SONG_CHART_ROWS_ON_SCREEN <= highlighted_row)
        return;

    if (cursor.y % 4 == 0) {
        LCD_change_color(COLOR_DARK_FADE, 1,  highlighted_row + 5);
        LCD_change_color(COLOR_DARK_FADE, 2,  highlighted_row + 5);
        LCD_change_color(COLOR_DARK_FADE, 28, highlighted_row + 5);
        LCD_change_color(COLOR_DARK_FADE, 29, highlighted_row + 5);
    }
    else {
        LCD_change_color(COLOR_NORMAL_FADE, 1,  highlighted_row + 5);
        LCD_change_color(COLOR_NORMAL_FADE, 2,  highlighted_row + 5);
        LCD_change_color(COLOR_NORMAL_FADE, 28, highlighted_row + 5);
        LCD_change_color(COLOR_NORMAL_FADE, 29, highlighted_row + 5);
    }
}

void song_update_chain(void)
{
    uint8_t chain = data_get_song_chart_chain(cursor.x, cursor.y);

    if (chain == 0x00) {
        LCD_change_tile('-', 3 * cursor.x + 4, cursor.y + 5);
        LCD_change_tile('-', 3 * cursor.x + 5, cursor.y + 5);
    }
    else {
        LCD_change_tile(hex_digit[chain / 0x10], 3 * cursor.x + 4, cursor.y + 5);
        LCD_change_tile(hex_digit[chain % 0x10], 3 * cursor.x + 5, cursor.y + 5);
    }
}

void song_move_cursor(joystick_position_t joystick_position)
{
    bool can_move_x;
    bool can_move_y;
    bool need_scroll;

    switch (joystick_position) {
        case JOYSTICK_POSITION_DOWN:
            can_move_y = (cursor.y + 1 < SONG_CHART_ROW_COUNT);
            need_scroll = (cursor.y + 1 >= scroll + SONG_CHART_ROWS_ON_SCREEN);

            if (can_move_y) {
                if (need_scroll) {
                    cursor.y += 1;
                    scroll = cursor.y - (SONG_CHART_ROWS_ON_SCREEN - 1);

                    song_draw_song_row_numbers();
                    song_draw_song_blank_space();
                    song_draw_song_data();

                    song_highlight_cursor();
                    song_highlight_row_number();
                }
                else {
                    song_unhighlight_cursor();
                    song_unhighlight_row_number();

                    cursor.y += 1;

                    song_highlight_cursor();
                    song_highlight_row_number();
                }
            }
            break;

        case JOYSTICK_POSITION_UP:
            can_move_y = (cursor.y - 1 >= 0);
            need_scroll = (cursor.y - 1 < scroll);

            if (can_move_y) {
                if (need_scroll) {
                    cursor.y -= 1;
                    scroll = cursor.y;

                    song_draw_song_row_numbers();
                    song_draw_song_blank_space();
                    song_draw_song_data();

                    song_highlight_cursor();
                    song_highlight_row_number();
                }
                else {
                    song_unhighlight_cursor();
                    song_unhighlight_row_number();

                    cursor.y -= 1;

                    song_highlight_cursor();
                    song_highlight_row_number();
                }
            }
            break;

        case JOYSTICK_POSITION_RIGHT:
            can_move_x = (cursor.x + 1 < CHANNEL_COUNT);

            if (can_move_x) {
                song_unhighlight_cursor();
                song_unhighlight_channel();

                cursor.x += 1;

                song_highlight_cursor();
                song_highlight_channel();
            }
            break;

        case JOYSTICK_POSITION_LEFT:
            can_move_x = (cursor.x - 1 >= 0);

            if (can_move_x) {
                song_unhighlight_cursor();
                song_unhighlight_channel();

                cursor.x -= 1;

                song_highlight_cursor();
                song_highlight_channel();
            }
            break;

        default:
            break;
    }
}

void song_move_page(joystick_position_t joystick_position)
{
    bool can_move_y;
    bool need_scroll;
    bool is_out_of_bounds_y;
    bool is_out_of_bounds_scroll;

    switch (joystick_position) {
        case JOYSTICK_POSITION_DOWN:
            can_move_y = (cursor.y < SONG_CHART_ROW_COUNT - 1);
            need_scroll = (scroll < SONG_CHART_ROW_COUNT - SONG_CHART_ROWS_ON_SCREEN);
            is_out_of_bounds_y = (cursor.y + 16 >= SONG_CHART_ROW_COUNT);
            is_out_of_bounds_scroll = (scroll + 16 > SONG_CHART_ROW_COUNT - SONG_CHART_ROWS_ON_SCREEN);

            if (need_scroll) {
                if (is_out_of_bounds_y)
                    cursor.y = SONG_CHART_ROW_COUNT - 1;
                else
                    cursor.y += 16;

                if (is_out_of_bounds_scroll)
                    scroll = SONG_CHART_ROW_COUNT - SONG_CHART_ROWS_ON_SCREEN;
                else
                    scroll += 16;

                song_draw_song_row_numbers();
                song_draw_song_blank_space();
                song_draw_song_data();

                song_highlight_cursor();
                song_highlight_row_number();
            }
            else if (can_move_y) {
                song_unhighlight_cursor();
                song_unhighlight_row_number();

                if (is_out_of_bounds_y)
                    cursor.y = SONG_CHART_ROW_COUNT - 1;
                else
                    cursor.y += 16;

                song_highlight_cursor();
                song_highlight_row_number();
            }
            break;

        case JOYSTICK_POSITION_UP:
            can_move_y = (cursor.y > 0);
            need_scroll = (scroll > 0);
            is_out_of_bounds_y = (cursor.y - 16 < 0);
            is_out_of_bounds_scroll = (scroll - 16 < 0);

            if (need_scroll) {
                if (is_out_of_bounds_y)
                    cursor.y = 0;
                else
                    cursor.y -= 16;

                if (is_out_of_bounds_scroll)
                    scroll = 0;
                else
                    scroll -= 16;

                song_draw_song_row_numbers();
                song_draw_song_blank_space();
                song_draw_song_data();

                song_highlight_cursor();
                song_highlight_row_number();
            }
            else if (can_move_y) {
                song_unhighlight_cursor();
                song_unhighlight_row_number();

                if (is_out_of_bounds_y)
                    cursor.y = 0;
                else
                    cursor.y -= 16;

                song_highlight_cursor();
                song_highlight_row_number();
            }
            break;

        default:
            break;
    }
}

void song_insert_chain()
{
    uint8_t selected_chain = data_get_song_chart_chain(cursor.x, cursor.y);

    if (selected_chain == 0x00) {
        data_set_song_chart_chain(copied_chain, cursor.x, cursor.y);
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
    uint8_t chain = data_get_song_chart_chain(cursor.x, cursor.y);

    if (chain == 0x00)
        return;

    copied_chain = chain;

    data_set_song_chart_chain(0x00, cursor.x, cursor.y);
    song_update_chain();
}

void song_change_chain(joystick_position_t joystick_position)
{
    int32_t chain = (int32_t) data_get_song_chart_chain(cursor.x, cursor.y);

    if (chain == 0x00)
        return;

    switch (joystick_position) {
        case JOYSTICK_POSITION_UP:
            if (chain + 1 <= 0xFF) {
                data_set_song_chart_chain(chain + 1, cursor.x, cursor.y);
                song_update_chain();
                copied_chain = chain + 1;
            }
            break;

        case JOYSTICK_POSITION_DOWN:
            if (chain - 1 >= 0x01) {
                data_set_song_chart_chain(chain - 1, cursor.x, cursor.y);
                song_update_chain();
                copied_chain = chain - 1;
            }
            break;

        case JOYSTICK_POSITION_RIGHT:
            if (chain + 16 <= 0xFF) {
                data_set_song_chart_chain(chain + 16, cursor.x, cursor.y);
                song_update_chain();
                copied_chain = chain + 16;
            }
            else if (chain < 0xFF) {
                data_set_song_chart_chain(0xFF, cursor.x, cursor.y);
                song_update_chain();
                copied_chain = 0xFF;
            }
            break;

        case JOYSTICK_POSITION_LEFT:
            if (chain - 16 >= 0x01) {
                data_set_song_chart_chain(chain - 16, cursor.x, cursor.y);
                song_update_chain();
                copied_chain = chain - 16;
            }
            else if (chain > 0x01) {
                data_set_song_chart_chain(0x01, cursor.x, cursor.y);
                song_update_chain();
                copied_chain = 0x01;
            }
            break;

        default:
            break;
    }
}

uint32_t song_get_selected_chain(void)
{
    return data_get_song_chart_chain(cursor.x,cursor.y);
}
