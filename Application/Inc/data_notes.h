#ifndef INC_NOTE_DATA_H_
#define INC_NOTE_DATA_H_

#include "lcd.h"

#define NOTE_COUNT (9 * 12 + 1)

typedef struct {
    symbol_t name[NOTE_COUNT][3];
    uint32_t period[NOTE_COUNT];
} note_metadata_t;

extern const note_metadata_t NOTE_METADATA;

#endif /* INC_NOTE_DATA_H_ */
