/*
 * File:   buttton.c
 * Author: sophi
 *
 * Created on 19. Oktober 2022, 08:52
 */
#include <xc.h>
#include <stdbool.h>
#include "button.h"

uint8_t checkButton(){
    
    if(BUTTON_PRESS) //button == high, not pressed 
        return 1;
    else
        return 0;
      
}
