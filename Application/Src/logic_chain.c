#include "logic_chain.h"
#include <stdbool.h>
#include "data.h"
#include "region.h"
#include "helper_functions.h"

static void chain_draw_title(void);
static void chain_draw_editor_chain(void);
static void chain_draw_editor_phrase_preview(void);
static void chain_draw_editor_chain_labels(void);
static void chain_draw_editor_chain_row_numbers(void);
static void chain_draw_editor_chain_spacing(void);
static void chain_draw_editor_chain_data(void);
static void chain_draw_editor_phrase_preview_labels(void);
static void chain_draw_editor_phrase_preview_row_numbers(void);
static void chain_draw_editor_phrase_preview_spacing(void);
static void chain_draw_editor_phrase_preview_data(void);
static void chain_clear_title(void);
static void chain_clear_editor_chain(void);
static void chain_clear_editor_phrase_preview(void);
static void chain_highlight_cursor(void);
static void chain_unhighlight_cursor(void);
static void chain_highlight_label(void);
static void chain_unhighlight_label(void);
static void chain_highlight_row_number(void);
static void chain_unhighlight_row_number(void);
static void chain_update_value(void);

typedef struct {
    enum {
        CHAIN_COLUMN_PHRASE,
        CHAIN_COLUMN_TRANSPOSE,
        CHAIN_COLUMN_COUNT
    } x;
    int32_t y;
} cursor_t;

static cursor_t cursor = {0};
static uint8_t selected_chain = 0x01;
static uint8_t previewed_phrase = 0x00;
static uint8_t copied_phrase = 0x01;
static uint8_t copied_transpose = 0x80;

void chain_init(uint8_t chain)
{
    selected_chain = chain;

    chain_draw_title();
    chain_draw_editor_chain();
    chain_draw_editor_phrase_preview();

    chain_highlight_cursor();
    chain_highlight_label();
    chain_highlight_row_number();
}

void chain_deinit(void)
{
    chain_clear_title();
    chain_clear_editor_chain();
    chain_clear_editor_phrase_preview();
}

void chain_draw_title(void)
{
    const region_t *REGION = &REGION_CHAIN_TITLE;
    const uint8_t TITLE[] = {'C', 'h', 'a', 'i', 'n'};
    const uint8_t TITLE_LENGTH = ARRAY_SIZE(TITLE);

    for (int32_t i = 0; i < TITLE_LENGTH; i++)
        region_draw(REGION, TITLE[i], COLOR_NORMAL, i, 0);

    region_draw(REGION, HEX_DIGIT[selected_chain / 0x10], COLOR_NORMAL, TITLE_LENGTH + 1, 0);
    region_draw(REGION, HEX_DIGIT[selected_chain % 0x10], COLOR_NORMAL, TITLE_LENGTH + 2, 0);
}

void chain_draw_editor_chain(void)
{
    chain_draw_editor_chain_labels();
    chain_draw_editor_chain_row_numbers();
    chain_draw_editor_chain_spacing();
    chain_draw_editor_chain_data();
}

void chain_draw_editor_phrase_preview(void)
{
    const uint8_t PHRASE = data_get_chain_phrase(selected_chain, cursor.y);

    previewed_phrase = PHRASE;

    if (PHRASE == 0x00) {
        chain_clear_editor_phrase_preview();
    }
    else {
        chain_draw_editor_phrase_preview_labels();
        chain_draw_editor_phrase_preview_row_numbers();
        chain_draw_editor_phrase_preview_spacing();
        chain_draw_editor_phrase_preview_data();
    }
}

void chain_draw_editor_chain_labels(void)
{
    const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    region_draw(REGION, 'P', COLOR_DARK_FADE, 2, 0);
    region_draw(REGION, ' ', COLOR_DARK_FADE, 3, 0);

    region_draw(REGION, 'T', COLOR_DARK_FADE, 5, 0);
    region_draw(REGION, ' ', COLOR_DARK_FADE, 6, 0);
}

