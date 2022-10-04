#ifndef _UART_CONFIG_H
#define _UART_CONFIG_H


#include "UART_private.h"

/* Charcter Size
 *
 * CS-5bit
 * CS-6bit
 * CS-7bit
 * CS-8bit
 * CS-9bit
 *
 * */
#define Character_Size C8

/*	Mode
 * Async
 * Sync
 */
#define Mode_Select Async

/*	Stop Bit
 * One
 * Two
 */
#define Stop_Bit Two

/*Clock Polarity
 * Rising_Falling
 * Falling_Rising
 */

#define Clock_Polarity Rising_Falling

/* Parity_Mode
 * Disabled
 * Even_Parity
 * Odd_Parity
 */
#define Parity_Mode	Disabled

#endif
