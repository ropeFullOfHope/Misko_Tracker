#include "void_utils.h"
#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#include <string.h>

#define STRING_BUFFER_SIZE 40

void void_change_value_within_bounds(void *value, primitive_t delta, primitive_t min, primitive_t max, primitive_type_t primitive_type)
{
    if (value == NULL)
        return;

    switch (primitive_type) {
        case PRIMITIVE_TYPE_I8: {
            int8_t *src = (int8_t *)value;
            int16_t result = (int16_t)*src + (int16_t)delta.i8;

            if (result < min.i8)
                *src = min.i8;
            else if (result > max.i8)
                *src = max.i8;
            else
                *src = (int8_t)result;

            break;
        }
        case PRIMITIVE_TYPE_I16: {
            int16_t *src = (int16_t *)value;
            int32_t result = (int32_t)*src + (int32_t)delta.i16;

            if (result < min.i16)
                *src = min.i16;
            else if (result > max.i16)
                *src = max.i16;
            else
                *src = (int16_t)result;

            break;
        }
        case PRIMITIVE_TYPE_I32: {
            int32_t *src = (int32_t *)value;
            int64_t result = (int64_t)*src + (int64_t)delta.i32;

            if (result < min.i32)
                *src = min.i32;
            else if (result > max.i32)
                *src = max.i32;
            else
                *src = (int32_t)result;

            break;
        }
        case PRIMITIVE_TYPE_I64: {
            int64_t *src = (int64_t *)value;
            int64_t result = *src + delta.i64;

            if (result < min.i64)
                *src = min.i64;
            else if (result > max.i64)
                *src = max.i64;
            else
                *src = result;

            break;
        }
        case PRIMITIVE_TYPE_U8: {
            uint8_t *src = (uint8_t *)value;
            int16_t result = (int16_t)*src + (int16_t)delta.u8;

            if (result < min.u8)
                *src = min.u8;
            else if (result > max.u8)
                *src = max.u8;
            else
                *src = (uint8_t)result;

            break;
        }
        case PRIMITIVE_TYPE_U16: {
            uint16_t *src = (uint16_t *)value;
            int32_t result = (int32_t)*src + (int32_t)delta.u16;

            if (result < min.u16)
                *src = min.u16;
            else if (result > max.u16)
                *src = max.u16;
            else
                *src = (uint16_t)result;

            break;
        }
        case PRIMITIVE_TYPE_U32: {
            uint32_t *src = (uint32_t *)value;
            int64_t result = (int64_t)*src + (int64_t)delta.u32;

            if (result < min.u32)
                *src = min.u32;
            else if (result > max.u32)
                *src = max.u32;
            else
                *src = (uint32_t)result;

            break;
        }
        case PRIMITIVE_TYPE_U64: {
            uint64_t *src = (uint64_t *)value;
            uint64_t result = *src + delta.u64;

            if (result < min.u64)
                *src = min.u64;
            else if (result > max.u64)
                *src = max.u64;
            else
                *src = result;

            break;
        }
        case PRIMITIVE_TYPE_F32: {
            float *src = (float *)value;
            float result = *src + delta.f32;

            if (result < min.f32)
                *src = min.f32;
            else if (result > max.f32)
                *src = max.f32;
            else
                *src = result;

            break;
        }
        case PRIMITIVE_TYPE_F64: {
            double *src = (double *)value;
            double result = *src + delta.f64;

            if (result < min.f64)
                *src = min.f64;
            else if (result > max.f64)
                *src = max.f64;
            else
                *src = result;

            break;
        }
        default: {
            break;
        }
    }
}

