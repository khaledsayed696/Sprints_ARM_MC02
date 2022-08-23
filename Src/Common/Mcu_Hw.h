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

/* BitBanding Region */
#define PERIPHREAL_BIT_BAND_REGION					0x40000000
#define PERIPHREAL_BIT_BAND_ALIS 						0x42000000
#define BYTE_OFFESET(REG_ADD) 							(((u32)REG_ADD) - ((u32)PERIPHREAL_BIT_BAND_REGION))
#define BIT_WORD_OFFESET(REG_ADD,BIT_NUM)		(( (BYTE_OFFESET(REG_ADD)) * 32) + ( BIT_NUM * 4 ))
#define BIT_WORD_ADD(REG_ADD ,BIT_NUM )			(PERIPHREAL_BIT_BAND_ALIS + BIT_WORD_OFFESET(REG_ADD,BIT_NUM))

#define CORTEXM4_PERI_BASE_ADDRESS				0xE000E000
#define GPIOA_APB_BASEADDRESS							0x40004000
#define GPIOB_APB_BASEADDRESS							0x40005000
#define GPIOC_APB_BASEADDRESS							0x40006000
#define GPIOD_APB_BASEADDRESS							0x40007000
#define GPIOE_APB_BASEADDRESS							0x40024000
#define GPIOF_APB_BASEADDRESS							0x40025000

#define PE_DOUT_SET_BASE 0x400060A0

/************************************/
 /* BitBanding Offeset For Port A*/
#define GPIOA_DATA_Off			GPIOA_APB_BASEADDRESS
#define GPIOA_DIR_Off				GPIOA_APB_BASEADDRESS+0x400
#define GPIOA_LOCK_Off			GPIOA_APB_BASEADDRESS+0x520
#define GPIOA_CR_Off				GPIOA_APB_BASEADDRESS+0x524
#define GPIOA_PCTL_Off			GPIOA_APB_BASEADDRESS+0x52C
#define GPIOA_AMCL_Off  		GPIOA_APB_BASEADDRESS+0x528
#define GPIOA_AFSEL_Off 		GPIOA_APB_BASEADDRESS+0x420
#define GPIOA_PUR_Off   		GPIOA_APB_BASEADDRESS+0x510
#define GPIOA_PDR_Off   		GPIOA_APB_BASEADDRESS+0x514
#define GPIOA_DEN_Off   		GPIOA_APB_BASEADDRESS+0x51C
/***********************************/
 /* BitBanding Offeset For Port B*/
#define GPIOB_DATA_Off			GPIOB_APB_BASEADDRESS
#define GPIOB_DIR_Off				GPIOB_APB_BASEADDRESS+0x400
#define GPIOB_LOCK_Off			GPIOB_APB_BASEADDRESS+0x520
#define GPIOB_CR_Off				GPIOB_APB_BASEADDRESS+0x524
#define GPIOB_PCTL_Off			GPIOB_APB_BASEADDRESS+0x52C
#define GPIOB_AMCL_Off  		GPIOB_APB_BASEADDRESS+0x528
#define GPIOB_AFSEL_Off 		GPIOB_APB_BASEADDRESS+0x420
#define GPIOB_PUR_Off   		GPIOB_APB_BASEADDRESS+0x510
#define GPIOB_PDR_Off   		GPIOB_APB_BASEADDRESS+0x514
#define GPIOB_DEN_Off   		GPIOB_APB_BASEADDRESS+0x51C
/***********************************/
 /* BitBanding Offeset For Port B*/
