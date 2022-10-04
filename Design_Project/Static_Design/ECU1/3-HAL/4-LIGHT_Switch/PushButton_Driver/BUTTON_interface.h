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
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/ 
/******************************************************************
* \Syntax			: void BUTTON_VoidSetToggleValue(void);
* \Description		: /* Description: This function shall Set ToggleValue
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/ 

/******************************************************************
* \Syntax			: void BUTTON_VoidSetGetButtonValue(u8 Button_u8Value);
* \Description		: /* Description: This function shall Get Button State
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/ 

void BUTTON_VoidSetButtonValue(void );

void BUTTON_VoidSetToggleValue(void);

void BUTTON_VoidSetGetButtonValue(u8 Button_u8Value);





















#endif
