#include "ui_config.h"
#include <stddef.h>
#include <stdio.h>

#define MAX_STRING_BUFFER_LENGTH 40

static void ui_config_draw_group_label(const configGroup_t *config_group, const region_t *region);
static void ui_config_draw_label(const configItem_t *config_group, const region_t *region, uint32_t y_offset);
static void ui_config_draw_data(const configItem_t *config, const region_t *region, uint32_t y_offset);
static void ui_config_update_data(const configItem_t *config, const region_t *region, uint32_t y_offset);

void ui_config_draw(const configGroup_t *config_group, const region_t *region)
{
    if (config_group == NULL || region == NULL)
        return;

    uint32_t y_offset = 0;

    if (config_group->label.name != NULL) {
        ui_config_draw_group_label(config_group, region);
        y_offset++;
    }

    for (uint32_t config_number = 0; config_number < config_group->config_count; config_number++) {
        const configItem_t * const config = &config_group->configs[config_number];

        ui_config_draw_label(config, region, y_offset);
        ui_config_draw_data(config, region, y_offset);

        y_offset++;
    }
}

void ui_config_change_data(const configGroup_t *config_group, const region_t *region, uint32_t config_number, bool increase, bool big_step)
{
    if (config_group == NULL || region == NULL)
        return;

    if (config_number >= config_group->config_count)
        return;

    const configItem_t * const config = &config_group->configs[config_number];

    if (config->data.function.get == NULL || config->data.function.set == NULL)
        return;

    uint8_t data_buffer[8];

    config->data.function.get(data_buffer, config->data.context, config->data.primitive_type);

    primitive_t delta = big_step ? config->data.step.big : config->data.step.small;

    void_change_value_within_bounds(data_buffer, delta, increase, config->data.bounds.min, config->data.bounds.max, config->data.primitive_type);

    config->data.function.set(data_buffer, config->data.context, config->data.primitive_type);

    uint32_t y_offset = config_number;

    if (config_group->label.name != NULL)
        y_offset++;

    ui_config_update_data(config, region, y_offset);
}

void ui_config_color_data(const configGroup_t *config_group, const region_t *region, uint32_t config_number, color_t color)
{
    if (config_group == NULL || region == NULL)
        return;

    if (config_number >= config_group->config_count)
        return;

    uint32_t y_offset = config_number;

    if (config_group->label.name != NULL)
        y_offset++;

    const configItem_t * const config = &config_group->configs[config_number];

    for (uint32_t x = 0; x < config->display.size; x++)
        region_change_color(region, color, (int32_t)(x + config->display.offset), (int32_t)y_offset);
}

static void ui_config_draw_group_label(const configGroup_t *config_group, const region_t *region)
{
    if (config_group == NULL || region == NULL)
        return;

    const char * const name = config_group->label.name;
    const color_t color = config_group->label.color;

    if (name == NULL)
        return;

    for (int32_t x = 0; name[x] != '\0'; x++)
        region_draw(region, name[x], color, x, 0);
}

static void ui_config_draw_label(const configItem_t *config, const region_t *region, uint32_t y_offset)
{
    if (config == NULL || region == NULL)
        return;

    const char * const name = config->label.name;
    const color_t color = config->label.color;

    if (name == NULL)
        return;

    for (int32_t x = 0; name[x] != '\0'; x++)
        region_draw(region, name[x], color, x, (int32_t)y_offset);
}

static void ui_config_draw_data(const configItem_t *config, const region_t *region, uint32_t y_offset)
{
    if (config == NULL || region == NULL)
        return;

    if (config->data.function.get == NULL)
        return;

    uint8_t data_buffer[8];

    config->data.function.get(data_buffer, config->data.context, config->data.primitive_type);

    char string_buffer[MAX_STRING_BUFFER_LENGTH];
    const display_format_t display_format = {
        .type = config->display.type,
        .size = config->display.size,
        .precision = config->display.precision,
        .string_list = config->display.options,
        .string_count = config->display.option_count
    };

    data_to_string(string_buffer, data_buffer, display_format, config->data.primitive_type);

    for (uint32_t x = 0; string_buffer[x] != '\0'; x++)
        region_draw(region, string_buffer[x], COLOR_DARK, (int32_t)(x + config->display.offset), (int32_t)y_offset);
}

static void ui_config_update_data(const configItem_t *config, const region_t *region, uint32_t y_offset)
{
    if (config == NULL || region == NULL)
        return;

    if (config->data.function.get == NULL)
        return;

    uint8_t data_buffer[8];

    config->data.function.get(data_buffer, config->data.context, config->data.primitive_type);

    char string_buffer[MAX_STRING_BUFFER_LENGTH];
    const display_format_t display_format = {
        .type = config->display.type,
        .size = config->display.size,
        .precision = config->display.precision,
        .string_list = config->display.options,
        .string_count = config->display.option_count
    };

    data_to_string(string_buffer, data_buffer, display_format, config->data.primitive_type);

    for (uint32_t x = 0; string_buffer[x] != '\0'; x++)
        region_change_symbol(region, string_buffer[x], (int32_t)(x + config->display.offset), (int32_t)y_offset);
}
