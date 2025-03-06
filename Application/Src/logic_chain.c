#include "logic_chain.h"
#include <stdbool.h>
#include "data.h"
#include "lcd.h"
#include "helper_functions.h"

typedef struct {
    enum {
        CHAIN_COLUMN_PHRASE,
        CHAIN_COLUMN_TRANSPOSE,
        CHAIN_COLUMN_COUNT
    } x;
    int32_t y;
} cursor_t;

static void chain_draw_title(void);
static void chain_draw_editor(void);
static void chain_draw_chain(void);
static void chain_draw_phrase(void);
static void chain_draw_blank_space(void);
static void chain_draw_chain_blank_space(void);
static void chain_draw_chain_labels(void);
static void chain_draw_chain_row_numbers(void);
static void chain_draw_chain_data(void);
static void chain_draw_phrase_blank(void);
static void chain_draw_phrase_labels(void);
static void chain_draw_phrase_row_numbers(void);
static void chain_draw_phrase_blank_space(void);
static void chain_draw_phrase_data(void);
static void chain_highlight_cursor(void);
static void chain_unhighlight_cursor(void);
static void chain_highlight_label(void);
static void chain_unhighlight_label(void);
static void chain_highlight_row_number(void);
static void chain_unhighlight_row_number(void);
static void chain_update_value(void);

static cursor_t cursor = {0};
static uint8_t selected_chain = 0x01;
static uint8_t previewed_phrase = 0x00;
static uint8_t copied_phrase = 0x01;
static uint8_t copied_transpose = 0x80;

void chain_init(uint8_t chain)
{
    selected_chain = chain;

    chain_draw_title();
    chain_draw_editor();

    chain_highlight_cursor();
    chain_highlight_label();
    chain_highlight_row_number();
}

void chain_draw_title(void)
{
    const uint8_t title[6] = {'C', 'h', 'a', 'i', 'n', ' '};

    for (int32_t i = 0; i < 6; i++)
        LCD_draw(title[i], i + 1, 1, COLOR_NORMAL);

    LCD_draw(hex_digit[selected_chain / 0x10], 7, 1, COLOR_NORMAL);
    LCD_draw(hex_digit[selected_chain % 0x10], 8, 1, COLOR_NORMAL);

    for (int32_t i = 9; i <= 32; i++)
        LCD_draw(' ', i, 1, COLOR_NORMAL);
}

void chain_draw_editor(void)
{
    chain_draw_chain();
    chain_draw_phrase();
    chain_draw_blank_space();
}

void chain_draw_chain(void)
{
    chain_draw_chain_labels();
    chain_draw_chain_row_numbers();
    chain_draw_chain_blank_space();
    chain_draw_chain_data();
}

void chain_draw_phrase(void)
{
    uint8_t phrase = data_get_chain_phrase(selected_chain, cursor.y);

    previewed_phrase = phrase;

    if (phrase == 0x00) {
        chain_draw_phrase_blank();
    }
    else {
        chain_draw_phrase_labels();
        chain_draw_phrase_row_numbers();
        chain_draw_phrase_blank_space();
        chain_draw_phrase_data();
    }
}

void chain_draw_blank_space(void)
{
    for (int32_t y = 3; y <= 19; y++) {
        for (int32_t x = 8; x <= 9; x++)
            LCD_draw(' ', x, y, COLOR_NORMAL);

        for (int32_t x = 21; x <= 32; x++)
            LCD_draw(' ', x, y, COLOR_NORMAL);
    }

    for (int32_t y = 20; y <= 28; y++)
        for (int32_t x = 1; x <= 32; x++)
            LCD_draw(' ', x, y, COLOR_NORMAL);
}

void chain_draw_chain_labels(void)
{
    LCD_draw(' ', 1, 3, COLOR_NORMAL);
    LCD_draw(' ', 2, 3, COLOR_NORMAL);

    LCD_draw('P', 3, 3, COLOR_DARK_FADE);
    LCD_draw(' ', 4, 3, COLOR_DARK_FADE);

    LCD_draw(' ', 5, 3, COLOR_NORMAL);

    LCD_draw('T', 6, 3, COLOR_DARK_FADE);
    LCD_draw(' ', 7, 3, COLOR_DARK_FADE);
}

