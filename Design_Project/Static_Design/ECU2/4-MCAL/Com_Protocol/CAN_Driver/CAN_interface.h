/*******************************************************************

* FILE DESCRIPTION
--------------------------------------------------------------------
*		FILE: IntCtrl.h
*  		Module:  IntCtrl
*
*	Description:  <Write File DESCRIPTION here>
*
**********************************************************************/

#ifndef _UART_INTERFACE_H_
#define _UART_INTERFACE_H_

/**************************************************************************
* INCLUDE
**************************************************************************/
#include "UART_config.h"
#include "../../../LIB/BIT_MATH.h"
#include "../../../LIB/STD_TYPES.h"


/*************************************************************************
*  GLOBAL CONSTANT MACROS
*************************************************************************/

/************************************************************************
* GLOBAL FUNCTION MACROS
*************************************************************************/



/*************************************************************************
* GLOBAL DATA TYPES AND STRUCTURE
**************************************************************************/


/**************************************************************************
* GLOBAL DATA PROTOTYPES
***************************************************************************/


/*************************************************************************
* GLOBAL FUNCTION PROTOTYPES
**************************************************************************/

/******************************************************************
* \Syntax			: void CAN_VoidInit(void)
* \Description		: * This Function Shall : Initialoze CAN
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void CAN_VoidSendData(u8 UART_SentByte)
* \Description		: * This Function Shall : Send DATA
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: u8 CAN_U8ReceiveData(u8 * UART_ReceivedByte)
* \Description		: * This Function Shall : Recive
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/


void CAN_VoidInit(void)

void CAN_VoidSendData(u8 UART_SentByte)

u8 CAN_U8ReceiveData(u8 * UART_ReceivedByte)







#endif
