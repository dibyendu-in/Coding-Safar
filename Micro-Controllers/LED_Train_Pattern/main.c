/*
 * File:   main.c
 * Author: DIBYENDU BARMAN
 * Description: Implement LED train pattern on LEDs
 *
 * Created on April 6, 2023, 7:52 AM
 */


#include <xc.h>
#include "main.h"

#pragma config WDTE = OFF // Watchdog Timer Enable bit (WDT Disabled)

static void init_config(void) {
    LED_ARRAY1_DDR = 0x00; // Set direction to o/p
    LED_ARRAY1 = 0x00;     // Set initial port value
}

void main(void) {
    long unsigned int delay = 0;
    long unsigned int i;
    long unsigned int j = 7; 
    
    init_config();

    while (1) 
	{
		if(delay++ == 50000)
		{
			delay = 0;
			if(i <= 7)
			{
			    LED_ARRAY1 = LED_ARRAY1 | 1 << i;
                i++;
			}
			else if (i <= 15)
		{
		    LED_ARRAY1 = LED_ARRAY1 << 1;
		    i++;
		}
		else if(i <= 23)
		{
		    LED_ARRAY1 = LED_ARRAY1 | 1 << j;
		    i++;
		    j--;
		}
		else if(i <= 31)
		{
		    LED_ARRAY1 = LED_ARRAY1 >> 1;
		    i++;
		}
		else
		{
		    i = 0;
		    j = 7;	
        }
			
		}
        
         }
    return;
}
