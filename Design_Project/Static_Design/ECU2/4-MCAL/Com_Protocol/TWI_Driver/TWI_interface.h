/*********************************************************************/
/*********************************************************************/
/******** Author:    Amr Hossam    ***********************************/
/******** Component: TWI           ***********************************/
/******** Layer:     MCAL          ***********************************/
/******** Version:   1.0           ***********************************/
/*********************************************************************/
/*********************************************************************/

#ifndef TWI_INTERFACE_H_
#define TWI_INTERFACE_H_

#include "TWI_register.h"
typedef enum
{
	NoError,
	StartConditionError,
	RepeatedStartError,
	SlaveAddressWithWriteError,
	SlaveAddressWithReadError,
	MasterWriteByteError,
	MasterReadByteError,

	
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
