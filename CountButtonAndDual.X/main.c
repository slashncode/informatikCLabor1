#define F_CPU 16000000UL

#include "led.h"
#include "button.h"
#include <xc.h>
#include <util/delay.h>

void init(void) {
    // button 1
    DDRD &=~ (1<<DDD1);
    PORTD |= (1<<PORTD1); //enable pull-up
    // button 2
    DDRB &=~ (1<<DDB1);
    PORTB |= (1<<PORTB1); //enable pull-up 
    // LED1
    DDRC |= (1<<DDC1);
    LED_OFF1;
    // LED2
    DDRC |= (1<<DDC2);
    LED_OFF2;
    // LED3
    DDRC |= (1<<DDC3);
    LED_OFF3;
    // LED4
    DDRC |= (1<<DDC4);
    LED_OFF4;
}

void setBinaryLEDs(uint8_t blinkCounts){
    blinkCounts = blinkCounts << 1;
    PORTC &= 11100000;
    PORTC |= blinkCounts;
}

int main() {
    init();
    uint8_t blinkCount=0;
    int8_t button_fm1=0;
    
    while (1) {
        if (checkButton1() == 1 && button_fm1 == 0){ 
            button_fm1 = 1;
            blinkCount++;
            if (blinkCount > 15) {
                blinkCount = 0;
            }
            setBinaryLEDs(blinkCount);
        }
        if(checkButton1() == 0)
        {
            button_fm1 = 0;
        }
        
        if (checkButton2() == 1){ 
            blinkCount = 0;
            setBinaryLEDs(blinkCount);
        }
    }
}