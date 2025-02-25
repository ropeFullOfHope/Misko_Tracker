#include "logic_song.h"
#include <stdbool.h>
#include "data.h"
#include "lcd.h"

typedef struct {
    int32_t x;
    int32_t y;
} cursor_t;

static cursor_t cursor_song = {0};
static int32_t scroll_song = 0;

void song_draw_title(void)
{
    const char title_tiles[2][32] = {
        {'S','o','n','g',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
         ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
         ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',}
    };

    for (uint32_t y = 0; y < 2; y++) {
        for (uint32_t x = 0; x < 32; x++) {
            LCD_draw(title_tiles[y][x], x + 1, y + 1, COLOR_NORMAL);
        }
    }
}

void song_draw_chart(void)
{
    /* Draw channel labels */
    const struct {
        uint8_t tile;
        color_t color;
    } channels[32] = {
        {' ', COLOR_NORMAL},    {' ', COLOR_NORMAL},    {' ', COLOR_NORMAL},
        {'1', COLOR_DARK_FADE}, {' ', COLOR_DARK_FADE},
        {' ', COLOR_NORMAL},
        {'2', COLOR_DARK_FADE}, {' ', COLOR_DARK_FADE},
        {' ', COLOR_NORMAL},
        {'3', COLOR_DARK_FADE}, {' ', COLOR_DARK_FADE},
        {' ', COLOR_NORMAL},
        {'4', COLOR_DARK_FADE}, {' ', COLOR_DARK_FADE},
        {' ', COLOR_NORMAL},
        {'5', COLOR_DARK_FADE}, {' ', COLOR_DARK_FADE},
        {' ', COLOR_NORMAL},
        {'6', COLOR_DARK_FADE}, {' ', COLOR_DARK_FADE},
        {' ', COLOR_NORMAL},
        {'7', COLOR_DARK_FADE}, {' ', COLOR_DARK_FADE},
        {' ', COLOR_NORMAL},
        {'8', COLOR_DARK_FADE}, {' ', COLOR_DARK_FADE},
        {' ', COLOR_NORMAL},    {' ', COLOR_NORMAL},    {' ', COLOR_NORMAL},
        {' ', COLOR_NORMAL},    {' ', COLOR_NORMAL},    {' ', COLOR_NORMAL}
    };

    for (uint32_t x = 0; x < 32; x++) {
        LCD_draw(channels[x].tile, x + 1, 4, channels[x].color);
    }

    /* Draw chart with row numbers */
    for (uint32_t y = 0; y < SONG_CHART_ROWS_ON_SCREEN; y++) {
        uint32_t row_number = scroll_song + y;

        if (row_number > 0xFF) {
            for (uint32_t x = 0; x < 32; x++) {
                LCD_draw(' ', x + 1, y + 5, COLOR_NORMAL);
            }
            continue;
        }

        uint8_t pattern[CHANNEL_COUNT];

        for (uint32_t i = 0; i < CHANNEL_COUNT; i++)
            pattern[i] = data_get_song_chart_entry(i, row_number);

        color_t color_normal;
        color_t color_fade;

        if (row_number % 4 == 0) {
            color_normal = COLOR_DARK;
            color_fade = COLOR_DARK_FADE;
        }
        else {
            color_normal = COLOR_NORMAL;
            color_fade = COLOR_NORMAL_FADE;
        }

        LCD_draw(hex_digit[row_number / 0x10], 1, y + 5, color_fade);
        LCD_draw(hex_digit[row_number % 0x10], 2, y + 5, color_fade);

        LCD_draw(' ', 3, y + 5, color_normal);

        for (uint32_t i = 0; i < CHANNEL_COUNT; i++) {
            if (pattern[0] == 0) {
                LCD_draw('-', i * 3 + 4, y + 5, color_fade);
                LCD_draw('-', i * 3 + 5, y + 5, color_fade);
            }
            else {
                LCD_draw(hex_digit[pattern[0] / 0x10], i * 3 + 4, y + 5, color_normal);
                LCD_draw(hex_digit[pattern[0] % 0x10], i * 3 + 5, y + 5, color_normal);
            }

            LCD_draw(' ', i * 3 + 6, y + 5, color_normal);
        }

        LCD_draw(hex_digit[row_number / 0x10], 28, y + 5, color_fade);
        LCD_draw(hex_digit[row_number % 0x10], 29, y + 5, color_fade);

        for (uint32_t x = 0; x < 3; x++)
            LCD_draw(' ', x + 30, y + 5, COLOR_NORMAL);
    }
}

void song_highlight_cursor(void)
{
    int32_t highlighted_row = cursor_song.y - scroll_song;

    if (cursor_song.x < 0 || CHANNEL_COUNT <= cursor_song.x)
        return;

    if (highlighted_row < 0 || SONG_CHART_ROWS_ON_SCREEN <= highlighted_row)
        return;

    LCD_change_color(COLOR_HIGHLIGHT, cursor_song.x * 3 + 4, highlighted_row + 5);
    LCD_change_color(COLOR_HIGHLIGHT, cursor_song.x * 3 + 5, highlighted_row + 5);
}

void song_unhighlight_cursor(void)
{
    if (cursor_song.x < 0 || CHANNEL_COUNT <= cursor_song.x)
        return;

    int32_t highlighted_row = cursor_song.y - scroll_song;

    if (highlighted_row < 0 || SONG_CHART_ROWS_ON_SCREEN <= highlighted_row)
        return;

    color_t color_normal;
    color_t color_fade;

    if (cursor_song.y % 4 == 0) {
        color_normal = COLOR_DARK;
        color_fade = COLOR_DARK_FADE;
    }
    else {
        color_normal = COLOR_NORMAL;
        color_fade = COLOR_NORMAL_FADE;
    }

    if (data_get_song_chart_entry(cursor_song.x, cursor_song.y) == 0x00) {
        LCD_change_color(color_fade, cursor_song.x * 3 + 4, highlighted_row + 5);
        LCD_change_color(color_fade, cursor_song.x * 3 + 5, highlighted_row + 5);
    }
    else {
        LCD_change_color(color_normal, cursor_song.x * 3 + 4, highlighted_row + 5);
        LCD_change_color(color_normal, cursor_song.x * 3 + 5, highlighted_row + 5);
    }
}

void song_highlight_column(void)
{
    if (cursor_song.x < 0 || CHANNEL_COUNT <= cursor_song.x)
        return;

    LCD_change_color(COLOR_HIGHLIGHT, cursor_song.x * 3 + 4, 4);
    LCD_change_color(COLOR_HIGHLIGHT, cursor_song.x * 3 + 5, 4);
}

void song_unhighlight_column(void)
{
    if (cursor_song.x < 0 || CHANNEL_COUNT <= cursor_song.x)
        return;

    LCD_change_color(COLOR_DARK_FADE, cursor_song.x * 3 + 4, 4);
    LCD_change_color(COLOR_DARK_FADE, cursor_song.x * 3 + 5, 4);
}

void song_highlight_row(void)
{
    int32_t highlighted_row = cursor_song.y - scroll_song;

    if (highlighted_row < 0 || SONG_CHART_ROWS_ON_SCREEN <= highlighted_row)
        return;

    LCD_change_color(COLOR_HIGHLIGHT, 1,  highlighted_row + 5);
    LCD_change_color(COLOR_HIGHLIGHT, 2,  highlighted_row + 5);
    LCD_change_color(COLOR_HIGHLIGHT, 28, highlighted_row + 5);
    LCD_change_color(COLOR_HIGHLIGHT, 29, highlighted_row + 5);
}

void song_unhighlight_row(void)
{
    int32_t highlighted_row = cursor_song.y - scroll_song;

    if (highlighted_row < 0 || SONG_CHART_ROWS_ON_SCREEN <= highlighted_row)
        return;

    if (cursor_song.y % 4 == 0) {
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

void song_move_cursor(joystick_position_t joystick_position)
{
    bool can_move_x;
    bool can_move_y;
    bool need_scroll;

    switch (joystick_position) {
        case JOYSTICK_POSITION_DOWN:
            can_move_y = (cursor_song.y + 1 < SONG_CHART_ROW_COUNT);
            need_scroll = (cursor_song.y + 1 >= scroll_song + SONG_CHART_ROWS_ON_SCREEN);

            if (can_move_y) {
                if (need_scroll) {
                    cursor_song.y += 1;
                    scroll_song = cursor_song.y - (SONG_CHART_ROWS_ON_SCREEN - 1);

                    song_draw_chart();
                    song_highlight_cursor();
                    song_highlight_column();
                    song_highlight_row();
                }
                else {
                    song_unhighlight_cursor();
                    song_unhighlight_row();

                    cursor_song.y += 1;

                    song_highlight_cursor();
                    song_highlight_row();
                }
            }
            break;

        case JOYSTICK_POSITION_UP:
            can_move_y = (cursor_song.y - 1 >= 0);
            need_scroll = (cursor_song.y - 1 < scroll_song);

            if (can_move_y) {
                if (need_scroll) {
                    cursor_song.y -= 1;
                    scroll_song = cursor_song.y;

                    song_draw_chart();
                    song_highlight_cursor();
                    song_highlight_column();
                    song_highlight_row();
                }
                else {
                    song_unhighlight_cursor();
                    song_unhighlight_row();

                    cursor_song.y -= 1;

                    song_highlight_cursor();
                    song_highlight_row();
                }
            }
            break;

        case JOYSTICK_POSITION_RIGHT:
            can_move_x = (cursor_song.x + 1 < CHANNEL_COUNT);

            if (can_move_x) {
                song_unhighlight_cursor();
                song_unhighlight_column();

                cursor_song.x += 1;

                song_highlight_cursor();
                song_highlight_column();
            }
            break;

        case JOYSTICK_POSITION_LEFT:
            can_move_x = (cursor_song.x - 1 >= 0);

            if (can_move_x) {
                song_unhighlight_cursor();
                song_unhighlight_column();

                cursor_song.x -= 1;

                song_highlight_cursor();
                song_highlight_column();
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
            can_move_y = (cursor_song.y < SONG_CHART_ROW_COUNT - 1);
            need_scroll = (scroll_song < SONG_CHART_ROW_COUNT - SONG_CHART_ROWS_ON_SCREEN);
            is_out_of_bounds_y = (cursor_song.y + 16 >= SONG_CHART_ROW_COUNT);
            is_out_of_bounds_scroll = (scroll_song + 16 > SONG_CHART_ROW_COUNT - SONG_CHART_ROWS_ON_SCREEN);

            if (need_scroll) {
                if (is_out_of_bounds_y)
                    cursor_song.y = SONG_CHART_ROW_COUNT - 1;
                else
                    cursor_song.y += 16;

                if (is_out_of_bounds_scroll)
                    scroll_song = SONG_CHART_ROW_COUNT - SONG_CHART_ROWS_ON_SCREEN;
                else
                    scroll_song += 16;

                song_draw_chart();
                song_highlight_cursor();
                song_highlight_column();
                song_highlight_row();
            }
            else if (can_move_y) {
                song_unhighlight_cursor();
                song_unhighlight_row();

                if (is_out_of_bounds_y)
                    cursor_song.y = SONG_CHART_ROW_COUNT - 1;
                else
                    cursor_song.y += 16;

                song_highlight_cursor();
                song_highlight_row();
            }
            break;

        case JOYSTICK_POSITION_UP:
            can_move_y = (cursor_song.y > 0);
            need_scroll = (scroll_song > 0);
            is_out_of_bounds_y = (cursor_song.y - 16 < 0);
            is_out_of_bounds_scroll = (scroll_song - 16 < 0);

            if (need_scroll) {
                if (is_out_of_bounds_y)
                    cursor_song.y = 0;
                else
                    cursor_song.y -= 16;

                if (is_out_of_bounds_scroll)
                    scroll_song = 0;
                else
                    scroll_song -= 16;

                song_draw_chart();
                song_highlight_cursor();
                song_highlight_column();
                song_highlight_row();
            }
            else if (can_move_y) {
                song_unhighlight_cursor();
                song_unhighlight_row();

                if (is_out_of_bounds_y)
                    cursor_song.y = 0;
                else
                    cursor_song.y -= 16;

                song_highlight_cursor();
                song_highlight_row();
            }
            break;

        default:
            break;
    }
}

void song_insert_pattern(void)
{

}

void song_insert_new_pattern(void)
{

}

void song_delete_pattern(void)
{

}

void song_change_pattern(joystick_position_t joystick_position)
{

}

uint32_t song_get_selected_pattern(void)
{
    return data_get_song_chart_entry(cursor_song.x,cursor_song.y);
}
