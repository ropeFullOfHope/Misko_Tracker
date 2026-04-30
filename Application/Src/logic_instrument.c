#include "logic_instrument.h"
#include <stddef.h>
#include "ui_config.h"
#include "region.h"
#include "lcd.h"
#include "basic_utils.h"

static void instrument_draw_title(void);
static void instrument_draw_editor_common_config(void);
static void instrument_draw_editor_type_config(void);
static void instrument_clear_title(void);
static void instrument_clear_editor_common_config(void);
static void instrument_clear_editor_type_config(void);
static void instrument_highlight_cursor(void);
static void instrument_unhighlight_cursor(void);

typedef struct {
    enum {
        WINDOW_COMMON_CONFIG,
        WINDOW_TYPE_CONFIG,
        WINDOW_COUNT
    } window;
    int32_t y;
} cursor_t;

struct {
    void *instrument_type;
    void *volume;
    union {
        struct {
            void *wave;
            void *pwm;
        } basic_wave;
        struct {
            void *sample_id;
            void *root_note;
        } sample;
    };
} selected_instrument_pointers;

const configGroup_t CONFIGS_COMMON = {
    .configs = (const configItem_t[]) {
        {
            .label = {
                .name = "Type",
                .color = COLOR_NORMAL
            },
            .display = {
                .type = STRING_TYPE_STRING_LIST,
                .size = 10,
                .offset = 7,
                .options = (const char * []) {
                    "None",
                    "Basic Wave",
                    "Sample"
                },
                .option_count = INSTRUMENT_TYPE_COUNT
            },
            .data = {
                .pointer = &selected_instrument_pointers.instrument_type,
                .indirect = true,
                .primitive_type = PRIMITIVE_TYPE_I8,
                .step.small.i8 = 1,
                .step.big.i8   = 1,
                .bounds.min.i8 = 0,
                .bounds.max.i8 = INSTRUMENT_TYPE_COUNT - 1
            }
        },
        {
            .label = {
                .name = "Volume",
                .color = COLOR_NORMAL
            },
            .display = {
                .type = STRING_TYPE_HEX_UPPERCASE,
                .size = 2,
                .offset = 7
            },
            .data = {
                .pointer = &selected_instrument_pointers.volume,
                .indirect = true,
                .primitive_type = PRIMITIVE_TYPE_U8,
                .step.small.u8 = 0x01,
                .step.big.u8   = 0x10,
                .bounds.min.u8 = 0x00,
                .bounds.max.u8 = 0x7F
            }
        }
    },
    .config_count = 2
};

const configGroup_t CONFIGS_BASIC_WAVE = {
    .configs = (const configItem_t[]) {
        {
            .label = {
                .name = "Wave",
                .color = COLOR_NORMAL
            },
            .display = {
                .type = STRING_TYPE_STRING_LIST,
                .size = 8,
                .offset = 5,
                .options = (const char * []) {
                    "Square",
                    "Sawtooth",
                    "Triangle",
                    "Sine",
                    "Noise"
                },
                .option_count = BASIC_WAVE_COUNT
            },
            .data = {
                .pointer = &selected_instrument_pointers.basic_wave.wave,
                .indirect = true,
                .primitive_type = PRIMITIVE_TYPE_I8,
                .step.small.i8 = 1,
                .step.big.i8   = 1,
                .bounds.min.i8 = 0,
                .bounds.max.i8 = BASIC_WAVE_COUNT - 1
            }
        },
        {
            .label = {
                .name = "PWM",
                .color = COLOR_NORMAL
            },
            .display = {
                .type = STRING_TYPE_HEX_UPPERCASE,
                .size = 2,
                .offset = 5
            },
            .data = {
                .pointer = &selected_instrument_pointers.basic_wave.pwm,
                .indirect = true,
                .primitive_type = PRIMITIVE_TYPE_U8,
                .step.small.u8 = 0x01,
                .step.big.u8   = 0x10,
                .bounds.min.u8 = 0x00,
                .bounds.max.u8 = 0xFF
            }
        }
    },
    .config_count = 2
};

