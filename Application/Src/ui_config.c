#include "ui_config.h"
#include <stddef.h>
#include <stdio.h>

#define MAX_CONFIG_OPTION_LENGTH 16

static void ui_config_draw_group_label(const configGroup_t *config_group, const region_t *region, uint32_t y_offset);
static void ui_config_draw_label(const configItem_t *config_group, const region_t *region, uint32_t y_offset);
static void ui_config_draw_data(const configItem_t *config, const region_t *region, uint32_t y_offset);
static bool has_global_label(const configGroup_t *config_group);

void ui_config_draw(const configGroup_t *config_group, const region_t *region)
{
    uint32_t y_offset = 0;

    // Draw the config group label if provided.
    const char * const group_label_name = config_group->label.name;
    if (group_label_name != NULL)
        ui_config_draw_group_label(config_group, region, y_offset++);

    // Draw the all of the configs.
    const uint32_t config_count = config_group->config_count;
    for (uint32_t config_number = 0; config_number < config_count; config_number++) {
        const configItem_t * const config = &config_group->configs[config_number];

        ui_config_draw_label(config, region, y_offset);
        ui_config_draw_data(config, region, y_offset);

        y_offset++;
    }
}

void ui_config_change_data(const configGroup_t *config_group, const region_t *region, uint32_t config_number, bool increase, bool big_step)
{
    const uint32_t config_count = config_group->config_count;

    if (config_number >= config_count)
        return;

    const configItem_t * const config = &config_group->configs[config_number];
    void (* const data_get)(void*, uint32_t, uint32_t) = config->data.function.get;
    void (* const data_set)(const void*, uint32_t, uint32_t) = config->data.function.set;

    if (data_get == NULL || data_set == NULL)
        return;

    uint8_t data_buffer[8] = {0};
    const uint32_t size = config->data.size;
    const uint32_t member_offset = config->data.member_offset;
    const int32_t min = config->data.min;
    const int32_t max = config->data.max;
    const display_type_t display_type = config->display.type;

    data_get(data_buffer, size, member_offset);

    switch (display_type) {
        case DISPLAY_TYPE_HEX_2DIGIT_UNSIGNED: {
            if (increase) {
                if (!big_step)
                    *(uint8_t *)data_buffer += 0x01;
                else
                    *(uint8_t *)data_buffer += 0x10;
            }
            else {
                if (!big_step)
                    *(uint8_t *)data_buffer -= 0x01;
                else
                    *(uint8_t *)data_buffer -= 0x10;
            }
            break;
        }
        case DISPLAY_TYPE_DEC_2DIGIT_UNSIGNED: {
            if (increase) {
                if (!big_step)
                    *(uint8_t *)data_buffer += 1;
                else
                    *(uint8_t *)data_buffer += 10;
            }
            else {
                if (!big_step)
                    *(uint8_t *)data_buffer -= 1;
                else
                    *(uint8_t *)data_buffer -= 10;
            }
            break;
        }
        case DISPLAY_TYPE_DEC_3DIGIT_UNSIGNED: {
            if (increase) {
                if (!big_step)
                    *(uint16_t *)data_buffer += 1;
                else
                    *(uint16_t *)data_buffer += 10;
            }
            else {
                if (!big_step)
                    *(uint16_t *)data_buffer -= 1;
                else
                    *(uint16_t *)data_buffer -= 10;
            }
            break;
        }
        case DISPLAY_TYPE_STRING: {
            if (increase) {
                if (!big_step)
                    *(int32_t *)data_buffer += 0x01;
                else
                    *(int32_t *)data_buffer += 0x10;
            }
            else {
                if (!big_step)
                    *(int32_t *)data_buffer -= 0x01;
                else
                    *(int32_t *)data_buffer -= 0x10;
            }
            break;
        }
        default:
            break;
    }

    data_set(data_buffer, size, member_offset);

    ui_config_draw_data(config, region, config_number + 1);
}

