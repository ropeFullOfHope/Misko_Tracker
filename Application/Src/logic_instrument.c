#include "logic_instrument.h"
#include <stddef.h>
#include "region.h"
#include "lcd.h"
#include "basic_utils.h"

void instrument_draw_title(void);
void instrument_draw_editor_common_config(void);
void instrument_draw_editor_type_config(void);
void instrument_draw_editor_common_config_labels(void);
void instrument_draw_editor_common_config_data(void);
void instrument_draw_editor_type_config_labels(void);
void instrument_draw_editor_type_config_data(void);
void instrument_clear_title(void);
void instrument_clear_editor_common_config(void);
void instrument_clear_editor_type_config(void);
void instrument_highlight_cursor(void);
void instrument_unhighlight_cursor(void);

typedef struct {
    enum {
        WINDOW_COMMON_CONFIG,
        WINDOW_TYPE_CONFIG,
        WINDOW_COUNT
    } window;
    int32_t y;
} cursor_t;

typedef struct {
    const char *label;
    int32_t member_offset;
    struct {
        enum {
            OPTION_TYPE_STRING,
            OPTION_TYPE_HEX_NUMBER,
            OPTION_TYPE_COUNT
        } type;
        int32_t count;
        int32_t offset;
        int32_t length;
    } option;
    const char * const *options;
} config_t;

typedef struct {
     config_t *configs;
     int32_t config_count;
} configs_t;

const configs_t CONFIGS_COMMON = {
    .configs = (config_t []) {
        {
            .label = "Type",
            .member_offset = offsetof(instrument_t, instrument_type),
            .option.type = OPTION_TYPE_STRING,
            .option.offset = 7,
            .option.length = 10,
            .option.count = INSTRUMENT_TYPE_COUNT,
            .options = (const char * const []) {
                "None",
                "Basic Wave"
            }
        },
        {
            .label = "Volume",
            .member_offset = offsetof(instrument_t, volume),
            .option.type = OPTION_TYPE_HEX_NUMBER,
            .option.offset = 7,
            .option.length = 2,
            .option.count = 0x7F + 1,
        }
    },
    .config_count = 2
};

const configs_t CONFIGS_BASIC_WAVE = {
    .configs = (config_t []) {
        {
            .label = "Wave",
            .member_offset = offsetof(instrument_t, basic_wave.wave),
            .option.type = OPTION_TYPE_STRING,
            .option.offset = 5,
            .option.length = 8,
            .option.count = BASIC_WAVE_COUNT,
            .options = (const char * const []) {
                "Square",
                "Sawtooth",
                "Triangle",
                "Sine",
                "Noise"
            }
        },
        {
            .label = "PWM",
            .member_offset = offsetof(instrument_t, basic_wave.pwm),
            .option.type = OPTION_TYPE_HEX_NUMBER,
            .option.offset = 5,
            .option.length = 2,
            .option.count = 0xFF + 1,
        }
    },
    .config_count = 2
};

static cursor_t cursor = {0};
static instrument_id_t selected_instrument;

