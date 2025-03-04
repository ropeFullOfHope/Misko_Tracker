#include "logic_chain.h"
#include "data.h"
#include "lcd.h"

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
//static void chain_chain_highlight_cursor(void);
//static void chain_chain_unhighlight_cursor(void);
//static void chain_chain_highlight_column(void);
//static void chain_chain_unhighlight_column(void);
//static void chain_chain_highlight_row(void);
//static void chain_chain_unhighlight_row(void);
//static void chain_phrase_highlight_cursor(void);
//static void chain_phrase_unhighlight_cursor(void);
//static void chain_phrase_highlight_column(void);
//static void chain_phrase_unhighlight_column(void);
//static void chain_phrase_highlight_row(void);
//static void chain_phrase_unhighlight_row(void);
//static void chain_chain_brighten_phrase(void);
//static void chain_chain_fade_phrase(void);
//static void chain_chain_brighten_unselected_phrases(void);
//static void chain_chain_fade_unselected_phrases(void);
//static uint8_t chain_get_selected_phrase(void);

static cursor_t cursor = {0};
static uint8_t selected_chain = 0x01;

void chain_init(uint8_t chain)
{
    selected_chain = chain;

    chain_draw_title();
    chain_draw_editor();

    //chain_highlight_cursor();
    //chain_highlight_label();
    //chain_highlight_row_number();
}

void chain_draw_title(void)
{
    const uint8_t title[6] = {'C', 'h', 'a', 'i', 'n', ' '};

    for (int32_t i = 0; i < 6; i++)
        LCD_draw(title[i], i + 1, 1, COLOR_NORMAL);

    LCD_draw(hex_digit[selected_chain / 0x10], 7, 1, COLOR_NORMAL);
    LCD_draw(hex_digit[selected_chain % 0x10], 8, 1, COLOR_NORMAL);

    for (int32_t i = 9; i < 32; i++)
        LCD_draw(' ', i, 1, COLOR_NORMAL);

    for (int32_t i = 0; i < 32; i++)
        LCD_draw(' ', i, 2, COLOR_NORMAL);
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
    if (data_get_chain_phrase(selected_chain, cursor.y) != 0x00) {
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
    for (int32_t y = 4; y <= 20; y++) {
        for (int32_t x = 8; x <= 9; x++)
            LCD_draw(' ', x, y, COLOR_NORMAL);

        for (int32_t x = 28; x <= 32; x++)
            LCD_draw(' ', x, y, COLOR_NORMAL);
    }

    for (int32_t y = 21; y <= 28; y++)
        for (int32_t x = 1; x <= 32; x++)
            LCD_draw(' ', x, y, COLOR_NORMAL);
}

void chain_draw_chain_labels(void)
{
    LCD_draw(' ', 1, 4, COLOR_NORMAL);
    LCD_draw(' ', 2, 4, COLOR_NORMAL);

    LCD_draw('P', 3, 4, COLOR_DARK_FADE);
    LCD_draw(' ', 4, 4, COLOR_DARK_FADE);

    LCD_draw(' ', 5, 4, COLOR_NORMAL);

    LCD_draw('T', 6, 4, COLOR_DARK_FADE);
    LCD_draw(' ', 7, 4, COLOR_DARK_FADE);
}

void chain_draw_chain_row_numbers(void)
{
    for (int32_t i = 0; i < 16; i++) {
        color_t color;

        if (i % 4 == 0)
            color = COLOR_DARK_FADE;

        else
            color = COLOR_NORMAL_FADE;

        LCD_draw(hex_digit[i], 1, i + 5, color);
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

        LCD_draw(' ', 2, i + 5, color);
        LCD_draw(' ', 5, i + 5, color);
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
            LCD_draw('-', 3, i + 5, color_fade);
            LCD_draw('-', 4, i + 5, color_fade);
        }
        else {
            LCD_draw(hex_digit[phrase / 0x10], 3, i + 5, color_normal);
            LCD_draw(hex_digit[phrase % 0x10], 4, i + 5, color_normal);
        }

        if (transpose == 0x00) {
            LCD_draw('-', 6, i + 5, color_fade);
            LCD_draw('-', 7, i + 5, color_fade);
        }
        else {
            LCD_draw(hex_digit[transpose / 0x10], 6, i + 5, color_normal);
            LCD_draw(hex_digit[transpose % 0x10], 7, i + 5, color_normal);
        }
    }
}

