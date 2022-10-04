#ifndef _UART_INTERFACE_H_
#define _UART_INTERFACE_H_

#include "UART_config.h"
#include "../../../LIB/BIT_MATH.h"
#include "../../../LIB/STD_TYPES.h"

/******************************************************************
* \Syntax			: void UART_VoidInit(void);
* \Description		: * This Function Shall : Init Uart
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/ 

/******************************************************************
* \Syntax			: void UART_VoidSendByte(u8 UART_SentByte);
* \Description		: * This Function Shall : Send Byte
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: u8 UART_U8ReceiveByte(u8 * UART_ReceivedByte);
* \Description		: * This Function Shall : Recive Byte
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void UART_VoidCharacterSize(void);
* \Description		: * This Function Shall : Characte rSize
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

void UART_VoidInit(void);

void UART_VoidSendByte(u8 UART_SentByte);

u8 UART_U8ReceiveByte(u8 * UART_ReceivedByte);

void UART_VoidCharacterSize(void);






#endif
