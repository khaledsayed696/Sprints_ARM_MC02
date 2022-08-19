
#ifndef INTCTRL_CFG_H
#define INTCTRL_CFG_H
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
#define Exc_Handler 	3

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
#define Int_Type 18

#endif   /* IntCtrl_Cfg_h */

/***************************************************************************
* END OF FILE: IntCtrl_Cfg_h
****************************************************************************/