void chain_draw_chain_row_numbers(void)
{
    for (int32_t i = 0; i < 16; i++) {
        color_t color;

        if (i % 4 == 0)
            color = COLOR_DARK_FADE;

        else
            color = COLOR_NORMAL_FADE;

        LCD_draw(hex_digit[i], 1, i + 4, color);
    }
}

void chain_draw_chain_blank_space(void)
{
    for (int32_t i = 0; i < 16; i++) {
        color_t color;

        if (i % 4 == 0)
            color = COLOR_DARK;

        else
            color = COLOR_NORMAL;

        LCD_draw(' ', 2, i + 4, color);
        LCD_draw(' ', 5, i + 4, color);
    }
}

void chain_draw_chain_data(void)
{
    for (int32_t i = 0; i < 16; i++) {
        uint8_t phrase = data_get_chain_phrase(selected_chain, i);
        uint8_t transpose = data_get_chain_transpose(selected_chain, i);

        color_t color_normal;
        color_t color_fade;

        if (i % 4 == 0) {
            color_normal = COLOR_DARK;
            color_fade = COLOR_DARK_FADE;
        }
        else {
            color_normal = COLOR_NORMAL;
            color_fade = COLOR_NORMAL_FADE;
        }

        if (phrase == 0x00) {
            LCD_draw('-', 3, i + 4, color_fade);
            LCD_draw('-', 4, i + 4, color_fade);
        }
        else {
            LCD_draw(hex_digit[phrase / 0x10], 3, i + 4, color_normal);
            LCD_draw(hex_digit[phrase % 0x10], 4, i + 4, color_normal);
        }

        if (transpose == 0x00) {
            LCD_draw('-', 6, i + 4, color_fade);
            LCD_draw('-', 7, i + 4, color_fade);
        }
        else if (transpose == 0x80) {
            LCD_draw('8', 6, i + 4, color_fade);
            LCD_draw('0', 7, i + 4, color_fade);
        }
        else {
            LCD_draw(hex_digit[transpose / 0x10], 6, i + 4, color_normal);
            LCD_draw(hex_digit[transpose % 0x10], 7, i + 4, color_normal);
        }
    }
}

void chain_draw_phrase_blank(void)
{
    for (int32_t y = 3; y <= 19; y++)
        for(int32_t x = 10; x <= 20; x++)
            LCD_draw(' ', x, y, COLOR_NORMAL);
}

void chain_draw_phrase_labels(void)
{
    LCD_draw(' ', 10, 3, COLOR_NORMAL);
    LCD_draw(' ', 11, 3, COLOR_NORMAL);

    LCD_draw('N', 12, 3, COLOR_DARK_FADE);
    LCD_draw(' ', 13, 3, COLOR_DARK_FADE);
    LCD_draw(' ', 14, 3, COLOR_DARK_FADE);

    LCD_draw(' ', 15, 3, COLOR_NORMAL);

    LCD_draw('I', 16, 3, COLOR_DARK_FADE);
    LCD_draw(' ', 17, 3, COLOR_DARK_FADE);

    LCD_draw(' ', 18, 3, COLOR_NORMAL);

    LCD_draw('V', 19, 3, COLOR_DARK_FADE);
    LCD_draw(' ', 20, 3, COLOR_DARK_FADE);
}

void chain_draw_phrase_row_numbers(void)
{
    for (int32_t i = 0; i < 16; i++) {
        color_t color;

        if (i % 4 == 0)
            color = COLOR_DARK_FADE;

        else
            color = COLOR_NORMAL_FADE;

        LCD_draw(hex_digit[i], 10, i + 4, color);
    }
}

void chain_draw_phrase_blank_space(void)
{
    for (int32_t i = 0; i < 16; i++) {
        color_t color;

        if (i % 4 == 0)
            color = COLOR_DARK;

        else
            color = COLOR_NORMAL;

        LCD_draw(' ', 11, i + 4, color);
        LCD_draw(' ', 15, i + 4, color);
        LCD_draw(' ', 18, i + 4, color);
    }
}