void chain_draw_phrase_blank(void)
{
    for (int32_t y = 4; y <= 20; y++)
        for(int32_t x = 10; x <= 27; x++)
            LCD_draw(' ', x, y, COLOR_NORMAL);
}

void chain_draw_phrase_labels(void)
{
    LCD_draw(' ', 10, 4, COLOR_NORMAL);
    LCD_draw(' ', 11, 4, COLOR_NORMAL);

    LCD_draw('N', 12, 4, COLOR_DARK_FADE);
    LCD_draw(' ', 13, 4, COLOR_DARK_FADE);
    LCD_draw(' ', 14, 4, COLOR_DARK_FADE);

    LCD_draw(' ', 15, 4, COLOR_NORMAL);

    LCD_draw('I', 16, 4, COLOR_DARK_FADE);
    LCD_draw(' ', 17, 4, COLOR_DARK_FADE);

    LCD_draw(' ', 18, 4, COLOR_NORMAL);

    LCD_draw('V', 19, 4, COLOR_DARK_FADE);

    LCD_draw(' ', 20, 4, COLOR_NORMAL);

    LCD_draw('C', 21, 4, COLOR_DARK_FADE);
    LCD_draw('1', 22, 4, COLOR_DARK_FADE);
    LCD_draw(' ', 23, 4, COLOR_DARK_FADE);

    LCD_draw(' ', 24, 4, COLOR_NORMAL);

    LCD_draw('C', 25, 4, COLOR_DARK_FADE);
    LCD_draw('2', 26, 4, COLOR_DARK_FADE);
    LCD_draw(' ', 27, 4, COLOR_DARK_FADE);
}

void chain_draw_phrase_row_numbers(void)
{
    for (int32_t i = 0; i < 16; i++) {
        color_t color;

        if (i % 4 == 0)
            color = COLOR_DARK_FADE;

        else
            color = COLOR_NORMAL_FADE;

        LCD_draw(hex_digit[i], 10, i + 5, color);
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

        LCD_draw(' ', 11, i + 5, color);
        LCD_draw(' ', 15, i + 5, color);
        LCD_draw(' ', 18, i + 5, color);
        LCD_draw(' ', 20, i + 5, color);
        LCD_draw(' ', 24, i + 5, color);
    }
}