void instrument_init(instrument_id_t instrument)
{
    selected_instrument = instrument;

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

void instrument_draw_title(void)
{
    static const region_t *REGION = &REGION_INSTRUMENT_TITLE;
    const symbol_t TITLE[] = {'I', 'n', 's', 't', 'r', 'u', 'm', 'e', 'n', 't'};
    const int32_t TITLE_LENGTH = ARRAY_SIZE(TITLE);

    for (int32_t i = 0; i < TITLE_LENGTH; i++)
        region_draw(REGION, TITLE[i], COLOR_NORMAL, i, 0);

    region_draw(REGION, HEX_DIGIT[selected_instrument / 0x10], COLOR_NORMAL, TITLE_LENGTH + 1, 0);
    region_draw(REGION, HEX_DIGIT[selected_instrument % 0x10], COLOR_NORMAL, TITLE_LENGTH + 2, 0);
}

void instrument_draw_editor_common_config(void)
{
    instrument_draw_editor_common_config_labels();
    instrument_draw_editor_common_config_data();
}

void instrument_draw_editor_type_config(void)
{
    instrument_draw_editor_type_config_labels();
    instrument_draw_editor_type_config_data();
}

void instrument_draw_editor_common_config_labels(void)
{
    static const region_t * const region = &REGION_INSTRUMENT_EDITOR_COMMON_CONFIG;
    static const configs_t * const configs = &CONFIGS_COMMON;
    const instrument_t * const instrument = data_get_instrument(selected_instrument);

    if (instrument == NULL)
        return;

    for (int i = 0; i < configs->config_count; i++)
        region_draw_text(region, configs->configs[i].label, COLOR_NORMAL, 0, i);
}

void instrument_draw_editor_common_config_data(void)
{
    static const region_t * const region = &REGION_INSTRUMENT_EDITOR_COMMON_CONFIG;
    static const configs_t * const configs = &CONFIGS_COMMON;
    const instrument_t * const instrument = data_get_instrument(selected_instrument);

    if (instrument == NULL)
        return;

    for (int i = 0; i < configs->config_count; i++) {
        config_t * const config = &configs->configs[i];
        switch (config->option.type) {
            case OPTION_TYPE_STRING: {
                const int32_t option_size = config->option.length;
                const int32_t option_offset = config->option.offset;
                const uint8_t data = *PTR_MEMBER(instrument, config->member_offset, uint8_t);

                for (int j = 0; j < option_size; j++)
                    region_draw(region, (symbol_t) ' ', COLOR_DARK, option_offset + j, i);
                region_draw_text(region, config->options[data], COLOR_DARK, option_offset, i);
                break;
            }

            case OPTION_TYPE_HEX_NUMBER: {
                const int32_t option_offset = config->option.offset;
                const uint8_t data = *PTR_MEMBER(instrument, config->member_offset, uint8_t);

                region_draw(region, (symbol_t) HEX_DIGIT[(data >> 4) & 0x0F], COLOR_DARK, option_offset + 0, i);
                region_draw(region, (symbol_t) HEX_DIGIT[(data >> 0) & 0x0F], COLOR_DARK, option_offset + 1, i);
                break;
            }

            default:
                break;
        }
    }
}

void instrument_draw_editor_type_config_labels(void)
{
    static const region_t * const region = &REGION_INSTRUMENT_EDITOR_TYPE_CONFIG;
    const instrument_t * const instrument = data_get_instrument(selected_instrument);

    if (instrument == NULL)
        return;

    const configs_t *configs;
    switch (instrument->instrument_type) {
        case INSTRUMENT_TYPE_BASIC_WAVE:
            configs = &CONFIGS_BASIC_WAVE;
            break;

        default:
            return;
    }

    for (int i = 0; i < configs->config_count; i++)
        region_draw_text(region, configs->configs[i].label, COLOR_NORMAL, 0, i);
}

void instrument_draw_editor_type_config_data(void)
{
    static const region_t * const region = &REGION_INSTRUMENT_EDITOR_TYPE_CONFIG;
    const instrument_t * const instrument = data_get_instrument(selected_instrument);

    if (instrument == NULL)
        return;

    const configs_t *configs;
    switch (instrument->instrument_type) {
        case INSTRUMENT_TYPE_BASIC_WAVE:
            configs = &CONFIGS_BASIC_WAVE;
            break;

        default:
            return;
    }

    for (int i = 0; i < configs->config_count; i++) {
        config_t * const config = &configs->configs[i];
        switch (config->option.type) {
            case OPTION_TYPE_STRING: {
                const int32_t option_size = config->option.length;
                const int32_t option_offset = config->option.offset;
                const uint8_t data = *PTR_MEMBER(instrument, config->member_offset, uint8_t);

                for (int j = 0; j < option_size; j++)
                    region_draw(region, (symbol_t) ' ', COLOR_DARK, option_offset + j, i);
                region_draw_text(region, config->options[data], COLOR_DARK, option_offset, i);
                break;
            }

            case OPTION_TYPE_HEX_NUMBER: {
                const int32_t option_offset = config->option.offset;
                const uint8_t data = *PTR_MEMBER(instrument, config->member_offset, uint8_t);

                region_draw(region, (symbol_t) HEX_DIGIT[(data >> 4) & 0x0F], COLOR_DARK, option_offset + 0, i);
                region_draw(region, (symbol_t) HEX_DIGIT[(data >> 0) & 0x0F], COLOR_DARK, option_offset + 1, i);
                break;
            }

            default:
                break;
        }
    }
}

void instrument_clear_title(void)
{
    const region_t * const region = &REGION_INSTRUMENT_TITLE;

    region_fill(region, (symbol_t) ' ', COLOR_NORMAL);
}

void instrument_clear_editor_common_config(void)
{
    const region_t * const region = &REGION_INSTRUMENT_EDITOR_COMMON_CONFIG;

    region_fill(region, (symbol_t) ' ', COLOR_NORMAL);
}

void instrument_clear_editor_type_config(void)
{
    const region_t * const region = &REGION_INSTRUMENT_EDITOR_TYPE_CONFIG;

    region_fill(region, (symbol_t) ' ', COLOR_NORMAL);
}

void instrument_update_value(void)
{
    const region_t *region;
    const instrument_t * const instrument = data_get_instrument(selected_instrument);
    const configs_t *configs;

    if (instrument == NULL)
        return;

    switch (cursor.window) {
        case WINDOW_COMMON_CONFIG: {
            region = &REGION_INSTRUMENT_EDITOR_COMMON_CONFIG;
            configs = &CONFIGS_COMMON;
            break;
        }

        case WINDOW_TYPE_CONFIG: {
            region = &REGION_INSTRUMENT_EDITOR_TYPE_CONFIG;

            switch (instrument->instrument_type) {
                case INSTRUMENT_TYPE_BASIC_WAVE: {
                    configs = &CONFIGS_BASIC_WAVE;
                    break;
                }

                default:
                    return;
            }
            break;
        }

        default:
            return;
    }

    config_t * const config = &configs->configs[cursor.y];
    switch (config->option.type) {
        case OPTION_TYPE_STRING: {
            const int32_t option_size = config->option.length;
            const int32_t option_offset = config->option.offset;
            const uint8_t data = *PTR_MEMBER(instrument, config->member_offset, uint8_t);

            for (int j = 0; j < option_size; j++)
                region_change_symbol(region, (symbol_t) ' ', option_offset + j, cursor.y);
            region_draw_text(region, config->options[data], COLOR_HIGHLIGHT, option_offset, cursor.y);
            break;
        }

        case OPTION_TYPE_HEX_NUMBER: {
            const int32_t option_offset = config->option.offset;
            const uint8_t data = *PTR_MEMBER(instrument, config->member_offset, uint8_t);

            region_change_symbol(region, (symbol_t) HEX_DIGIT[(data >> 4) & 0x0F], option_offset + 0, cursor.y);
            region_change_symbol(region, (symbol_t) HEX_DIGIT[(data >> 0) & 0x0F], option_offset + 1, cursor.y);
            break;
        }

        default:
            return;
    }
}

void instrument_highlight_cursor(void)
{
    const region_t *region;
    const instrument_t * const instrument = data_get_instrument(selected_instrument);
    const configs_t *configs;

    if (instrument == NULL)
        return;

    switch (cursor.window) {
        case WINDOW_COMMON_CONFIG: {
            region = &REGION_INSTRUMENT_EDITOR_COMMON_CONFIG;
            configs = &CONFIGS_COMMON;
            break;
        }

        case WINDOW_TYPE_CONFIG: {
            region = &REGION_INSTRUMENT_EDITOR_TYPE_CONFIG;

            switch (instrument->instrument_type) {
                case INSTRUMENT_TYPE_BASIC_WAVE: {
                    configs = &CONFIGS_BASIC_WAVE;
                    break;
                }

                default:
                    return;
            }
            break;
        }

        default:
            return;
    }

    int32_t option_size = configs->configs[cursor.y].option.length;
    int32_t option_offset = configs->configs[cursor.y].option.offset;

    for (int32_t i = 0; i < option_size; i++)
        region_change_color(region, COLOR_HIGHLIGHT, option_offset + i, cursor.y);
}

void instrument_unhighlight_cursor(void)
{
    const region_t *region;
    const instrument_t * const instrument = data_get_instrument(selected_instrument);
    const configs_t *configs;

    if (instrument == NULL)
        return;

    switch (cursor.window) {
        case WINDOW_COMMON_CONFIG: {
            region = &REGION_INSTRUMENT_EDITOR_COMMON_CONFIG;
            configs = &CONFIGS_COMMON;
            break;
        }

        case WINDOW_TYPE_CONFIG: {
            region = &REGION_INSTRUMENT_EDITOR_TYPE_CONFIG;

            switch (instrument->instrument_type) {
                case INSTRUMENT_TYPE_BASIC_WAVE: {
                    configs = &CONFIGS_BASIC_WAVE;
                    break;
                }

                default:
                    return;
            }
            break;
        }

        default:
            return;
    }

    int32_t option_size = configs->configs[cursor.y].option.length;
    int32_t option_offset = configs->configs[cursor.y].option.offset;

    for (int32_t i = 0; i < option_size; i++)
        region_change_color(region, COLOR_DARK, option_offset + i, cursor.y);
}

void instrument_move_cursor(joystick_position_t joystick_position)
{
    cursor_t new_cursor = cursor;
    static const int32_t common_config_count = CONFIGS_COMMON.config_count;
    int32_t type_config_count = 0;
    const instrument_t * const instrument = data_get_instrument(selected_instrument);

    if (instrument == NULL)
        return;

    switch (instrument->instrument_type) {
        case INSTRUMENT_TYPE_BASIC_WAVE: {
            type_config_count = CONFIGS_BASIC_WAVE.config_count;
            break;
        }
        default: {
            type_config_count = 0;
        }
    }

    switch (joystick_position) {
        case JOYSTICK_POSITION_DOWN: {
            if (cursor.y == common_config_count - 1
                && cursor.window == WINDOW_COMMON_CONFIG
                && type_config_count > 0)
            {
                new_cursor.y = 0;
                new_cursor.window = WINDOW_TYPE_CONFIG;
            }

            else if (cursor.window == WINDOW_COMMON_CONFIG)
                new_cursor.y = change_value_within_bounds(cursor.y, 1, 0, common_config_count - 1);
            else if (cursor.window == WINDOW_TYPE_CONFIG)
                new_cursor.y = change_value_within_bounds(cursor.y, 1, 0, type_config_count - 1);
            break;
        }
        case JOYSTICK_POSITION_UP: {
            if (cursor.y == 0
                && cursor.window == WINDOW_TYPE_CONFIG)
            {
                new_cursor.y = common_config_count - 1;
                new_cursor.window = WINDOW_COMMON_CONFIG;
            }

            else if (cursor.window == WINDOW_COMMON_CONFIG)
                new_cursor.y = change_value_within_bounds(cursor.y, -1, 0, common_config_count - 1);
            else if (cursor.window == WINDOW_TYPE_CONFIG)
                new_cursor.y = change_value_within_bounds(cursor.y, -1, 0, type_config_count - 1);
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
    const instrument_t * const p_instrument = data_get_instrument(selected_instrument);
    instrument_t instrument;
    const configs_t *configs;
    int32_t old_instrument_type;

    if (p_instrument == NULL)
        return;

    instrument = *p_instrument;

    if (cursor.window == WINDOW_COMMON_CONFIG)
        configs = &CONFIGS_COMMON;
    else if (cursor.window == WINDOW_TYPE_CONFIG){
        switch (instrument.instrument_type) {
            case INSTRUMENT_TYPE_BASIC_WAVE: {
                configs = &CONFIGS_BASIC_WAVE;
                break;
            }
            default: {
                return;
            }
        }
    }

    old_instrument_type = instrument.instrument_type;

    switch (configs->configs[cursor.y].option.type) {
        case OPTION_TYPE_STRING: {
            const int32_t option_count = configs->configs[cursor.y].option.count;
            uint8_t * const p_data = PTR_MEMBER(&instrument, configs->configs[cursor.y].member_offset, uint8_t);
            const uint8_t data = *p_data;

            switch (joystick_position) {
                case JOYSTICK_POSITION_UP:
                case JOYSTICK_POSITION_RIGHT: {
                    *p_data = (uint8_t) change_value_within_bounds((int32_t) data, 1, 0, option_count - 1);
                    break;
                }
                case JOYSTICK_POSITION_DOWN:
                case JOYSTICK_POSITION_LEFT: {
                    *p_data = (uint8_t) change_value_within_bounds((int32_t) data, -1, 0, option_count - 1);
                    break;
                }
                default: {
                    return;
                }
            }
            break;
        }
        case OPTION_TYPE_HEX_NUMBER: {
            const int32_t option_count = configs->configs[cursor.y].option.count;
            uint8_t * const p_data = PTR_MEMBER(&instrument, configs->configs[cursor.y].member_offset, uint8_t);
            const uint8_t data = *p_data;

            switch (joystick_position) {
                case JOYSTICK_POSITION_UP: {
                    *p_data = (uint8_t) change_value_within_bounds((int32_t) data, 0x01, 0, option_count - 1);
                    break;
                }
                case JOYSTICK_POSITION_RIGHT: {
                    *p_data = (uint8_t) change_value_within_bounds((int32_t) data, 0x10, 0, option_count - 1);
                    break;
                }
                case JOYSTICK_POSITION_DOWN: {
                    *p_data = (uint8_t) change_value_within_bounds((int32_t) data, -0x01, 0, option_count - 1);
                    break;
                }
                case JOYSTICK_POSITION_LEFT: {
                    *p_data = (uint8_t) change_value_within_bounds((int32_t) data, -0x10, 0, option_count - 1);
                    break;
                }
                default: {
                    return;
                }
            }
            break;
        }
        default: {
            return;
        }
    }

    data_set_instrument(selected_instrument, &instrument);

    instrument_update_value();

    if (instrument.instrument_type != old_instrument_type) {
        instrument_clear_editor_type_config();
        instrument_draw_editor_type_config();
    }
}