void chain_draw_editor_chain_row_numbers(void)
{
    const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    for (int32_t i = 0; i < 16; i++) {
        color_t color;

        if (i % 4 == 0)
            color = COLOR_DARK_FADE;
        else
            color = COLOR_NORMAL_FADE;

        region_draw(REGION, HEX_DIGIT[i], color, 0, i + 1);
    }
}

void chain_draw_editor_chain_spacing(void)
{
    const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    for (int32_t i = 0; i < 4; i++) {
        region_draw(REGION, ' ', COLOR_DARK, 1, i * 4 + 1);
        region_draw(REGION, ' ', COLOR_DARK, 4, i * 4 + 1);
    }
}

void chain_draw_editor_chain_data(void)
{
    const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    for (int32_t i = 0; i < 16; i++) {
        const uint8_t PHRASE    = data_get_chain_phrase(selected_chain, i);
        const uint8_t TRANSPOSE = data_get_chain_transpose(selected_chain, i);

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

        if (PHRASE == 0x00) {
            region_draw(REGION, '-', color_fade, 2, i + 1);
            region_draw(REGION, '-', color_fade, 3, i + 1);
        }
        else {
            region_draw(REGION, HEX_DIGIT[PHRASE / 0x10], color_normal, 2, i + 1);
            region_draw(REGION, HEX_DIGIT[PHRASE % 0x10], color_normal, 3, i + 1);
        }

        if (TRANSPOSE == 0x00) {
            region_draw(REGION, '-', color_fade, 5, i + 1);
            region_draw(REGION, '-', color_fade, 6, i + 1);
        }
        else if (TRANSPOSE == 0x80) {
            region_draw(REGION, '8', color_fade, 5, i + 1);
            region_draw(REGION, '0', color_fade, 6, i + 1);
        }
        else {
            region_draw(REGION, HEX_DIGIT[TRANSPOSE / 0x10], color_normal, 5, i + 1);
            region_draw(REGION, HEX_DIGIT[TRANSPOSE % 0x10], color_normal, 6, i + 1);
        }
    }
}

void chain_draw_editor_phrase_preview_labels(void)
{
    const region_t *REGION = &REGION_CHAIN_EDITOR_PHRASE_PREVIEW;

    region_draw(REGION, 'N', COLOR_DARK_FADE,  2, 0);
    region_draw(REGION, ' ', COLOR_DARK_FADE,  3, 0);
    region_draw(REGION, ' ', COLOR_DARK_FADE,  4, 0);

    region_draw(REGION, 'I', COLOR_DARK_FADE,  6, 0);
    region_draw(REGION, ' ', COLOR_DARK_FADE,  7, 0);

    region_draw(REGION, 'V', COLOR_DARK_FADE,  9, 0);
    region_draw(REGION, ' ', COLOR_DARK_FADE, 10, 0);
}

void chain_draw_editor_phrase_preview_row_numbers(void)
{
    const region_t *REGION = &REGION_CHAIN_EDITOR_PHRASE_PREVIEW;

    for (int32_t i = 0; i < 16; i++) {
        color_t color;

        if (i % 4 == 0)
            color = COLOR_DARK_FADE;
        else
            color = COLOR_NORMAL_FADE;

        region_draw(REGION, HEX_DIGIT[i], color, 0, i + 1);
    }
}

void chain_draw_editor_phrase_preview_spacing(void)
{
    const region_t *REGION = &REGION_CHAIN_EDITOR_PHRASE_PREVIEW;

    for (int32_t i = 0; i < 4; i++) {
        region_draw(REGION, ' ', COLOR_DARK, 1, i * 4 + 1);
        region_draw(REGION, ' ', COLOR_DARK, 5, i * 4 + 1);
        region_draw(REGION, ' ', COLOR_DARK, 8, i * 4 + 1);
    }
}

