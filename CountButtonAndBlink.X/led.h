#ifndef LED_H

#define LED_ON PORTB |= (1<<PORTB5)
#define LED_OFF PORTB &= ~(1<<PORTB5)
#define LED_TOGGLE PORTB ^= (1<<PORTB5)

#endif /* LED_H */