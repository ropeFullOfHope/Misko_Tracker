#include "logic_chain.h"
#include <stdbool.h>
#include "region.h"
#include "lcd.h"
#include "basic_utils.h"

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
static chain_id_t selected_chain = 0x01;
static phrase_id_t previewed_phrase = 0x00;
static phrase_id_t copied_phrase = 0x01;
static transpose_t copied_transpose = 0x80;

void chain_init(chain_id_t chain)
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
    static const region_t *REGION = &REGION_CHAIN_TITLE;
    const symbol_t TITLE[] = {'C', 'h', 'a', 'i', 'n'};
    const int32_t TITLE_LENGTH = ARRAY_SIZE(TITLE);

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
    const phrase_id_t PHRASE = data_get_chain_phrase(selected_chain, cursor.y);

    previewed_phrase = PHRASE;

    if (PHRASE == 0x00)
        return;

    chain_draw_editor_phrase_preview_labels();
    chain_draw_editor_phrase_preview_row_numbers();
    chain_draw_editor_phrase_preview_spacing();
    chain_draw_editor_phrase_preview_data();
}

void chain_draw_editor_chain_labels(void)
{
    static const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    region_draw(REGION, 'P', COLOR_DARK_FADE, 2, 0);
    region_draw(REGION, ' ', COLOR_DARK_FADE, 3, 0);

    region_draw(REGION, 'T', COLOR_DARK_FADE, 5, 0);
    region_draw(REGION, ' ', COLOR_DARK_FADE, 6, 0);
}

void chain_draw_editor_chain_row_numbers(void)
{
    static const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    for (int32_t i = 0; i < 16; i++) {
        const color_t COLOR = (i % 4 == 0 ? COLOR_DARK_FADE : COLOR_NORMAL_FADE);

        region_draw(REGION, HEX_DIGIT[i], COLOR, 0, i + 1);
    }
}

void chain_draw_editor_chain_spacing(void)
{
    static const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    for (int32_t i = 0; i < 4; i++) {
        region_draw(REGION, ' ', COLOR_DARK, 1, i * 4 + 1);
        region_draw(REGION, ' ', COLOR_DARK, 4, i * 4 + 1);
    }
}

void chain_draw_editor_chain_data(void)
{
    static const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    for (int32_t i = 0; i < 16; i++) {
        const phrase_id_t PHRASE    = data_get_chain_phrase(selected_chain, i);
        const transpose_t TRANSPOSE = data_get_chain_transpose(selected_chain, i);

        const bool IS_PHRASE_NULL = (PHRASE == 0x00);
        const bool IS_TRANSPOSE_NULL = (TRANSPOSE == 0x00);
        const bool IS_TRANSPOSE_ZERO = (TRANSPOSE == 0x80);

        const color_t COLOR_VALUE = (i % 4 == 0 ? COLOR_DARK      : COLOR_NORMAL);
        const color_t COLOR_NULL  = (i % 4 == 0 ? COLOR_DARK_FADE : COLOR_NORMAL_FADE);

        const symbol_t SYMBOL_PHRASE[2] = {
            (IS_PHRASE_NULL ? '-' : HEX_DIGIT[PHRASE / 0x10]),
            (IS_PHRASE_NULL ? '-' : HEX_DIGIT[PHRASE % 0x10])
        };
        const color_t COLOR_PHRASE = (IS_PHRASE_NULL ? COLOR_NULL : COLOR_VALUE);

        const symbol_t SYMBOL_TRANSPOSE[2] = {
            (IS_TRANSPOSE_NULL ? '-' : HEX_DIGIT[TRANSPOSE / 0x10]),
            (IS_TRANSPOSE_NULL ? '-' : HEX_DIGIT[TRANSPOSE % 0x10])
        };
        const color_t COLOR_TRANSPOSE = ((IS_TRANSPOSE_NULL || IS_TRANSPOSE_ZERO) ? COLOR_NULL : COLOR_VALUE);

        region_draw(REGION, SYMBOL_PHRASE[0], COLOR_PHRASE, 2, i + 1);
        region_draw(REGION, SYMBOL_PHRASE[1], COLOR_PHRASE, 3, i + 1);

        region_draw(REGION, SYMBOL_TRANSPOSE[0], COLOR_TRANSPOSE, 5, i + 1);
        region_draw(REGION, SYMBOL_TRANSPOSE[1], COLOR_TRANSPOSE, 6, i + 1);
    }
}

