#include "logic_project.h"
#include <stddef.h>
#include "data.h"
#include "ui_config.h"
#include "region.h"
#include "lcd.h"
#include "basic_utils.h"
#include "volume.h"

static void project_draw_title(void);
static void project_draw_editor(void);
static void project_draw_editor_project_settings(void);
static void project_draw_editor_preferences(void);
static void project_clear_title(void);
static void project_clear_editor(void);
static void project_clear_editor_project_settings(void);
static void project_clear_editor_preferences(void);
static void project_highlight_cursor(void);
static void project_unhighlight_cursor(void);

typedef struct {
    enum {
        WINDOW_PROJECT_SETTINGS,
        WINDOW_PREFERENCES,
        WINDOW_COUNT
    } window;
    int32_t y;
} cursor_t;

const configGroup_t CONFIGS_PROJECT_SETTINGS = {
    .label = {
        .name = "Project Settings:",
        .color = COLOR_DARK
    },
    .configs = (const configItem_t[]) {
        {
            .label = {
                .name = "Tempo",
                .color = COLOR_NORMAL
            },
            .display = {
                .type = STRING_TYPE_DEC_UNSIGNED,
                .size = 3,
                .offset = 6
            },
            .data = {
                .pointer = &project_data.project_settings.tempo,
                .indirect = false,
                .primitive_type = PRIMITIVE_TYPE_U32,
                .step.small.u32 = 1,
                .step.big.u32   = 10,
                .bounds.min.u32 = 20,
                .bounds.max.u32 = 300
            }
        }
    },
    .config_count = 1
};

const configGroup_t CONFIGS_PREFERENCES = {
    .label = {
        .name = "System Settings:",
        .color = COLOR_DARK
    },
    .configs = (const configItem_t[]) {
        {
            .label = {
                .name = "Master Volume",
                .color = COLOR_NORMAL
            },
            .display = {
                .type = STRING_TYPE_HEX_UPPERCASE,
                .size = 2,
                .offset = 14
            },
            .data = {
                .pointer = &preferences.master_volume,
                .indirect = false,
                .primitive_type = PRIMITIVE_TYPE_U8,
                .step.small.u8 = 0x01,
                .step.big.u8   = 0x10,
                .bounds.min.u8 = 0x00,
                .bounds.max.u8 = 0x3F
            }
        },
        {
            .label = {
                .name = "Cursor Delay",
                .color = COLOR_NORMAL
            },
            .display = {
                .type = STRING_TYPE_DEC_UNSIGNED,
                .size = 2,
                .offset = 14
            },
            .data = {
                .pointer = &preferences.cursor.delay,
                .indirect = false,
                .primitive_type = PRIMITIVE_TYPE_U8,
                .step.small.u8 = 1,
                .step.big.u8   = 10,
                .bounds.min.u8 = 1,
                .bounds.max.u8 = 60
            }
        },
        {
            .label = {
                .name = "Cursor Repeat",
                .color = COLOR_NORMAL
            },
            .display = {
                .type = STRING_TYPE_DEC_UNSIGNED,
                .size = 2,
                .offset = 14
            },
            .data = {
                .pointer = &preferences.cursor.repeat,
                .indirect = false,
                .primitive_type = PRIMITIVE_TYPE_U8,
                .step.small.u8 = 1,
                .step.big.u8   = 10,
                .bounds.min.u8 = 1,
                .bounds.max.u8 = 60
            }
        }
    },
    .config_count = 3
};

static cursor_t cursor = {0};

void project_init(void)
{
    project_draw_title();
    project_draw_editor();
    project_highlight_cursor();
}

void project_deinit(void)
{
    project_clear_title();
    project_clear_editor();
}

void project_move_cursor(joystick_position_t joystick_position)
{
    cursor_t new_cursor = cursor;
    static const int32_t project_settings_config_count = CONFIGS_PROJECT_SETTINGS.config_count;
    static const int32_t preferences_config_count = CONFIGS_PREFERENCES.config_count;

    switch (joystick_position) {
        case JOYSTICK_POSITION_DOWN: {
            if (cursor.y == project_settings_config_count - 1
                && cursor.window == WINDOW_PROJECT_SETTINGS)
            {
                new_cursor.y = 0;
                new_cursor.window = WINDOW_PREFERENCES;
            }

            else if (cursor.window == WINDOW_PROJECT_SETTINGS)
                new_cursor.y = change_value_within_bounds(cursor.y, 1, 0, project_settings_config_count - 1);
            else if (cursor.window == WINDOW_PREFERENCES)
                new_cursor.y = change_value_within_bounds(cursor.y, 1, 0, preferences_config_count - 1);
            break;
        }
        case JOYSTICK_POSITION_UP: {
            if (cursor.y == 0
                && cursor.window == WINDOW_PREFERENCES)
            {
                new_cursor.y = project_settings_config_count - 1;
                new_cursor.window = WINDOW_PROJECT_SETTINGS;
            }

            else if (cursor.window == WINDOW_PROJECT_SETTINGS)
                new_cursor.y = change_value_within_bounds(cursor.y, -1, 0, project_settings_config_count - 1);
            else if (cursor.window == WINDOW_PREFERENCES)
                new_cursor.y = change_value_within_bounds(cursor.y, -1, 0, preferences_config_count - 1);
            break;
        }
        default: {
            return;
        }
    }

    if (new_cursor.y != cursor.y || new_cursor.window != cursor.window) {
        project_unhighlight_cursor();

        cursor = new_cursor;

        project_highlight_cursor();
    }
}

