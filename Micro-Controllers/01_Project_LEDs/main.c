/*
 * File:   main.c
 * Author: DIBYENDU BARMAN
 * Description: Blinking LEDs on PORTB
 *
 * Created on June 10, 2023, 3:48 PM
 */


#include <xc.h>

#pragma config WDTE = OFF // Watchdog Timer Enable bit (WDT Disabled)

static void init_config(void) {
    //write your initialization code here
    TRISB = 0x00;
    //Set direction for PORTB as output
    PORTB = 0x00;
    //Set turn off all LEDs on PORTB
}

void main(void) {
    unsigned long int delay = 0; // 4 byte
    init_config(); 
    while (1) {
        //write application code here
        PORTB = 0xFF;// 1111 1111
        //Set turn on all LEDs on PORTB
        for(delay = 100000; delay > 0; delay--);
        //delay
        PORTB = 0x00;// 0000 0000
        //Set turn off all LEDs on PORTB
        for(delay = 100000; delay > 0; delay--);
        //delay
    }
    return;
}
