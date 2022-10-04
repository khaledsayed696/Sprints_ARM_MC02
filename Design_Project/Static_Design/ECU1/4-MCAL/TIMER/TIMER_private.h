/*
 * TIMER_private1.h
 *
 *  Created on: Feb 1, 2022
 *      Author: khaled
 */

#ifndef MCAL_TIMER_TIMER_PRIVATE1_H_
#define MCAL_TIMER_TIMER_PRIVATE1_H_
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

/*Configuration for TIMER*/

/* TIMER0 MODES OPTIONS */


/* TIMER0 PRESCALLER  OPTIONS */



/***** OC0 PIN MODE *****/


/* TIMER1 INTERRUPT OPTION*/


/* Timer/Counter Control Register – TCCR0 */



/* Prescaler The three Clock Select bits select the clock source to be used by the Timer/Counter */


/*Waveform Generation Mode Bit Description(1)*/


/*Compare Output Mod {non-PWM Mode , Fast PWM Mode(1) ,Phase Correct PWM Mode}*/


/*Configuration for TIMER2*/

/* TIMER MODES OPTIONS */
/*
#define NORMAL_MODE		1
#define PWM_MODE		2
#define CTC_MODE		3
#define FAST_PWM		4
*/
/* TIMER MODES OPTIONS */
/*
#define No_clock_source			1
#define NO_PRESCALER			2
#define PRESCALER_8				3
#define PRESCALER_64			4
#define PRESCALER_265			5
#define PRESCALER_1024			6
#define EXTERNAL_SRC_FALLING	7
#define EXTERNAL_SRC_RISING		8

*/

/* Timer/Counter Control Register – TCCR0 */



/* Prescaler The three Clock Select bits select the clock source to be used by the Timer/Counter */



/*Waveform Generation Mode Bit Description(1)*/



/*Compare Output Mod {non-PWM Mode , Fast PWM Mode(1) ,Phase Correct PWM Mode}*/



/*Bit 7 – FOC0: Force Output Compare*/



/*Timer/Counter Register – TCNT0*/



/*Output CompareRegister – OCR0*/



/*Timer/Counter Interrupt Mask Register – TIMSK*/
//#define TIMER_TIMSK		*((volatile u8 *)0x59) // same as TIMER 0 defined above




/*Timer/Counter Interrupt Flag Register– TIFR*/
//#define TIMER_TIFR 	*((volatile u8 *)0x58)  // same as TIMER 0 defined above




/*  related Bits inside Register SERG */

#endif

