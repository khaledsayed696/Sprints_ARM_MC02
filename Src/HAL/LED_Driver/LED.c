#include "LED.h"

void LED_VoidLedInit(void)
{
	Dio_voidSetPinMode(LED_Channel,LED_status);
}

void LED_VoidLedOn(u8 LED_u8CopyLedColor)
{
	Dio_WriteChannnel(LED_Channel , HIGH);
}

void LED_VoidLedOff(u8 LED_u8CopyLedColor)
{
	Dio_WriteChannnel(LED_Channel , LOW);
}
void LED_VoidLedBlink(u8 LED_u8CopyLedColor)
{
	Dio_FlipChannel(LED_Channel);
}
