#include "logic_phrase.h"
#include "region.h"
#include "lcd.h"
#include "basic_utils.h"

static void phrase_draw_title(void);
static void phrase_draw_editor_phrase(void);
static void phrase_draw_editor_command_description(void);
static void phrase_draw_editor_phrase_labels(void);
static void phrase_draw_editor_phrase_row_numbers(void);
static void phrase_draw_editor_phrase_spacing(void);
static void phrase_draw_editor_phrase_data(void);
static void phrase_draw_editor_command_description_name(void);
static void phrase_draw_editor_command_description_description(void);
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
static void phrase_update_command_description(void);
static command_id_t phrase_get_selected_command(void);

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
static phrase_id_t selected_phrase = 0x01;
static int32_t cursor_command = 0;
static command_id_t displayed_command_description = COMMAND_NULL;
static note_t copied_note = 0x31;
static instrument_id_t copied_instrument = 0x01;
static volume_t copied_volume = 0x64 + 1;
static command_id_t copied_command = 0x01;
static parameter_t copied_parameter = 0x00;

void phrase_init(phrase_id_t phrase)
{
    selected_phrase = phrase - 1;

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
    const symbol_t TITLE[] = {'P', 'h', 'r', 'a', 's', 'e'};
    const int32_t TITLE_LENGTH = ARRAY_SIZE(TITLE);

    for (int32_t i = 0; i < TITLE_LENGTH; i++)
        region_draw(REGION, TITLE[i], COLOR_NORMAL, i, 0);

    region_draw(REGION, HEX_DIGIT[(selected_phrase + 1) / 0x10], COLOR_NORMAL, TITLE_LENGTH + 1, 0);
    region_draw(REGION, HEX_DIGIT[(selected_phrase + 1) % 0x10], COLOR_NORMAL, TITLE_LENGTH + 2, 0);
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
    const command_id_t SELECTED_COMMAND = phrase_get_selected_command();

    displayed_command_description = SELECTED_COMMAND;

    if (SELECTED_COMMAND == COMMAND_NULL)
        return;

    phrase_draw_editor_command_description_name();
    phrase_draw_editor_command_description_description();
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
        region_draw(REGION, (symbol_t) i + '1', COLOR_DARK_FADE, i * 6 + 16, 0);
        region_draw(REGION, ' ', COLOR_DARK_FADE, i * 6 + 17, 0);
    }
}

