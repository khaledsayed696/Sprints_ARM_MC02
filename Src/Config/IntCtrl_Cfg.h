
#ifndef INTCTRL_CFG_H
#define INTCTRL_CFG_H

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
/*
*	GRO_SUB_PRIO		
*
*	0	(3 bit for group priority and 0 bit for SB)
*	1	(2 bit for group priority and 1 bit for SB)
*	2	(1 bit for group priority and 2 bit for SB)
*	3	(assign the 3 priority bitS for SB)
*/
#define GRO_SUB_PRIO  1

/*
	Exc_Handler		
	MEM			1
	BUS			2
	USAGE		3
	SVC			4
	DEBUG		5
	PENDSV	6
	TICK		7
	
*/
#define Exc_Handler 	7

/*
*	u8IntNumber			0~138		(0 refer to GPIOA Number 16 in vector table) (1 refer to GPTB) ...> according to Vector Table 
*	u8GrouptPriotity	0~7
*	u8SubGrouptPriotity	0~7
*/
#define u8IntNumber  0
#define u8GrouptPriotity  3
#define u8SubGrouptPriotity  1

/*
	INT_EN_DIS	
*	
*	0 Disable
*	1 Enable
*
*/
#define INT_EN_DIS 1
/*
	Int_Type
	
	MEMA	0
	BUSA	1
	USGA	3
	SVCA	7
	MON		8
	PNDSV	10
	TICK	11
	USAGEP	12
	MEMP	13
	BUSP	14
	SVC		15
	MEM		16
	BUS		17
	USAGE	18

*/
#define Int_Type 11

#endif   /* IntCtrl_Cfg_h */

/***************************************************************************
* END OF FILE: IntCtrl_Cfg_h
****************************************************************************/