/*
 * File:   main.c
 * Author: DIBYENDU BARMAN
 * Description: Blinking LEDs on PORTD
 *
 * Created on June 10, 2023, 3:48 PM
 */


#include <xc.h>
#include "main.h"

#pragma config WDTE = OFF // Watchdog Timer Enable bit (WDT Disabled)

static void init_config(void) {
    //write your initialization code here
    LED_ARRAY_DDR = 0x00;
    //Set direction for PORTD as output
    LED_ARRAY = 0x00;
    //Set turn off all LEDs on PORTD
}

void main(void) {
    unsigned long int delay = 0; // 4 byte
    init_config(); 
    while (1) {
        //write application code here
        if(delay-- == 0) // non blocking delay
        {
           LED_ARRAY = ~LED_ARRAY;
           //Set turn on and off all LEDs on PORTD
           delay = 100000;
        }
    }
    return;
}
