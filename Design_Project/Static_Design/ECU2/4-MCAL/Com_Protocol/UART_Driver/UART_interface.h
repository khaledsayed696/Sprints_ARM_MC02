#ifndef _UART_INTERFACE_H_
#define _UART_INTERFACE_H_

#include "UART_config.h"
#include "../../../LIB/BIT_MATH.h"
#include "../../../LIB/STD_TYPES.h"


void UART_VoidInit(void);

void UART_VoidSendByte(u8 UART_SentByte);

u8 UART_U8ReceiveByte(u8 * UART_ReceivedByte);

void UART_VoidCharacterSize(void);






#endif