void chain_draw_editor_phrase_preview_data(void)
{
    const region_t *REGION = &REGION_CHAIN_EDITOR_PHRASE_PREVIEW;

    for (int32_t i = 0; i < 16; i++) {
        const uint8_t PHRASE = data_get_chain_phrase(selected_chain, i);

        const uint8_t NOTE = data_get_phrase_note(PHRASE, i);
        const uint8_t INSTRUMENT = data_get_phrase_instrument(PHRASE, i);
        const uint8_t VOLUME = data_get_phrase_volume(PHRASE, i);

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

        if (NOTE == 0x00) {
            region_draw(REGION, '-', color_fade, 2, i + 1);
            region_draw(REGION, '-', color_fade, 3, i + 1);
            region_draw(REGION, '-', color_fade, 4, i + 1);
        }
        else {
            region_draw(REGION, NOTE_NAME[NOTE][0], color_normal, 2, i + 1);
            region_draw(REGION, NOTE_NAME[NOTE][1], color_normal, 3, i + 1);
            region_draw(REGION, NOTE_NAME[NOTE][2], color_normal, 4, i + 1);
        }

        if (INSTRUMENT == 0x00) {
            region_draw(REGION, '-', color_fade, 6, i + 1);
            region_draw(REGION, '-', color_fade, 7, i + 1);
        }
        else {
            region_draw(REGION, HEX_DIGIT[INSTRUMENT / 0x10], color_normal, 6, i + 1);
            region_draw(REGION, HEX_DIGIT[INSTRUMENT % 0x10], color_normal, 7, i + 1);
        }

        if (VOLUME == 0x00) {
            region_draw(REGION, '-', color_fade,  9, i + 1);
            region_draw(REGION, '-', color_fade, 10, i + 1);
        }
        else {
            region_draw(REGION, HEX_DIGIT[VOLUME / 0x10], color_normal,  9, i + 1);
            region_draw(REGION, HEX_DIGIT[VOLUME % 0x10], color_normal, 10, i + 1);
        }
    }
}

void chain_clear_title(void)
{
    const region_t *REGION = &REGION_CHAIN_TITLE;

    region_fill(REGION, ' ', COLOR_NORMAL);
}

void chain_clear_editor_chain(void)
{
    const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    region_fill(REGION, ' ', COLOR_NORMAL);
}

void chain_clear_editor_phrase_preview(void)
{
    const region_t *REGION = &REGION_CHAIN_EDITOR_PHRASE_PREVIEW;

    region_fill(REGION, ' ', COLOR_NORMAL);
}

void chain_highlight_cursor(void)
{
    const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    switch (cursor.x) {
        case CHAIN_COLUMN_PHRASE:
            region_change_color(REGION, COLOR_HIGHLIGHT, 2, cursor.y + 1);
            region_change_color(REGION, COLOR_HIGHLIGHT, 3, cursor.y + 1);
            break;

        case CHAIN_COLUMN_TRANSPOSE:
            region_change_color(REGION, COLOR_HIGHLIGHT, 5, cursor.y + 1);
            region_change_color(REGION, COLOR_HIGHLIGHT, 6, cursor.y + 1);
            break;

        default:
            break;
    }
}

void chain_unhighlight_cursor(void)
{
    const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

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
            const uint8_t SELECTED_PHRASE = data_get_chain_phrase(selected_chain, cursor.y);

            if (SELECTED_PHRASE == 0x00) {
                region_change_color(REGION, color_fade, 2, cursor.y + 1);
                region_change_color(REGION, color_fade, 3, cursor.y + 1);
            }
            else {
                region_change_color(REGION, color_normal, 2, cursor.y + 1);
                region_change_color(REGION, color_normal, 3, cursor.y + 1);
            }
            break;

        case CHAIN_COLUMN_TRANSPOSE:
            const uint8_t SELECTED_TRANSPOSE = data_get_chain_transpose(selected_chain, cursor.y);

            if (SELECTED_TRANSPOSE == 0x00 || SELECTED_TRANSPOSE == 0x80) {
                region_change_color(REGION, color_fade, 5, cursor.y + 1);
                region_change_color(REGION, color_fade, 6, cursor.y + 1);
            }
            else {
                region_change_color(REGION, color_normal, 5, cursor.y + 1);
                region_change_color(REGION, color_normal, 6, cursor.y + 1);
            }
            break;

        default:
            break;
    }
}

