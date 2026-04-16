#ifndef INC_AUDIO_H_
#define INC_AUDIO_H_

#include <stdint.h>

void audio_start(void);
void audio_stop(void);
void audio_half_callback(void);
void audio_full_callback(void);

#endif /* INC_AUDIO_H_ */