void project_change_value(joystick_position_t joystick_position)
{
    const region_t *region = NULL;
    const configGroup_t *config_group = NULL;
    bool increase;
    bool big_step;

    switch (cursor.window) {
        case WINDOW_PROJECT_SETTINGS: {
            region = &REGION_PROJECT_EDITOR_PROJECT_SETTINGS;
            config_group = &CONFIGS_PROJECT_SETTINGS;
            break;
        }
        case WINDOW_PREFERENCES: {
            region = &REGION_PROJECT_EDITOR_PREFERENCES;
            config_group = &CONFIGS_PREFERENCES;
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

    volume_set(preferences.master_volume);
}

static void project_draw_title(void)
{
    static const region_t *region = &REGION_PROJECT_TITLE;
    const symbol_t title[] = {'P', 'r', 'o', 'j', 'e', 'c', 't'};
    const int32_t title_length = ARRAY_SIZE(title);

    for (int32_t i = 0; i < title_length; i++)
        region_draw(region, title[i], COLOR_NORMAL, i, 0);
}

static void project_draw_editor(void)
{
    project_draw_editor_project_settings();
    project_draw_editor_preferences();
}

static void project_draw_editor_project_settings(void)
{
    static const region_t * const region = &REGION_PROJECT_EDITOR_PROJECT_SETTINGS;
    static const configGroup_t * const config_group = &CONFIGS_PROJECT_SETTINGS;

    ui_config_draw(config_group, region);
}

static void project_draw_editor_preferences(void)
{
    static const region_t * const region = &REGION_PROJECT_EDITOR_PREFERENCES;
    static const configGroup_t * const config_group = &CONFIGS_PREFERENCES;

    ui_config_draw(config_group, region);
}

static void project_clear_title(void)
{
    const region_t * const region = &REGION_PROJECT_TITLE;

    region_fill(region, (symbol_t) ' ', COLOR_NORMAL);
}

static void project_clear_editor(void)
{
    project_clear_editor_project_settings();
    project_clear_editor_preferences();
}

static void project_clear_editor_project_settings(void)
{
    const region_t * const region = &REGION_PROJECT_EDITOR_PROJECT_SETTINGS;

    region_fill(region, (symbol_t) ' ', COLOR_NORMAL);
}

static void project_clear_editor_preferences(void)
{
    const region_t * const region = &REGION_PROJECT_EDITOR_PREFERENCES;

    region_fill(region, (symbol_t) ' ', COLOR_NORMAL);
}

static void project_highlight_cursor(void)
{
    const region_t * region = NULL;
    const configGroup_t * config_group = NULL;

    switch (cursor.window) {
        case WINDOW_PROJECT_SETTINGS: {
            region = &REGION_PROJECT_EDITOR_PROJECT_SETTINGS;
            config_group = &CONFIGS_PROJECT_SETTINGS;
            break;
        }
        case WINDOW_PREFERENCES: {
            region = &REGION_PROJECT_EDITOR_PREFERENCES;
            config_group = &CONFIGS_PREFERENCES;
            break;
        }
        default: {
            break;
        }
    }

    if (region != NULL && config_group != NULL)
        ui_config_color_data(config_group, region, (uint32_t)cursor.y, COLOR_HIGHLIGHT);
}

static void project_unhighlight_cursor(void)
{
    const region_t * region = NULL;
    const configGroup_t * config_group = NULL;

    switch (cursor.window) {
        case WINDOW_PROJECT_SETTINGS: {
            region = &REGION_PROJECT_EDITOR_PROJECT_SETTINGS;
            config_group = &CONFIGS_PROJECT_SETTINGS;
            break;
        }
        case WINDOW_PREFERENCES: {
            region = &REGION_PROJECT_EDITOR_PREFERENCES;
            config_group = &CONFIGS_PREFERENCES;
            break;
        }
        default: {
            break;
        }
    }

    if (region != NULL && config_group != NULL)
        ui_config_color_data(config_group, region, (uint32_t)cursor.y, COLOR_DARK);
}
