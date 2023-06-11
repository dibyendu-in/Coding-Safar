/* 
 * File:   main.h
 * Author: DIBYENDU BARMAN
 * Description: Implement LED train pattern on LEDs
 *
 * Created on April 6, 2023, 7:48 AM
 */

#ifndef MAIN_H
#define	MAIN_H
/* Board has 2 LED Arrays. We are using the 1st one @ PORTB*/
#define LED_ARRAY1          PORTB
/* Define LED_ARRAY1_DDR as TRISB for readability
 * TRISB is Data Direction Register for PORTB
 */
#define LED_ARRAY1_DDR      TRISB


#endif	/* MAIN_H */
