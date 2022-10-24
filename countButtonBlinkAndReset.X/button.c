/*
 * File:   button.c
 * Author: sophi
 *
 * Created on 19. Oktober 2022, 08:52
 */
#include <xc.h>
#include "button.h"

uint8_t checkButton1(){
    
    if(BUTTON_PRESS1) //button == high, not pressed 
        return 1;
    else
        return 0;
}

uint8_t checkButton2(){
    
    if(BUTTON_PRESS2) //button == high, not pressed 
        return 1;
    else
        return 0;
}