void chain_draw_phrase_data(void)
{
    for (int32_t i = 0; i < 16; i++) {
        uint8_t phrase = data_get_chain_phrase(selected_chain, i);

        uint8_t note = data_get_phrase_note(phrase, i);
        uint8_t instrument = data_get_phrase_instrument(phrase, i);
        uint8_t volume = data_get_phrase_volume(phrase, i);

        color_t color_normal;
        color_t color_fade;

        if (i % 4 == 0) {
            color_normal = COLOR_DARK;
            color_fade = COLOR_DARK_FADE;
        }
        else {
            color_normal = COLOR_NORMAL;
            color_fade = COLOR_NORMAL_FADE;
        }

        if (note == 0x00) {
            LCD_draw('-', 12, i + 4, color_fade);
            LCD_draw('-', 13, i + 4, color_fade);
            LCD_draw('-', 14, i + 4, color_fade);
        }
        else {
            LCD_draw(note_name[note][0], 12, i + 4, color_normal);
            LCD_draw(note_name[note][1], 13, i + 4, color_normal);
            LCD_draw(note_name[note][2], 14, i + 4, color_normal);
        }

        if (instrument == 0x00) {
            LCD_draw('-', 16, i + 4, color_fade);
            LCD_draw('-', 17, i + 4, color_fade);
        }
        else {
            LCD_draw(hex_digit[instrument / 0x10], 16, i + 4, color_normal);
            LCD_draw(hex_digit[instrument % 0x10], 17, i + 4, color_normal);
        }

        if (volume == 0x00) {
            LCD_draw('-', 19, i + 4, color_fade);
            LCD_draw('-', 20, i + 4, color_fade);
        }
        else {
            LCD_draw(hex_digit[volume / 0x10], 19, i + 4, color_normal);
            LCD_draw(hex_digit[volume % 0x10], 20, i + 4, color_normal);
        }
    }
}

void chain_highlight_cursor(void)
{
    if (cursor.x < 0 || CHAIN_COLUMN_COUNT <= cursor.x)
        return;

    if (cursor.y < 0 || 16 <= cursor.y)
        return;

    switch(cursor.x) {
        case CHAIN_COLUMN_PHRASE:
            LCD_change_color(COLOR_HIGHLIGHT, 3, cursor.y + 4);
            LCD_change_color(COLOR_HIGHLIGHT, 4, cursor.y + 4);
            break;

        case CHAIN_COLUMN_TRANSPOSE:
            LCD_change_color(COLOR_HIGHLIGHT, 6, cursor.y + 4);
            LCD_change_color(COLOR_HIGHLIGHT, 7, cursor.y + 4);
            break;

        default:
            break;
    }
}

void chain_unhighlight_cursor(void)
{
    if (cursor.x < 0 || CHAIN_COLUMN_COUNT <= cursor.x)
        return;

    if (cursor.y < 0 || 16 <= cursor.y)
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

    switch(cursor.x) {
        case CHAIN_COLUMN_PHRASE:
            if (data_get_chain_phrase(selected_chain, cursor.y) == 0x00) {
                LCD_change_color(color_fade, 3, cursor.y + 4);
                LCD_change_color(color_fade, 4, cursor.y + 4);
            }
            else {
                LCD_change_color(color_normal, 3, cursor.y + 4);
                LCD_change_color(color_normal, 4, cursor.y + 4);
            }
            break;

        case CHAIN_COLUMN_TRANSPOSE:
            uint8_t transpose = data_get_chain_transpose(selected_chain, cursor.y);
            if (transpose == 0x00 || transpose == 0x80) {
                LCD_change_color(color_fade, 6, cursor.y + 4);
                LCD_change_color(color_fade, 7, cursor.y + 4);
            }
            else {
                LCD_change_color(color_normal, 6, cursor.y + 4);
                LCD_change_color(color_normal, 7, cursor.y + 4);
            }
            break;

        default:
            break;
    }
}

void chain_highlight_label(void)
{
    if (cursor.x < 0 || CHAIN_COLUMN_COUNT <= cursor.x)
        return;

    switch (cursor.x) {
        case CHAIN_COLUMN_PHRASE:
            LCD_change_color(COLOR_DARK, 3, 3);
            break;

        case CHAIN_COLUMN_TRANSPOSE:
            LCD_change_color(COLOR_DARK, 6, 3);
            break;

        default:
            break;
    }
}

