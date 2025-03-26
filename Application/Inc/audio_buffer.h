#ifndef INC_AUDIO_BUFFER_H_
#define INC_AUDIO_BUFFER_H_

#include <stdint.h>
#include <stdbool.h>

int32_t audio_buffer_read(void);
void audio_buffer_write(int32_t sample);
void audio_buffer_clear(void);
bool is_audio_buffer_empty(void);
bool is_audio_buffer_full(void);

#endif /* INC_AUDIO_BUFFER_H_ */
