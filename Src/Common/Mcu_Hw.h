/*******************************************************************

* FILE DESCRIPTION
--------------------------------------------------------------------
*		FILE: Mcu_Hw.h
*  		Module:  Mcu_Hw
*
*	Description:  header file for Register Definition
*
**********************************************************************/

#ifndef MCU_HW_H
#define MCU_HW_H

/**************************************************************************
* INCLUDE
**************************************************************************/

#include "Std_Types.h"
#include "IntCtrl_Cfg.h"
/*************************************************************************
* GLOBAL DATA TYPES AND STRUCTURE
**************************************************************************/


typedef struct 
{
		u32 				:5;
		u32	MEM			:3;
		u32 		  	:5;
		u32 BUS  		:3;
		u32 				:5;
		u32 USAGE	  :3;
		u32 		   	:8;
}SCB_PRI1;
typedef union
{
	u32 			A;
	SCB_PRI1 	B; 
}SCBPRI1_Tag;
typedef struct 
	{
		u32 				:29;
		u32	SVC			:3;
}SCB_PRI2;
typedef union
{
	u32 			A;
	SCB_PRI2 	B; 
}SCBPRI2_Tag;

typedef struct 
{
		u32 				:5;
		u32	DEBUG		:3;
		u32	    		:13;
		u32	PENDSV  :3;
		u32	        :5;
		u32	TICK    :3;
}SCB_PRI3;
typedef union
{
	u32 				A;
	SCB_PRI3	 	B; 
}SCBPRI3_Tag;

typedef struct 
{
	u32 VECACT		:8;
	u32				:3;
	u32 RETBASE  	:1;
	u32 VECPEND  	:4;
	u32 sVECPEND		:4;
	u32 			  	:2;
	u32 ISRPEND   	:1;
	u32 ISRPRE   	:1;
	u32 		     	:1;
	u32 PENDSTCLR    :1;
	u32 PENDSTSET    :1;
	u32 UNPENDSV  	:1;
	u32 PENDSV  	    :1;
	u32              :2;
	u32 NMISET       :1;
}INTCTRL_BF;
typedef union
{
	u32 		R;
INTCTRL_BF 	B; 
}INTCTRL_Tag;

typedef struct
{
	u32 NVIC_EN0;
	u32 NVIC_EN1;
	u32 NVIC_EN2;
	u32 NVIC_EN3;
	u32 NVIC_EN4;
}INTCTRL_EN;

typedef struct
{
	u32 NVIC_DIS0;
	u32 NVIC_DIS1;
	u32 NVIC_DIS2;
	u32 NVIC_DIS3;
	u32 NVIC_DIS4;
}INTCTRL_DIS;

/*************************************************************************
*  GLOBAL CONSTANT MACROS
*************************************************************************/
#define CORTEXM4_PERI_BASE_ADDRESS	0xE000E000

#define SCB_APINT	 (*((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0xD0C)))
#define INTCTRL	   (*((volatile INTCTRL_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD04)))

#define NVIC_PRI  ((volatile u8*)(CORTEXM4_PERI_BASE_ADDRESS+0x400))
#define SCB_PRI   ((volatile SCBPRI1_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD18))
		
#define NVIC_EN   (*((volatile INTCTRL_EN*)(CORTEXM4_PERI_BASE_ADDRESS+0x100)))
#define NVIC_DIS  (*((volatile INTCTRL_DIS*)(CORTEXM4_PERI_BASE_ADDRESS+0x100)))

#define SCB_SYSHND (*((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0xD24)))

#define SCB_SYSPRI1 (*((volatile SCBPRI1_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD18)))
#define SCB_SYSPRI2 (*((volatile SCBPRI2_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD1C)))
#define SCB_SYSPRI3 (*((volatile SCBPRI3_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD20)))


/**************************************************************************
* GLOBAL DATA PROTOTYPES
***************************************************************************/

#endif	/* MCU_HW_H */

/***************************************************************************
* END OF FILE: MCU_HW_H
****************************************************************************/