#define GPIOC_DATA_Off			GPIOC_APB_BASEADDRESS
#define GPIOC_DIR_Off				GPIOC_APB_BASEADDRESS+0x400
#define GPIOC_LOCK_Off			GPIOC_APB_BASEADDRESS+0x520
#define GPIOC_CR_Off				GPIOC_APB_BASEADDRESS+0x524
#define GPIOC_PCTL_Off			GPIOC_APB_BASEADDRESS+0x52C
#define GPIOC_AMCL_Off  		GPIOC_APB_BASEADDRESS+0x528
#define GPIOC_AFSEL_Off 		GPIOC_APB_BASEADDRESS+0x420
#define GPIOC_PUR_Off   		GPIOC_APB_BASEADDRESS+0x510
#define GPIOC_PDR_Off   		GPIOC_APB_BASEADDRESS+0x514
#define GPIOC_DEN_Off   		GPIOC_APB_BASEADDRESS+0x51C
/***********************************/
/* BitBanding Offeset For Port B*/
#define GPIOD_DATA_Off			GPIOD_APB_BASEADDRESS
#define GPIOD_DIR_Off				GPIOD_APB_BASEADDRESS+0x400
#define GPIOD_LOCK_Off			GPIOD_APB_BASEADDRESS+0x520
#define GPIOD_CR_Off				GPIOD_APB_BASEADDRESS+0x524
#define GPIOD_PCTL_Off			GPIOD_APB_BASEADDRESS+0x52C
#define GPIOD_AMCL_Off  		GPIOD_APB_BASEADDRESS+0x528
#define GPIOD_AFSEL_Off 		GPIOD_APB_BASEADDRESS+0x420
#define GPIOD_PUR_Off   		GPIOD_APB_BASEADDRESS+0x510
#define GPIOD_PDR_Off   		GPIOD_APB_BASEADDRESS+0x514
#define GPIOD_DEN_Off   		GPIOD_APB_BASEADDRESS+0x51C
/***********************************/
/* BitBanding Offeset For Port B*/
#define GPIOE_DATA_Off			GPIOE_APB_BASEADDRESS
#define GPIOE_DIR_Off				GPIOE_APB_BASEADDRESS+0x400
#define GPIOE_LOCK_Off			GPIOE_APB_BASEADDRESS+0x520
#define GPIOE_CR_Off				GPIOE_APB_BASEADDRESS+0x524
#define GPIOE_PCTL_Off			GPIOE_APB_BASEADDRESS+0x52C
#define GPIOE_AMCL_Off  		GPIOE_APB_BASEADDRESS+0x528
#define GPIOE_AFSEL_Off 		GPIOE_APB_BASEADDRESS+0x420
#define GPIOE_PUR_Off   		GPIOE_APB_BASEADDRESS+0x510
#define GPIOE_PDR_Off   		GPIOE_APB_BASEADDRESS+0x514
#define GPIOE_DEN_Off   		GPIOE_APB_BASEADDRESS+0x51C
/***********************************/
/* BitBanding Offeset For Port B*/
#define GPIOF_DATA_Off			GPIOF_APB_BASEADDRESS
#define GPIOF_DIR_Off				GPIOF_APB_BASEADDRESS+0x400
#define GPIOF_LOCK_Off			GPIOF_APB_BASEADDRESS+0x520
#define GPIOF_CR_Off				GPIOF_APB_BASEADDRESS+0x524
#define GPIOF_PCTL_Off			GPIOF_APB_BASEADDRESS+0x52C
#define GPIOF_AMCL_Off  		GPIOF_APB_BASEADDRESS+0x528
#define GPIOF_AFSEL_Off 		GPIOF_APB_BASEADDRESS+0x420
#define GPIOF_PUR_Off   		GPIOF_APB_BASEADDRESS+0x510
#define GPIOF_PDR_Off   		GPIOF_APB_BASEADDRESS+0x514
#define GPIOF_DEN_Off   		GPIOF_APB_BASEADDRESS+0x51C
/***********************************/
/* Bit banding Macros */
#define Pb_GPIOA_DATA(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOA_APB_BASEADDRESS,Bit_Num))))
#define Pb_GPIOA_DIR(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOA_DIR_Off,Bit_Num))))
#define Pb_GPIOA_LOCK 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOA_LOCK_Off,2))))
#define Pb_GPIOA_CR(Bit_Num) 			(*((volatile u32 *)(BIT_WORD_ADD(GPIOA_CR_Off,Bit_Num))))
#define Pb_GPIOA_PCTL 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOA_PCTL_Off,2))))
#define Pb_GPIOA_AMCL 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOA_AMCL_Off,2))))
#define Pb_GPIOA_AFSEL(Bit_Num) 	(*((volatile u32 *)(BIT_WORD_ADD(GPIOA_AFSEL_Off,Bit_Num))))
#define Pb_GPIOA_PUR(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOA_PUR_Off,Bit_Num))))
#define Pb_GPIOA_PDR 							(*((volatile u32 *)(BIT_WORD_ADD(GPIOA_PDR_Off,2))))
#define Pb_GPIOA_DEN(Bit_Num)			(*((volatile u32 *)(BIT_WORD_ADD(GPIOA_DEN_Off,Bit_Num))))
/****************************/