const configGroup_t CONFIGS_SAMPLE = {
    .configs = (const configItem_t[]) {
        {
            .label = {
                .name = "Sample ID",
                .color = COLOR_NORMAL
            },
            .display = {
                .type = STRING_TYPE_HEX_UPPERCASE,
                .size = 2,
                .offset = 10
            },
            .data = {
                .pointer = &selected_instrument_pointers.sample.sample_id,
                .indirect = true,
                .primitive_type = PRIMITIVE_TYPE_U8,
                .step.small.u8 = 0x01,
                .step.big.u8   = 0x10,
                .bounds.min.u8 = 0x00,
                .bounds.max.u8 = 0xFF
            }
        },
        {
            .label = {
                .name = "Root Note",
                .color = COLOR_NORMAL
            },
            .display = {
                .type = STRING_TYPE_STRING_LIST,
                .size = 3,
                .offset = 10,
                .options = (const char * []) {
                    "---",
                    "C-0",
                    "C#0",
                    "D-0",
                    "D#0",
                    "E-0",
                    "F-0",
                    "F#0",
                    "G-0",
                    "G#0",
                    "A-0",
                    "A#0",
                    "B-0",
                    "C-1",
                    "C#1",
                    "D-1",
                    "D#1",
                    "E-1",
                    "F-1",
                    "F#1",
                    "G-1",
                    "G#1",
                    "A-1",
                    "A#1",
                    "B-1",
                    "C-2",
                    "C#2",
                    "D-2",
                    "D#2",
                    "E-2",
                    "F-2",
                    "F#2",
                    "G-2",
                    "G#2",
                    "A-2",
                    "A#2",
                    "B-2",
                    "C-3",
                    "C#3",
                    "D-3",
                    "D#3",
                    "E-3",
                    "F-3",
                    "F#3",
                    "G-3",
                    "G#3",
                    "A-3",
                    "A#3",
                    "B-3",
                    "C-4",
                    "C#4",
                    "D-4",
                    "D#4",
                    "E-4",
                    "F-4",
                    "F#4",
                    "G-4",
                    "G#4",
                    "A-4",
                    "A#4",
                    "B-4",
                    "C-5",
                    "C#5",
                    "D-5",
                    "D#5",
                    "E-5",
                    "F-5",
                    "F#5",
                    "G-5",
                    "G#5",
                    "A-5",
                    "A#5",
                    "B-5",
                    "C-6",
                    "C#6",
                    "D-6",
                    "D#6",
                    "E-6",
                    "F-6",
                    "F#6",
                    "G-6",
                    "G#6",
                    "A-6",
                    "A#6",
                    "B-6",
                    "C-7",
                    "C#7",
                    "D-7",
                    "D#7",
                    "E-7",
                    "F-7",
                    "F#7",
                    "G-7",
                    "G#7",
                    "A-7",
                    "A#7",
                    "B-7",
                    "C-8",
                    "C#8",
                    "D-8",
                    "D#8",
                    "E-8",
                    "F-8",
                    "F#8",
                    "G-8",
                    "G#8",
                    "A-8",
                    "A#8",
                    "B-8",
                    "C-9",
                    "C#9",
                    "D-9",
                    "D#9",
                    "E-9",
                    "F-9",
                    "F#9",
                    "G-9",
                    "G#9",
                    "A-9",
                    "A#9",
                    "B-9"
                },
                .option_count = 0x79
            },
            .data = {
                .pointer = &selected_instrument_pointers.sample.root_note,
                .indirect = true,
                .primitive_type = PRIMITIVE_TYPE_U8,
                .step.small.u8 = 1,
                .step.big.u8   = 12,
                .bounds.min.u8 = 0x01,
                .bounds.max.u8 = 0x78
            }
        }
    },
    .config_count = 2
};

static cursor_t cursor = {0};
static instrument_id_t selected_instrument;

void instrument_init(instrument_id_t instrument)
{
    selected_instrument = instrument - 1;

    void *p_base = &project_data.instrument[selected_instrument];
    selected_instrument_pointers.instrument_type = PTR_MEMBER(p_base, offsetof(instrument_t, instrument_type), void);
    selected_instrument_pointers.volume = PTR_MEMBER(p_base, offsetof(instrument_t, volume), void);
    selected_instrument_pointers.basic_wave.wave = PTR_MEMBER(p_base, offsetof(instrument_t, basic_wave.wave), void);
    selected_instrument_pointers.basic_wave.pwm = PTR_MEMBER(p_base, offsetof(instrument_t, basic_wave.pwm), void);
    selected_instrument_pointers.sample.sample_id = PTR_MEMBER(p_base, offsetof(instrument_t, sample.sample_id), void);
    selected_instrument_pointers.sample.root_note = PTR_MEMBER(p_base, offsetof(instrument_t, sample.root_note), void);

    instrument_draw_title();
    instrument_draw_editor_common_config();
    instrument_draw_editor_type_config();

    instrument_highlight_cursor();
}

