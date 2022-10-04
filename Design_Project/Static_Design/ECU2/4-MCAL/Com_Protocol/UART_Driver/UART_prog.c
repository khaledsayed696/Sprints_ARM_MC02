#include "UART_interface.h"
#include "../../../LIB/BIT_MATH.h"
#include "../../../LIB/STD_TYPES.h"




void UART_VoidInit(void)
{

	UART_UCSRC_Reg=0b10000000;
	/* Normal Speed in Asynchronus mode*/
CLR_BIT(UART_UCSRA_Reg,UART_UCSRA_U2X);
CLR_BIT(UART_UCSRA_Reg,UART_UCSRA_MPCM);

/*ENABLE Tx And Rx Full Duplex*/
SET_BIT(UART_UCSRB_Reg,UART_UCSRB_RXEN);
SET_BIT(UART_UCSRB_Reg,UART_UCSRB_TXEN);

/*Character Size*/
	UART_VoidCharacterSize();

/* Mode Select */
	#if	Mode_Select == Async
		CLR_BIT(UART_UCSRC_Reg,UART_UCSRC_UMSEL);

	#elif Mode_Select == Sync
		SET_BIT(UART_UCSRC_Reg,UART_UCSRC_UMSEL);

	#else
		#error "Error your mode selected is not optional"
	#endif

		/* Parity Mode*/
	#if	Parity_Mode == Disabled
		CLR_BIT(UART_UCSRC_Reg,UART_UCSRC_UPM0);
		CLR_BIT(UART_UCSRC_Reg,UART_UCSRC_UPM1);

	#elif Parity_Mode ==  Even_Parity
		CLR_BIT(UART_UCSRC_Reg,UART_UCSRC_UPM0);
		SET_BIT(UART_UCSRC_Reg,UART_UCSRC_UPM1);

	#elif Parity_Mode ==  Odd_Parity
		SET_BIT(UART_UCSRC_Reg,UART_UCSRC_UPM0);
		SET_BIT(UART_UCSRC_Reg,UART_UCSRC_UPM1);

	#else
		#error "Error your Parity selected is not optional"
	#endif

/* Stop Bit*/

	#if	Stop_Bit == One
		CLR_BIT(UART_UCSRC_Reg,UART_UCSRC_USBS);

	#elif Stop_Bit == Two
		SET_BIT(UART_UCSRC_Reg,UART_UCSRC_USBS);

	#else
		#error "Error your Stop_Bit selected is not optional"
	#endif

		UART_VoidCharacterSize();

		/* Clock Ploarity */
	#if	Clock_Polarity == Rising_Falling
		CLR_BIT(UART_UCSRC_Reg,UART_UCSRC_UCPOL);

	#elif Clock_Polarity == Falling_Risinf
		SET_BIT(UART_UCSRC_Reg,UART_UCSRC_UCPOL);

	#else
		#error "Error your Clock Polarity selected is not optional"
	#endif


	u16 Baud=51 ;

	UART_UBRRL_Reg = (u8)Baud;
	UART_UBRRH_Reg = (u8)(Baud>>8);


}

void UART_VoidCharacterSize(void)
{
#if Character_Size == C5
		CLR_BIT(UART_UCSRC_Reg,UART_UCSRC_UCSZ0);
		CLR_BIT(UART_UCSRC_Reg,UART_UCSRC_UCSZ1);
		CLR_BIT(UART_UCSRB_Reg,UART_UCSRB_UCSZ2);

	#elif Character_Size == C6
		SET_BIT(UART_UCSRC_Reg,UART_UCSRC_UCSZ0);
		CLR_BIT(UART_UCSRC_Reg,UART_UCSRC_UCSZ1);
		CLR_BIT(UART_UCSRB_Reg,UART_UCSRB_UCSZ2);
	#elif Character_Size == C7
		CLR_BIT(UART_UCSRC_Reg,UART_UCSRC_UCSZ0);
		SET_BIT(UART_UCSRC_Reg,UART_UCSRC_UCSZ1);
		CLR_BIT(UART_UCSRB_Reg,UART_UCSRB_UCSZ2);
	#elif Character_Size == C8
		SET_BIT(UART_UCSRC_Reg,UART_UCSRC_UCSZ0);
		SET_BIT(UART_UCSRC_Reg,UART_UCSRC_UCSZ1);
		CLR_BIT(UART_UCSRB_Reg,UART_UCSRB_UCSZ2);
	#elif Character_Size == C9
		SET_BIT(UART_UCSRC_Reg,UART_UCSRC_UCSZ0);
		SET_BIT(UART_UCSRC_Reg,UART_UCSRC_UCSZ1);
		SER_BIT(UART_UCSRB_Reg,UART_UCSRB_UCSZ2);

	#else
		#error "Error your charcter size is not optional"
	#endif

}

void UART_VoidSendByte(u8 UART_SentByte)
{

	while(GET_BIT(UART_UCSRA_Reg,UART_UCSRA_UDRE) == 0);
	UART_UDR_Reg=UART_SentByte;
}

u8 UART_U8ReceiveByte(u8 * UART_ReceivedByte)
{
	u8 receive_flag=0;
	if(UART_U8ReceiveByte != NULL)
	{
	while(GET_BIT(UART_UCSRA_Reg,UART_UCSRA_RXC)== 0);
	*UART_ReceivedByte = UART_UDR_Reg;
	receive_flag=1;
	}
	return *UART_ReceivedByte;

}

