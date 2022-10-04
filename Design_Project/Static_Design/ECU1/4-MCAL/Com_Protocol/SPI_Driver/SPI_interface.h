#ifndef _SPI_INTERFACE_H
#define _SPI_INTERFACE_H

#include "../../../LIB/STD_TYPES.h"
#include "../../../LIB/BIT_MATH.h"

#include "SPI_config.h"

/******************************************************************
* \Syntax			: void SPI_voidInit();
* \Description		: * This Function Shall : Init Spi
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/
/******************************************************************
* \Syntax			: void SPI_voidTranceive(u8 *Copy_pu8RecieveData, u8 Copy_u8Data);
* \Description		: * This Function Shall : Send and Recive Data
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void SPI_voidSlaveSendByte(u8 Copy_u8DataByte);
* \Description		: * This Function Shall : Slave sen Byte
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: u8 SPI_u8RecByte(u8 * Copy_u8RecByte);
* \Description		: * This Function Shall : Recive
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void SPI_VoidClockRate(void);
* \Description		: * This Function Shall : choos clockRate
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void SPI_voidInitMaster(void);
* \Description		: * This Function Shall : Init Master
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void SPI_voidInitSlave(void);
* \Description		: * This Function Shall : Init Slave
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/
void SPI_voidInit();

void SPI_voidTranceive(u8 *Copy_pu8RecieveData, u8 Copy_u8Data);

void SPI_voidSlaveSendByte(u8 Copy_u8DataByte);

u8 SPI_u8RecByte(u8 * Copy_u8RecByte);

void SPI_VoidClockRate(void);

void SPI_voidInitMaster(void);

void SPI_voidInitSlave(void);





#endif
