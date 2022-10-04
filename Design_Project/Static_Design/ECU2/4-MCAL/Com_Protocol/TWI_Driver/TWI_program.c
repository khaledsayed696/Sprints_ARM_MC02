/*********************************************************************/
/*********************************************************************/
/******** Author:    Amr Hossam    ***********************************/
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
	/*Enable Acknowledge bit*/
	SET_BIT(TWCR,TWCR_TWEA);

	/*Set SCL frequency to x kHz, with 8Mhz clock frequency*/
	/*1- Set TWBR to x*/
	TWBR=2;

	/*2- Clear the prescaler bits (TWPS)*/
	CLR_BIT(TWSR,TWSR_TWPS0);
	CLR_BIT(TWSR,TWSR_TWPS1);

	/*Check if the master node will be addressed*/

		/*Set the required address in the 7 MSB of TWAR*/
	if(Copy_u8Address!=0)
	{
		TWAR=(Copy_u8Address <<1);
	}

	/*Enable TWI*/
	SET_BIT(TWCR,TWCR_TWEN);
}

void TWI_voidInitSlave(u8 Copy_u8Address)
{
	/*Set the slave address*/
	TWAR=(Copy_u8Address <<1);

	/*Enable Acknowledge bit*/
	SET_BIT(TWCR,TWCR_TWEA);
	/*Enable TWI*/
	SET_BIT(TWCR,TWCR_TWEN);

}

TWI_ErrorStatus TWI_SendStartCondition(void)
{
	TWI_ErrorStatus Local_Error= NoError;

	/*Send start condition*/
	SET_BIT(TWCR,TWCR_TWSTA);

	/*Clear the interrupt flag to start the previous operation*/

	SET_BIT(TWCR,TWCR_TWINT);

	/*wait until the operation finishes and the flag is raised*/
	while(GET_BIT(TWCR,TWCR_TWINT)==0);

	/*Check the operation status*/
	if((TWSR & 0xF8) != START_ACK )
	{
		Local_Error = StartConditionError;
	}
	else
	{
		/*Do nothing*/
	}

	return Local_Error;
}

TWI_ErrorStatus TWI_SendRepeatedStart(void)
{
	TWI_ErrorStatus Local_Error= NoError;

	/*Send start condition*/
	SET_BIT(TWCR,TWCR_TWSTA);

	/*Clear the interrupt flag to start the previous operation*/
	SET_BIT(TWCR,TWCR_TWINT);

	/*wait until the operation finishes and the flag is raised*/
	while(GET_BIT(TWCR,TWCR_TWINT)==0);
	/*Check the operation status*/
	if((TWSR & 0xF8) != REP_START_ACK )
	{
		Local_Error = RepeatedStartError;
	}
	else
	{
		/*Do nothing*/
	}

	return Local_Error;
}

TWI_ErrorStatus TWI_SendSlaveAddressWithWrite(u8 Copy_u8SlaveAddress)
{
	TWI_ErrorStatus Local_Error= NoError;

	/*send the 7bit slave address to the bus*/
	TWDR=(Copy_u8SlaveAddress <<1);
	/*set the write request in the LSB in the data register*/
	CLR_BIT(TWDR,0);
	/*Clear the start condition bit*/
	CLR_BIT(TWCR,TWCR_TWSTA);
	/*Clear the interrupt flag to start the previous operation*/
	SET_BIT(TWCR,TWCR_TWINT);

	/*wait until the operation finishes and the flag is raised*/
	while(GET_BIT(TWCR,TWCR_TWINT)==0);
	/*Check the operation status*/
	if((TWSR & 0xF8) != SLAVE_ADD_AND_WR_ACK )
	{
		Local_Error = SlaveAddressWithWriteError;
	}
	else
	{
		/*Do nothing*/
	}

	return Local_Error;
}

TWI_ErrorStatus TWI_SendSlaveAddressWithRead(u8 Copy_u8SlaveAddress)
{
	TWI_ErrorStatus Local_Error= NoError;

	/*send the 7bit slave address to the bus*/
	TWDR=(Copy_u8SlaveAddress <<1);
	/*set the read request in the LSB in the data register*/
	SET_BIT(TWDR,0);

	/*Clear the start condition bit*/
	CLR_BIT(TWCR,TWCR_TWSTA);
	/*Clear the interrupt flag to start the previous operation*/
	SET_BIT(TWCR,TWCR_TWINT);
	/*wait until the operation finishes and the flag is raised*/
	while(GET_BIT(TWCR,TWCR_TWINT)==0);
	/*Check the operation status*/
	if((TWSR & 0xF8) != SLAVE_ADD_AND_RD_ACK )
	{
		Local_Error = SlaveAddressWithReadError;
	}
	else
	{
		/*Do nothing*/
	}

	return Local_Error;
}

TWI_ErrorStatus TWI_MasterWriteDataByte(u8 Copy_u8DataByte)
{
	TWI_ErrorStatus Local_Error= NoError;

	/*Write the data byte on the bus*/
	TWDR=Copy_u8DataByte;
	/*Clear the interrupt flag to start the previous operation*/
	SET_BIT(TWCR,TWCR_TWINT);
	/*wait until the operation finishes and the flag is raised*/
	while(GET_BIT(TWCR,TWCR_TWINT)==0);
	/*Check the operation status*/
	if((TWSR & 0xF8) !=  MSTR_WR_BYTE_ACK)
	{
		Local_Error = MasterWriteByteError;
	}
	else
	{
		/*Do nothing*/
	}

	return Local_Error;
}

TWI_ErrorStatus TWI_MasterReadDataByte(u16* Copy_pu8DataByte)
{
	TWI_ErrorStatus Local_Error= NoError;

	/*Clear the interrupt flag to allow the slave send the data*/
	SET_BIT(TWCR,TWCR_TWINT);

	/*wait until the operation finishes and the flag is raised*/
	while(GET_BIT(TWCR,TWCR_TWINT)==0);

	/*Check the operation status*/
	if((TWSR & 0xF8) !=  MSTR_RD_BYTE_WITH_ACK)
	{
		Local_Error = MasterReadByteError;
	}
	else
	{
		/*Read the received data*/
		*Copy_pu8DataByte = TWDR;
	}

	return Local_Error;
}

void TWI_SendStopCondition(void)
{
	/*Send a stop condition on the bus*/
	SET_BIT(TWCR,TWCR_TWSTO);
	/*Clear the interrupt flag to start the previous operation*/
	SET_BIT(TWCR,TWCR_TWINT);


}