void chain_unhighlight_label(void)
{
    if (cursor.x < 0 || CHAIN_COLUMN_COUNT <= cursor.x)
        return;

    switch (cursor.x) {
        case CHAIN_COLUMN_PHRASE:
            LCD_change_color(COLOR_DARK_FADE, 3, 3);
            break;

        case CHAIN_COLUMN_TRANSPOSE:
            LCD_change_color(COLOR_DARK_FADE, 6, 3);
            break;

        default:
            break;
    }
}

void chain_highlight_row_number(void)
{
    if (cursor.y < 0 || 16 <= cursor.y)
        return;

    color_t color;

    if (cursor.y % 4 == 0)
        color = COLOR_DARK;

    else
        color = COLOR_NORMAL;

    LCD_change_color(color, 1, cursor.y + 4);
}

void chain_unhighlight_row_number(void)
{
    if (cursor.y < 0 || 16 <= cursor.y)
        return;

    color_t color;

    if (cursor.y % 4 == 0)
        color = COLOR_DARK_FADE;

    else
        color = COLOR_NORMAL_FADE;

    LCD_change_color(color, 1, cursor.y + 4);
}

void chain_update_value(void)
{
    switch (cursor.x) {
        case CHAIN_COLUMN_PHRASE:
            uint8_t phrase = data_get_chain_phrase(selected_chain, cursor.y);

            if (phrase == 0x00) {
                LCD_change_tile('-', 3, cursor.y + 4);
                LCD_change_tile('-', 4, cursor.y + 4);
            }
            else {
                LCD_change_tile(hex_digit[phrase / 0x10], 3, cursor.y + 4);
                LCD_change_tile(hex_digit[phrase % 0x10], 4, cursor.y + 4);
            }

            break;

        case CHAIN_COLUMN_TRANSPOSE:
            uint8_t transpose = data_get_chain_transpose(selected_chain, cursor.y);

            if (transpose == 0x00) {
                LCD_change_tile('-', 6, cursor.y + 4);
                LCD_change_tile('-', 7, cursor.y + 4);
            }
            else {
                LCD_change_tile(hex_digit[transpose / 0x10], 6, cursor.y + 4);
                LCD_change_tile(hex_digit[transpose % 0x10], 7, cursor.y + 4);
            }

            break;

        default:
            break;
    }
}

void chain_update_phrase_preview(void)
{
    uint8_t selected_phrase = data_get_chain_phrase(selected_chain, cursor.y);

    if (selected_phrase == previewed_phrase)
        return;

    if (selected_phrase == 0x00 || previewed_phrase == 0x00)
        chain_draw_phrase();

    else
        chain_draw_phrase_data();
}

void chain_move_cursor(joystick_position_t joystick_position)
{
    cursor_t new_cursor = cursor;

    switch (joystick_position) {
        case JOYSTICK_POSITION_DOWN:
            new_cursor.y = change_value_within_bounds(cursor.y, +1, 0x00, 0x0F);
            break;

        case JOYSTICK_POSITION_UP:
            new_cursor.y = change_value_within_bounds(cursor.y, -1, 0x00, 0x0F);
            break;

        case JOYSTICK_POSITION_RIGHT:
            new_cursor.x = change_value_within_bounds(cursor.x, +1, 0, CHAIN_COLUMN_COUNT - 1);
            break;

        case JOYSTICK_POSITION_LEFT:
            new_cursor.x = change_value_within_bounds(cursor.x, -1, 0, CHAIN_COLUMN_COUNT - 1);
            break;

        default:
            return;
    }

    if (new_cursor.x != cursor.x || new_cursor.y != cursor.y) {
        chain_unhighlight_cursor();

        if (new_cursor.y != cursor.y) {
            chain_unhighlight_row_number();
            cursor.y = new_cursor.y;
            chain_highlight_row_number();
        }

        if (new_cursor.x != cursor.x) {
            chain_unhighlight_label();
            cursor.x = new_cursor.x;
            chain_highlight_label();
        }

        chain_highlight_cursor();
    }
}