void instrument_deinit(void)
{
    instrument_clear_title();
    instrument_clear_editor_common_config();
    instrument_clear_editor_type_config();
}

void instrument_move_cursor(joystick_position_t joystick_position)
{
    cursor_t new_cursor = cursor;

    static const int32_t common_configs_config_count = (int32_t)CONFIGS_COMMON.config_count;
    int32_t type_configs_config_count = 0;

    instrument_type_t instrument_type = project_data.instrument[selected_instrument].instrument_type;
    switch (instrument_type) {
        case INSTRUMENT_TYPE_BASIC_WAVE: {type_configs_config_count = (int32_t)CONFIGS_BASIC_WAVE.config_count; break;}
        case INSTRUMENT_TYPE_SAMPLE:     {type_configs_config_count = (int32_t)CONFIGS_SAMPLE.config_count; break;}
        default: break;
    }

    switch (joystick_position) {
        case JOYSTICK_POSITION_DOWN: {
            if (cursor.y == common_configs_config_count - 1
                && cursor.window == WINDOW_COMMON_CONFIG
                && type_configs_config_count != 0)
            {
                new_cursor.y = 0;
                new_cursor.window = WINDOW_TYPE_CONFIG;
            }

            else if (cursor.window == WINDOW_COMMON_CONFIG)
                new_cursor.y = change_value_within_bounds(cursor.y, 1, 0, common_configs_config_count - 1);
            else if (cursor.window == WINDOW_TYPE_CONFIG)
                new_cursor.y = change_value_within_bounds(cursor.y, 1, 0, type_configs_config_count - 1);
            break;
        }
        case JOYSTICK_POSITION_UP: {
            if (cursor.y == 0
                && cursor.window == WINDOW_TYPE_CONFIG)
            {
                new_cursor.y = common_configs_config_count - 1;
                new_cursor.window = WINDOW_COMMON_CONFIG;
            }

            else if (cursor.window == WINDOW_COMMON_CONFIG)
                new_cursor.y = change_value_within_bounds(cursor.y, -1, 0, common_configs_config_count - 1);
            else if (cursor.window == WINDOW_TYPE_CONFIG)
                new_cursor.y = change_value_within_bounds(cursor.y, -1, 0, type_configs_config_count - 1);
            break;
        }
        default: {
            return;
        }
    }

    if (new_cursor.y != cursor.y || new_cursor.window != cursor.window) {
        instrument_unhighlight_cursor();

        cursor = new_cursor;

        instrument_highlight_cursor();
    }
}

void instrument_change_value(joystick_position_t joystick_position)
{
    const region_t *region = NULL;
    const configGroup_t *config_group = NULL;
    bool increase;
    bool big_step;

    instrument_type_t instrument_type = project_data.instrument[selected_instrument].instrument_type;

    switch (cursor.window) {
        case WINDOW_COMMON_CONFIG: {
            region = &REGION_INSTRUMENT_EDITOR_COMMON_CONFIG;
            config_group = &CONFIGS_COMMON;
            break;
        }
        case WINDOW_TYPE_CONFIG: {
            region = &REGION_INSTRUMENT_EDITOR_TYPE_CONFIG;

            switch (instrument_type) {
                case INSTRUMENT_TYPE_BASIC_WAVE: {config_group = &CONFIGS_BASIC_WAVE; break;}
                case INSTRUMENT_TYPE_SAMPLE:     {config_group = &CONFIGS_SAMPLE; break;}
                default: break;
            }
            break;
        }
        default:
            break;
    }

    switch (joystick_position) {
        case JOYSTICK_POSITION_UP: {
            increase = true;
            big_step = false;
            break;
        }
        case JOYSTICK_POSITION_DOWN: {
            increase = false;
            big_step = false;
            break;
        }
        case JOYSTICK_POSITION_RIGHT: {
            increase = true;
            big_step = true;
            break;
        }
        case JOYSTICK_POSITION_LEFT: {
            increase = false;
            big_step = true;
            break;
        }
        default: {
            return;
        }
    }

    ui_config_change_data(config_group, region, (uint32_t)cursor.y, increase, big_step);

    // If the instrument type was changed, redraw the type config.
    if (instrument_type != project_data.instrument[selected_instrument].instrument_type) {
        instrument_clear_editor_type_config();
        instrument_draw_editor_type_config();
    }
}

