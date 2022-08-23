/*******************************************************************

* FILE DESCRIPTION
--------------------------------------------------------------------
*		FILE: IntCtrl.h
*  		Module:  IntCtrl
*
*	Description:  <Write File DESCRIPTION here>
*
**********************************************************************/

#ifndef INTCTRL_H
#define INTCTRL_H

/**************************************************************************
* INCLUDE
**************************************************************************/

#include "Std_Types.h"
#include "IntCtrl_Cfg.h"

/*************************************************************************
*  GLOBAL CONSTANT MACROS
*************************************************************************/
#define GROUP_PRIORITY 0


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
* \Syntax			: void STK_voidInitialize(void);
* \Description		: initialize Systick timer
*					 
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	: None Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/
/******************************************************************
* \Syntax			: void STK_voidStart(u32 Copy_u32Value);
* \Description		: Start timer
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/
/******************************************************************
* \Syntax			: void STK_voidSetCallBack(void (*Copy_Ptr)(void));
* \Description		: Make MCAL layer call App layerby sytick timer
*					 
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	: Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

void STK_voidInitialize(void);
void STK_voidStart(u32 Copy_u32Value);
void STK_voidSetCallBack(void (*Copy_Ptr)(void));
#endif   /* INTCTRL_H */

/***************************************************************************
* END OF FILE: MCU_HW_H
****************************************************************************/