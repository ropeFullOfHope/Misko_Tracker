#include "logic_project.h"
#include <stddef.h>
#include "data.h"
#include "ui_config.h"
#include "region.h"
#include "lcd.h"
#include "basic_utils.h"

void project_draw_title(void);
void project_draw_editor(void);
void project_draw_editor_project_settings(void);
void project_draw_editor_preferences(void);
void project_highlight_cursor(void);
void project_unhighlight_cursor(void);
void project_clear_title(void);
void project_clear_editor(void);
void project_clear_editor_project_settings(void);
void project_clear_editor_preferences(void);

typedef struct {
    enum {
        WINDOW_PROJECT_SETTINGS,
        WINDOW_PREFERENCES,
        WINDOW_COUNT
    } window;
    int32_t y;
} cursor_t;

const configGroup_t CONFIG_PROJECT_SETTINGS = {
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
                .function.get = data_get_project_settings,
                .function.set = data_set_project_settings,
                .member_offset = offsetof(project_settings_t, tempo),
                .primitive_type = PRIMITIVE_TYPE_U32,
                .bounds.min.u32 = 20,
                .bounds.max.u32 = 300
            }
        }
    },
    .config_count = 1
};

const configGroup_t CONFIG_PREFERENCES = {
    .label = {
        .name = "Preferences:",
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
                .function.get = data_get_preferences,
                .function.set = data_set_preferences,
                .member_offset = offsetof(preferences_t, master_volume),
                .primitive_type = PRIMITIVE_TYPE_U8,
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
                .function.get = data_get_preferences,
                .function.set = data_set_preferences,
                .member_offset = offsetof(preferences_t, cursor.delay),
                .primitive_type = PRIMITIVE_TYPE_U8,
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
                .function.get = data_get_preferences,
                .function.set = data_set_preferences,
                .member_offset = offsetof(preferences_t, cursor.repeat),
                .primitive_type = PRIMITIVE_TYPE_U8,
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
    static const int32_t project_settings_config_count = CONFIG_PROJECT_SETTINGS.config_count;
    static const int32_t preferences_config_count = CONFIG_PREFERENCES.config_count;

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

void project_draw_title(void)
{
    static const region_t *region = &REGION_PROJECT_TITLE;
    const symbol_t title[] = {'P', 'r', 'o', 'j', 'e', 'c', 't'};
    const int32_t title_length = ARRAY_SIZE(title);

    for (int32_t i = 0; i < title_length; i++)
        region_draw(region, title[i], COLOR_NORMAL, i, 0);
}

void project_draw_editor(void)
{
    project_draw_editor_project_settings();
    project_draw_editor_preferences();
}

void project_draw_editor_project_settings(void)
{
    static const region_t * const region = &REGION_PROJECT_EDITOR_PROJECT_SETTINGS;
    static const configGroup_t * const config_group = &CONFIG_PROJECT_SETTINGS;

    ui_config_draw(config_group, region);
}

void project_draw_editor_preferences(void)
{
    static const region_t * const region = &REGION_PROJECT_EDITOR_PREFERENCES;
    static const configGroup_t * const config_group = &CONFIG_PREFERENCES;

    ui_config_draw(config_group, region);
}

void project_highlight_cursor(void)
{
    const region_t * region = NULL;
    const configGroup_t * config_group = NULL;

    switch (cursor.window) {
        case WINDOW_PROJECT_SETTINGS: {
            region = &REGION_PROJECT_EDITOR_PROJECT_SETTINGS;
            config_group = &CONFIG_PROJECT_SETTINGS;
            break;
        }
        case WINDOW_PREFERENCES: {
            region = &REGION_PROJECT_EDITOR_PREFERENCES;
            config_group = &CONFIG_PREFERENCES;
            break;
        }
        default: {
            break;
        }
    }

    if (region != NULL && config_group != NULL)
        ui_config_highligh_data(config_group, region, (uint32_t)cursor.y);
}

void project_unhighlight_cursor(void)
{
    const region_t * region = NULL;
    const configGroup_t * config_group = NULL;

    switch (cursor.window) {
        case WINDOW_PROJECT_SETTINGS: {
            region = &REGION_PROJECT_EDITOR_PROJECT_SETTINGS;
            config_group = &CONFIG_PROJECT_SETTINGS;
            break;
        }
        case WINDOW_PREFERENCES: {
            region = &REGION_PROJECT_EDITOR_PREFERENCES;
            config_group = &CONFIG_PREFERENCES;
            break;
        }
        default: {
            break;
        }
    }

    if (region != NULL && config_group != NULL)
        ui_config_unhighligh_data(config_group, region, (uint32_t)cursor.y);
}

void project_clear_title(void)
{
    const region_t * const region = &REGION_PROJECT_TITLE;

    region_fill(region, (symbol_t) ' ', COLOR_NORMAL);
}

void project_clear_editor(void)
{
    project_clear_editor_project_settings();
    project_clear_editor_preferences();
}

void project_clear_editor_project_settings(void)
{
    const region_t * const region = &REGION_PROJECT_EDITOR_PROJECT_SETTINGS;

    region_fill(region, (symbol_t) ' ', COLOR_NORMAL);
}

void project_clear_editor_preferences(void)
{
    const region_t * const region = &REGION_PROJECT_EDITOR_PREFERENCES;

    region_fill(region, (symbol_t) ' ', COLOR_NORMAL);
}
