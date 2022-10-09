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
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/ 

/******************************************************************
* \Syntax			: void LED_VoidLedOn(u8 LED_u8CopyLedColor);
* \Description		: /* Description: This function shall turn on the desired LED
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: LED_u8CopyLedColor 
						LED_u8CopyLedColor -> ( size:8 bits , range: zero or 255 ,type u8, description this variable set the LED_u8CopyLedColor)
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			: void LED_VoidLedOff(u8 LED_u8CopyLedColor);
* \Description		: /*Description : This function shall turn off the desired led
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: LED_u8CopyLedColor 
						LED_u8CopyLedColor -> ( size:8 bits , range: zero or 255 ,type u8, description this variable clear the LED_u8CopyLedColor)
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			: void LED_VoidLedBlink(u8 LED_u8CopyLedColor);
* \Description		: /*Description : This function shall turn off the desired led
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: LED_u8CopyLedColor 
						LED_u8CopyLedColor -> ( size:8 bits , range: zero or 255 ,type u8, description this variable blink the LED_u8CopyLedColor)
* \Return value     : void
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
