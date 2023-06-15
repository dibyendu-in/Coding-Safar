/*
 * File:   main.c
 * Author: DIBYENDU BARMAN
 * Description: Blinking all LEDs on PORTB
 *
 * Created on June 15, 2023, 3:30 PM
 */


#include <xc.h>

// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

#define _XTAL_FREQ 20000000     // Define the crystal frequency

void init_config(void) {
    // Initialization code
    TRISB = 0x00;       // Set PORTB as output
    PORTB = 0x00;       // Initialize PORTB to low
}

void main(void) {
    init_config();

    while (1) {
        // Application code
        PORTB = 0xFF;           // Set RORTB high
        __delay_ms(1000);       // Delay 1 second
        PORTB = 0x00;           // Set PORTB low
        __delay_ms(1000);       // Delay 1 second
    }

    return;
}
