#include "logic_song.h"
#include <stdbool.h>
#include "data.h"
#include "region.h"
#include "helper_functions.h"

static void song_draw_title(void);
static void song_draw_editor_song(void);
static void song_draw_editor_song_channel_labels(void);
static void song_draw_editor_song_row_numbers(void);
static void song_draw_editor_song_spacing(void);
static void song_draw_editor_song_data(void);
static void song_clear_title(void);
static void song_clear_editor_song(void);
static void song_highlight_cursor(void);
static void song_unhighlight_cursor(void);
static void song_highlight_channel_label(void);
static void song_unhighlight_channel_label(void);
static void song_highlight_row_number(void);
static void song_unhighlight_row_number(void);
static void song_update_chain(void);

typedef struct {
    int32_t x;
    int32_t y;
} cursor_t;

static cursor_t cursor = {0};
static int32_t scroll = 0;
static uint8_t copied_chain = 0x01;

void song_init(void)
{
    song_draw_title();
    song_draw_editor_song();

    song_highlight_cursor();
    song_highlight_channel_label();
    song_highlight_row_number();
}

void song_deinit(void)
{
    song_clear_title();
    song_clear_editor_song();
}

void song_draw_title(void)
{
    const region_t *REGION = &REGION_SONG_TITLE;
    const uint8_t TITLE[] = {'S','o','n','g'};
    const int32_t TITLE_LENGTH = ARRAY_SIZE(TITLE);

    for (int32_t i = 0; i < TITLE_LENGTH; i++)
        region_draw(REGION, TITLE[i], COLOR_NORMAL, i, 0);
}

void song_draw_editor_song(void)
{
    song_draw_editor_song_channel_labels();
    song_draw_editor_song_row_numbers();
    song_draw_editor_song_spacing();
    song_draw_editor_song_data();
}

void song_draw_editor_song_channel_labels(void)
{
    const region_t *REGION = &REGION_SONG_EDITOR_SONG;

    for (int32_t i = 0; i < CHANNEL_COUNT; i++) {
        region_draw(REGION, (uint8_t) i + '1', COLOR_DARK_FADE, i * 3 + 3, 0);
        region_draw(REGION, (uint8_t) ' ', COLOR_DARK_FADE, i * 3 + 4, 0);
    }
}

void song_draw_editor_song_row_numbers(void)
{
    const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t ROWS_ON_SCREEN = REGION_SONG_EDITOR_SONG.size.y - 1;

    for (int32_t i = 0; i < ROWS_ON_SCREEN; i++) {
        uint8_t row = scroll + i;
        color_t color;

        if (row % 4 == 0)
            color = COLOR_DARK_FADE;
        else
            color = COLOR_NORMAL_FADE;

        // Left side
        region_draw(REGION, HEX_DIGIT[row / 0x10], color, 0, i + 1);
        region_draw(REGION, HEX_DIGIT[row % 0x10], color, 1, i + 1);

        // Right side
        region_draw(REGION, HEX_DIGIT[row / 0x10], color, CHANNEL_COUNT * 3 + 3, i + 1);
        region_draw(REGION, HEX_DIGIT[row % 0x10], color, CHANNEL_COUNT * 3 + 4, i + 1);
    }
}

void song_draw_editor_song_spacing(void)
{
    const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t ROWS_ON_SCREEN = REGION_SONG_EDITOR_SONG.size.y - 1;

    for (int32_t y = 0; y < ROWS_ON_SCREEN; y++) {
        uint8_t row = scroll + y;
        color_t color;

        if (row % 4 == 0)
            color = COLOR_DARK;
        else
            color = COLOR_NORMAL;

        for (int32_t x = 0; x < CHANNEL_COUNT + 1; x++)
            region_draw(REGION, ' ', color, x * 3 + 2, y + 1);
    }
}

void song_draw_editor_song_data(void)
{
    const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t ROWS_ON_SCREEN = REGION_SONG_EDITOR_SONG.size.y - 1;

    for (int32_t y = 0; y < ROWS_ON_SCREEN; y++) {
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
                region_draw(REGION, '-', color, x * 3 + 3, y + 1);
                region_draw(REGION, '-', color, x * 3 + 4, y + 1);
            }
            else {
                region_draw(REGION, HEX_DIGIT[chain / 0x10], color, x * 3 + 3, y + 1);
                region_draw(REGION, HEX_DIGIT[chain % 0x10], color, x * 3 + 4, y + 1);
            }
        }
    }
}

