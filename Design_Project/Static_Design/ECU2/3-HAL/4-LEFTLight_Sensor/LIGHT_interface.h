#ifndef _LED_interface_H_
#define _LED_interface_H_

#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/DIO_Driver/DIO_interface.h"



/******************************************************************
* \Syntax			: void LED_VoidLedInit(void);
* \Description		: /* Description: This function shallinitialize the led driver
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/ 

/******************************************************************
* \Syntax			: void LED_VoidLedOn(u8 LED_u8CopyLedColor);
* \Description		: /* Description: This function shall turn on the desired LED
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void LED_VoidLedOff(u8 LED_u8CopyLedColor);
* \Description		: /*Description : This function shall turn off the desired led
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void LED_VoidLedBlink(u8 LED_u8CopyLedColor);
* \Description		: /*Description : This function shall turn off the desired led
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/
/* LED VALUE*/

/* Description: This function shallinitialize the led driver*/
void LIGHT_VoidLedInit(void)

/* Description: This function shall turn on the desired LED*/
void LIGHT_VoidLedOn(u8 LIGHT_u8CopyLedColor)

/*Description : This function shall turn off the desired led*/
void LED_VoidLedOff(u8 LED_u8CopyLedColor);

/*Description : This function shall turn off the desired led*/
void LED_VoidLedBlink(u8 LED_u8CopyLedColor);









#endif
