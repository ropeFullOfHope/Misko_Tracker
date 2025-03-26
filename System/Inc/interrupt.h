#ifndef INC_INTERRUPT_H_
#define INC_INTERRUPT_H_

typedef enum {
    INTERRUPT_AUDIO_UPDATE
} interrupt_type_t;

void interrupt_enable(interrupt_type_t interrupt_type);
void interrupt_disable(interrupt_type_t interrupt_type);
void global_interrupts_enable(void);
void global_interrupts_disable(void);

#endif /* INC_INTERRUPT_H_ */
