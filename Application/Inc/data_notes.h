#ifndef INC_NOTE_DATA_H_
#define INC_NOTE_DATA_H_

#include "lcd.h"

#define NORMAL_NOTE_COUNT  (10 * 12)
#define SPECIAL_NOTE_COUNT 4
#define NOTE_COUNT         (NORMAL_NOTE_COUNT + SPECIAL_NOTE_COUNT)

#define NOTE_NULL   0x00
#define NOTE_REST   0x80
#define NOTE_CUT    0x81
#define NOTE_RETRIG 0x82

typedef struct {
    const symbol_t name[3];
    const float frequency;
} note_metadata_t;

extern const note_metadata_t NOTE_METADATA[256];

#endif /* INC_NOTE_DATA_H_ */
