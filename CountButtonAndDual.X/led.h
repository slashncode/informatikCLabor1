#ifndef LED_H

#define LED_ON1 PORTC |= (1<<PORTC1)
#define LED_OFF1 PORTC &= ~(1<<PORTC1)
#define LED_TOGGLE1 PORTC ^= (1<<PORTC1)

#define LED_ON2 PORTC |= (1<<PORTC2)
#define LED_OFF2 PORTC &= ~(1<<PORTC2)
#define LED_TOGGLE2 PORTC ^= (1<<PORTC2)

#define LED_ON3 PORTC |= (1<<PORTC3)
#define LED_OFF3 PORTC &= ~(1<<PORTC3)
#define LED_TOGGLE3 PORTC ^= (1<<PORTC3)

#define LED_ON4 PORTC |= (1<<PORTC4)
#define LED_OFF4 PORTC &= ~(1<<PORTC4)
#define LED_TOGGLE4 PORTC ^= (1<<PORTC4)

#endif /* LED_H */