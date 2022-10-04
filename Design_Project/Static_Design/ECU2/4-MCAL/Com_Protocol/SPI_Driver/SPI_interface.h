#ifndef _SPI_INTERFACE_H
#define _SPI_INTERFACE_H

#include "../../../LIB/STD_TYPES.h"
#include "../../../LIB/BIT_MATH.h"

#include "SPI_config.h"
void SPI_voidInit();

void SPI_voidTranceive(u8 *Copy_pu8RecieveData, u8 Copy_u8Data);

void SPI_voidSlaveSendByte(u8 Copy_u8DataByte);

u8 SPI_u8RecByte(u8 * Copy_u8RecByte);

void SPI_VoidClockRate(void);

void SPI_voidInitMaster(void);

void SPI_voidInitSlave(void);





#endif
