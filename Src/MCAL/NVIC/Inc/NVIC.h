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
* \Syntax			: void InitCtrl_Init(void)
* \Description		: initialize Nvic\SCB Module by parsing the Configuration
*					  into Nvic\SCB register
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	: None Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

void InitCtrl_Init(void);


#endif   /* INTCTRL_H */

/***************************************************************************
* END OF FILE: MCU_HW_H
****************************************************************************/