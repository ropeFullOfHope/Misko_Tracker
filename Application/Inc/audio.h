#ifndef INC_AUDIO_H_
#define INC_AUDIO_H_

#include <stdint.h>

void audio_start(void);
void audio_fill_buffer(uint16_t *buffer, uint32_t size);

#endif /* INC_AUDIO_H_ */
