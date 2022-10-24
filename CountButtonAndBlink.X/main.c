#define F_CPU 16000000UL

#include "led.h"
#include "button.h"
#include <xc.h>
#include <util/delay.h>

uint8_t checkButton();

void init(void) {
    DDRB &=~ (1<<DDB7);
    PORTB |= (1<<PORTB7); //enable pull-up
    // LED
    DDRB |= (1<<DDB5);
    LED_OFF;
}

void blinkForCounts(int8_t blinkCounts){
    
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
    int8_t button_fm=0;
    
    while (1) {
        if (checkButton() && button_fm == 0){ 
            button_fm = 1;
            blinkCount++;
            blinkForCounts(blinkCount);
        }
        if(checkButton() == 0)
        {
            button_fm = 0;
        }
    }
}