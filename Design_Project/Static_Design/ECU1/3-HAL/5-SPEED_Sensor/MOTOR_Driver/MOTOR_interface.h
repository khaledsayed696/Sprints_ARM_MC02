#ifndef _MOTOR_interface_H_
#define _MOTOR_interface_H_

#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/DIO_Driver/DIO_interface.h"



/******************************************************************
* \Syntax			: void MOTOR_VoidMotorInit(void);
* \Description		: /* Description: This function shall Init motor
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			:void MOTOR_VoidLedStart(u16 MOTOR_u16CopyDutyCycle );
* \Description		: /*Description : This function shall control motor speed
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void MOTOR_VoidMotorStop(void);
* \Description		: /*Description : This function shall turn off Motor
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/
/* LED VALUE*/

void MOTOR_VoidMotorInit(void);

void MOTOR_VoidLedStart(u16 MOTOR_u16CopyDutyCycle );

void MOTOR_VoidMotorStop(void);





#endif
