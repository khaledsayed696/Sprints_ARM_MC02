
#include "SPI_interface.h"

void SPI_voidInit()
{
	/* SPCR_SPE */
	SET_BIT(SPI_SPCR,SPCR_SPE);
	/*  Data Order  */
	#if Data_Order == LSB_TxFirst
		SET_BIT(SPI_SPCR,SPCR_DORD);
	#elif Data_Order == MSB_TxFirst
		CLR_BIT(SPI_SPCR,SPCR_DORD);
	#else
		#error "Error Your Mode Selected is not optional"
	#endif

	/* Master/Slave */
	#if Master_Slave == MASTER
		SET_BIT(SPI_SPCR,SPCR_MSTR);
	#elif Master_Slave == SLAVE
		CLR_BIT(SPI_SPCR,SPCR_MSTR);
	#else
		#error "Error Your Mode Selected is not optional"
	#endif

	/* Clock Polarity*/
	#if Clock_Polarity == Rising_Falling
		CLR_BIT(SPI_SPCR,SPCR_CPOL);
	#elif Clock_Polarity == Falling_Rising
		SET_BIT(SPI_SPCR,SPCR_CPOL);
	#else
		#error "Error Your Clock Polarity Selected is not optional"
	#endif

	#if Clock_Pahse == Sample_Setup
		CLR_BIT(SPI_SPCR,SPCR_CPHA);
	#elif Clock_Pahse == Falling_Rising
		SET_BIT(SPI_SPCR,SPCR_CPHA);
	#else
		#error "Error Your Clock Polarity Selected is not optional"
	#endif

		SPI_VoidClockRate();

		/* Enable Double Speed Mode */
			#if	DOUBLE_SPEED_STATE == DISABLE_DOUBLE_SPEED
				CLR_BIT(SPI_SPSR , SPSR_SPI2X);
			#elif	DOUBLE_SPEED_STATE == ENABLE_DOUBLE_SPEED
				SET_BIT(SPI_SPSR , SPSR_SPI2X);
			#endif

		/* SPI Interrupt Enable/Disable */
			#if	SPI_INTERRUPT_STATUS == SPI_DISABLE_INT
				CLR_BIT(SPI_SPCR , SPCR_SPIE);
			#elif	SPI_INTERRUPT_STATUS == SPI_ENABLE_INT
				SET_BIT(SPI_SPCR , SPCR_SPIE);
			#endif



}
void SPI_VoidClockRate(void)
{
	#if Clock_Rate == Fos_2
	CLR_BIT(SPI_SPCR,SPCR_SPR0);
	CLR_BIT(SPI_SPCR,SPCR_SPR1);
	SET_BIT(SPI_SPSR,SPSR_SPI2X);
	#elif ck_Rate == Fos_4
	CLR_BIT(SPI_SPCR,SPCR_SPR0);
	CLR_BIT(SPI_SPCR,SPCR_SPR1);
	CLR_BIT(SPI_SPSR,SPSR_SPI2X);

	#elif Clock_Rate == Fos_8
		SET_BIT(SPI_SPCR,SPCR_SPR0);
		CLR_BIT(SPI_SPCR,SPCR_SPR1);
		SET_BIT(SPI_SPSR,SPSR_SPI2X);
	#elif Clock_Rate == Fos_16
		SET_BIT(SPI_SPCR,SPCR_SPR0);
		CLR_BIT(SPI_SPCR,SPCR_SPR1);
		CLR_BIT(SPI_SPSR,SPSR_SPI2X);
	#elif Clock_Rate == Fos_32
		CLR_BIT(SPI_SPCR,SPCR_SPR0);
		SET_BIT(SPI_SPCR,SPCR_SPR1);
		SET_BIT(SPI_SPSR,SPSR_SPI2X);
	#elif Clock_Rate == Fos_64
		CLR_BIT(SPI_SPCR,SPCR_SPR0);
		SET_BIT(SPI_SPCR,SPCR_SPR1);
		CLR_BIT(SPI_SPSR,SPSR_SPI2X);

	#elif Clock_Rate == Fos_128
		SET_BIT(SPI_SPCR,SPCR_SPR0);
		SET_BIT(SPI_SPCR,SPCR_SPR1);
		CLR_BIT(SPI_SPSR,SPSR_SPI2X);


	#endif
}

void SPI_voidTranceive(u8 *Copy_pu8RecieveData, u8 Copy_u8Data)
{
	SPI_SPDR = Copy_u8Data;
	while(GET_BIT(SPI_SPSR,SPSR_SPIF) == 0);
	*Copy_pu8RecieveData=SPI_SPDR;
}

void SPI_voidSlaveSendByte(u8 Copy_u8DataByte)
{
	SPI_SPDR = Copy_u8DataByte;
	/* WAIT UTILE DATA TRANSFER COMPLETE*/
	while(GET_BIT(SPI_SPSR,SPSR_SPIF) == 0);

}

u8 SPI_u8RecByte(u8 * Copy_u8RecByte)
{
	u8 SPI_RECEVE =0;
	if(Copy_u8RecByte != NULL)
	{
	while(GET_BIT(SPI_SPSR,SPSR_SPIF) == 0);
	*Copy_u8RecByte = SPI_SPDR;
	SPI_RECEVE =1;
	}
	return SPI_RECEVE;
}

void SPI_voidInitMaster(void)
{
	/* Master choose*/
	SET_BIT(SPI_SPCR,SPCR_MSTR);
	/* Clock 16*/
	SET_BIT(SPI_SPCR,SPCR_SPR0);
	CLR_BIT(SPI_SPCR,SPCR_SPR1);
	CLR_BIT(SPI_SPSR,SPSR_SPI2X);

	/*Enable SPI*/
	SET_BIT(SPI_SPCR,SPCR_SPE);

}
void SPI_voidInitSlave(void)
{
	/* Slave choose*/
		CLR_BIT(SPI_SPCR,SPCR_MSTR);
		/*Enable SPI*/
		SET_BIT(SPI_SPCR,SPCR_SPE);
}
