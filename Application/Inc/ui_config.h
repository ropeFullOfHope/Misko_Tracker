#ifndef INC_UI_CONFIG_H_
#define INC_UI_CONFIG_H_

#include "region.h"

typedef enum {
    DISPLAY_TYPE_HEX_2DIGIT_UNSIGNED,
    DISPLAY_TYPE_DEC_2DIGIT_UNSIGNED,
    DISPLAY_TYPE_DEC_3DIGIT_UNSIGNED,
    DISPLAY_TYPE_STRING,
    DISPLAY_TYPE_COUNT
} display_type_t;

typedef struct {
    const char *name;
    color_t color;
} label_t;

typedef struct {
    label_t label;
    struct {
        uint32_t size;
        uint32_t offset;
        display_type_t type;
        const char * const *options;
        uint32_t option_count;
    } display;
    struct {
        uint32_t size;
        uint32_t member_offset;
        struct {
            void (*get)(void*, uint32_t, uint32_t);
            void (*set)(const void*, uint32_t, uint32_t);
        } function;
    } data;
} configItem_t;

typedef struct {
    label_t label;
    const configItem_t *configs;
    uint32_t config_count;
} configGroup_t;

void ui_config_draw(const configGroup_t *config_group, const region_t *region);
void ui_config_highligh_data(const configGroup_t *config_group, const region_t *region, uint32_t config_number);

#endif /* INC_UI_CONFIG_H_ */
