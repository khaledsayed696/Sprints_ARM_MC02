/*******************************************************************

* FILE DESCRIPTION
--------------------------------------------------------------------
*		FILE: IntCtrl.h
*  		Module:  IntCtrl
*
*	Description:  <Write File DESCRIPTION here>
*
**********************************************************************/

#ifndef PORT_H
#define PORT_H

/**************************************************************************
* INCLUDE
**************************************************************************/

#include "Std_Types.h"
#include "IntCtrl_Cfg.h"
#include "Mcu_Hw.h"

/*************************************************************************
*  GLOBAL CONSTANT MACROS
*************************************************************************/
#define GROUP_PRIORITY 0
#define GPIO_Select				  	0
#define Alternate_Function	  1
#define Open_Drain						2

/************************************************************************
* GLOBAL FUNCTION MACROS
*************************************************************************/



/*************************************************************************
* GLOBAL DATA TYPES AND STRUCTURE
**************************************************************************/


/**************************************************************************
* GLOBAL DATA PROTOTYPES
***************************************************************************/


/*************************************************************************
* GLOBAL FUNCTION PROTOTYPES
**************************************************************************/

/******************************************************************
* \Syntax			: void Dio_voidSetPinMode(const Gpt_ConfigType *ConfigPtr );
* \Description		: Set Initialization of PORT
*					 
*	
* \Sync\Async		: ASynchronous
* \Reenrancy    	: Reentrant
* \Parameters (in)	: Pointer to Gpt_ConfigType (Struct) 
						ConfigPtr -> ( size:2 bytes , range: unkonwn ,type const Gpt_ConfigType, description this variable refer to pointer to struct)
						
* \Return value     : void
*********************************************************************/
void Port_Init(const Gpt_ConfigType *ConfigPtr );


#endif   /* INTCTRL_H */

/***************************************************************************
* END OF FILE: MCU_HW_H
****************************************************************************/