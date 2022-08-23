#include "DIO.h"
#include "NVIC.h"
#include "TIMER.h"
void Toggle_Led();
u8 flag =0;
int main(void)
{

	LED_VoidLedInit();
	InitCtrl_Init();
	SYSTICK_voidInitialize();
	SYSTICK_voidSetCallBack(Toggle_Led);
	SYSTICK_voidStart(0xFFFFFFF);
	while(1)
	{
	
	}
	
}
           
void Toggle_Led()
{
u8 static counter=0;
	counter++;
	// if you need more than 1 sec and preload value greater than (0xFFFFFF) you can incrased counter according to timer overflow equation
	if(counter == 1)		
	{
		LED_VoidLedBlink(PIN_PA2);
		counter =0;
	}
}