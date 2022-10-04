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
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/ 

/******************************************************************
* \Syntax			: void BUZZER_VoidBuzzerOn(u8 BUZZER_u8CopyLedColor);
* \Description		: /* Description: * Description: This function shall turn on the desired Buzzer
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void BUZZER_VoidBuzzerOn(u8 BUZZER_u8CopyLedColor)
* \Description		: /*Description : This function shall turn off the desired Buzzer
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/


/* Description: This function shallinitialize the Buzzer driver*/
void BUZZER_VoidBuzzerInit(void);

/* Description: This function shall turn on the desired Buzzer*/
void BUZZER_VoidBuzzerOn(u8 BUZZER_u8CopyLedColor);

/*Description : This function shall turn off the desired Buzzer*/
void BUZZER_VoidBuzzerOn(u8 BUZZER_u8CopyLedColor);











#endif
