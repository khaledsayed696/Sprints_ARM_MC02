/*********************************************************************/
/*********************************************************************/
/******** Author:    Khaled Sayed    ***********************************/
/******** Component: TWI           ***********************************/
/******** Layer:     MCAL          ***********************************/
/******** Version:   Student       ***********************************/
/*********************************************************************/
/*********************************************************************/

#include "../../../LIB/STD_TYPES.h"
#include "../../../LIB/BIT_MATH.h"

#include "TWI_interface.h"


/*Set master address to 0 if master will not be addressed*/
void TWI_voidInitMaster(u8 Copy_u8Address)
{
	/* Write Code here*/
}

void TWI_voidInitSlave(u8 Copy_u8Address)
{
	/* Write Code here*/

}

TWI_ErrorStatus TWI_SendStartCondition(void)
{
	/* Write Code here*/
}

TWI_ErrorStatus TWI_SendRepeatedStart(void)
{
	/* Write Code here*/
}

TWI_ErrorStatus TWI_SendSlaveAddressWithWrite(u8 Copy_u8SlaveAddress)
{
	/* Write Code here*/
}

TWI_ErrorStatus TWI_SendSlaveAddressWithRead(u8 Copy_u8SlaveAddress)
{
	/* Write Code here*/
}

TWI_ErrorStatus TWI_MasterWriteDataByte(u8 Copy_u8DataByte)
{
	/* Write Code here*/
}

TWI_ErrorStatus TWI_MasterReadDataByte(u16* Copy_pu8DataByte)
{
	/* Write Code here*/
}

void TWI_SendStopCondition(void)
{
	/* Write Code here*/

}
