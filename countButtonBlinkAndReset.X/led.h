#ifndef LED_H

#define LED_ON PORTC |= (1<<PORTC1)
#define LED_OFF PORTC &= ~(1<<PORTC1)
#define LED_TOGGLE PORTC ^= (1<<PORTC1)

#endif /* LED_H */