void chain_draw_editor_phrase_preview_labels(void)
{
    static const region_t *REGION = &REGION_CHAIN_EDITOR_PHRASE_PREVIEW;

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
    static const region_t *REGION = &REGION_CHAIN_EDITOR_PHRASE_PREVIEW;

    for (int32_t i = 0; i < 16; i++) {
        const color_t COLOR = (i % 4 == 0 ? COLOR_DARK_FADE : COLOR_NORMAL_FADE);

        region_draw(REGION, HEX_DIGIT[i], COLOR, 0, i + 1);
    }
}

void chain_draw_editor_phrase_preview_spacing(void)
{
    static const region_t *REGION = &REGION_CHAIN_EDITOR_PHRASE_PREVIEW;

    for (int32_t i = 0; i < 4; i++) {
        region_draw(REGION, ' ', COLOR_DARK, 1, i * 4 + 1);
        region_draw(REGION, ' ', COLOR_DARK, 5, i * 4 + 1);
        region_draw(REGION, ' ', COLOR_DARK, 8, i * 4 + 1);
    }
}

void chain_draw_editor_phrase_preview_data(void)
{
    static const region_t *REGION = &REGION_CHAIN_EDITOR_PHRASE_PREVIEW;

    const phrase_id_t PHRASE = data_get_chain_phrase(selected_chain, cursor.y);

    for (int32_t i = 0; i < 16; i++) {
        const note_t NOTE = data_get_phrase_note(PHRASE, i);
        const instrument_id_t INSTRUMENT = data_get_phrase_instrument(PHRASE, i);
        const volume_t VOLUME = data_get_phrase_volume(PHRASE, i);

        const bool IS_NOTE_NULL = (NOTE == 0x00);
        const bool IS_INSTRUMENT_NULL = (INSTRUMENT == 0x00);
        const bool IS_VOLUME_NULL = (VOLUME == 0x00);

        const color_t COLOR_VALUE = (i % 4 == 0 ? COLOR_DARK      : COLOR_NORMAL);
        const color_t COLOR_NULL  = (i % 4 == 0 ? COLOR_DARK_FADE : COLOR_NORMAL_FADE);

        const symbol_t SYMBOL_NOTE[3] = {
            (IS_NOTE_NULL ? '-' : NOTE_NAME[NOTE][0]),
            (IS_NOTE_NULL ? '-' : NOTE_NAME[NOTE][1]),
            (IS_NOTE_NULL ? '-' : NOTE_NAME[NOTE][2]),
        };
        const color_t COLOR_NOTE = (IS_NOTE_NULL ? COLOR_NULL : COLOR_VALUE);

        const symbol_t SYMBOL_INSTRUMENT[2] = {
            (IS_INSTRUMENT_NULL ? '-' : HEX_DIGIT[INSTRUMENT / 0x10]),
            (IS_INSTRUMENT_NULL ? '-' : HEX_DIGIT[INSTRUMENT % 0x10])
        };
        const color_t COLOR_INSTRUMENT = (IS_INSTRUMENT_NULL ? COLOR_NULL : COLOR_VALUE);

        const symbol_t SYMBOL_VOLUME[2] = {
            (IS_VOLUME_NULL ? '-' : HEX_DIGIT[VOLUME / 0x10]),
            (IS_VOLUME_NULL ? '-' : HEX_DIGIT[VOLUME % 0x10])
        };
        const color_t COLOR_VOLUME = (IS_VOLUME_NULL ? COLOR_NULL : COLOR_VALUE);

        region_draw(REGION, SYMBOL_NOTE[0], COLOR_NOTE, 2, i + 1);
        region_draw(REGION, SYMBOL_NOTE[1], COLOR_NOTE, 3, i + 1);
        region_draw(REGION, SYMBOL_NOTE[2], COLOR_NOTE, 4, i + 1);

        region_draw(REGION, SYMBOL_INSTRUMENT[0], COLOR_INSTRUMENT, 6, i + 1);
        region_draw(REGION, SYMBOL_INSTRUMENT[1], COLOR_INSTRUMENT, 7, i + 1);

        region_draw(REGION, SYMBOL_VOLUME[0], COLOR_VOLUME,  9, i + 1);
        region_draw(REGION, SYMBOL_VOLUME[1], COLOR_VOLUME, 10, i + 1);
    }
}