void chain_highlight_label(void)
{
    const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    switch (cursor.x) {
        case CHAIN_COLUMN_PHRASE:
            region_change_color(REGION, COLOR_DARK, 2, 0);
            break;

        case CHAIN_COLUMN_TRANSPOSE:
            region_change_color(REGION, COLOR_DARK, 5, 0);
            break;

        default:
            break;
    }
}

void chain_unhighlight_label(void)
{
    const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    switch (cursor.x) {
        case CHAIN_COLUMN_PHRASE:
            region_change_color(REGION, COLOR_DARK_FADE, 2, 0);
            break;

        case CHAIN_COLUMN_TRANSPOSE:
            region_change_color(REGION, COLOR_DARK_FADE, 5, 0);
            break;

        default:
            break;
    }
}

void chain_highlight_row_number(void)
{
    const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    color_t color;

    if (cursor.y % 4 == 0)
        color = COLOR_DARK;
    else
        color = COLOR_NORMAL;

    region_change_color(REGION, color, 0, cursor.y + 1);
}

void chain_unhighlight_row_number(void)
{
    const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    color_t color;

    if (cursor.y % 4 == 0)
        color = COLOR_DARK_FADE;
    else
        color = COLOR_NORMAL_FADE;

    region_change_color(REGION, color, 0, cursor.y + 1);
}

void chain_update_value(void)
{
    const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    switch (cursor.x) {
        case CHAIN_COLUMN_PHRASE:
            const uint8_t SELECTED_PHRASE = data_get_chain_phrase(selected_chain, cursor.y);

            if (SELECTED_PHRASE == 0x00) {
                region_change_symbol(REGION, '-', 2, cursor.y + 1);
                region_change_symbol(REGION, '-', 3, cursor.y + 1);
            }
            else {
                region_change_symbol(REGION, HEX_DIGIT[SELECTED_PHRASE / 0x10], 2, cursor.y + 1);
                region_change_symbol(REGION, HEX_DIGIT[SELECTED_PHRASE % 0x10], 3, cursor.y + 1);
            }
            break;

        case CHAIN_COLUMN_TRANSPOSE:
            const uint8_t SELECTED_TRANSPOSE = data_get_chain_transpose(selected_chain, cursor.y);

            if (SELECTED_TRANSPOSE == 0x00) {
                region_change_symbol(REGION, '-', 5, cursor.y + 1);
                region_change_symbol(REGION, '-', 6, cursor.y + 1);
            }
            else {
                region_change_symbol(REGION, HEX_DIGIT[SELECTED_TRANSPOSE / 0x10], 5, cursor.y + 1);
                region_change_symbol(REGION, HEX_DIGIT[SELECTED_TRANSPOSE % 0x10], 6, cursor.y + 1);
            }
            break;

        default:
            break;
    }
}

