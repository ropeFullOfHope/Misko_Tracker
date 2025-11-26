#include "logic_song.h"
#include <stdbool.h>
#include "region.h"
#include "lcd.h"
#include "basic_utils.h"

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
static chain_id_t copied_chain = 0x01;

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
    static const region_t *REGION = &REGION_SONG_TITLE;
    static const symbol_t TITLE[] = {'S','o','n','g'};
    static const int32_t TITLE_LENGTH = ARRAY_SIZE(TITLE);

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
    static const region_t *REGION = &REGION_SONG_EDITOR_SONG;

    for (int32_t i = 0; i < CHANNEL_COUNT; i++) {
        region_draw(REGION, (symbol_t) i + '1', COLOR_DARK_FADE, i * 3 + 3, 0);
        region_draw(REGION, ' ',     COLOR_DARK_FADE, i * 3 + 4, 0);
    }
}

void song_draw_editor_song_row_numbers(void)
{
    static const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t ROWS_ON_SCREEN = REGION->size.y - 1;

    for (int32_t i = 0; i < ROWS_ON_SCREEN; i++) {
        const int32_t ROW = scroll + i;
        const color_t COLOR = (ROW % 4 == 0 ? COLOR_DARK_FADE : COLOR_NORMAL_FADE);

        // Left side
        region_draw(REGION, HEX_DIGIT[(ROW >> 4) % 0x10], COLOR, 0, i + 1);
        region_draw(REGION, HEX_DIGIT[(ROW >> 0) % 0x10], COLOR, 1, i + 1);

        // Right side
        region_draw(REGION, HEX_DIGIT[(ROW >> 4) % 0x10], COLOR, CHANNEL_COUNT * 3 + 3, i + 1);
        region_draw(REGION, HEX_DIGIT[(ROW >> 0) % 0x10], COLOR, CHANNEL_COUNT * 3 + 4, i + 1);
    }
}

void song_draw_editor_song_spacing(void)
{
    static const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t ROWS_ON_SCREEN = REGION->size.y - 1;

    for (int32_t y = 0; y < ROWS_ON_SCREEN; y++) {
        const int32_t ROW = scroll + y;
        const color_t COLOR = (ROW % 4 == 0 ? COLOR_DARK_FADE : COLOR_NORMAL_FADE);

        for (int32_t x = 0; x < CHANNEL_COUNT + 1; x++)
            region_draw(REGION, ' ', COLOR, x * 3 + 2, y + 1);
    }
}

void song_draw_editor_song_data(void)
{
    static const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t ROWS_ON_SCREEN = REGION->size.y - 1;

    for (int32_t y = 0; y < ROWS_ON_SCREEN; y++) {
        const int32_t ROW = scroll + y;

        for (int32_t x = 0; x < CHANNEL_COUNT; x++) {
            const chain_id_t CHAIN = project_data.song.chain[x][ROW];
            const bool IS_CHAIN_NULL = (CHAIN == 0x00);

            const color_t COLOR_VALUE = (ROW % 4 == 0 ? COLOR_DARK      : COLOR_NORMAL);
            const color_t COLOR_NULL  = (ROW % 4 == 0 ? COLOR_DARK_FADE : COLOR_NORMAL_FADE);

            const color_t COLOR = (IS_CHAIN_NULL ? COLOR_NULL : COLOR_VALUE);

            const symbol_t SYMBOL[2] = {
                (IS_CHAIN_NULL ? '-' : HEX_DIGIT[CHAIN / 0x10]),
                (IS_CHAIN_NULL ? '-' : HEX_DIGIT[CHAIN % 0x10])
            };

            region_draw(REGION, SYMBOL[0], COLOR, x * 3 + 3, y + 1);
            region_draw(REGION, SYMBOL[1], COLOR, x * 3 + 4, y + 1);
        }
    }
}

void song_clear_title(void)
{
    static const region_t *REGION = &REGION_SONG_TITLE;

    region_fill(REGION, ' ', COLOR_NORMAL);
}

void song_clear_editor_song(void)
{
    static const region_t *REGION = &REGION_SONG_EDITOR_SONG;

    region_fill(REGION, ' ', COLOR_NORMAL);
}

void song_highlight_cursor(void)
{
    static const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t RELATIVE_ROW = cursor.y - scroll;

    region_change_color(REGION, COLOR_HIGHLIGHT, cursor.x * 3 + 3, RELATIVE_ROW + 1);
    region_change_color(REGION, COLOR_HIGHLIGHT, cursor.x * 3 + 4, RELATIVE_ROW + 1);

}