void chain_insert_value()
{
    switch (cursor.x) {
        case CHAIN_COLUMN_PHRASE:
            uint8_t selected_phrase = data_get_chain_phrase(selected_chain, cursor.y);

            if (selected_phrase == 0x00) {
                data_set_chain_phrase(copied_phrase, selected_chain, cursor.y);
                chain_update_value();
                chain_update_phrase_preview();
            }
            else {
                copied_phrase = selected_phrase;
            }

            break;

        case CHAIN_COLUMN_TRANSPOSE:
            uint8_t selected_transpose = data_get_chain_transpose(selected_chain, cursor.y);

            if (selected_transpose == 0x00) {
                data_set_chain_transpose(copied_transpose, selected_chain, cursor.y);
                chain_update_value();
            }
            else {
                copied_transpose = selected_transpose;
            }

            break;

        default:
            break;
    }
}

void chain_delete_value()
{
    switch (cursor.x) {
        case CHAIN_COLUMN_PHRASE:
            uint8_t selected_phrase = data_get_chain_phrase(selected_chain, cursor.y);

            if (selected_phrase == 0x00)
                return;

            copied_phrase = selected_phrase;

            data_set_chain_phrase(0x00, selected_chain, cursor.y);

            chain_update_value();
            chain_update_phrase_preview();

            break;

        case CHAIN_COLUMN_TRANSPOSE:
            uint8_t selected_transpose = data_get_chain_transpose(selected_chain, cursor.y);

            if (selected_transpose == 0x00)
                return;

            copied_transpose = selected_transpose;

            data_set_chain_transpose(0x00, selected_chain, cursor.y);

            chain_update_value();

            break;

        default:
            break;
    }
}

void chain_change_value(joystick_position_t joystick_position)
{
    switch (cursor.x) {
        case CHAIN_COLUMN_PHRASE:
            int32_t selected_phrase = (int32_t) data_get_chain_phrase(selected_chain, cursor.y);
            int32_t new_phrase = selected_phrase;

            if (selected_phrase == 0x00)
                return;

            switch (joystick_position) {
                case JOYSTICK_POSITION_UP:
                    new_phrase = change_value_within_bounds(selected_phrase, +1, 0x01, PHRASE_COUNT);
                    break;

                case JOYSTICK_POSITION_DOWN:
                    new_phrase = change_value_within_bounds(selected_phrase, -1, 0x01, PHRASE_COUNT);
                    break;

                case JOYSTICK_POSITION_RIGHT:
                    new_phrase = change_value_within_bounds(selected_phrase, +16, 0x01, PHRASE_COUNT);
                    break;

                case JOYSTICK_POSITION_LEFT:
                    new_phrase = change_value_within_bounds(selected_phrase, -16, 0x01, PHRASE_COUNT);
                    break;

                default:
                    return;
            }

            if (new_phrase != selected_phrase) {
                data_set_chain_phrase((uint8_t) new_phrase, selected_chain, cursor.y);
                chain_update_value();
                chain_update_phrase_preview();
                copied_phrase = (uint8_t) new_phrase;
            }
            break;

        case CHAIN_COLUMN_TRANSPOSE:
            int32_t selected_transpose = (int32_t) data_get_chain_transpose(selected_chain, cursor.y);
            int32_t new_transpose = selected_transpose;

            if (selected_transpose == 0x00)
                return;

            switch (joystick_position) {
                case JOYSTICK_POSITION_UP:
                    new_transpose = change_value_within_bounds(selected_transpose, +1, 0x01, 0xFF);
                    break;

                case JOYSTICK_POSITION_DOWN:
                    new_transpose = change_value_within_bounds(selected_transpose, -1, 0x01, 0xFF);
                    break;

                case JOYSTICK_POSITION_RIGHT:
                    new_transpose = change_value_within_bounds(selected_transpose, +12, 0x01, 0xFF);
                    break;

                case JOYSTICK_POSITION_LEFT:
                    new_transpose = change_value_within_bounds(selected_transpose, -12, 0x01, 0xFF);
                    break;

                default:
                    return;
            }

            if (new_transpose != selected_transpose) {
                data_set_chain_transpose((uint8_t) new_transpose, selected_chain, cursor.y);
                chain_update_value();
                copied_transpose = (uint8_t) new_transpose;
            }
            break;

        default:
            break;
    }
}