void phrase_draw_editor_phrase_row_numbers(void)
{
    static const region_t *REGION = &REGION_PHRASE_EDITOR_PHRASE;

    for (int32_t i = 0; i < 16; i++) {
        const color_t COLOR = (i % 4 == 0 ? COLOR_DARK_FADE : COLOR_NORMAL_FADE);

        region_draw(REGION, HEX_DIGIT[i], COLOR, 0, i + 1);
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
        const note_t NOTE = project_data.phrase[selected_phrase].note[i];
        const instrument_id_t INSTRUMENT = project_data.phrase[selected_phrase].instrument[i];
        const volume_t VOLUME = project_data.phrase[selected_phrase].volume[i];

        command_id_t command[COMMANDS_PER_ROW];
        parameter_t parameter[COMMANDS_PER_ROW];
        for (int32_t j = 0; j < COMMANDS_PER_ROW; j++) {
            command[j]   = project_data.phrase[selected_phrase].command[i][j];
            parameter[j] = project_data.phrase[selected_phrase].parameter[i][j];
        }

        const bool IS_NOTE_NULL = (NOTE == 0x00);
        const bool IS_INSTRUMENT_NULL = (INSTRUMENT == 0x00);
        const bool IS_VOLUME_NULL = (VOLUME == 0x00);

        bool is_command_null[COMMANDS_PER_ROW];
        for (int32_t j = 0; j < COMMANDS_PER_ROW; j++)
            is_command_null[j] = (command[j] == 0x00);

        const color_t COLOR_VALUE = (i % 4 == 0 ? COLOR_DARK      : COLOR_NORMAL);
        const color_t COLOR_NULL  = (i % 4 == 0 ? COLOR_DARK_FADE : COLOR_NORMAL_FADE);

        const symbol_t SYMBOL_NOTE[3] = {
            NOTE_METADATA[NOTE].name[0],
            NOTE_METADATA[NOTE].name[1],
            NOTE_METADATA[NOTE].name[2]
        };
        const color_t COLOR_NOTE = (IS_NOTE_NULL ? COLOR_NULL : COLOR_VALUE);

        const symbol_t SYMBOL_INSTRUMENT[2] = {
            (IS_INSTRUMENT_NULL ? '-' : HEX_DIGIT[INSTRUMENT / 0x10]),
            (IS_INSTRUMENT_NULL ? '-' : HEX_DIGIT[INSTRUMENT % 0x10])
        };
        const color_t COLOR_INSTRUMENT = (IS_INSTRUMENT_NULL ? COLOR_NULL : COLOR_VALUE);

        const symbol_t SYMBOL_VOLUME[2] = {
            (IS_VOLUME_NULL ? '-' : HEX_DIGIT[(VOLUME - 1) / 0x10]),
            (IS_VOLUME_NULL ? '-' : HEX_DIGIT[(VOLUME - 1) % 0x10])
        };
        const color_t COLOR_VOLUME = (IS_VOLUME_NULL ? COLOR_NULL : COLOR_VALUE);

        symbol_t symbol_command[COMMANDS_PER_ROW][3];
        symbol_t symbol_parameter[COMMANDS_PER_ROW][2];
        color_t color_command[COMMANDS_PER_ROW];
        color_t color_parameter[COMMANDS_PER_ROW];
        for (int32_t j = 0; j < COMMANDS_PER_ROW; j++) {
            symbol_command[j][0]   = (is_command_null[j] ? '-' : COMMAND_METADATA[command[j]].name[0]);
            symbol_command[j][1]   = (is_command_null[j] ? '-' : COMMAND_METADATA[command[j]].name[1]);
            symbol_command[j][2]   = (is_command_null[j] ? '-' : COMMAND_METADATA[command[j]].name[2]);
            symbol_parameter[j][0] = (is_command_null[j] ? '-' : HEX_DIGIT[parameter[j] / 0x10]);
            symbol_parameter[j][1] = (is_command_null[j] ? '-' : HEX_DIGIT[parameter[j] % 0x10]);

            color_command[j] = (is_command_null[j] ? COLOR_NULL : COLOR_VALUE);
            color_parameter[j] = COLOR_NULL;
        }

        region_draw(REGION, SYMBOL_NOTE[0], COLOR_NOTE, 2, i + 1);
        region_draw(REGION, SYMBOL_NOTE[1], COLOR_NOTE, 3, i + 1);
        region_draw(REGION, SYMBOL_NOTE[2], COLOR_NOTE, 4, i + 1);

        region_draw(REGION, SYMBOL_INSTRUMENT[0], COLOR_INSTRUMENT, 6, i + 1);
        region_draw(REGION, SYMBOL_INSTRUMENT[1], COLOR_INSTRUMENT, 7, i + 1);

        region_draw(REGION, SYMBOL_VOLUME[0], COLOR_VOLUME, 9,  i + 1);
        region_draw(REGION, SYMBOL_VOLUME[1], COLOR_VOLUME, 10, i + 1);

        for (int32_t j = 0; j < COMMANDS_PER_ROW; j++) {
            region_draw(REGION, symbol_command[j][0],   color_command[j], j * 6 + 13, i + 1);
            region_draw(REGION, symbol_command[j][1],   color_command[j], j * 6 + 14, i + 1);
            region_draw(REGION, symbol_command[j][2],   color_command[j], j * 6 + 15, i + 1);
            region_draw(REGION, symbol_parameter[j][0], color_parameter[j], j * 6 + 16, i + 1);
            region_draw(REGION, symbol_parameter[j][1], color_parameter[j], j * 6 + 17, i + 1);
        }
    }
}

void phrase_draw_editor_command_description_name(void)
{
    static const region_t *REGION = &REGION_PHRASE_EDITOR_COMMAND_DESCRIPTION;
    const command_id_t SELECTED_COMMAND = project_data.phrase[selected_phrase].command[cursor.y][cursor_command];
    const command_metadata_t *SELECTED_COMMAND_METADATA = &COMMAND_METADATA[SELECTED_COMMAND];

    for (int32_t i = 0; i < 3; i++)
        region_draw(REGION, SELECTED_COMMAND_METADATA->name[i], COLOR_DARK, i, 0);

    switch (SELECTED_COMMAND_METADATA->parameter_type) {
        case PARAMETER_XX:
            region_draw(REGION, 'x', COLOR_DARK, 3, 0);
            region_draw(REGION, 'x', COLOR_DARK, 4, 0);
            break;

        case PARAMETER_XY:
            region_draw(REGION, 'x', COLOR_DARK, 3, 0);
            region_draw(REGION, 'y', COLOR_DARK, 4, 0);
            break;

        default:
            break;
    }

    region_draw(REGION, ' ', COLOR_DARK, 5, 0);
    region_draw(REGION, '-', COLOR_DARK, 6, 0);
    region_draw(REGION, ' ', COLOR_DARK, 7, 0);

    const char *TEXT_FULL_NAME = SELECTED_COMMAND_METADATA->full_name;
    for (int32_t i = 0; TEXT_FULL_NAME[i] != '\0'; i++)
        region_draw(REGION, TEXT_FULL_NAME[i], COLOR_DARK, i + 8, 0);
}

