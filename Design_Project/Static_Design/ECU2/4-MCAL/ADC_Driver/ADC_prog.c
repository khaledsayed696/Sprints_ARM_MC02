#include "ADC_interface.h"



/********************************** FUNCTIONS DEFINITION ************/
static volatile void (*Ptr2Fun)(void)=NULL;
void ADC_VoidInit()
{
	/* Write Code*/


}

void ADC_VoidStartConversion()
{
	/* Write Code*/


}

u16 ADC_u16ReadData(u8 ADC_u8CopyChannelId)
{
	/* Write Code*/

}

void ADC_VoidDisableADC(void)
{
	/* Write Code*/


}

void __vector_16 (void) __attribute__((signal));	 // ADC
void __vector_16(void)
{
	/* Write Code*/

}

void Set_Call_BackFun(void (*PointerFun)(void))
{
	/* Write Code*/

}
