#ifndef _SPI_PRIVATE_H
#define _SPI_PRIVATE_H

#include "../../../LIB/STD_TYPES.h"

/* SPI Control Register */
#define		SPI_SPCR			(*((volatile u8*)(0x2D)))

#define		SPCR_SPR0			0	// SPI Clock Rate Select Bit 0
#define		SPCR_SPR1			1	// SPI Clock Rate Select Bit 1
#define		SPCR_CPHA			2	// Clock Phase
#define		SPCR_CPOL			3	// Clock Polarity
#define		SPCR_MSTR			4	// Master/Slave Select
#define		SPCR_DORD			5	// Data Order
#define		SPCR_SPE			6	// SPI Enable
#define		SPCR_SPIE			7	// SPI Interrupt Enable

	/* SPI Status Register */
#define		SPI_SPSR			(*((volatile u8*)(0x2E)))

#define		SPSR_SPI2X			0	// Double SPI Speed Bit
#define		SPSR_WCOL			6	// Write Collision Flag
#define		SPSR_SPIF			7	// SPI Interrupt Flag

	/* SPI Data Register */
#define		SPI_SPDR			(*((volatile u8*)(0x2F)))


	/* For Master or Slave Selection */
#define MASTER					1
#define	SLAVE					0

	/* Default value to put in register */
#define DEFAULT_VALUE			0

 /* Choose Data Order */

#define LSB_TxFirst	1
#define MSB_TxFirst	2

/* Clock Polarity */
#define Rising_Falling	1
#define Falling_Rising	2

/* Clock Phase */
#define Sample_Setup	1
#define Setup_Sample	2

/* Clock Rate*/

#define Fos_2	1
#define Fos_4	2
#define Fos_8	3
#define Fos_16	4
#define Fos_32	5
#define Fos_64	6
#define Fos_128	7

/* Double Speed Mode Activate */
#define ENABLE_DOUBLE_SPEED			1
#define DISABLE_DOUBLE_SPEED		2

/* Interrupt Enable */
#define SPI_ENABLE_INT		1
#define SPI_DISABLE_INT		2


#endif