void phrase_draw_editor_command_description_description(void)
{
    const region_t *REGION = &REGION_PHRASE_EDITOR_COMMAND_DESCRIPTION;
    const command_id_t SELECTED_COMMAND = project_data.phrase[selected_phrase].command[cursor.y][cursor_command];
    const command_metadata_t *SELECTED_COMMAND_METADATA = &COMMAND_METADATA[SELECTED_COMMAND];

    int32_t written_rows = 0;

    written_rows += region_draw_text(REGION, SELECTED_COMMAND_METADATA->description.general, COLOR_NORMAL, 0, 1);

    switch (SELECTED_COMMAND_METADATA->parameter_type) {
        case PARAMETER_XX:
            region_draw(REGION, 'x', COLOR_DARK, 0, written_rows + 1);
            region_draw(REGION, 'x', COLOR_DARK, 1, written_rows + 1);

            written_rows += region_draw_text(REGION, SELECTED_COMMAND_METADATA->description.parameter.xx, COLOR_NORMAL, 3, written_rows + 1);
            break;

        case PARAMETER_XY:
            region_draw(REGION, 'x', COLOR_DARK, 0, written_rows + 1);
            written_rows += region_draw_text(REGION, SELECTED_COMMAND_METADATA->description.parameter.x, COLOR_NORMAL, 2, written_rows + 1);

            region_draw(REGION, 'y', COLOR_DARK, 0, written_rows + 1);
            written_rows += region_draw_text(REGION, SELECTED_COMMAND_METADATA->description.parameter.y, COLOR_NORMAL, 2, written_rows + 1);
            break;

        default:
            break;
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
            region_change_color(REGION, COLOR_HIGHLIGHT, cursor_command * 6 + 13, cursor.y + 1);
            region_change_color(REGION, COLOR_HIGHLIGHT, cursor_command * 6 + 14, cursor.y + 1);
            region_change_color(REGION, COLOR_HIGHLIGHT, cursor_command * 6 + 15, cursor.y + 1);
            break;

        case PHRASE_COLUMN_PARAMETER:
            region_change_color(REGION, COLOR_HIGHLIGHT, cursor_command * 6 + 16, cursor.y + 1);
            region_change_color(REGION, COLOR_HIGHLIGHT, cursor_command * 6 + 17, cursor.y + 1);
            break;

        default:
            break;
    }
}

void phrase_unhighlight_cursor(void)
{
    static const region_t *REGION = &REGION_PHRASE_EDITOR_PHRASE;

    const color_t COLOR_VALUE = (cursor.y % 4 == 0 ? COLOR_DARK      : COLOR_NORMAL);
    const color_t COLOR_NULL  = (cursor.y % 4 == 0 ? COLOR_DARK_FADE : COLOR_NORMAL_FADE);

    switch(cursor.x) {
        case PHRASE_COLUMN_NOTE: {
            const note_t SELECTED_NOTE = project_data.phrase[selected_phrase].note[cursor.y];
            const bool IS_NOTE_NULL = (SELECTED_NOTE == 0x00);

            const color_t COLOR_NOTE = (IS_NOTE_NULL ? COLOR_NULL : COLOR_VALUE);

            region_change_color(REGION, COLOR_NOTE, 2, cursor.y + 1);
            region_change_color(REGION, COLOR_NOTE, 3, cursor.y + 1);
            region_change_color(REGION, COLOR_NOTE, 4, cursor.y + 1);

            break;
        }

        case PHRASE_COLUMN_INSTRUMENT: {
            const instrument_id_t SELECTED_INSTRUMENT = project_data.phrase[selected_phrase].instrument[cursor.y];
            const bool IS_INSTRUMENT_NULL = (SELECTED_INSTRUMENT == 0x00);

            const color_t COLOR_INSTRUMENT = (IS_INSTRUMENT_NULL ? COLOR_NULL : COLOR_VALUE);

            region_change_color(REGION, COLOR_INSTRUMENT, 6, cursor.y + 1);
            region_change_color(REGION, COLOR_INSTRUMENT, 7, cursor.y + 1);

            break;
        }

        case PHRASE_COLUMN_VOLUME: {
            const volume_t SELECTED_VOLUME = project_data.phrase[selected_phrase].volume[cursor.y];
            const bool IS_VOLUME_NULL = (SELECTED_VOLUME == 0x00);

            const color_t COLOR_VOLUME = (IS_VOLUME_NULL ? COLOR_NULL : COLOR_VALUE);

            region_change_color(REGION, COLOR_VOLUME, 9,  cursor.y + 1);
            region_change_color(REGION, COLOR_VOLUME, 10, cursor.y + 1);

            break;
        }

        case PHRASE_COLUMN_COMMAND: {
            const command_id_t SELECTED_COMMAND = project_data.phrase[selected_phrase].command[cursor.y][cursor_command];
            const bool IS_COMMAND_NULL = (SELECTED_COMMAND == 0x00);

            const color_t COLOR_COMMAND = (IS_COMMAND_NULL ? COLOR_NULL : COLOR_VALUE);

            region_change_color(REGION, COLOR_COMMAND, cursor_command * 6 + 13, cursor.y + 1);
            region_change_color(REGION, COLOR_COMMAND, cursor_command * 6 + 14, cursor.y + 1);
            region_change_color(REGION, COLOR_COMMAND, cursor_command * 6 + 15, cursor.y + 1);

            break;
        }

        case PHRASE_COLUMN_PARAMETER: {
            const color_t COLOR_PARAMETER = COLOR_NULL;

            region_change_color(REGION, COLOR_PARAMETER, cursor_command * 6 + 16, cursor.y + 1);
            region_change_color(REGION, COLOR_PARAMETER, cursor_command * 6 + 17, cursor.y + 1);

            break;
        }

        default:
            break;
    }
}