/* Bit banding Macros */
#define Pb_GPIOB_DATA(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOB_APB_BASEADDRESS,Bit_Num))))
#define Pb_GPIOB_DIR(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOB_DIR_Off,Bit_Num))))
#define Pb_GPIOB_LOCK 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOB_LOCK_Off,2))))
#define Pb_GPIOB_CR(Bit_Num) 			(*((volatile u32 *)(BIT_WORD_ADD(GPIOB_CR_Off,Bit_Num))))
#define Pb_GPIOB_PCTL 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOB_PCTL_Off,2))))
#define Pb_GPIOB_AMCL 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOB_AMCL_Off,2))))
#define Pb_GPIOB_AFSEL(Bit_Num) 	(*((volatile u32 *)(BIT_WORD_ADD(GPIOB_AFSEL_Off,Bit_Num))))
#define Pb_GPIOB_PUR(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOB_PUR_Off,Bit_Num))))
#define Pb_GPIOB_PDR 							(*((volatile u32 *)(BIT_WORD_ADD(GPIOB_PDR_Off,2))))
#define Pb_GPIOB_DEN(Bit_Num)			(*((volatile u32 *)(BIT_WORD_ADD(GPIOB_DEN_Off,Bit_Num))))
/****************************/
/* Bit banding Macros */
#define Pb_GPIOC_DATA(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOC_APB_BASEADDRESS,Bit_Num))))
#define Pb_GPIOC_DIR(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOC_DIR_Off,Bit_Num))))
#define Pb_GPIOC_LOCK 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOC_LOCK_Off,2))))
#define Pb_GPIOC_CR(Bit_Num) 			(*((volatile u32 *)(BIT_WORD_ADD(GPIOC_CR_Off,Bit_Num))))
#define Pb_GPIOC_PCTL 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOC_PCTL_Off,2))))
#define Pb_GPIOC_AMCL 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOC_AMCL_Off,2))))
#define Pb_GPIOC_AFSEL(Bit_Num) 	(*((volatile u32 *)(BIT_WORD_ADD(GPIOC_AFSEL_Off,Bit_Num))))
#define Pb_GPIOC_PUR(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOC_PUR_Off,Bit_Num))))
#define Pb_GPIOC_PDR 							(*((volatile u32 *)(BIT_WORD_ADD(GPIOC_PDR_Off,2))))
#define Pb_GPIOC_DEN(Bit_Num)			(*((volatile u32 *)(BIT_WORD_ADD(GPIOC_DEN_Off,Bit_Num))))
/****************************/
/* Bit banding Macros */
#define Pb_GPIOD_DATA(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOD_APB_BASEADDRESS,Bit_Num))))
#define Pb_GPIOD_DIR(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOD_DIR_Off,Bit_Num))))
#define Pb_GPIOD_LOCK 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOD_LOCK_Off,2))))
#define Pb_GPIOD_CR(Bit_Num) 			(*((volatile u32 *)(BIT_WORD_ADD(GPIOD_CR_Off,Bit_Num))))
#define Pb_GPIOD_PCTL 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOD_PCTL_Off,2))))
#define Pb_GPIOD_AMCL 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOD_AMCL_Off,2))))
#define Pb_GPIOD_AFSEL(Bit_Num) 	(*((volatile u32 *)(BIT_WORD_ADD(GPIOD_AFSEL_Off,Bit_Num))))
#define Pb_GPIOD_PUR(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOD_PUR_Off,Bit_Num))))
#define Pb_GPIOD_PDR 							(*((volatile u32 *)(BIT_WORD_ADD(GPIOD_PDR_Off,2))))
#define Pb_GPIOD_DEN(Bit_Num)			(*((volatile u32 *)(BIT_WORD_ADD(GPIOD_DEN_Off,Bit_Num))))
/****************************/
/* Bit banding Macros */
#define Pb_GPIOE_DATA(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOE_APB_BASEADDRESS,Bit_Num))))
#define Pb_GPIOE_DIR(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOE_DIR_Off,Bit_Num))))
#define Pb_GPIOE_LOCK 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOE_LOCK_Off,2))))
#define Pb_GPIOE_CR(Bit_Num) 			(*((volatile u32 *)(BIT_WORD_ADD(GPIOE_CR_Off,Bit_Num))))
#define Pb_GPIOE_PCTL 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOE_PCTL_Off,2))))
#define Pb_GPIOE_AMCL 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOE_AMCL_Off,2))))
#define Pb_GPIOE_AFSEL(Bit_Num) 	(*((volatile u32 *)(BIT_WORD_ADD(GPIOE_AFSEL_Off,Bit_Num))))
#define Pb_GPIOE_PUR(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOE_PUR_Off,Bit_Num))))
#define Pb_GPIOE_PDR 							(*((volatile u32 *)(BIT_WORD_ADD(GPIOE_PDR_Off,2))))
#define Pb_GPIOE_DEN(Bit_Num)			(*((volatile u32 *)(BIT_WORD_ADD(GPIOE_DEN_Off,Bit_Num))))
/****************************/
/* Bit banding Macros */
#define Pb_GPIOF_DATA(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOF_APB_BASEADDRESS,Bit_Num))))
#define Pb_GPIOF_DIR(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOF_DIR_Off,Bit_Num))))
#define Pb_GPIOF_LOCK 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOF_LOCK_Off,2))))
#define Pb_GPIOF_CR(Bit_Num) 			(*((volatile u32 *)(BIT_WORD_ADD(GPIOF_CR_Off,Bit_Num))))
#define Pb_GPIOF_PCTL 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOF_PCTL_Off,2))))
#define Pb_GPIOF_AMCL 						(*((volatile u32 *)(BIT_WORD_ADD(GPIOF_AMCL_Off,2))))
#define Pb_GPIOF_AFSEL(Bit_Num) 	(*((volatile u32 *)(BIT_WORD_ADD(GPIOF_AFSEL_Off,Bit_Num))))
#define Pb_GPIOF_PUR(Bit_Num) 		(*((volatile u32 *)(BIT_WORD_ADD(GPIOF_PUR_Off,Bit_Num))))
#define Pb_GPIOF_PDR 							(*((volatile u32 *)(BIT_WORD_ADD(GPIOF_PDR_Off,2))))
#define Pb_GPIOF_DEN(Bit_Num)			(*((volatile u32 *)(BIT_WORD_ADD(GPIOF_DEN_Off,Bit_Num))))
/****************************/
#define SCB_APINT	 (*((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0xD0C)))
#define INTCTRL	   (*((volatile INTCTRL_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD04)))