void chain_draw_phrase_data(void)
{
    for (int32_t i = 0; i < 16; i++) {
        uint8_t phrase = data_get_chain_phrase(selected_chain, i);

        uint8_t note = data_get_phrase_note(phrase, i);
        uint8_t instrument = data_get_phrase_instrument(phrase, i);
        uint8_t volume = data_get_phrase_volume(phrase, i);

        uint8_t command[COMMAND_COUNT];
        uint8_t parameter[COMMAND_COUNT];
        for (int32_t j = 0; j < COMMAND_COUNT; j++) {
            command[j] = data_get_phrase_command(j, phrase, i);
            parameter[j] = data_get_phrase_parameter(j, phrase, i);
        }

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
            LCD_draw('-', 12, i + 5, color_fade);
            LCD_draw('-', 13, i + 5, color_fade);
            LCD_draw('-', 14, i + 5, color_fade);
        }
        else {
            LCD_draw(note_name[note][0], 12, i + 5, color_normal);
            LCD_draw(note_name[note][1], 13, i + 5, color_normal);
            LCD_draw(note_name[note][2], 14, i + 5, color_normal);
        }

        if (instrument == 0x00) {
            LCD_draw('-', 16, i + 5, color_fade);
            LCD_draw('-', 17, i + 5, color_fade);
        }
        else {
            LCD_draw(hex_digit[instrument / 0x10], 16, i + 5, color_normal);
            LCD_draw(hex_digit[instrument % 0x10], 17, i + 5, color_normal);
        }

        if (volume == 0x00) {
            LCD_draw('-', 19, i + 5, color_fade);
        }
        else {
            LCD_draw(hex_digit[volume % 0x10], 19, i + 5, color_normal);
        }

        for (int32_t j = 0; j < COMMAND_COUNT; j++) {
            if (command[j] == 0x00) {
                LCD_draw('-', 4 * j + 21, i + 5, color_fade);
                LCD_draw('-', 4 * j + 22, i + 5, color_fade);
                LCD_draw('-', 4 * j + 23, i + 5, color_fade);
            }
            else {
                LCD_draw('A', 4 * j + 21, i + 5, color_normal); // TODO: Add proper command labeling.
                LCD_draw(hex_digit[parameter[j] / 0x10], 4 * j + 22, i + 5, color_fade);
                LCD_draw(hex_digit[parameter[j] % 0x10], 4 * j + 23, i + 5, color_fade);
            }
        }
    }
}
#if 0
void chain_chain_highlight_cursor(void)
{
    if (cursor_chain.x < 0 || CHAIN_COLUMN_COUNT <= cursor_chain.x)
        return;

    if (cursor_chain.y < 0 || 16 <= cursor_chain.y)
        return;

    switch(cursor_chain.x) {
        case CHAIN_COLUMN_PHRASE:
            LCD_change_color(COLOR_HIGHLIGHT, 3, cursor_chain.y + 5);
            LCD_change_color(COLOR_HIGHLIGHT, 4, cursor_chain.y + 5);
            break;

        case CHAIN_COLUMN_TRANSPOSE:
            LCD_change_color(COLOR_HIGHLIGHT, 6, cursor_chain.y + 5);
            LCD_change_color(COLOR_HIGHLIGHT, 7, cursor_chain.y + 5);
            break;

        default:
            break;
    }
}

void chain_chain_unhighlight_cursor(void)
{
    if (cursor_chain.x < 0 || CHAIN_COLUMN_COUNT <= cursor_chain.x)
        return;

    if (cursor_chain.y < 0 || 16 <= cursor_chain.y)
        return;

    color_t color_normal;
    color_t color_fade;

    if (cursor_chain.y % 4 == 0) {
        color_normal = COLOR_DARK;
        color_fade = COLOR_DARK_FADE;
    }
    else {
        color_normal = COLOR_NORMAL;
        color_fade = COLOR_NORMAL_FADE;
    }

    switch(cursor_chain.x) {
        case CHAIN_COLUMN_PHRASE:
            if (data_get_chain_phrase(selected_pattern, cursor_chain.y) == 0x00) {
                LCD_change_color(color_fade, 3, cursor_chain.y + 5);
                LCD_change_color(color_fade, 4, cursor_chain.y + 5);
            }
            else {
                LCD_change_color(color_normal, 3, cursor_chain.y + 5);
                LCD_change_color(color_normal, 4, cursor_chain.y + 5);
            }
            break;

        case CHAIN_COLUMN_TRANSPOSE:
            if (data_get_chain_transpose(selected_pattern, cursor_chain.y) == 0x00) {
                LCD_change_color(color_fade, 6, cursor_chain.y + 5);
                LCD_change_color(color_fade, 7, cursor_chain.y + 5);
            }
            else {
                LCD_change_color(color_normal, 6, cursor_chain.y + 5);
                LCD_change_color(color_normal, 7, cursor_chain.y + 5);
            }
            break;

        default:
            break;
    }
}

void chain_chain_highlight_column(void)
{
    if (cursor_chain.x < 0 || CHAIN_COLUMN_COUNT <= cursor_chain.x)
        return;

    switch (cursor_chain.x) {
        case CHAIN_COLUMN_PHRASE:
            LCD_change_color(COLOR_DARK, 3, 4);
            break;

        case CHAIN_COLUMN_TRANSPOSE:
            LCD_change_color(COLOR_DARK, 6, 4);
            break;

        default:
            break;
    }
}

void chain_chain_unhighlight_column(void)
{
    if (cursor_chain.x < 0 || CHAIN_COLUMN_COUNT <= cursor_chain.x)
        return;

    switch (cursor_chain.x) {
        case CHAIN_COLUMN_PHRASE:
            LCD_change_color(COLOR_DARK_FADE, 3, 4);
            break;

        case CHAIN_COLUMN_TRANSPOSE:
            LCD_change_color(COLOR_DARK_FADE, 6, 4);
            break;

        default:
            break;
    }
}

