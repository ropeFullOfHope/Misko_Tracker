#include "logic_phrase.h"
#include "data.h"
#include "region.h"
#include "helper_functions.h"

static void phrase_draw_title(void);
static void phrase_draw_editor_phrase(void);
static void phrase_draw_editor_command_description(void);
static void phrase_draw_editor_phrase_labels(void);
static void phrase_draw_editor_phrase_row_numbers(void);
static void phrase_draw_editor_phrase_spacing(void);
static void phrase_draw_editor_phrase_data(void);
static void phrase_clear_title(void);
static void phrase_clear_editor_phrase(void);
static void phrase_clear_editor_command_description(void);
static void phrase_highlight_cursor(void);
static void phrase_unhighlight_cursor(void);
static void phrase_highlight_label(void);
static void phrase_unhighlight_label(void);
static void phrase_highlight_row_number(void);
static void phrase_unhighlight_row_number(void);
static void phrase_update_value(void);

typedef struct {
    enum {
        PHRASE_COLUMN_NOTE,
        PHRASE_COLUMN_INSTRUMENT,
        PHRASE_COLUMN_VOLUME,
        PHRASE_COLUMN_COMMAND,
        PHRASE_COLUMN_PARAMETER,
        PHRASE_COLUMN_COUNT
    } x;
    int32_t y;
} cursor_t;

static cursor_t cursor = {0};
static int32_t selected_command = 0;
static uint8_t selected_phrase = 0x01;
static uint8_t copied_note = 0x01;
static uint8_t copied_instrument = 0x01;
static uint8_t copied_volume = 0x88;
static uint8_t copied_command = 0x01;
static uint8_t copied_parameter = 0x01;

void phrase_init(uint8_t phrase)
{
    phrase_draw_title();
    phrase_draw_editor_phrase();
    phrase_draw_editor_command_description();

    phrase_highlight_cursor();
    phrase_highlight_label();
    phrase_highlight_row_number();
}

void phrase_deinit(void)
{
    phrase_clear_title();
    phrase_clear_editor_phrase();
    phrase_clear_editor_command_description();
}

void phrase_draw_title(void)
{
    static const region_t *REGION = &REGION_PHRASE_TITLE;
    const uint8_t TITLE[] = {'P', 'h', 'r', 'a', 's', 'e'};
    const uint8_t TITLE_LENGTH = ARRAY_SIZE(TITLE);

    for (int32_t i = 0; i < TITLE_LENGTH; i++)
        region_draw(REGION, TITLE[i], COLOR_NORMAL, i, 0);

    region_draw(REGION, HEX_DIGIT[selected_phrase / 0x10], COLOR_NORMAL, TITLE_LENGTH + 1, 0);
    region_draw(REGION, HEX_DIGIT[selected_phrase % 0x10], COLOR_NORMAL, TITLE_LENGTH + 2, 0);
}

void phrase_draw_editor_phrase(void)
{
    phrase_draw_editor_phrase_labels();
    phrase_draw_editor_phrase_row_numbers();
    phrase_draw_editor_phrase_spacing();
    phrase_draw_editor_phrase_data();
}

void phrase_draw_editor_command_description(void)
{

}

void phrase_draw_editor_phrase_labels(void)
{
    static const region_t *REGION = &REGION_PHRASE_EDITOR_PHRASE;

    region_draw(REGION, 'N', COLOR_DARK_FADE, 2, 0);
    region_draw(REGION, ' ', COLOR_DARK_FADE, 3, 0);
    region_draw(REGION, ' ', COLOR_DARK_FADE, 4, 0);

    region_draw(REGION, 'I', COLOR_DARK_FADE, 6, 0);
    region_draw(REGION, ' ', COLOR_DARK_FADE, 7, 0);

    region_draw(REGION, 'V', COLOR_DARK_FADE, 9,  0);
    region_draw(REGION, ' ', COLOR_DARK_FADE, 10, 0);

    for (int32_t i = 0; i < COMMANDS_PER_ROW; i++) {
        region_draw(REGION, 'C', COLOR_DARK_FADE, i * 6 + 13, 0);
        region_draw(REGION, 'M', COLOR_DARK_FADE, i * 6 + 14, 0);
        region_draw(REGION, 'D', COLOR_DARK_FADE, i * 6 + 15, 0);
        region_draw(REGION, (uint8_t) i + '1', COLOR_DARK_FADE, i * 6 + 16, 0);
        region_draw(REGION, ' ', COLOR_DARK_FADE, i * 6 + 17, 0);
    }
}