void data_to_string(char *out_string, const void *data, display_format_t display_format, primitive_type_t primitive_type)
{
    if (out_string == NULL || data == NULL)
        return;

    if (display_format.size == 0)
        return;

    char string_buffer[STRING_BUFFER_SIZE] = {'\0'};

    // Convert data into a string and save it into string_buffer.
    switch (display_format.type) {
        case STRING_TYPE_DEC_UNSIGNED: {
            switch (primitive_type) {
                case PRIMITIVE_TYPE_I8:  {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*u",       (int)display_format.size, (uint8_t)*(int8_t *)data);         break;}
                case PRIMITIVE_TYPE_I16: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*u",       (int)display_format.size, (uint16_t)*(int16_t *)data);       break;}
                case PRIMITIVE_TYPE_I32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIu32, (int)display_format.size, (uint32_t)*(int32_t *)data);       break;}
                case PRIMITIVE_TYPE_I64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIu64, (int)display_format.size, (uint64_t)*(int64_t *)data);       break;}
                case PRIMITIVE_TYPE_U8:  {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*u",       (int)display_format.size, *(uint8_t *)data);                 break;}
                case PRIMITIVE_TYPE_U16: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*u",       (int)display_format.size, *(uint16_t *)data);                break;}
                case PRIMITIVE_TYPE_U32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIu32, (int)display_format.size, *(uint32_t *)data);                break;}
                case PRIMITIVE_TYPE_U64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIu64, (int)display_format.size, *(uint64_t *)data);                break;}
                case PRIMITIVE_TYPE_F32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIu32, (int)display_format.size, (uint32_t)roundf(*(float *)data)); break;}
                case PRIMITIVE_TYPE_F64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIu64, (int)display_format.size, (uint64_t)round(*(double *)data)); break;}
                default: break;
            }
            break;
        }
        case STRING_TYPE_DEC_SIGNED: {
            switch (primitive_type) {
                case PRIMITIVE_TYPE_I8:  {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*d",       (int)display_format.size, *(int8_t *)data);                 break;}
                case PRIMITIVE_TYPE_I16: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*d",       (int)display_format.size, *(int16_t *)data);                break;}
                case PRIMITIVE_TYPE_I32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*" PRId32, (int)display_format.size, *(int32_t *)data);                break;}
                case PRIMITIVE_TYPE_I64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*" PRId64, (int)display_format.size, *(int64_t *)data);                break;}
                case PRIMITIVE_TYPE_U8:  {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*d",       (int)display_format.size, (int8_t)*(uint8_t *)data);        break;}
                case PRIMITIVE_TYPE_U16: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*d",       (int)display_format.size, (int16_t)*(uint16_t *)data);      break;}
                case PRIMITIVE_TYPE_U32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*" PRId32, (int)display_format.size, (int32_t)*(uint32_t *)data);      break;}
                case PRIMITIVE_TYPE_U64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*" PRId64, (int)display_format.size, (int64_t)*(uint64_t *)data);      break;}
                case PRIMITIVE_TYPE_F32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*" PRId32, (int)display_format.size, (int32_t)roundf(*(float *)data)); break;}
                case PRIMITIVE_TYPE_F64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*" PRId64, (int)display_format.size, (int64_t)round(*(double *)data)); break;}
                default: break;
            }
            break;
        }
        case STRING_TYPE_HEX_UPPERCASE: {
            switch (primitive_type) {
                case PRIMITIVE_TYPE_I8:  {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*X",       (int)display_format.size, (uint8_t)*(int8_t *)data);         break;}
                case PRIMITIVE_TYPE_I16: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*X",       (int)display_format.size, (uint16_t)*(int16_t *)data);       break;}
                case PRIMITIVE_TYPE_I32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIX32, (int)display_format.size, (uint32_t)*(int32_t *)data);       break;}
                case PRIMITIVE_TYPE_I64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIX64, (int)display_format.size, (uint64_t)*(int64_t *)data);       break;}
                case PRIMITIVE_TYPE_U8:  {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*X",       (int)display_format.size, *(uint8_t *)data);                 break;}
                case PRIMITIVE_TYPE_U16: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*X",       (int)display_format.size, *(uint16_t *)data);                break;}
                case PRIMITIVE_TYPE_U32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIX32, (int)display_format.size, *(uint32_t *)data);                break;}
                case PRIMITIVE_TYPE_U64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIX64, (int)display_format.size, *(uint64_t *)data);                break;}
                case PRIMITIVE_TYPE_F32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIX32, (int)display_format.size, (uint32_t)roundf(*(float *)data)); break;}
                case PRIMITIVE_TYPE_F64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIX64, (int)display_format.size, (uint64_t)round(*(double *)data)); break;}
                default: break;
            }
            break;
        }
        case STRING_TYPE_HEX_LOWERCASE: {
            switch (primitive_type) {
                case PRIMITIVE_TYPE_I8:  {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*x",       (int)display_format.size, (uint8_t)*(int8_t *)data);         break;}
                case PRIMITIVE_TYPE_I16: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*x",       (int)display_format.size, (uint16_t)*(int16_t *)data);       break;}
                case PRIMITIVE_TYPE_I32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIx32, (int)display_format.size, (uint32_t)*(int32_t *)data);       break;}
                case PRIMITIVE_TYPE_I64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIx64, (int)display_format.size, (uint64_t)*(int64_t *)data);       break;}
                case PRIMITIVE_TYPE_U8:  {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*x",       (int)display_format.size, *(uint8_t *)data);                 break;}
                case PRIMITIVE_TYPE_U16: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*x",       (int)display_format.size, *(uint16_t *)data);                break;}
                case PRIMITIVE_TYPE_U32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIx32, (int)display_format.size, *(uint32_t *)data);                break;}
                case PRIMITIVE_TYPE_U64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIx64, (int)display_format.size, *(uint64_t *)data);                break;}
                case PRIMITIVE_TYPE_F32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIx32, (int)display_format.size, (uint32_t)roundf(*(float *)data)); break;}
                case PRIMITIVE_TYPE_F64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIx64, (int)display_format.size, (uint64_t)round(*(double *)data)); break;}
                default: break;
            }
            break;
        }
        case STRING_TYPE_OCT: {
            switch (primitive_type) {
                case PRIMITIVE_TYPE_I8:  {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*o",       (int)display_format.size, (uint8_t)*(int8_t *)data);         break;}
                case PRIMITIVE_TYPE_I16: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*o",       (int)display_format.size, (uint16_t)*(int16_t *)data);       break;}
                case PRIMITIVE_TYPE_I32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIo32, (int)display_format.size, (uint32_t)*(int32_t *)data);       break;}
                case PRIMITIVE_TYPE_I64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIo64, (int)display_format.size, (uint64_t)*(int64_t *)data);       break;}
                case PRIMITIVE_TYPE_U8:  {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*o",       (int)display_format.size, *(uint8_t *)data);                 break;}
                case PRIMITIVE_TYPE_U16: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*o",       (int)display_format.size, *(uint16_t *)data);                break;}
                case PRIMITIVE_TYPE_U32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIo32, (int)display_format.size, *(uint32_t *)data);                break;}
                case PRIMITIVE_TYPE_U64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIo64, (int)display_format.size, *(uint64_t *)data);                break;}
                case PRIMITIVE_TYPE_F32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIo32, (int)display_format.size, (uint32_t)roundf(*(float *)data)); break;}
                case PRIMITIVE_TYPE_F64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*" PRIo64, (int)display_format.size, (uint64_t)round(*(double *)data)); break;}
                default: break;
            }
            break;
        }