void chain_update_phrase_preview(void)
{
    const uint8_t SELECTED_PHRASE = data_get_chain_phrase(selected_chain, cursor.y);

    if (SELECTED_PHRASE == previewed_phrase)
        return;

    if (SELECTED_PHRASE == 0x00 || previewed_phrase == 0x00)
        chain_draw_editor_phrase_preview();
    else
        chain_draw_editor_phrase_preview_data();
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

            chain_update_phrase_preview();
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
            const uint8_t SELECTED_PHRASE = data_get_chain_phrase(selected_chain, cursor.y);

            if (SELECTED_PHRASE == 0x00) {
                data_set_chain_phrase(copied_phrase, selected_chain, cursor.y);
                chain_update_value();
                chain_update_phrase_preview();
            }
            else {
                copied_phrase = SELECTED_PHRASE;
            }

            break;

        case CHAIN_COLUMN_TRANSPOSE:
            const uint8_t SELECTED_TRANSPOSE = data_get_chain_transpose(selected_chain, cursor.y);

            if (SELECTED_TRANSPOSE == 0x00) {
                data_set_chain_transpose(copied_transpose, selected_chain, cursor.y);
                chain_update_value();
            }
            else {
                copied_transpose = SELECTED_TRANSPOSE;
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
            const uint8_t SELECTED_PHRASE = data_get_chain_phrase(selected_chain, cursor.y);

            if (SELECTED_PHRASE == 0x00)
                return;

            copied_phrase = SELECTED_PHRASE;

            data_set_chain_phrase(0x00, selected_chain, cursor.y);

            chain_update_value();
            chain_update_phrase_preview();

            break;

        case CHAIN_COLUMN_TRANSPOSE:
            uint8_t SELECTED_TRANSPOSE = data_get_chain_transpose(selected_chain, cursor.y);

            if (SELECTED_TRANSPOSE == 0x00)
                return;

            copied_transpose = SELECTED_TRANSPOSE;

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
            const int32_t SELECTED_PHRASE = (int32_t) data_get_chain_phrase(selected_chain, cursor.y);
            int32_t new_phrase = SELECTED_PHRASE;

            if (SELECTED_PHRASE == 0x00)
                return;

            switch (joystick_position) {
                case JOYSTICK_POSITION_UP:
                    new_phrase = change_value_within_bounds(SELECTED_PHRASE, +1, 0x01, PHRASE_COUNT);
                    break;

                case JOYSTICK_POSITION_DOWN:
                    new_phrase = change_value_within_bounds(SELECTED_PHRASE, -1, 0x01, PHRASE_COUNT);
                    break;

                case JOYSTICK_POSITION_RIGHT:
                    new_phrase = change_value_within_bounds(SELECTED_PHRASE, +16, 0x01, PHRASE_COUNT);
                    break;

                case JOYSTICK_POSITION_LEFT:
                    new_phrase = change_value_within_bounds(SELECTED_PHRASE, -16, 0x01, PHRASE_COUNT);
                    break;

                default:
                    return;
            }

            if (new_phrase != SELECTED_PHRASE) {
                data_set_chain_phrase((uint8_t) new_phrase, selected_chain, cursor.y);
                chain_update_value();
                chain_update_phrase_preview();
                copied_phrase = (uint8_t) new_phrase;
            }
            break;

        case CHAIN_COLUMN_TRANSPOSE:
            const int32_t SELECTED_TRANSPOSE = (int32_t) data_get_chain_transpose(selected_chain, cursor.y);
            int32_t new_transpose = SELECTED_TRANSPOSE;

            if (SELECTED_TRANSPOSE == 0x00)
                return;

            switch (joystick_position) {
                case JOYSTICK_POSITION_UP:
                    new_transpose = change_value_within_bounds(SELECTED_TRANSPOSE, +1, 0x01, 0xFF);
                    break;

                case JOYSTICK_POSITION_DOWN:
                    new_transpose = change_value_within_bounds(SELECTED_TRANSPOSE, -1, 0x01, 0xFF);
                    break;

                case JOYSTICK_POSITION_RIGHT:
                    new_transpose = change_value_within_bounds(SELECTED_TRANSPOSE, +12, 0x01, 0xFF);
                    break;

                case JOYSTICK_POSITION_LEFT:
                    new_transpose = change_value_within_bounds(SELECTED_TRANSPOSE, -12, 0x01, 0xFF);
                    break;

                default:
                    return;
            }

            if (new_transpose != SELECTED_TRANSPOSE) {
                data_set_chain_transpose((uint8_t) new_transpose, selected_chain, cursor.y);
                chain_update_value();
                copied_transpose = (uint8_t) new_transpose;
            }
            break;

        default:
            break;
    }
}

uint8_t chain_get_selected_phrase(void)
{
    return data_get_chain_phrase(selected_chain, cursor.y);
}