void phrase_highlight_label(void)
{
    static const region_t *REGION = &REGION_PHRASE_EDITOR_PHRASE;

    switch (cursor.x) {
        case PHRASE_COLUMN_NOTE:
            region_change_color(REGION, COLOR_DARK, 2, 0);
            break;

        case PHRASE_COLUMN_INSTRUMENT:
            region_change_color(REGION, COLOR_DARK, 6, 0);
            break;

        case PHRASE_COLUMN_VOLUME:
            region_change_color(REGION, COLOR_DARK, 9, 0);
            break;

        case PHRASE_COLUMN_COMMAND:
        case PHRASE_COLUMN_PARAMETER:
            region_change_color(REGION, COLOR_DARK, cursor_command * 6 + 13, 0);
            region_change_color(REGION, COLOR_DARK, cursor_command * 6 + 14, 0);
            region_change_color(REGION, COLOR_DARK, cursor_command * 6 + 15, 0);
            region_change_color(REGION, COLOR_DARK, cursor_command * 6 + 16, 0);
            break;

        default:
            break;
    }
}

void phrase_unhighlight_label(void)
{
    static const region_t *REGION = &REGION_PHRASE_EDITOR_PHRASE;

    switch (cursor.x) {
        case PHRASE_COLUMN_NOTE:
            region_change_color(REGION, COLOR_DARK_FADE, 2, 0);
            break;

        case PHRASE_COLUMN_INSTRUMENT:
            region_change_color(REGION, COLOR_DARK_FADE, 6, 0);
            break;

        case PHRASE_COLUMN_VOLUME:
            region_change_color(REGION, COLOR_DARK_FADE, 9, 0);
            break;

        case PHRASE_COLUMN_COMMAND:
        case PHRASE_COLUMN_PARAMETER:
            region_change_color(REGION, COLOR_DARK_FADE, cursor_command * 6 + 13, 0);
            region_change_color(REGION, COLOR_DARK_FADE, cursor_command * 6 + 14, 0);
            region_change_color(REGION, COLOR_DARK_FADE, cursor_command * 6 + 15, 0);
            region_change_color(REGION, COLOR_DARK_FADE, cursor_command * 6 + 16, 0);
            break;

        default:
            break;
    }
}

void phrase_highlight_row_number(void)
{
    static const region_t *REGION = &REGION_PHRASE_EDITOR_PHRASE;
    const color_t COLOR = (cursor.y % 4 == 0 ? COLOR_DARK : COLOR_NORMAL);

    region_change_color(REGION, COLOR, 0, cursor.y + 1);
}

void phrase_unhighlight_row_number(void)
{
    static const region_t *REGION = &REGION_PHRASE_EDITOR_PHRASE;
    const color_t COLOR = (cursor.y % 4 == 0 ? COLOR_DARK_FADE : COLOR_NORMAL_FADE);

    region_change_color(REGION, COLOR, 0, cursor.y + 1);
}

