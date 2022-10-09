/*******************************************************************

* FILE DESCRIPTION
--------------------------------------------------------------------
*		FILE: IntCtrl.h
*  		Module:  IntCtrl
*
*	Description:  <Write File DESCRIPTION here>
*
**********************************************************************/

#ifndef _CAN_INTERFACE_H_
#define _CAN_INTERFACE_H_

/**************************************************************************
* INCLUDE
**************************************************************************/
#include "CAN_config.h"
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
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			: void CAN_VoidSendData(u32 CAN_SentByte);
* \Description		: * This Function Shall : Send DATA
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: pointer to Copy_u8RecByte
						CAN_SentByte -> ( size:4 bytes , range: zero or 64 ,type u32, description this variable defines CAN_SentByte)
						
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			: u32 CAN_U8ReceiveData(u32 * CAN_ReceivedByte);
* \Description		: * This Function Shall : Recive
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: pointer to CAN_ReceivedByte
						CAN_ReceivedByte -> ( size:4 bytes , range: zero or 64 ,type u32, description this variable defines CAN_ReceivedByte)
						
* \Return value     : u32
*********************************************************************/


void CAN_VoidInit(void);

void CAN_VoidSendData(u32 CAN_SentByte);

u32 CAN_U8ReceiveData(u32 * CAN_ReceivedByte);







#endif
