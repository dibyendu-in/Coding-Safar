/*
 * File:   main.c
 * Author: DIBYENDU BARMAN
 * Description: Display 0 to 9 on 7-Segment Display (Common Cathode)
 *
 * Created on June 15, 2023, 7:20 PM
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

unsigned char Segment[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};

void init_config(void) {
    // Initialization code
    TRISC = 0x00;       // Set PORTC as output
    PORTC = 0x00;       // Initialize PORTC to low
}

void main(void) {
    init_config();

    while (1) {
        // Application code
        for(int i = 0; i < 10; i++)
        {
            PORTC = Segment[i];     // 0, 1, 2, 3, ...
            __delay_ms(1000);       // Delay 1 second
        }
    }

    return;
}