void phrase_update_value(void)
{
    static const region_t *REGION = &REGION_PHRASE_EDITOR_PHRASE;

    switch (cursor.x) {
        case PHRASE_COLUMN_NOTE: {
            const note_t SELECTED_NOTE = project_data.phrase[selected_phrase].note[cursor.y];

            const symbol_t SYMBOL_NOTE[3] = {
                NOTE_METADATA[SELECTED_NOTE].name[0],
                NOTE_METADATA[SELECTED_NOTE].name[1],
                NOTE_METADATA[SELECTED_NOTE].name[2]
            };

            region_change_symbol(REGION, SYMBOL_NOTE[0], 2, cursor.y + 1);
            region_change_symbol(REGION, SYMBOL_NOTE[1], 3, cursor.y + 1);
            region_change_symbol(REGION, SYMBOL_NOTE[2], 4, cursor.y + 1);

            break;
        }

        case PHRASE_COLUMN_INSTRUMENT: {
            const instrument_id_t SELECTED_INSTRUMENT = project_data.phrase[selected_phrase].instrument[cursor.y];
            const bool IS_SELECTED_INSTRUMENT_NULL = (SELECTED_INSTRUMENT == 0x00);

            const symbol_t SYMBOL_INSTRUMENT[2] = {
                (IS_SELECTED_INSTRUMENT_NULL ? '-' : HEX_DIGIT[SELECTED_INSTRUMENT / 0x10]),
                (IS_SELECTED_INSTRUMENT_NULL ? '-' : HEX_DIGIT[SELECTED_INSTRUMENT % 0x10])
            };

            region_change_symbol(REGION, SYMBOL_INSTRUMENT[0], 6, cursor.y + 1);
            region_change_symbol(REGION, SYMBOL_INSTRUMENT[1], 7, cursor.y + 1);

            break;
        }

        case PHRASE_COLUMN_VOLUME: {
            const volume_t SELECTED_VOLUME = project_data.phrase[selected_phrase].volume[cursor.y];
            const bool IS_SELECTED_VOLUME_NULL = (SELECTED_VOLUME == 0x00);

            const symbol_t SYMBOL_VOLUME[2] = {
                (IS_SELECTED_VOLUME_NULL ? '-' : HEX_DIGIT[(SELECTED_VOLUME - 1) / 0x10]),
                (IS_SELECTED_VOLUME_NULL ? '-' : HEX_DIGIT[(SELECTED_VOLUME - 1) % 0x10])
            };

            region_change_symbol(REGION, SYMBOL_VOLUME[0], 9,  cursor.y + 1);
            region_change_symbol(REGION, SYMBOL_VOLUME[1], 10, cursor.y + 1);

            break;
        }

        case PHRASE_COLUMN_COMMAND: {
            const command_id_t SELECTED_COMMAND = project_data.phrase[selected_phrase].command[cursor.y][cursor_command];
            const parameter_t SELECTED_PARAMETER = project_data.phrase[selected_phrase].parameter[cursor.y][cursor_command];
            const bool IS_SELECTED_COMMAND_NULL = (SELECTED_COMMAND == 0x00);

            const symbol_t SYMBOL_COMMAND[3] = {
                (IS_SELECTED_COMMAND_NULL ? '-' : COMMAND_METADATA[SELECTED_COMMAND].name[0]),
                (IS_SELECTED_COMMAND_NULL ? '-' : COMMAND_METADATA[SELECTED_COMMAND].name[1]),
                (IS_SELECTED_COMMAND_NULL ? '-' : COMMAND_METADATA[SELECTED_COMMAND].name[2])
            };
            const symbol_t SYMBOL_PARAMETER[2] = {
                (IS_SELECTED_COMMAND_NULL ? '-' : HEX_DIGIT[SELECTED_PARAMETER / 0x10]),
                (IS_SELECTED_COMMAND_NULL ? '-' : HEX_DIGIT[SELECTED_PARAMETER % 0x10])
            };

            region_change_symbol(REGION, SYMBOL_COMMAND[0],   cursor_command * 6 + 13, cursor.y + 1);
            region_change_symbol(REGION, SYMBOL_COMMAND[1],   cursor_command * 6 + 14, cursor.y + 1);
            region_change_symbol(REGION, SYMBOL_COMMAND[2],   cursor_command * 6 + 15, cursor.y + 1);
            region_change_symbol(REGION, SYMBOL_PARAMETER[0], cursor_command * 6 + 16, cursor.y + 1);
            region_change_symbol(REGION, SYMBOL_PARAMETER[1], cursor_command * 6 + 17, cursor.y + 1);

            break;
        }

        case PHRASE_COLUMN_PARAMETER: {
            const command_id_t SELECTED_COMMAND = project_data.phrase[selected_phrase].command[cursor.y][cursor_command];
            const parameter_t SELECTED_PARAMETER = project_data.phrase[selected_phrase].parameter[cursor.y][cursor_command];
            const bool IS_SELECTED_COMMAND_NULL = (SELECTED_COMMAND == 0x00);

            const symbol_t SYMBOL_PARAMETER[2] = {
                (IS_SELECTED_COMMAND_NULL ? '-' : HEX_DIGIT[SELECTED_PARAMETER / 0x10]),
                (IS_SELECTED_COMMAND_NULL ? '-' : HEX_DIGIT[SELECTED_PARAMETER % 0x10])
            };

            region_change_symbol(REGION, SYMBOL_PARAMETER[0], cursor_command * 6 + 16, cursor.y + 1);
            region_change_symbol(REGION, SYMBOL_PARAMETER[1], cursor_command * 6 + 17, cursor.y + 1);

            break;
        }

        default:
            break;
    }
}

void phrase_update_command_description(void)
{
    const command_id_t SELECTED_COMMAND = phrase_get_selected_command();

    if (SELECTED_COMMAND == displayed_command_description)
        return;

    if (displayed_command_description == COMMAND_NULL) {
        displayed_command_description = SELECTED_COMMAND;
        phrase_draw_editor_command_description();
    }
    else if (SELECTED_COMMAND == COMMAND_NULL) {
        displayed_command_description = SELECTED_COMMAND;
        phrase_clear_editor_command_description();
    }
    else {
        displayed_command_description = SELECTED_COMMAND;
        phrase_clear_editor_command_description();
        phrase_draw_editor_command_description();
    }
}