void song_clear_title(void)
{
    const region_t *REGION = &REGION_SONG_TITLE;

    region_fill(REGION, ' ', COLOR_NORMAL);
}

void song_clear_editor_song(void)
{
    const region_t *REGION = &REGION_SONG_EDITOR_SONG;

    region_fill(REGION, ' ', COLOR_NORMAL);
}

void song_highlight_cursor(void)
{
    const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t RELATIVE_ROW = cursor.y - scroll;

    region_change_color(REGION, COLOR_HIGHLIGHT, cursor.x * 3 + 3, RELATIVE_ROW + 1);
    region_change_color(REGION, COLOR_HIGHLIGHT, cursor.x * 3 + 4, RELATIVE_ROW + 1);

}

void song_unhighlight_cursor(void)
{
    const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t RELATIVE_ROW = cursor.y - scroll;
    const uint8_t SELECTED_CHAIN = data_get_song_chain(cursor.x, cursor.y);

    const color_t COLOR_DEFAULT = cursor.y % 4 == 0 ? COLOR_DARK : COLOR_NORMAL;
    const color_t COLOR_FADE    = cursor.y % 4 == 0 ? COLOR_DARK_FADE : COLOR_NORMAL_FADE;

    const color_t COLOR = SELECTED_CHAIN == 0x00 ? COLOR_FADE : COLOR_DEFAULT;

    region_change_color(REGION, COLOR, cursor.x * 3 + 3, RELATIVE_ROW + 1);
    region_change_color(REGION, COLOR, cursor.x * 3 + 4, RELATIVE_ROW + 1);
}

void song_highlight_channel_label(void)
{
    const region_t *REGION = &REGION_SONG_EDITOR_SONG;

    region_change_color(REGION, COLOR_DARK, cursor.x * 3 + 3, 0);
}

void song_unhighlight_channel_label(void)
{
    const region_t *REGION = &REGION_SONG_EDITOR_SONG;

    region_change_color(REGION, COLOR_DARK_FADE, cursor.x * 3 + 3, 0);
}

void song_highlight_row_number(void)
{
    const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t RELATIVE_ROW = cursor.y - scroll;

    color_t color;

    if (cursor.y % 4 == 0)
        color = COLOR_DARK;
    else
        color = COLOR_NORMAL;

    // Left side
    region_change_color(REGION, color, 0, RELATIVE_ROW + 1);
    region_change_color(REGION, color, 1, RELATIVE_ROW + 1);

    // Right side
    region_change_color(REGION, color, CHANNEL_COUNT * 3 + 3, RELATIVE_ROW + 1);
    region_change_color(REGION, color, CHANNEL_COUNT * 3 + 4, RELATIVE_ROW + 1);
}

void song_unhighlight_row_number(void)
{
    const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t RELATIVE_ROW = cursor.y - scroll;

    color_t color;

    if (cursor.y % 4 == 0)
        color = COLOR_DARK_FADE;
    else
        color = COLOR_NORMAL_FADE;

    // Left side
    region_change_color(REGION, color, 0, RELATIVE_ROW + 1);
    region_change_color(REGION, color, 1, RELATIVE_ROW + 1);

    // Right side
    region_change_color(REGION, color, CHANNEL_COUNT * 3 + 3, RELATIVE_ROW + 1);
    region_change_color(REGION, color, CHANNEL_COUNT * 3 + 4, RELATIVE_ROW + 1);
}

void song_update_chain(void)
{
    const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t RELATIVE_ROW = cursor.y - scroll;
    const uint8_t SELECTED_CHAIN = data_get_song_chain(cursor.x, cursor.y);

    if (SELECTED_CHAIN == 0x00) {
        region_change_symbol(REGION, '-', cursor.x * 3 + 3, RELATIVE_ROW + 1);
        region_change_symbol(REGION, '-', cursor.x * 3 + 4, RELATIVE_ROW + 1);
    }
    else {
        region_change_symbol(REGION, HEX_DIGIT[SELECTED_CHAIN / 0x10], cursor.x * 3 + 3, RELATIVE_ROW + 1);
        region_change_symbol(REGION, HEX_DIGIT[SELECTED_CHAIN % 0x10], cursor.x * 3 + 4, RELATIVE_ROW + 1);
    }
}