void ui_config_highlight_data(const configGroup_t *config_group, const region_t *region, uint32_t config_number)
{
    uint32_t y_offset = config_number;
    const char * const group_label_name = config_group->label.name;
    const uint32_t config_count = config_group->config_count;

    if (config_number >= config_count)
        return;

    if (group_label_name != NULL)
        y_offset++;

    const configItem_t * const config = &config_group->configs[config_number];
    const uint32_t offset = config->display.offset;
    const uint32_t size = config->display.size;

    for (uint32_t x = 0; x < size; x++)
        region_change_color(region, COLOR_HIGHLIGHT, (int32_t)(x + offset), (int32_t)y_offset);
}

void ui_config_unhighlight_data(const configGroup_t *config_group, const region_t *region, uint32_t config_number)
{
    uint32_t y_offset = config_number;
    const char * const group_label_name = config_group->label.name;
    const uint32_t config_count = config_group->config_count;

    if (config_number >= config_count)
        return;

    if (group_label_name != NULL)
        y_offset++;

    const configItem_t * const config = &config_group->configs[config_number];
    const uint32_t offset = config->display.offset;
    const uint32_t size = config->display.size;

    for (uint32_t x = 0; x < size; x++)
        region_change_color(region, COLOR_DARK, (int32_t)(x + offset), (int32_t)y_offset);
}

static void ui_config_draw_group_label(const configGroup_t *config_group, const region_t *region)
{
    const char * const name = config_group->label.name;
    const color_t color = config_group->label.color;

    if (name == NULL)
        return;

    for (int32_t x = 0; name[x] != '\0'; x++)
        region_draw(region, name[x], color, x, 0);
}

static void ui_config_draw_label(const configItem_t *config, const region_t *region, uint32_t y_offset)
{
    const char * const name = config->label.name;
    const color_t color = config->label.color;

    if (name == NULL)
        return;

    for (int32_t x = 0; name[x] != '\0'; x++)
        region_draw(region, name[x], color, x, (int32_t)y_offset);
}

static void ui_config_draw_data(const configItem_t *config, const region_t *region, uint32_t y_offset)
{
    uint8_t data_buffer[8] = {0};
    void (* const data_get)(void*, uint32_t, uint32_t) = config->data.function.get;
    const uint32_t size = config->data.size;
    const uint32_t member_offset = config->data.member_offset;
    const int32_t offset = (int32_t)config->display.offset;
    const int32_t display_size = (int32_t)config->display.size;

    if (data_get == NULL)
        return;

    // Get data.
    data_get(data_buffer, size, member_offset);

    // Convert data to a string.
    char data_string[MAX_CONFIG_OPTION_LENGTH] = {'\0'};
    const display_type_t display_type = config->display.type;

    switch (display_type) {
        case DISPLAY_TYPE_HEX_2DIGIT_UNSIGNED: {
            const uint8_t data = *(uint8_t *)data_buffer;
            snprintf(data_string, MAX_CONFIG_OPTION_LENGTH, "%02X", data);
            break;
        }
        case DISPLAY_TYPE_DEC_2DIGIT_UNSIGNED: {
            const uint8_t data = *(uint8_t *)data_buffer;
            snprintf(data_string, MAX_CONFIG_OPTION_LENGTH, "%2u", data);
            break;
        }
        case DISPLAY_TYPE_DEC_3DIGIT_UNSIGNED: {
            const uint16_t data = *(uint16_t *)data_buffer;
            snprintf(data_string, MAX_CONFIG_OPTION_LENGTH, "%3u", data);
            break;
        }
        case DISPLAY_TYPE_STRING: {
            const uint32_t data = *(uint32_t *)data_buffer;
            const uint32_t option_count = config->display.option_count;

            if (data < option_count) {
                const char *option = config->display.options[data];

                snprintf(data_string, MAX_CONFIG_OPTION_LENGTH, "%s", option);
            }
            break;
        }
        default:
            break;
    }

    // Display the data on the screen.
    int32_t x = 0;
    for (; x < display_size && data_string[x] != '\0'; x++)
        region_draw(region, data_string[x], COLOR_DARK, x + offset, (int32_t)y_offset);
    for (; x < display_size; x++)
        region_draw(region, ' ', COLOR_DARK, x + offset, (int32_t)y_offset);
}

static bool has_global_label(const configGroup_t *config_group)
{
    const char * const label_name = config_group->label.name;

    if (label_name != NULL)
        return true;
    else
        return false;
}