void phrase_move_cursor(joystick_position_t joystick_position)
{
    cursor_t new_cursor = cursor;
    int32_t new_selected_command = cursor_command;

    switch (joystick_position) {
        case JOYSTICK_POSITION_DOWN:
            new_cursor.y = change_value_within_bounds(cursor.y, +1, 0x00, 0x0F);
            break;

        case JOYSTICK_POSITION_UP:
            new_cursor.y = change_value_within_bounds(cursor.y, -1, 0x00, 0x0F);
            break;

        case JOYSTICK_POSITION_RIGHT:
            if (cursor.x == PHRASE_COLUMN_PARAMETER &&
                cursor_command + 1 < COMMANDS_PER_ROW)
            {
                new_selected_command += 1;
                new_cursor.x = PHRASE_COLUMN_COMMAND;
            }
            else {
                new_cursor.x = change_value_within_bounds(cursor.x, +1, 0, PHRASE_COLUMN_COUNT - 1);
            }
            break;

        case JOYSTICK_POSITION_LEFT:
            if (cursor.x == PHRASE_COLUMN_COMMAND &&
                cursor_command - 1 >= 0)
            {
                new_selected_command -= 1;
                new_cursor.x = PHRASE_COLUMN_PARAMETER;
            }
            else {
                new_cursor.x = change_value_within_bounds(cursor.x, -1, 0, PHRASE_COLUMN_COUNT - 1);
            }
            break;

        default:
            return;
    }

    if (new_cursor.x != cursor.x || new_cursor.y != cursor.y) {
        phrase_unhighlight_cursor();

        if (new_cursor.y != cursor.y) {
            phrase_unhighlight_row_number();
            cursor.y = new_cursor.y;
            phrase_highlight_row_number();
        }

        if (new_cursor.x != cursor.x) {
            phrase_unhighlight_label();
            cursor.x = new_cursor.x;
            cursor_command = new_selected_command;
            phrase_highlight_label();
        }

        phrase_highlight_cursor();

        phrase_update_command_description();
    }
}

void phrase_insert_value(void)
{
    switch (cursor.x) {
        case PHRASE_COLUMN_NOTE: {
            const note_t SELECTED_NOTE = project_data.phrase[selected_phrase].note[cursor.y];

            if (SELECTED_NOTE == 0x00) {
                project_data.phrase[selected_phrase].note[cursor.y] = copied_note;
                phrase_update_value();
            }
            else {
                copied_note = SELECTED_NOTE;
            }

            break;
        }

        case PHRASE_COLUMN_INSTRUMENT: {
            const instrument_id_t SELECTED_INSTRUMENT = project_data.phrase[selected_phrase].instrument[cursor.y];

            if (SELECTED_INSTRUMENT == 0x00) {
                project_data.phrase[selected_phrase].instrument[cursor.y] = copied_instrument;
                phrase_update_value();
            }
            else {
                copied_instrument = SELECTED_INSTRUMENT;
            }

            break;
        }

        case PHRASE_COLUMN_VOLUME: {
            const volume_t SELECTED_VOLUME = project_data.phrase[selected_phrase].volume[cursor.y];

            if (SELECTED_VOLUME == 0x00) {
                project_data.phrase[selected_phrase].volume[cursor.y] = copied_volume;
                phrase_update_value();
            }
            else {
                copied_volume = SELECTED_VOLUME;
            }

            break;
        }

        case PHRASE_COLUMN_COMMAND: {
            const command_id_t SELECTED_COMMAND = project_data.phrase[selected_phrase].command[cursor.y][cursor_command];
            const parameter_t SELECTED_PARAMETER = project_data.phrase[selected_phrase].parameter[cursor.y][cursor_command];

            if (SELECTED_COMMAND == 0x00) {
                project_data.phrase[selected_phrase].command[cursor.y][cursor_command] = copied_command;
                project_data.phrase[selected_phrase].parameter[cursor.y][cursor_command] = copied_parameter;
                phrase_update_value();
                phrase_update_command_description();
            }
            else {
                copied_command = SELECTED_COMMAND;
                copied_parameter = SELECTED_PARAMETER;
            }

            break;
        }

        case PHRASE_COLUMN_PARAMETER: {
            const command_id_t SELECTED_COMMAND = project_data.phrase[selected_phrase].command[cursor.y][cursor_command];
            const parameter_t SELECTED_PARAMETER = project_data.phrase[selected_phrase].parameter[cursor.y][cursor_command];

            if (SELECTED_COMMAND != 0x00) {
                copied_command = SELECTED_COMMAND;
                copied_parameter = SELECTED_PARAMETER;
            }

            break;
        }

        default:
            break;
    }
}