void chain_clear_title(void)
{
    static const region_t *REGION = &REGION_CHAIN_TITLE;

    region_fill(REGION, ' ', COLOR_NORMAL);
}

void chain_clear_editor_chain(void)
{
    static const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    region_fill(REGION, ' ', COLOR_NORMAL);
}

void chain_clear_editor_phrase_preview(void)
{
    static const region_t *REGION = &REGION_CHAIN_EDITOR_PHRASE_PREVIEW;

    region_fill(REGION, ' ', COLOR_NORMAL);
}

void chain_highlight_cursor(void)
{
    static const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

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
    static const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    const color_t COLOR_VALUE = (cursor.y % 4 == 0 ? COLOR_DARK      : COLOR_NORMAL);
    const color_t COLOR_NULL  = (cursor.y % 4 == 0 ? COLOR_DARK_FADE : COLOR_NORMAL_FADE);

    switch (cursor.x) {
        case CHAIN_COLUMN_PHRASE: {
            const phrase_id_t SELECTED_PHRASE = data_get_chain_phrase(selected_chain, cursor.y);
            const bool IS_SELECTED_PHRASE_NULL = (SELECTED_PHRASE == 0x00);

            const color_t COLOR_PHRASE = (IS_SELECTED_PHRASE_NULL ? COLOR_NULL : COLOR_VALUE);

            region_change_color(REGION, COLOR_PHRASE, 2, cursor.y + 1);
            region_change_color(REGION, COLOR_PHRASE, 3, cursor.y + 1);

            break;
        }

        case CHAIN_COLUMN_TRANSPOSE: {
            const transpose_t SELECTED_TRANSPOSE = data_get_chain_transpose(selected_chain, cursor.y);
            const bool IS_SELECTED_TRANSPOSE_NULL = (SELECTED_TRANSPOSE == 0x00);
            const bool IS_SELECTED_TRANSPOSE_ZERO = (SELECTED_TRANSPOSE == 0x80);

            const color_t COLOR_TRANSPOSE = (IS_SELECTED_TRANSPOSE_NULL || IS_SELECTED_TRANSPOSE_ZERO ? COLOR_NULL : COLOR_VALUE);

            region_change_color(REGION, COLOR_TRANSPOSE, 5, cursor.y + 1);
            region_change_color(REGION, COLOR_TRANSPOSE, 6, cursor.y + 1);

            break;
        }

        default:
            break;
    }
}

void chain_highlight_label(void)
{
    static const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

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
    static const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

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
    static const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;
    const color_t COLOR = (cursor.y % 4 == 0 ? COLOR_DARK : COLOR_NORMAL);

    region_change_color(REGION, COLOR, 0, cursor.y + 1);
}

void chain_unhighlight_row_number(void)
{
    static const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;
    const color_t COLOR = (cursor.y % 4 == 0 ? COLOR_DARK_FADE : COLOR_NORMAL_FADE);

    region_change_color(REGION, COLOR, 0, cursor.y + 1);
}

void chain_update_value(void)
{
    static const region_t *REGION = &REGION_CHAIN_EDITOR_CHAIN;

    switch (cursor.x) {
        case CHAIN_COLUMN_PHRASE: {
            const phrase_id_t SELECTED_PHRASE = data_get_chain_phrase(selected_chain, cursor.y);
            const bool IS_SELECTED_PHRASE_NULL = (SELECTED_PHRASE == 0x00);

            const symbol_t SYMBOL_PHRASE[2] = {
                (IS_SELECTED_PHRASE_NULL ? '-' : HEX_DIGIT[SELECTED_PHRASE / 0x10]),
                (IS_SELECTED_PHRASE_NULL ? '-' : HEX_DIGIT[SELECTED_PHRASE % 0x10])
            };

            region_change_symbol(REGION, SYMBOL_PHRASE[0], 2, cursor.y + 1);
            region_change_symbol(REGION, SYMBOL_PHRASE[1], 3, cursor.y + 1);

            break;
        }

        case CHAIN_COLUMN_TRANSPOSE: {
            const transpose_t SELECTED_TRANSPOSE = data_get_chain_transpose(selected_chain, cursor.y);
            const bool IS_SELECTED_TRANSPOSE_NULL = (SELECTED_TRANSPOSE == 0x00);

            const symbol_t SYMBOL_TRANSPOSE[2] = {
                (IS_SELECTED_TRANSPOSE_NULL ? '-' : HEX_DIGIT[SELECTED_TRANSPOSE / 0x10]),
                (IS_SELECTED_TRANSPOSE_NULL ? '-' : HEX_DIGIT[SELECTED_TRANSPOSE % 0x10])
            };

            region_change_symbol(REGION, SYMBOL_TRANSPOSE[0], 5, cursor.y + 1);
            region_change_symbol(REGION, SYMBOL_TRANSPOSE[1], 6, cursor.y + 1);

            break;
        }

        default:
            break;
    }
}

