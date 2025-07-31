#ifndef INC_UI_CONFIG_H_
#define INC_UI_CONFIG_H_

#include "void_utils.h"
#include "region.h"

typedef struct {
    const char *name;
    color_t color;
} label_t;

typedef struct {
    label_t label;
    struct {
        string_type_t type;
        uint32_t size;
        uint32_t precision;
        uint32_t offset;
        const char **options;
        uint32_t option_count;
    } display;
    struct {
        struct {
            void (*get)(void*, uint32_t, primitive_type_t);
            void (*set)(const void*, uint32_t, primitive_type_t);
        } function;
        uint32_t member_offset;
        primitive_type_t primitive_type;
        struct {
            primitive_t small;
            primitive_t big;
        } step;
        struct {
            primitive_t min;
            primitive_t max;
        } bounds;
    } data;
} configItem_t;

typedef struct {
    label_t label;
    const configItem_t *configs;
    uint32_t config_count;
} configGroup_t;

void ui_config_draw(const configGroup_t *config_group, const region_t *region);
void ui_config_change_data(const configGroup_t *config_group, const region_t *region, uint32_t config_number, bool increase, bool big_step);
void ui_config_highlight_data(const configGroup_t *config_group, const region_t *region, uint32_t config_number);
void ui_config_unhighlight_data(const configGroup_t *config_group, const region_t *region, uint32_t config_number);

#endif /* INC_UI_CONFIG_H_ */
