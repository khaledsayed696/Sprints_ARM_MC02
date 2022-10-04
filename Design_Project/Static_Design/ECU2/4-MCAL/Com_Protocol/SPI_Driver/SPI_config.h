#ifndef _SPI_CONFIG_H_
#define _SPI_CONFIG_H_

#include "SPI_private.h"

/* Data_Order
 * LSB_TxFirst
 * MSB_TxFirst
 */
#define Data_Order	LSB_TxFirst

/* Master_Slave
 * MASTER
 * SLAVE
 */

#define Master_Slave	MASTER

/* Clock_Polarity
 *Rising_Falling
 *Falling_Rising
 */
#define Clock_Polarity	Rising_Falling

/*Clock_Pahse
 * Sample_Setup
 * Setup_Samples
 */
#define Clock_Pahse	Sample_Setup

/*Clock_Rate
 * Fos_2
 * Fos_4
 * Fos_8
 * Fos_16
 * Fos_32
 * Fos_64
 * Fos_128
 */

#define Clock_Rate	Fos_8

/*	SPI_INTERRUPT_STATUS
 * SPI_DISABLE_INT
 * SPI_ENABLE_INT
 */
#define	SPI_INTERRUPT_STATUS	SPI_DISABLE_INT

/*DOUBLE_SPEED_STATE
 * ENABLE_DOUBLE_SPEED
 * DISABLE_DOUBLE_SPEED
 */
#define		DOUBLE_SPEED_STATE		DISABLE_DOUBLE_SPEED

#endif