void phrase_delete_value(void)
{
    switch (cursor.x) {
        case PHRASE_COLUMN_NOTE: {
            const note_t SELECTED_NOTE = project_data.phrase[selected_phrase].note[cursor.y];

            if (SELECTED_NOTE == 0x00)
                return;

            copied_note = SELECTED_NOTE;

            project_data.phrase[selected_phrase].note[cursor.y] = 0x00;

            phrase_update_value();

            break;
        }

        case PHRASE_COLUMN_INSTRUMENT: {
            const instrument_id_t SELECTED_INSTRUMENT = project_data.phrase[selected_phrase].instrument[cursor.y];

            if (SELECTED_INSTRUMENT == 0x00)
                return;

            copied_instrument = SELECTED_INSTRUMENT;

            project_data.phrase[selected_phrase].instrument[cursor.y] = 0x00;

            phrase_update_value();

            break;
        }

        case PHRASE_COLUMN_VOLUME: {
            const volume_t SELECTED_VOLUME = project_data.phrase[selected_phrase].volume[cursor.y];

            if (SELECTED_VOLUME == 0x00)
                return;

            copied_volume = SELECTED_VOLUME;

            project_data.phrase[selected_phrase].volume[cursor.y] = 0x00;

            phrase_update_value();

            break;
        }

        case PHRASE_COLUMN_COMMAND: {
            const command_id_t SELECTED_COMMAND = project_data.phrase[selected_phrase].command[cursor.y][cursor_command];
            const parameter_t SELECTED_PARAMETER = project_data.phrase[selected_phrase].parameter[cursor.y][cursor_command];

            if (SELECTED_COMMAND == 0x00)
                return;

            copied_command = SELECTED_COMMAND;
            copied_parameter = SELECTED_PARAMETER;

            project_data.phrase[selected_phrase].command[cursor.y][cursor_command] = 0x00;
            project_data.phrase[selected_phrase].parameter[cursor.y][cursor_command] = 0x00;

            phrase_update_value();
            phrase_update_command_description();

            break;
        }

        case PHRASE_COLUMN_PARAMETER: {
            const command_id_t SELECTED_COMMAND = project_data.phrase[selected_phrase].parameter[cursor.y][cursor_command];

            if (SELECTED_COMMAND == 0x00)
                return;

            copied_parameter = 0x00;

            project_data.phrase[selected_phrase].parameter[cursor.y][cursor_command] = 0x00;

            phrase_update_value();

            break;
        }

        default:
            break;
    }
}

