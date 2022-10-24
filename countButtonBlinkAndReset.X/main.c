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
    // LED
    DDRC |= (1<<DDC1);
    LED_OFF;
}

void BlinkForCounts(int8_t blinkCounts){
    
    while (blinkCounts > 0) {
        LED_ON;
        _delay_ms(100);
        LED_OFF;
        _delay_ms(200);
        blinkCounts--;
    }
}

int main() {
    init();
    int8_t blinkCount=0;
    int8_t button_fm1=0;
    
    while (1) {
        if (BUTTON_PRESS1 && button_fm1 == 0){ 
            button_fm1 = 1;
            blinkCount++;
            BlinkForCounts(blinkCount);
        }
        if(BUTTON_PRESS1 == 0)
        {
            button_fm1 = 0;
        }
        
        if (BUTTON_PRESS2){ 
            blinkCount = 0;
        }
    }
}