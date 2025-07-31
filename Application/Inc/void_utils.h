#ifndef INC_VOID_UTILS_H_
#define INC_VOID_UTILS_H_

#include <stdint.h>

typedef enum {
    PRIMITIVE_TYPE_I8,
    PRIMITIVE_TYPE_I16,
    PRIMITIVE_TYPE_I32,
    PRIMITIVE_TYPE_I64,
    PRIMITIVE_TYPE_U8,
    PRIMITIVE_TYPE_U16,
    PRIMITIVE_TYPE_U32,
    PRIMITIVE_TYPE_U64,
    PRIMITIVE_TYPE_F32,
    PRIMITIVE_TYPE_F64
} primitive_type_t;

typedef enum {
    STRING_TYPE_DEC_UNSIGNED,
    STRING_TYPE_DEC_SIGNED,
    STRING_TYPE_HEX_UPPERCASE,
    STRING_TYPE_HEX_LOWERCASE,
    STRING_TYPE_OCT,
    STRING_TYPE_FLOAT,
    STRING_TYPE_FLOAT_ALWAYS_SIGNED,
    STRING_TYPE_CHAR,
    STRING_TYPE_STRING_LIST
} string_type_t;

typedef union {
    int8_t   i8;
    int16_t  i16;
    int32_t  i32;
    int64_t  i64;
    uint8_t  u8;
    uint16_t u16;
    uint32_t u32;
    uint64_t u64;
    float    f32;
    double   f64;
} primitive_t;

typedef struct {
    string_type_t type;
    uint32_t size;
    uint32_t precision;
    const char **string_list;
    uint32_t string_count;
} display_format_t;

void void_change_value_within_bounds(void *value, primitive_t delta, primitive_t min, primitive_t max, primitive_type_t primitive_type);
void data_to_string(char *out_string, const void *data, display_format_t display_format, primitive_type_t primitive_type);
void copy_data(void *dst, const void *src, primitive_type_t primitive_type);

#endif /* INC_VOID_UTILS_H_ */
