/*********************************************************************/
/*********************************************************************/
/******** Author:    Khaled Sayed    ***********************************/
/******** Component: TWI           ***********************************/
/******** Layer:     MCAL          ***********************************/
/******** Version:   1.0           ***********************************/
/*********************************************************************/
/*********************************************************************/

#ifndef TWI_INTERFACE_H_
#define TWI_INTERFACE_H_

#include "TWI_register.h"

/******************************************************************
* \Syntax			: void TWI_voidInitMaster(u8 Copy_u8Address);
* \Description		: * This Function Shall : Init TWI
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void TWI_voidInitSlave(u8 Copy_u8Address);
* \Description		: * This Function Shall : Init Master
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: TWI_ErrorStatus TWI_SendStartCondition(void);
* \Description		: * This Function Shall : Send Start Condition
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/ 

/******************************************************************
* \Syntax			: TWI_ErrorStatus TWI_SendRepeatedStart(void);
* \Description		: * This Function Shall : Send Repeat Start
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/
/******************************************************************
* \Syntax			: TWI_ErrorStatus TWI_SendSlaveAddressWithWrite(u8 Copy_u8SlaveAddress);
* \Description		: * This Function Shall : Send Slave Address With Write
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: TWI_ErrorStatus TWI_SendSlaveAddressWithRead(u8 Copy_u8SlaveAddress);
* \Description		: * This Function Shall : Send Slave Address With Read
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: TWI_ErrorStatus TWI_MasterWriteDataByte(u8 Copy_u8DataByte);
* \Description		: * This Function Shall : Master Write Data Byte
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: TWI_ErrorStatus TWI_MasterReadDataByte(u16* Copy_pu8DataByte);
* \Description		: * This Function Shall : Master Read Data Byte
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void TWI_SendStopCondition(void);
* \Description		: * This Function Shall : Send Stop Condition
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

typedef enum
{
	
}TWI_ErrorStatus;

void TWI_voidInitMaster(u8 Copy_u8Address);

void TWI_voidInitSlave(u8 Copy_u8Address);

TWI_ErrorStatus TWI_SendStartCondition(void);
	   
TWI_ErrorStatus TWI_SendRepeatedStart(void);
	   
TWI_ErrorStatus TWI_SendSlaveAddressWithWrite(u8 Copy_u8SlaveAddress);
	   
TWI_ErrorStatus TWI_SendSlaveAddressWithRead(u8 Copy_u8SlaveAddress);
	   
TWI_ErrorStatus TWI_MasterWriteDataByte(u8 Copy_u8DataByte);
	   
TWI_ErrorStatus TWI_MasterReadDataByte(u16* Copy_pu8DataByte);

void TWI_SendStopCondition(void);


#endif