#define NVIC_PRI  ((volatile u8*)(CORTEXM4_PERI_BASE_ADDRESS+0x400))
#define SCB_PRI   ((volatile SCBPRI1_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD18))
		
#define NVIC_EN   (*((volatile INTCTRL_EN*)(CORTEXM4_PERI_BASE_ADDRESS+0x100)))
#define NVIC_DIS  (*((volatile INTCTRL_DIS*)(CORTEXM4_PERI_BASE_ADDRESS+0x100)))

#define SCB_SYSHND (*((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0xD24)))
#define SCB_INTCTRL (*((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0xD04)))

#define SCB_SYSPRI1 (*((volatile SCBPRI1_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD18)))
#define SCB_SYSPRI2 (*((volatile SCBPRI2_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD1C)))
#define SCB_SYSPRI3 (*((volatile SCBPRI3_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD20)))

#define GPIOA_DATA			(*((volatile u32*)(GPIOA_APB_BASEADDRESS)))
#define GPIOB_DATA			(*((volatile u32*)(GPIOB_APB_BASEADDRESS)))
#define GPIOC_DATA			(*((volatile u32*)(GPIOC_APB_BASEADDRESS)))
#define GPIOD_DATA			(*((volatile u32*)(GPIOD_APB_BASEADDRESS)))
#define GPIOE_DATA			(*((volatile u32*)(GPIOE_APB_BASEADDRESS)))
#define GPIOF_DATA			(*((volatile u32*)(GPIOF_APB_BASEADDRESS)))

