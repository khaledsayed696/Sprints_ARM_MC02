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
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/
/******************************************************************
* \Syntax			: void SPI_voidTranceive(u8 *Copy_pu8RecieveData, u8 Copy_u8Data);
* \Description		: * This Function Shall : Send and Recive Data
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: pointer to Copy_pu8RecieveData , Copy_u8Data
						Copy_pu8RecieveData -> ( size:255 bits , range: zero or 255 ,type u8, description this variable defines pointer Copy_pu8RecieveData)
						Copy_u8Data -> ( size:255 bits , range: zero or 255 ,type u8, description this variable defines Copy_u8Data)
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			: void SPI_voidSlaveSendByte(u8 Copy_u8DataByte);
* \Description		: * This Function Shall : Slave sen Byte
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: Copy_u8DataByte
						Copy_u8DataByte -> ( size:255 bits , range: zero or 255 ,type u8, description this variable defines Copy_u8DataByte)
						
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			: u8 SPI_u8RecByte(u8 * Copy_u8RecByte);
* \Description		: * This Function Shall : Recive
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: pointer to Copy_u8RecByte
						Copy_u8RecByte -> ( size:255 bits , range: zero or 255 ,type u8, description this variable defines pointerv to Copy_u8RecByte)
						
* \Return value     : u8
*********************************************************************/

/******************************************************************
* \Syntax			: void SPI_VoidClockRate(void);
* \Description		: * This Function Shall : choos clockRate
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			: void SPI_voidInitMaster(void);
* \Description		: * This Function Shall : Init Master
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			: void SPI_voidInitSlave(void);
* \Description		: * This Function Shall : Init Slave
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/
void SPI_voidInit();

void SPI_voidTranceive(u8 *Copy_pu8RecieveData, u8 Copy_u8Data);

void SPI_voidSlaveSendByte(u8 Copy_u8DataByte);

u8 SPI_u8RecByte(u8 * Copy_u8RecByte);

void SPI_VoidClockRate(void);

void SPI_voidInitMaster(void);

void SPI_voidInitSlave(void);





#endif
