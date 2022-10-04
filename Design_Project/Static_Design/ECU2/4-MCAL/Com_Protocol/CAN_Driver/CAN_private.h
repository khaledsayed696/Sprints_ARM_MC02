#ifndef _UART_PRIVATE_H
#define _UART_PRIVATE_H
#include "../../../LIB/BIT_MATH.h"
#include "../../../LIB/STD_TYPES.h"

#define UART_UBRRH_Reg  *((volatile u8*)0x40)

#define UART_UCSRC_Reg *((volatile u8*)0x40)

#define UART_UCSRC_URSEL		7
#define UART_UCSRC_UMSEL		6
#define UART_UCSRC_UPM1			5
#define UART_UCSRC_UPM0			4
#define UART_UCSRC_USBS			3
#define UART_UCSRC_UCSZ1		2
#define UART_UCSRC_UCSZ0		1
#define UART_UCSRC_UCPOL		0



#define UART_UDR_Reg    *((volatile u8*)0x2C)

#define UART_UCSRA_Reg  *((volatile u8*)0x2B)

#define UART_UCSRA_RXC 	7
#define UART_UCSRA_TXC	6
#define UART_UCSRA_UDRE 5

#define UART_UCSRA_U2X	1
#define UART_UCSRA_MPCM	0


#define UART_UCSRB_Reg *((volatile u8*)0x2A)

#define UART_UCSRB_TXEN		3
#define UART_UCSRB_RXEN		4
#define UART_UCSRB_UCSZ2	2
#define UART_UCSRB_RXB8		1
#define UART_UCSRB_TXB8		0


#define UART_UBRRL_Reg *((volatile u8*)0x29)

/*Add macros for the bits*/

#define C5	1
#define C6	2
#define C7	3
#define C8	4
#define C9	5

#define Async	1
#define Sync	2

#define One	1
#define Two 2

#define Rising_Falling	1
#define Falling_Rising	2



#define Disabled		1
#define Even_Parity		2
#define Odd_Parity		3

#endif