#define GPIOA_DIR		(*((volatile u32*)(GPIOA_APB_BASEADDRESS+0x400)))
#define GPIOA_LOCK	  (*((volatile u32*)(GPIOA_APB_BASEADDRESS+0x520)))  
#define GPIOA_CR		  (*((volatile u32*)(GPIOA_APB_BASEADDRESS+0x524)))	//GPIO Commit
#define GPIOA_PCTL   (*((volatile u32*)(GPIOA_APB_BASEADDRESS+0x52C)))	// GPIO Port Control
#define GPIOA_AMCL   (*((volatile u32*)(GPIOA_APB_BASEADDRESS+0x528)))	//GPIO Analog Mode Select
#define GPIOA_AFSEL (*((volatile u32*)(GPIOA_APB_BASEADDRESS+0x420)))	// GPIO Alternate Function Select
#define GPIOA_PUR   (*((volatile u32*)(GPIOA_APB_BASEADDRESS+0x510)))	// Pull Up
#define GPIOA_PDR   (*((volatile u32*)(GPIOA_APB_BASEADDRESS+0x514)))	// Pull DOwn
#define GPIOA_DEN   (*((volatile u32*)(GPIOA_APB_BASEADDRESS+0x51C)))	// Digital Enbable

#define GPIOB_DATA	(*((volatile u32*)(GPIOB_APB_BASEADDRESS)))
#define GPIOB_DIR		(*((volatile u32*)(GPIOB_APB_BASEADDRESS+0x400)))
#define GPIOB_LOCK	  (*((volatile u32*)(GPIOB_APB_BASEADDRESS+0x520)))  
#define GPIOB_CR		  (*((volatile u32*)(GPIOB_APB_BASEADDRESS+0x524)))	//GPIO Commit
#define GPIOB_PCTL   (*((volatile u32*)(GPIOB_APB_BASEADDRESS+0x52C)))	// GPIO Port Control
#define GPIOB_AMCL   (*((volatile u32*)(GPIOB_APB_BASEADDRESS+0x528)))	//GPIO Analog Mode Select
#define GPIOB_AFSEL (*((volatile u32*)(GPIOB_APB_BASEADDRESS+0x420)))	// GPIO Alternate Function Select
#define GPIOB_PUR   (*((volatile u32*)(GPIOB_APB_BASEADDRESS+0x510)))	// Pull Up
#define GPIOB_PDR   (*((volatile u32*)(GPIOB_APB_BASEADDRESS+0x514)))	// Pull DOwn
#define GPIOB_DEN   (*((volatile u32*)(GPIOB_APB_BASEADDRESS+0x51C)))	// Digital Enbable
	
#define GPIODATA_Mask	(*((volatile u32*)(GPIOA_APB_BASEADDRESS)))
#define GPIODATB_Mask	(*((volatile u32*)(GPIOB_APB_BASEADDRESS+0x098)))

#define RCGCGPIO  (*((volatile u32*)(0x400FE000+0x608)))
#define STK_CTRL		(*((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x010)))
#define STK_LOAD	(*((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x014)))
#define STK_VAL	(*((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0x018)))	

#define BASE_ADDRESS	0xE000E010
#define Enable_Int		(0x00000002)
#define reset_value 	0
#define Start_Sys 		(1<<0)
#define Stop_Sys 		(1<<0)

typedef struct
{
	u32	CTRL;
	u32 LOAD;
	u32 VAL;
	u32 CALIB
	
}Sys_t;

#define	SYSTICK	((volatile Sys_t*)BASE_ADDRESS)


/**************************************************************************
* GLOBAL DATA PROTOTYPES
***************************************************************************/

#endif	/* MCU_HW_H */

/***************************************************************************
* END OF FILE: MCU_HW_H
****************************************************************************/