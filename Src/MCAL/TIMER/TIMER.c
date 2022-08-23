

/******************************************************************
* \Syntax			: void InitCtrl_Init(void)
* \Description		: initialize Nvic\SCB Module by parsing the Configuration
*					  into Nvic\SCB register
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	: None Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/
#include "Mcu_Hw.h"
#include "TIMER.h"
void (*Systick_CallBack)(void)= NULL;

void SYSTICK_voidInitialize(void)
{
	/*Enable Interrupt and Clock = AHB / 8 */
	SYSTICK->CTRL = Enable_Int;
	
}
void SYSTICK_voidStart(u32 Copy_u32Value)
{
	//u32 SystemFreq = 16000000;
	//u32  Reg_Bit = 8388608;
	//u32 Value =(Reg_Bit * Copy_u32Value)/(SystemFreq) ;
	SYSTICK->LOAD = Copy_u32Value;
	SYSTICK->VAL= reset_value; /* Any value to reset */
	
	/*Start systick*/
	SYSTICK->CTRL |= Start_Sys;	
	
}

void SYSTICK_voidStop(void)
{
		/*Stop Systick*/
	SYSTICK->CTRL &=~ Stop_Sys;	
}

void SYSTICK_voidSetCallBack(void (*Copy_Ptr)(void))
{
	if(Copy_Ptr !=NULL)
	{
		Systick_CallBack = Copy_Ptr;
	}
}

/* ISR */
void SysTick_Handler(void)
{
	if(Systick_CallBack != NULL)
	{
		(*Systick_CallBack)();
		//SYSTICK->CTRL &=~ Stop_Sys;	
	}
	
}
