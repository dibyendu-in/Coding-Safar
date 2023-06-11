/*
 * File:   main.c
 * Description: Level Detection by Switch
 */

#include <xc.h>
#include "main.h"

#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)

static void init_config(void) {
    //LED1 = OFF; //RD0 LED Off 
    LED_ARRAY2 = 0x00; //PORTD all LEDs Off
    LED_ARRAY2_DDR = 0X00; //PORTD using as Output Direction
    //LED1_DDR = 0; //RD0 LED used as Output Direction
    SW1_DDR = 1; //RB0 Switch used as Input Direction
}

void main(void) {
    init_config();

    while (1) {
        if (SW1 == PRESSED)
        {
            LED1 = ON;
        }
        else
        {
            LED1 = OFF;
        }
    }
    return;
}