void phrase_draw_editor_phrase_row_numbers(void)
{
    static const region_t *REGION = &REGION_PHRASE_EDITOR_PHRASE;

    for (int32_t i = 0; i < 16; i++) {
        color_t color;

        if (i % 4 == 0)
            color = COLOR_DARK_FADE;
        else
            color = COLOR_NORMAL_FADE;

        region_draw(REGION, HEX_DIGIT[i], color, 0, i + 1);
    }
}

void phrase_draw_editor_phrase_spacing(void)
{
    static const region_t *REGION = &REGION_PHRASE_EDITOR_PHRASE;

    for (int32_t i = 0; i < 4; i++) {
        region_draw(REGION, ' ', COLOR_DARK, 1,  i * 4 + 1);
        region_draw(REGION, ' ', COLOR_DARK, 5,  i * 4 + 1);
        region_draw(REGION, ' ', COLOR_DARK, 8,  i * 4 + 1);
        region_draw(REGION, ' ', COLOR_DARK, 11, i * 4 + 1);

        for (int32_t j = 0; j < COMMANDS_PER_ROW; j++)
            region_draw(REGION, ' ', COLOR_DARK, j * 6 + 12, i * 4 + 1);
    }
}

void phrase_draw_editor_phrase_data(void)
{
    static const region_t *REGION = &REGION_PHRASE_EDITOR_PHRASE;

    for (int32_t i = 0; i < 16; i++) {
        const uint8_t NOTE       = data_get_phrase_note(selected_phrase, i);
        const uint8_t INSTRUMENT = data_get_phrase_instrument(selected_phrase, i);
        const uint8_t VOLUME     = data_get_phrase_volume(selected_phrase, i);

        uint8_t command[COMMANDS_PER_ROW];
        uint8_t parameter[COMMANDS_PER_ROW];

        for (int32_t j = 0; j < COMMANDS_PER_ROW; j++) {
            command[j]   = data_get_phrase_command(j, selected_phrase, i);
            parameter[j] = data_get_phrase_command(j, selected_phrase, i);
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
            region_draw(REGION, '-', color_fade, 9,  i + 1);
            region_draw(REGION, '-', color_fade, 10, i + 1);
        }
        else {
            region_draw(REGION, HEX_DIGIT[VOLUME / 0x10], color_normal, 9,  i + 1);
            region_draw(REGION, HEX_DIGIT[VOLUME % 0x10], color_normal, 10, i + 1);
        }

        for (int32_t j = 0; j < COMMANDS_PER_ROW; j++) {
            if (command[j] == 0x00) {
                region_draw(REGION, '-', color_fade, j * 6 + 13, i + 1);
                region_draw(REGION, '-', color_fade, j * 6 + 14, i + 1);
                region_draw(REGION, '-', color_fade, j * 6 + 15, i + 1);
                region_draw(REGION, '-', color_fade, j * 6 + 16, i + 1);
                region_draw(REGION, '-', color_fade, j * 6 + 17, i + 1);
            }
            else {
                region_draw(REGION, COMMAND_METADATA[command[j]].name[0], color_fade, j * 6 + 13, i + 1);
                region_draw(REGION, COMMAND_METADATA[command[j]].name[1], color_fade, j * 6 + 14, i + 1);
                region_draw(REGION, COMMAND_METADATA[command[j]].name[2], color_fade, j * 6 + 15, i + 1);
                region_draw(REGION, HEX_DIGIT[parameter[j] / 0x10], color_normal, j * 6 + 16,  i + 1);
                region_draw(REGION, HEX_DIGIT[parameter[j] % 0x10], color_normal, j * 6 + 17, i + 1);
            }
        }
    }
}

