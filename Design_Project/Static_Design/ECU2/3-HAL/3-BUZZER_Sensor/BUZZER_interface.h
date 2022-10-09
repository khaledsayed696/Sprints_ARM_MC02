#ifndef _BUZZER_interface_H_
#define _BUZZER_interface_H_

#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/DIO_Driver/DIO_interface.h"



/******************************************************************
* \Syntax			: void BUZZER_VoidBuzzerInit(void);
* \Description		: /* Description: /* Description: This function shallinitialize the Buzzer driver
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/ 

/******************************************************************
* \Syntax			: void BUZZER_VoidBuzzerOn(u8 BUZZER_u8CopyLedColor);
* \Description		: /* Description: * Description: This function shall turn on the desired Buzzer
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: BUZZER_u8CopyLedColor 
						BUZZER_u8CopyLedColor -> ( size:8 bits , range: zero or 255 ,type u8, description this variable defines the BUZZER_u8CopyLedColor)
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			: void BUZZER_VoidBuzzerOn(u8 BUZZER_u8CopyLedColor)
* \Description		: /*Description : This function shall turn off the desired Buzzer
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: BUZZER_u8CopyLedColor 
						BUZZER_u8CopyLedColor -> ( size:8 bits , range: zero or 255 ,type u8, description this variable defines the BUZZER_u8CopyLedColor)
* \Return value     : void
*********************************************************************/


/* Description: This function shallinitialize the Buzzer driver*/
void BUZZER_VoidBuzzerInit(void);

/* Description: This function shall turn on the desired Buzzer*/
void BUZZER_VoidBuzzerOn(u8 BUZZER_u8CopyLedColor);

/*Description : This function shall turn off the desired Buzzer*/
void BUZZER_VoidBuzzerOn(u8 BUZZER_u8CopyLedColor);











#endif
