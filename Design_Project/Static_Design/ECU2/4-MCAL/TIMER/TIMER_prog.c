/*
 * TIMER_prog.c
 *
 *  Created on: Feb 1, 2022
 *      Author: khaled
 */
#include "TIMER_Interface1.h"
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

static volatile void (*ptr2fun)(void)= NULL;

void TIMER_VoidInit()
{
	/*Write Code Here*/

}
void TIMER_VoidPrescaler()
{
	/*Write Code Here*/


}

void TIMER_VoidCtcInit(void)
{
	/*Write Code Here*/


}


void TIMER_VoidSetTCNT0(u16 TIMER_u8CopyBit )
{
	/*Write Code Here*/

}

void TIMER_VoidClearTCNT0()
{
	/*Write Code Here*/


}

void TIMER_VoidEnInt2()
{
	/*Write Code Here*/


}

void TIMER0_VoidDis()
{

	/*Write Code Here*/

}

void TIMER_VoidSetOCR0(u16 TIMER_u16CopyCounter)
{
	/*Write Code Here*/

}

void TIMER_VoidDutyCycle(u8 TIMER_u16CopyDutyCycle)
{
	/*Write Code Here*/

}



void __vector_6 (void) __attribute__((signal));	// TIMER0 OVERFLOW
void __vector_6(void)
{

	/*Write Code Here*/

}
void Set_CallBackFun(void (*PointerFun)(void))
{
	/*Write Code Here*/

}
