
#ifndef _INT_PROG_H_
#define _INT_PROG_H_


#include "../../MCAL/DIO_Driver/DIO_interface.h"
#include "../../MCAL/DIO_Driver/DIO_private.h"
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "Int_config.h"
#include "Int_interface.h"
#include "Int_private.h"

void EXTI_VoidInt0Init(void)
{
	/*Write Code Here*/
}
 void EXTI_VoidInt1Init(void)
{

	/*Write Code Here*/
}

void EXTI_VoidInt2Init(void)
{
	/*Write Code Here*/
}

void EXTI_VoidGieEnable(void)
{
	SET_BIT(EXIT_SREG,EXIT_SERG_I);
}

void EXTI_VoidGieDisable(void)
{
		CLR_BIT(EXIT_SREG,EXIT_SERG_I);

}

 void EXTI_VoidInt1Init(void)
 {

	/*Write Code Here*/

} 

#endif