static void instrument_draw_title(void)
{
    static const region_t *REGION = &REGION_INSTRUMENT_TITLE;
    const symbol_t TITLE[] = {'I', 'n', 's', 't', 'r', 'u', 'm', 'e', 'n', 't'};
    const int32_t TITLE_LENGTH = ARRAY_SIZE(TITLE);

    for (int32_t i = 0; i < TITLE_LENGTH; i++)
        region_draw(REGION, TITLE[i], COLOR_NORMAL, i, 0);

    region_draw(REGION, HEX_DIGIT[(selected_instrument + 1) / 0x10], COLOR_NORMAL, TITLE_LENGTH + 1, 0);
    region_draw(REGION, HEX_DIGIT[(selected_instrument + 1) % 0x10], COLOR_NORMAL, TITLE_LENGTH + 2, 0);
}

static void instrument_draw_editor_common_config(void)
{
    static const region_t * const region = &REGION_INSTRUMENT_EDITOR_COMMON_CONFIG;
    static const configGroup_t * const config_group = &CONFIGS_COMMON;

    ui_config_draw(config_group, region);
}

static void instrument_draw_editor_type_config(void)
{
    static const region_t * const region = &REGION_INSTRUMENT_EDITOR_TYPE_CONFIG;
    const configGroup_t *config_group = NULL;

    instrument_type_t instrument_type = project_data.instrument[selected_instrument].instrument_type;

    switch (instrument_type) {
        case INSTRUMENT_TYPE_BASIC_WAVE: {config_group = &CONFIGS_BASIC_WAVE; break;}
        case INSTRUMENT_TYPE_SAMPLE:     {config_group = &CONFIGS_SAMPLE;     break;}
        default: return;
    }

    ui_config_draw(config_group, region);
}

static void instrument_clear_title(void)
{
    const region_t * const region = &REGION_INSTRUMENT_TITLE;

    region_fill(region, (symbol_t) ' ', COLOR_NORMAL);
}

static void instrument_clear_editor_common_config(void)
{
    const region_t * const region = &REGION_INSTRUMENT_EDITOR_COMMON_CONFIG;

    region_fill(region, (symbol_t) ' ', COLOR_NORMAL);
}

static void instrument_clear_editor_type_config(void)
{
    const region_t * const region = &REGION_INSTRUMENT_EDITOR_TYPE_CONFIG;

    region_fill(region, (symbol_t) ' ', COLOR_NORMAL);
}

static void instrument_highlight_cursor(void)
{
    const region_t * region = NULL;
    const configGroup_t * config_group = NULL;

    switch (cursor.window) {
        case WINDOW_COMMON_CONFIG: {
            region = &REGION_INSTRUMENT_EDITOR_COMMON_CONFIG;
            config_group = &CONFIGS_COMMON;
            break;
        }
        case WINDOW_TYPE_CONFIG: {
            region = &REGION_INSTRUMENT_EDITOR_TYPE_CONFIG;

            instrument_type_t instrument_type = project_data.instrument[selected_instrument].instrument_type;
            switch (instrument_type) {
                case INSTRUMENT_TYPE_BASIC_WAVE: {config_group = &CONFIGS_BASIC_WAVE; break;}
                case INSTRUMENT_TYPE_SAMPLE:     {config_group = &CONFIGS_SAMPLE; break;}
                default: return;
            }
            break;
        }
        default: {
            break;
        }
    }

    if (region != NULL && config_group != NULL)
        ui_config_color_data(config_group, region, (uint32_t)cursor.y, COLOR_HIGHLIGHT);
}

static void instrument_unhighlight_cursor(void)
{
    const region_t * region = NULL;
    const configGroup_t * config_group = NULL;

    switch (cursor.window) {
        case WINDOW_COMMON_CONFIG: {
            region = &REGION_INSTRUMENT_EDITOR_COMMON_CONFIG;
            config_group = &CONFIGS_COMMON;
            break;
        }
        case WINDOW_TYPE_CONFIG: {
            region = &REGION_INSTRUMENT_EDITOR_TYPE_CONFIG;

            instrument_type_t instrument_type = project_data.instrument[selected_instrument].instrument_type;
            switch (instrument_type) {
                case INSTRUMENT_TYPE_BASIC_WAVE: {config_group = &CONFIGS_BASIC_WAVE; break;}
                case INSTRUMENT_TYPE_SAMPLE: {config_group = &CONFIGS_SAMPLE; break;}
                default: return;
            }
            break;
        }
        default: {
            break;
        }
    }

    if (region != NULL && config_group != NULL)
        ui_config_color_data(config_group, region, (uint32_t)cursor.y, COLOR_DARK);
}
