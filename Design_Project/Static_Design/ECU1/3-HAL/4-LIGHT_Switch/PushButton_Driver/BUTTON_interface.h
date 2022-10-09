#ifndef _BUTTON_interface_H_
#define _BUTTON_interface_H_

#include "../../MCAL/DIO_Driver/DIO_interface.h"
/*PIN NUMBERS*/
/******************************************************************
* \Syntax			: void BUTTON_VoidSetButtonValue(void );
* \Description		: /* Description: This function shall etButtonValue
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/ 
/******************************************************************
* \Syntax			: void BUTTON_VoidSetToggleValue(void);
* \Description		: /* Description: This function shall Set ToggleValue
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/ 

/******************************************************************
* \Syntax			: void BUTTON_VoidSetGetButtonValue(u8 Button_u8Value);
* \Description		: /* Description: This function shall Get Button State
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	:Button_u8Value
						Button_u8Value -> ( size:8 bits , range: zero or 255 ,type u8, description this variable defines Button_u8Value)
						
* \Return value     : void
*********************************************************************/ 

void BUTTON_VoidSetButtonValue(void );

void BUTTON_VoidSetToggleValue(void);

void BUTTON_VoidSetGetButtonValue(u8 Button_u8Value);





















#endif