void chain_chain_highlight_row(void)
{
    if (cursor_chain.y < 0 || 16 <= cursor_chain.y)
        return;

    if (cursor_chain.y % 4 == 0)
        LCD_change_color(COLOR_DARK, 1, cursor_chain.y + 5);

    else
        LCD_change_color(COLOR_NORMAL, 1, cursor_chain.y + 5);
}

void chain_chain_unhighlight_row(void)
{
    if (cursor_chain.y < 0 || 16 <= cursor_chain.y)
        return;

    if (cursor_chain.y % 4 == 0)
        LCD_change_color(COLOR_DARK_FADE, 1, cursor_chain.y + 5);

    else
        LCD_change_color(COLOR_NORMAL_FADE, 1, cursor_chain.y + 5);
}

void chain_phrase_highlight_cursor(void)
{
    if (cursor_chain.x < 0 || CHAIN_COLUMN_COUNT <= cursor_chain.x)
        return;

    if (cursor_chain.y < 0 || 16 <= cursor_chain.y)
        return;

    switch(cursor_chain.x) {
        case CHAIN_COLUMN_PHRASE:
            LCD_change_color(COLOR_HIGHLIGHT, 3, cursor_chain.y + 5);
            LCD_change_color(COLOR_HIGHLIGHT, 4, cursor_chain.y + 5);
            break;

        case CHAIN_COLUMN_TRANSPOSE:
            LCD_change_color(COLOR_HIGHLIGHT, 6, cursor_chain.y + 5);
            LCD_change_color(COLOR_HIGHLIGHT, 7, cursor_chain.y + 5);
            break;

        default:
            break;
    }
}

void chain_phrase_unhighlight_cursor(void)
{

}

void chain_phrase_highlight_column(void)
{

}

void chain_phrase_unhighlight_column(void)
{

}

void chain_phrase_highlight_row(void)
{

}

void chain_phrase_unhighlight_row(void)
{

}

void chain_chain_brighten_phrase(void)
{
    if (cursor_chain.y < 0 || 16 <= cursor_chain.y)
        return;

    color_t color;

    if (cursor_chain.y % 4 == 0)
        color = COLOR_DARK;
    else
        color = COLOR_NORMAL;

    LCD_change_color(color, 3, cursor_chain.y + 5);
    LCD_change_color(color, 4, cursor_chain.y + 5);
}

void chain_chain_fade_phrase(void)
{
    if (cursor_chain.y < 0 || 16 <= cursor_chain.y)
        return;

    color_t color;

    if (cursor_chain.y % 4 == 0)
        color = COLOR_DARK_FADE;
    else
        color = COLOR_NORMAL_FADE;

    LCD_change_color(color, 3, cursor_chain.y + 5);
    LCD_change_color(color, 4, cursor_chain.y + 5);
}

void chain_chain_brighten_unselected_phrases(void)
{
    color_t color;

    for (int32_t i = 0; i < 16; i++) {
        if (i == cursor_chain.y)
            continue;

        if (data_get_chain_phrase(selected_pattern, i) == 0x00)
            continue;

        if (i % 4 == 0)
            color = COLOR_DARK;
        else
            color = COLOR_NORMAL;

        LCD_change_color(color, 3, cursor_chain.y + 5);
        LCD_change_color(color, 4, cursor_chain.y + 5);
    }
}

void chain_chain_fade_unselected_phrases(void)
{
    color_t color;

    for (int32_t i = 0; i < 16; i++) {
        if (i == cursor_chain.y)
            continue;

        if (i % 4 == 0)
            color = COLOR_DARK_FADE;
        else
            color = COLOR_NORMAL_FADE;

        LCD_change_color(color, 3, cursor_chain.y + 5);
        LCD_change_color(color, 4, cursor_chain.y + 5);
    }
}

uint8_t chain_get_selected_phrase(void)
{
    return data_get_chain_phrase(selected_pattern, cursor_chain.y);
}
#endif