void phrase_clear_title(void)
{
    static const region_t *REGION = &REGION_PHRASE_TITLE;

    region_fill(REGION, ' ', COLOR_NORMAL);
}

void phrase_clear_editor_phrase(void)
{
    static const region_t *REGION = &REGION_PHRASE_EDITOR_PHRASE;

    region_fill(REGION, ' ', COLOR_NORMAL);
}

void phrase_clear_editor_command_description(void)
{
    static const region_t *REGION = &REGION_PHRASE_EDITOR_COMMAND_DESCRIPTION;

    region_fill(REGION, ' ', COLOR_NORMAL);
}

void phrase_highlight_cursor(void)
{
    static const region_t *REGION = &REGION_PHRASE_EDITOR_PHRASE;

    switch (cursor.x) {
        case PHRASE_COLUMN_NOTE:
            region_change_color(REGION, COLOR_HIGHLIGHT, 2, cursor.y + 1);
            region_change_color(REGION, COLOR_HIGHLIGHT, 3, cursor.y + 1);
            region_change_color(REGION, COLOR_HIGHLIGHT, 4, cursor.y + 1);
            break;

        case PHRASE_COLUMN_INSTRUMENT:
            region_change_color(REGION, COLOR_HIGHLIGHT, 6, cursor.y + 1);
            region_change_color(REGION, COLOR_HIGHLIGHT, 7, cursor.y + 1);
            break;

        case PHRASE_COLUMN_VOLUME:
            region_change_color(REGION, COLOR_HIGHLIGHT, 9,  cursor.y + 1);
            region_change_color(REGION, COLOR_HIGHLIGHT, 10, cursor.y + 1);
            break;

        case PHRASE_COLUMN_COMMAND:
            region_change_color(REGION, COLOR_HIGHLIGHT, selected_command * 6 + 13, cursor.y + 1);
            region_change_color(REGION, COLOR_HIGHLIGHT, selected_command * 6 + 14, cursor.y + 1);
            region_change_color(REGION, COLOR_HIGHLIGHT, selected_command * 6 + 15, cursor.y + 1);
            break;

        case PHRASE_COLUMN_PARAMETER:
            region_change_color(REGION, COLOR_HIGHLIGHT, selected_command * 6 + 16, cursor.y + 1);
            region_change_color(REGION, COLOR_HIGHLIGHT, selected_command * 6 + 17, cursor.y + 1);
            break;

        default:
            break;
    }
}

void phrase_unhighlight_cursor(void)
{
    static const region_t *REGION = &REGION_PHRASE_EDITOR_PHRASE;

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
        case PHRASE_COLUMN_NOTE:
            const uint8_t SELECTED_NOTE = data_get_phrase_note(selected_phrase, cursor.y);

            if (SELECTED_NOTE == 0x00) {
                region_change_color(REGION, color_fade, 2, cursor.y + 1);
                region_change_color(REGION, color_fade, 3, cursor.y + 1);
                region_change_color(REGION, color_fade, 4, cursor.y + 1);
            }
            else {
                region_change_color(REGION, color_normal, 2, cursor.y + 1);
                region_change_color(REGION, color_normal, 3, cursor.y + 1);
                region_change_color(REGION, color_normal, 4, cursor.y + 1);
            }
            break;

        default:
            break;
    }
}

void phrase_highlight_label(void)
{

}

void phrase_unhighlight_label(void)
{

}

void phrase_highlight_row_number(void)
{

}

void phrase_unhighlight_row_number(void)
{

}

void phrase_update_value(void)
{

}

void phrase_move_cursor(joystick_position_t joystick_position)
{

}

void phrase_insert_value(void)
{

}

void phrase_delete_value(void)
{

}

void phrase_change_value(joystick_position_t joystick_position)
{

}

uint8_t phrase_get_selected_instrument(void)
{
    return data_get_phrase_instrument(selected_phrase, cursor.y);
}
