#ifndef LED_H_
#define LED_H_
/* LED */
#include "Std_Types.h"

#define LED_PORT	PORT_B
#define PORT_A	0
#define PORT_B	1
#define PORT_C	2
#define PORT_D 	3
#define PORT_E 	4
#define PORT_F	5

#define INPUT		0
#define OUTPUT	1 

#define HIGH 	1
#define LOW		0
#define GPIO_Function	0
#define Alternate_Function	1
/*led number*/	
typedef enum 	
{
	PIN_PA0=0 ,
	PIN_PA1	,
	PIN_PA2	,
	PIN_PA3  ,
	PIN_PA4 ,
	PIN_PA5 ,
	PIN_PA6 ,
	PIN_PA7	,
	
	PIN_PB0	,
	PIN_PB1  ,
	PIN_PB2 ,
	PIN_PB3 ,
	PIN_PB4	,
	PIN_PB5,
	PIN_PB6 ,
	PIN_PB7,
	
	PIN_PC0	,
	PIN_PC1  ,
	PIN_PC2 ,
	PIN_PC3 ,
	PIN_PC4	,
	PIN_PC5,
	PIN_PC6 ,
	PIN_PC7,
	
	PIN_PD0	,
	PIN_PD1  ,
	PIN_PD2 ,
	PIN_PD3 ,
	PIN_PD4	,
	PIN_PD5,
	PIN_PD6 ,
	PIN_PD7,
	
	PIN_PE0	,
	PIN_PE1  ,
	PIN_PE2 ,
	PIN_PE3 ,
	PIN_PE4	,
	PIN_PE5,
	
	PIN_PF0	,
	PIN_PF1  ,
	PIN_PF2 ,
	PIN_PF3 ,
	PIN_PF4	,
	
}PIN_Tag;

#define LED_Channel PIN_PA2
#define LED_status	OUTPUT
/* LED VALUE*/
#define LED_Value 0x0f
/* Description: This function shallinitialize the led driver*/
void LED_VoidLedInit(void);

/* Description: This function shall turn on the desired LED*/
void LED_VoidLedOn(u8 LED_u8CopyLedColor);

/*Description : This function shall turn off the desired led*/
void LED_VoidLedOff(u8 LED_u8CopyLedColor);

/*Description :This function shall blink off the desired LED*/
void LED_VoidLedBlink(u8 LED_u8CopyLedColor);

#endif
