#ifndef _KEYPAD_INTERFACE_H
#define _KEYPAD_INTERFACE_H
#include "KEYPAD_confgi.h"
#include "KEYPAD_private.h"
#include "../../MCAL/DIO_Driver/DIO_interface.h"
#include "../../LIB/STD_TYPES.h"

/******************************************************************
* \Syntax			: u8 KPD_u8GetPressedKey(void);
* \Description		: /* Description: This function shall Return the number of button pressedKey
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/ 
/*************************FUNCTIONS PROTOTYPES********************/
u8 KPD_u8GetPressedKey(void);




#endif