#ifdef PRINTF_FLOAT
        case STRING_TYPE_FLOAT: {
            switch (primitive_type) {
                case PRIMITIVE_TYPE_I8:  {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*.*f", (int)display_format.size, (int)display_format.precision, (double)*(int8_t *)data);   break;}
                case PRIMITIVE_TYPE_I16: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*.*f", (int)display_format.size, (int)display_format.precision, (double)*(int16_t *)data);  break;}
                case PRIMITIVE_TYPE_I32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*.*f", (int)display_format.size, (int)display_format.precision, (double)*(int32_t *)data);  break;}
                case PRIMITIVE_TYPE_I64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*.*f", (int)display_format.size, (int)display_format.precision, (double)*(int64_t *)data);  break;}
                case PRIMITIVE_TYPE_U8:  {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*.*f", (int)display_format.size, (int)display_format.precision, (double)*(uint8_t *)data);  break;}
                case PRIMITIVE_TYPE_U16: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*.*f", (int)display_format.size, (int)display_format.precision, (double)*(uint16_t *)data); break;}
                case PRIMITIVE_TYPE_U32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*.*f", (int)display_format.size, (int)display_format.precision, (double)*(uint32_t *)data); break;}
                case PRIMITIVE_TYPE_U64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*.*f", (int)display_format.size, (int)display_format.precision, (double)*(uint64_t *)data); break;}
                case PRIMITIVE_TYPE_F32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*.*f", (int)display_format.size, (int)display_format.precision, *(float *)data);            break;}
                case PRIMITIVE_TYPE_F64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%*.*f", (int)display_format.size, (int)display_format.precision, *(double *)data);           break;}
                default: break;
            }
            break;
        }
        case STRING_TYPE_FLOAT_ALWAYS_SIGNED: {
            switch (primitive_type) {
                case PRIMITIVE_TYPE_I8:  {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*.*f", (int)display_format.size, (int)display_format.precision, (double)*(int8_t *)data);   break;}
                case PRIMITIVE_TYPE_I16: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*.*f", (int)display_format.size, (int)display_format.precision, (double)*(int16_t *)data);  break;}
                case PRIMITIVE_TYPE_I32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*.*f", (int)display_format.size, (int)display_format.precision, (double)*(int32_t *)data);  break;}
                case PRIMITIVE_TYPE_I64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*.*f", (int)display_format.size, (int)display_format.precision, (double)*(int64_t *)data);  break;}
                case PRIMITIVE_TYPE_U8:  {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*.*f", (int)display_format.size, (int)display_format.precision, (double)*(uint8_t *)data);  break;}
                case PRIMITIVE_TYPE_U16: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*.*f", (int)display_format.size, (int)display_format.precision, (double)*(uint16_t *)data); break;}
                case PRIMITIVE_TYPE_U32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*.*f", (int)display_format.size, (int)display_format.precision, (double)*(uint32_t *)data); break;}
                case PRIMITIVE_TYPE_U64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*.*f", (int)display_format.size, (int)display_format.precision, (double)*(uint64_t *)data); break;}
                case PRIMITIVE_TYPE_F32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*.*f", (int)display_format.size, (int)display_format.precision, *(float *)data);            break;}
                case PRIMITIVE_TYPE_F64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%+*.*f", (int)display_format.size, (int)display_format.precision, *(double *)data);           break;}
                default: break;
            }
            break;
        }
#endif // PRINTF_FLOAT
        case STRING_TYPE_CHAR: {
            switch (primitive_type) {
                case PRIMITIVE_TYPE_I8:  {snprintf(string_buffer, STRING_BUFFER_SIZE, "%c%*s", (char)*(int8_t *)data,        (int)(display_format.size - 1), ""); break;}
                case PRIMITIVE_TYPE_I16: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%c%*s", (char)*(int16_t *)data,       (int)(display_format.size - 1), ""); break;}
                case PRIMITIVE_TYPE_I32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%c%*s", (char)*(int32_t *)data,       (int)(display_format.size - 1), ""); break;}
                case PRIMITIVE_TYPE_I64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%c%*s", (char)*(int64_t *)data,       (int)(display_format.size - 1), ""); break;}
                case PRIMITIVE_TYPE_U8:  {snprintf(string_buffer, STRING_BUFFER_SIZE, "%c%*s", (char)*(uint8_t *)data,       (int)(display_format.size - 1), ""); break;}
                case PRIMITIVE_TYPE_U16: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%c%*s", (char)*(uint16_t *)data,      (int)(display_format.size - 1), ""); break;}
                case PRIMITIVE_TYPE_U32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%c%*s", (char)*(uint32_t *)data,      (int)(display_format.size - 1), ""); break;}
                case PRIMITIVE_TYPE_U64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%c%*s", (char)*(uint64_t *)data,      (int)(display_format.size - 1), ""); break;}
                case PRIMITIVE_TYPE_F32: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%c%*s", (char)roundf(*(float *)data), (int)(display_format.size - 1), ""); break;}
                case PRIMITIVE_TYPE_F64: {snprintf(string_buffer, STRING_BUFFER_SIZE, "%c%*s", (char)round(*(double *)data), (int)(display_format.size - 1), ""); break;}
                default: break;
            }
            break;
        }
        case STRING_TYPE_STRING_LIST: {
            size_t index = 0;

            switch (primitive_type) {
                case PRIMITIVE_TYPE_I8: {index = (size_t)*(int8_t *)data; break;}
                case PRIMITIVE_TYPE_I16: {index = (size_t)*(int16_t *)data; break;}
                case PRIMITIVE_TYPE_I32: {index = (size_t)*(int32_t *)data; break;}
                case PRIMITIVE_TYPE_I64: {index = (size_t)*(int64_t *)data; break;}
                case PRIMITIVE_TYPE_U8: {index = (size_t)*(uint8_t *)data; break;}
                case PRIMITIVE_TYPE_U16: {index = (size_t)*(uint16_t *)data; break;}
                case PRIMITIVE_TYPE_U32: {index = (size_t)*(uint32_t *)data; break;}
                case PRIMITIVE_TYPE_U64: {index = (size_t)*(uint64_t *)data; break;}
                case PRIMITIVE_TYPE_F32: {index = (size_t)roundf(*(float *)data); break;}
                case PRIMITIVE_TYPE_F64: {index = (size_t)round(*(double *)data); break;}
                default: break;
            }

            if (index >= display_format.string_count)
                break;

            snprintf(string_buffer, STRING_BUFFER_SIZE, "%-*s", (int)display_format.size, display_format.string_list[index]);

            break;
        }
        default:
            break;
    }

    size_t string_buffer_length = strlen(string_buffer);

    switch (display_format.type) {
        case STRING_TYPE_DEC_UNSIGNED:
        case STRING_TYPE_DEC_SIGNED:
        case STRING_TYPE_HEX_UPPERCASE:
        case STRING_TYPE_HEX_LOWERCASE:
        case STRING_TYPE_OCT:
        case STRING_TYPE_FLOAT:
        case STRING_TYPE_FLOAT_ALWAYS_SIGNED: {
            if (string_buffer_length > display_format.size)
                // If a number is too big for the string, trim it on the left.
                memcpy(out_string, string_buffer + (string_buffer_length - display_format.size), display_format.size);

            else
                memcpy(out_string, string_buffer, display_format.size);

            break;
        }
        case STRING_TYPE_CHAR:
        case STRING_TYPE_STRING_LIST: {
            // If the string is too big, it will be trimmed on the right.
            memcpy(out_string, string_buffer, display_format.size);

            break;
        }
        default: {
            out_string[0] = '\0';
        }
    }

    out_string[display_format.size] = '\0';
}

void copy_data(void *dst, const void *src, primitive_type_t primitive_type)
{
    if (src == NULL || dst == NULL)
        return;

    switch (primitive_type) {
        case PRIMITIVE_TYPE_I8: {
            *(int8_t *)dst = *(int8_t *)src;
            break;
        }
        case PRIMITIVE_TYPE_I16: {
            *(int16_t *)dst = *(int16_t *)src;
            break;
        }
        case PRIMITIVE_TYPE_I32: {
            *(int32_t *)dst = *(int32_t *)src;
            break;
        }
        case PRIMITIVE_TYPE_I64: {
            *(int64_t *)dst = *(int64_t *)src;
            break;
        }
        case PRIMITIVE_TYPE_U8: {
            *(uint8_t *)dst = *(uint8_t *)src;
            break;
        }
        case PRIMITIVE_TYPE_U16: {
            *(uint16_t *)dst = *(uint16_t *)src;
            break;
        }
        case PRIMITIVE_TYPE_U32: {
            *(uint32_t *)dst = *(uint32_t *)src;
            break;
        }
        case PRIMITIVE_TYPE_U64: {
            *(uint64_t *)dst = *(uint64_t *)src;
            break;
        }
        case PRIMITIVE_TYPE_F32: {
            *(float *)dst = *(float *)src;
            break;
        }
        case PRIMITIVE_TYPE_F64: {
            *(double *)dst = *(double *)src;
            break;
        }
        default: {
            break;
        }
    }
}
