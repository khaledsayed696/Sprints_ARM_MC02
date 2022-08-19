/*
*	GRO_SUB_PRIO
*
*	0	3 for group priority and 0 bit for SB
*	1	2 for group priority and 1 bit for SB
*	2	1 for group priority and 2 bit for SB
*	3	assign the 3 priority bitS for SB
*/
#define GRO_SUB_PRIO  0
/*
*	u8IntNumber			0~138
*	u8GrouptPriotity	0~7
*	u8SubGrouptPriotity	0~7
*/
#define u8IntNumber  1
#define u8GrouptPriotity  2
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