void song_unhighlight_cursor(void)
{
    static const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t RELATIVE_ROW = cursor.y - scroll;
    const chain_id_t SELECTED_CHAIN = project_data.song.chain[cursor.x][cursor.y];
    const bool IS_CHAIN_NULL = (SELECTED_CHAIN == 0x00);

    const color_t COLOR_VALUE = (cursor.y % 4 == 0 ? COLOR_DARK      : COLOR_NORMAL);
    const color_t COLOR_NULL  = (cursor.y % 4 == 0 ? COLOR_DARK_FADE : COLOR_NORMAL_FADE);

    const color_t COLOR = (IS_CHAIN_NULL ? COLOR_NULL : COLOR_VALUE);

    region_change_color(REGION, COLOR, cursor.x * 3 + 3, RELATIVE_ROW + 1);
    region_change_color(REGION, COLOR, cursor.x * 3 + 4, RELATIVE_ROW + 1);
}

void song_highlight_channel_label(void)
{
    static const region_t *REGION = &REGION_SONG_EDITOR_SONG;

    region_change_color(REGION, COLOR_DARK, cursor.x * 3 + 3, 0);
}

void song_unhighlight_channel_label(void)
{
    static const region_t *REGION = &REGION_SONG_EDITOR_SONG;

    region_change_color(REGION, COLOR_DARK_FADE, cursor.x * 3 + 3, 0);
}

void song_highlight_row_number(void)
{
    static const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t RELATIVE_ROW = cursor.y - scroll;
    const color_t COLOR = (cursor.y % 4 == 0 ? COLOR_DARK : COLOR_NORMAL);

    // Left side
    region_change_color(REGION, COLOR, 0, RELATIVE_ROW + 1);
    region_change_color(REGION, COLOR, 1, RELATIVE_ROW + 1);

    // Right side
    region_change_color(REGION, COLOR, CHANNEL_COUNT * 3 + 3, RELATIVE_ROW + 1);
    region_change_color(REGION, COLOR, CHANNEL_COUNT * 3 + 4, RELATIVE_ROW + 1);
}

void song_unhighlight_row_number(void)
{
    static const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t RELATIVE_ROW = cursor.y - scroll;
    const color_t COLOR = (cursor.y % 4 == 0 ? COLOR_DARK_FADE : COLOR_NORMAL_FADE);

    // Left side
    region_change_color(REGION, COLOR, 0, RELATIVE_ROW + 1);
    region_change_color(REGION, COLOR, 1, RELATIVE_ROW + 1);

    // Right side
    region_change_color(REGION, COLOR, CHANNEL_COUNT * 3 + 3, RELATIVE_ROW + 1);
    region_change_color(REGION, COLOR, CHANNEL_COUNT * 3 + 4, RELATIVE_ROW + 1);
}

void song_update_chain(void)
{
    static const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t RELATIVE_ROW = cursor.y - scroll;
    const chain_id_t SELECTED_CHAIN = project_data.song.chain[cursor.x][cursor.y];
    const bool IS_CHAIN_NULL = (SELECTED_CHAIN == 0x00);

    const symbol_t SYMBOL[2] = {
        (IS_CHAIN_NULL ? '-' : HEX_DIGIT[SELECTED_CHAIN / 0x10]),
        (IS_CHAIN_NULL ? '-' : HEX_DIGIT[SELECTED_CHAIN % 0x10])
    };

    region_change_symbol(REGION, SYMBOL[0], cursor.x * 3 + 3, RELATIVE_ROW + 1);
    region_change_symbol(REGION, SYMBOL[1], cursor.x * 3 + 4, RELATIVE_ROW + 1);
}

void song_move_cursor(joystick_position_t joystick_position)
{
    static const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t ROWS_ON_SCREEN = REGION->size.y - 1;

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
    static const region_t *REGION = &REGION_SONG_EDITOR_SONG;
    const int32_t ROWS_ON_SCREEN = REGION->size.y - 1;

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
    const chain_id_t SELECTED_CHAIN = project_data.song.chain[cursor.x][cursor.y];

    if (SELECTED_CHAIN == 0x00) {
        project_data.song.chain[cursor.x][cursor.y] = copied_chain;
        song_update_chain();
    }
    else {
        copied_chain = SELECTED_CHAIN;
    }
}

void song_insert_new_chain(void)
{
    // TODO: Implement function.
}

void song_delete_chain(void)
{
    const chain_id_t SELECTED_CHAIN = project_data.song.chain[cursor.x][cursor.y];

    if (SELECTED_CHAIN == 0x00)
        return;

    copied_chain = SELECTED_CHAIN;

    project_data.song.chain[cursor.x][cursor.y] = 0x00;
    song_update_chain();
}

void song_change_chain(joystick_position_t joystick_position)
{
    const int32_t SELECTED_CHAIN = (int32_t) project_data.song.chain[cursor.x][cursor.y];

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
        project_data.song.chain[cursor.x][cursor.y] = (chain_id_t) new_chain;
        song_update_chain();
        copied_chain = (chain_id_t)new_chain;
    }
}

chain_id_t song_get_selected_chain(void)
{
    return project_data.song.chain[cursor.x][cursor.y];
}