void phrase_change_value(joystick_position_t joystick_position)
{
    switch (cursor.x) {
        case PHRASE_COLUMN_NOTE: {
            const int32_t SELECTED_NOTE = (int32_t) project_data.phrase[selected_phrase].note[cursor.y];
            int32_t new_note = SELECTED_NOTE;

            if (SELECTED_NOTE == 0x00)
                return;

            switch (joystick_position) {
                case JOYSTICK_POSITION_UP:
                    new_note = change_value_within_bounds(SELECTED_NOTE, +1, 0x01, NOTE_COUNT - 3);
                    break;

                case JOYSTICK_POSITION_DOWN:
                    new_note = change_value_within_bounds(SELECTED_NOTE, -1, 0x01, NOTE_COUNT - 3);
                    break;

                case JOYSTICK_POSITION_RIGHT:
                    new_note = change_value_within_bounds(SELECTED_NOTE, +12, 0x01, NOTE_COUNT - 3);
                    break;

                case JOYSTICK_POSITION_LEFT:
                    new_note = change_value_within_bounds(SELECTED_NOTE, -12, 0x01, NOTE_COUNT - 3);
                    break;

                default:
                    return;
            }

            if (new_note != SELECTED_NOTE) {
                project_data.phrase[selected_phrase].note[cursor.y] = (note_t) new_note;
                phrase_update_value();
                copied_note = (note_t) new_note;
            }

            break;
        }

        case PHRASE_COLUMN_INSTRUMENT: {
            const int32_t SELECTED_INSTRUMENT = (int32_t) project_data.phrase[selected_phrase].instrument[cursor.y];
            int32_t new_instrument = SELECTED_INSTRUMENT;

            if (SELECTED_INSTRUMENT == 0x00)
                return;

            switch (joystick_position) {
                case JOYSTICK_POSITION_UP:
                    new_instrument = change_value_within_bounds(SELECTED_INSTRUMENT, +1, 0x01, INSTRUMENT_COUNT);
                    break;

                case JOYSTICK_POSITION_DOWN:
                    new_instrument = change_value_within_bounds(SELECTED_INSTRUMENT, -1, 0x01, INSTRUMENT_COUNT);
                    break;

                case JOYSTICK_POSITION_RIGHT:
                    new_instrument = change_value_within_bounds(SELECTED_INSTRUMENT, +16, 0x01, INSTRUMENT_COUNT);
                    break;

                case JOYSTICK_POSITION_LEFT:
                    new_instrument = change_value_within_bounds(SELECTED_INSTRUMENT, -16, 0x01, INSTRUMENT_COUNT);
                    break;

                default:
                    return;
            }

            if (new_instrument != SELECTED_INSTRUMENT) {
                project_data.phrase[selected_phrase].instrument[cursor.y] = (instrument_id_t) new_instrument;
                phrase_update_value();
                copied_instrument = (instrument_id_t) new_instrument;
            }

            break;
        }

        case PHRASE_COLUMN_VOLUME: {
            const int32_t SELECTED_VOLUME = (int32_t) project_data.phrase[selected_phrase].volume[cursor.y];
            int32_t new_volume = SELECTED_VOLUME;

            if (SELECTED_VOLUME == 0x00)
                return;

            switch (joystick_position) {
                case JOYSTICK_POSITION_UP:
                    new_volume = change_value_within_bounds(SELECTED_VOLUME, +1, 0x01, 0x7F + 1);
                    break;

                case JOYSTICK_POSITION_DOWN:
                    new_volume = change_value_within_bounds(SELECTED_VOLUME, -1, 0x01, 0x7F + 1);
                    break;

                case JOYSTICK_POSITION_RIGHT:
                    new_volume = change_value_within_bounds(SELECTED_VOLUME, +16, 0x01, 0x7F + 1);
                    break;

                case JOYSTICK_POSITION_LEFT:
                    new_volume = change_value_within_bounds(SELECTED_VOLUME, -16, 0x01, 0x7F + 1);
                    break;

                default:
                    return;
            }

            if (new_volume != SELECTED_VOLUME) {
                project_data.phrase[selected_phrase].volume[cursor.y] = (volume_t) new_volume;
                phrase_update_value();
                copied_volume = (volume_t) new_volume;
            }

            break;
        }

        case PHRASE_COLUMN_COMMAND: {
            const int32_t SELECTED_COMMAND = (int32_t) project_data.phrase[selected_phrase].command[cursor.y][cursor_command];
            int32_t new_command = SELECTED_COMMAND;

            if (SELECTED_COMMAND == 0x00)
                return;

            switch (joystick_position) {
                case JOYSTICK_POSITION_UP:
                case JOYSTICK_POSITION_RIGHT:
                    new_command = change_value_within_bounds(SELECTED_COMMAND, +1, 0x01, COMMAND_COUNT - 1);
                    break;

                case JOYSTICK_POSITION_DOWN:
                case JOYSTICK_POSITION_LEFT:
                    new_command = change_value_within_bounds(SELECTED_COMMAND, -1, 0x01, COMMAND_COUNT - 1);
                    break;

                default:
                    return;
            }

            if (new_command != SELECTED_COMMAND) {
                project_data.phrase[selected_phrase].command[cursor.y][cursor_command] = (command_id_t) new_command;
                phrase_update_value();
                phrase_update_command_description();
                copied_command = (command_id_t) new_command;
            }

            break;
        }

        case PHRASE_COLUMN_PARAMETER: {
            const int32_t SELECTED_COMMAND = (int32_t) project_data.phrase[selected_phrase].command[cursor.y][cursor_command];
            const int32_t SELECTED_PARAMETER = (int32_t) project_data.phrase[selected_phrase].parameter[cursor.y][cursor_command];
            int32_t new_parameter = SELECTED_PARAMETER;

            if (SELECTED_COMMAND == 0x00)
                return;

            switch (joystick_position) {
                case JOYSTICK_POSITION_UP:
                    new_parameter = change_value_within_bounds(SELECTED_PARAMETER, +1, 0x01, 0xFF);
                    break;

                case JOYSTICK_POSITION_DOWN:
                    new_parameter = change_value_within_bounds(SELECTED_PARAMETER, -1, 0x01, 0xFF);
                    break;

                case JOYSTICK_POSITION_RIGHT:
                    new_parameter = change_value_within_bounds(SELECTED_PARAMETER, +16, 0x01, 0xFF);
                    break;

                case JOYSTICK_POSITION_LEFT:
                    new_parameter = change_value_within_bounds(SELECTED_PARAMETER, -16, 0x01, 0xFF);
                    break;

                default:
                    return;
            }

            if (new_parameter != SELECTED_PARAMETER) {
                project_data.phrase[selected_phrase].parameter[cursor.y][cursor_command] = (parameter_t) new_parameter;
                phrase_update_value();
                copied_parameter = (parameter_t) new_parameter;
            }

            break;
        }

        default:
            break;
    }
}

command_id_t phrase_get_selected_command(void)
{
    if (cursor.x == PHRASE_COLUMN_COMMAND ||
        cursor.x == PHRASE_COLUMN_PARAMETER)
    {
        return project_data.phrase[selected_phrase].command[cursor.y][cursor_command];
    }

    return COMMAND_NULL;
}

instrument_id_t phrase_get_selected_instrument(void)
{
    return project_data.phrase[selected_phrase].instrument[cursor.y];
}
