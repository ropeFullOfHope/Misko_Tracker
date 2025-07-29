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
    uint32_t y;
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
                .size = 3,
                .offset = 6,
                .type = DISPLAY_TYPE_DEC_3DIGIT_UNSIGNED
            },
            .data = {
                .size = sizeof(tempo_t),
                .member_offset = offsetof(project_settings_t, tempo),
                .function = {
                    .get = data_get_project_settings,
                    .set = data_set_project_settings
                }
            }
        }
    },
    .config_count = 3
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
                .size = 2,
                .offset = 14,
                .type = DISPLAY_TYPE_HEX_2DIGIT_UNSIGNED
            },
            .data = {
                .size = sizeof(volume_t),
                .member_offset = offsetof(preferences_t, master_volume),
                .function = {
                    .get = data_get_preferences,
                    .set = data_set_preferences
                }
            }
        },
        {
            .label = {
                .name = "Cursor Delay",
                .color = COLOR_NORMAL
            },
            .display = {
                .size = 2,
                .offset = 14,
                .type = DISPLAY_TYPE_DEC_2DIGIT_UNSIGNED
            },
            .data = {
                .size = sizeof(cursor_delay_t),
                .member_offset = offsetof(preferences_t, cursor.delay),
                .function = {
                    .get = data_get_preferences,
                    .set = data_set_preferences
                }
            }
        },
        {
            .label = {
                .name = "Cursor Repeat",
                .color = COLOR_NORMAL
            },
            .display = {
                .size = 2,
                .offset = 14,
                .type = DISPLAY_TYPE_DEC_2DIGIT_UNSIGNED
            },
            .data = {
                .size = sizeof(cursor_delay_t),
                .member_offset = offsetof(preferences_t, cursor.repeat),
                .function = {
                    .get = data_get_preferences,
                    .set = data_set_preferences
                }
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
    project_highligh_cursor();
}

void project_deinit(void)
{
    project_clear_title();
    project_clear_editor();
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

void project_highligh_cursor(void)
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
            region = &REGION_PROJECT_EDITOR_PROJECT_SETTINGS;
            config_group = &CONFIG_PROJECT_SETTINGS;
            break;
        }
        default: {
            break;
        }
    }

    if (region != NULL && config_group != NULL)
        ui_config_highligh_data(config_group, region, cursor.y);
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
