/*
 * File:   main.c
 * Author: DIBYENDU BARMAN
 * Description: LED Pattern on PORTB
 *
 * Created on June 10, 2023, 3:48 PM
 */


#include <xc.h>
#include "main.h"

#pragma config WDTE = OFF // Watchdog Timer Enable bit (WDT Disabled)

static void init_config(void) {
    LED_ARRAY_DDR = 0x00;
    //Set direction for PORTB as output
    LED_ARRAY = 0x00;
    //Set turn off all LEDs on PORTB
}

void main(void) {
    unsigned long int delay = 0; // 4 byte
    int i;
    init_config(); 
    while (1) {
        for(i = 0; i < 8; i++)
        {
            if(delay-- == 0) // non blocking delay
            {
                LED_ARRAY = LED_ARRAY | ((unsigned char)(1 << i)); // 0000 0000...0000 0001...0000 0011...0000 0111...
                //Set to 1 one by one all LEDs on PORTB
                delay = 50000;
            }
        }
        for(i = 0; i < 8; i++)
        {
            if(delay-- == 0) // non blocking delay
            {
                LED_ARRAY = LED_ARRAY << (unsigned char)1; // 1111 1111...1111 1110...1111 1100...1111 1000...
                //Set to 0 one by one all LEDs on PORTB
                delay = 50000;
            }
        }
    }
    return;
}