void chain_update_phrase_preview(void)
{
    const phrase_id_t SELECTED_PHRASE = data_get_chain_phrase(selected_chain, cursor.y);

    if (SELECTED_PHRASE == previewed_phrase)
        return;

    if (previewed_phrase == 0x00) {
        previewed_phrase = SELECTED_PHRASE;
        chain_draw_editor_phrase_preview();
    }
    else if (SELECTED_PHRASE == 0x00) {
        previewed_phrase = SELECTED_PHRASE;
        chain_clear_editor_phrase_preview();
    }
    else {
        previewed_phrase = SELECTED_PHRASE;
        chain_draw_editor_phrase_preview_data();
    }
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
        case CHAIN_COLUMN_PHRASE: {
            const phrase_id_t SELECTED_PHRASE = data_get_chain_phrase(selected_chain, cursor.y);

            if (SELECTED_PHRASE == 0x00) {
                data_set_chain_phrase(copied_phrase, selected_chain, cursor.y);
                chain_update_value();
                chain_update_phrase_preview();
            }
            else {
                copied_phrase = SELECTED_PHRASE;
            }

            break;
        }

        case CHAIN_COLUMN_TRANSPOSE: {
            const transpose_t SELECTED_TRANSPOSE = data_get_chain_transpose(selected_chain, cursor.y);

            if (SELECTED_TRANSPOSE == 0x00) {
                data_set_chain_transpose(copied_transpose, selected_chain, cursor.y);
                chain_update_value();
            }
            else {
                copied_transpose = SELECTED_TRANSPOSE;
            }

            break;
        }

        default:
            break;
    }
}

void chain_delete_value()
{
    switch (cursor.x) {
        case CHAIN_COLUMN_PHRASE: {
            const phrase_id_t SELECTED_PHRASE = data_get_chain_phrase(selected_chain, cursor.y);

            if (SELECTED_PHRASE == 0x00)
                return;

            copied_phrase = SELECTED_PHRASE;

            data_set_chain_phrase(0x00, selected_chain, cursor.y);

            chain_update_value();
            chain_update_phrase_preview();

            break;
        }

        case CHAIN_COLUMN_TRANSPOSE: {
            transpose_t SELECTED_TRANSPOSE = data_get_chain_transpose(selected_chain, cursor.y);

            if (SELECTED_TRANSPOSE == 0x00)
                return;

            copied_transpose = SELECTED_TRANSPOSE;

            data_set_chain_transpose(0x00, selected_chain, cursor.y);

            chain_update_value();

            break;
        }

        default:
            break;
    }
}

void chain_change_value(joystick_position_t joystick_position)
{
    switch (cursor.x) {
        case CHAIN_COLUMN_PHRASE: {
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
                data_set_chain_phrase((phrase_id_t) new_phrase, selected_chain, cursor.y);
                chain_update_value();
                chain_update_phrase_preview();
                copied_phrase = (phrase_id_t) new_phrase;
            }
            break;
        }

        case CHAIN_COLUMN_TRANSPOSE: {
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
                data_set_chain_transpose((transpose_t) new_transpose, selected_chain, cursor.y);
                chain_update_value();
                copied_transpose = (transpose_t) new_transpose;
            }
            break;
        }

        default:
            break;
    }
}

phrase_id_t chain_get_selected_phrase(void)
{
    return data_get_chain_phrase(selected_chain, cursor.y);
}
