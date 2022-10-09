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
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			:void MOTOR_VoidLedStart(u16 MOTOR_u16CopyDutyCycle );
* \Description		: /*Description : This function shall control motor speed
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: pointer to CAN_ReceivedByte
						MOTOR_u16CopyDutyCycle -> ( size:16 bits , range: zero or u16 ,type u16, description this variable defines motor speed)
						
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			: void MOTOR_VoidMotorStop(void);
* \Description		: /*Description : This function shall turn off Motor
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/
/* LED VALUE*/

void MOTOR_VoidMotorInit(void);

void MOTOR_VoidLedStart(u16 MOTOR_u16CopyDutyCycle );

void MOTOR_VoidMotorStop(void);





#endif