void song_move_cursor(joystick_position_t joystick_position)
{
    const int32_t ROWS_ON_SCREEN = REGION_SONG_EDITOR_SONG.size.y - 1;

    cursor_t new_cursor = cursor;
    int32_t new_scroll = scroll;

    switch (joystick_position) {
        case JOYSTICK_POSITION_DOWN:
            new_cursor.y = change_value_within_bounds(cursor.y, +1, 0x00, SONG_ROW_COUNT - 1);
            new_scroll = change_value_within_bounds(scroll, 0, new_cursor.y - ROWS_ON_SCREEN + 1, new_cursor.y);
            break;

        case JOYSTICK_POSITION_UP:
            new_cursor.y = change_value_within_bounds(cursor.y, -1, 0x00, SONG_ROW_COUNT - 1);
            new_scroll = change_value_within_bounds(scroll, 0, new_cursor.y - ROWS_ON_SCREEN + 1, new_cursor.y);
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

        song_draw_editor_song_row_numbers();
        song_draw_editor_song_spacing();
        song_draw_editor_song_data();

        if (new_cursor.x != cursor.x) {
            song_unhighlight_channel_label();
            cursor.x = new_cursor.x;
            song_highlight_channel_label();
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
            song_unhighlight_channel_label();
            cursor.x = new_cursor.x;
            song_highlight_channel_label();
        }

        song_highlight_cursor();
    }
}

void song_move_page(joystick_position_t joystick_position)
{
    const int32_t ROWS_ON_SCREEN = REGION_SONG_EDITOR_SONG.size.y - 1;

    cursor_t new_cursor = cursor;
    int32_t new_scroll = scroll;

    switch (joystick_position) {
        case JOYSTICK_POSITION_DOWN:
            new_cursor.y = change_value_within_bounds(cursor.y, +16, 0x00, SONG_ROW_COUNT - 1);
            new_scroll = change_value_within_bounds(scroll, 0, new_cursor.y - ROWS_ON_SCREEN + 1, new_cursor.y);
            break;

        case JOYSTICK_POSITION_UP:
            new_cursor.y = change_value_within_bounds(cursor.y, -16, 0x00, SONG_ROW_COUNT - 1);
            new_scroll = change_value_within_bounds(scroll, 0, new_cursor.y - ROWS_ON_SCREEN + 1, new_cursor.y);
            break;

        default:
            return;
    }

    if (new_scroll != scroll) {
        scroll = new_scroll;
        cursor.y = new_cursor.y;

        song_draw_editor_song_row_numbers();
        song_draw_editor_song_spacing();
        song_draw_editor_song_data();

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
    const uint8_t SELECTED_CHAIN = data_get_song_chain(cursor.x, cursor.y);

    if (SELECTED_CHAIN == 0x00) {
        data_set_song_chain(copied_chain, cursor.x, cursor.y);
        song_update_chain();
    }
    else {
        copied_chain = SELECTED_CHAIN;
    }
}

void song_insert_new_chain(void)
{

}

void song_delete_chain(void)
{
    const uint8_t SELECTED_CHAIN = data_get_song_chain(cursor.x, cursor.y);

    if (SELECTED_CHAIN == 0x00)
        return;

    copied_chain = SELECTED_CHAIN;

    data_set_song_chain(0x00, cursor.x, cursor.y);
    song_update_chain();
}

void song_change_chain(joystick_position_t joystick_position)
{
    const int32_t SELECTED_CHAIN = (int32_t) data_get_song_chain(cursor.x, cursor.y);

    int32_t new_chain = SELECTED_CHAIN;

    if (SELECTED_CHAIN == 0x00)
        return;

    switch (joystick_position) {
        case JOYSTICK_POSITION_UP:
            new_chain = change_value_within_bounds(SELECTED_CHAIN, +1, 0x01, CHAIN_COUNT);
            break;

        case JOYSTICK_POSITION_DOWN:
            new_chain = change_value_within_bounds(SELECTED_CHAIN, -1, 0x01, CHAIN_COUNT);
            break;

        case JOYSTICK_POSITION_RIGHT:
            new_chain = change_value_within_bounds(SELECTED_CHAIN, +16, 0x01, CHAIN_COUNT);
            break;

        case JOYSTICK_POSITION_LEFT:
            new_chain = change_value_within_bounds(SELECTED_CHAIN, -16, 0x01, CHAIN_COUNT);
            break;

        default:
            return;
    }

    if (new_chain != SELECTED_CHAIN) {
        data_set_song_chain(new_chain, cursor.x, cursor.y);
        song_update_chain();
        copied_chain = new_chain;
    }
}

uint32_t song_get_selected_chain(void)
{
    return data_get_song_chain(cursor.x,cursor.y);
}
