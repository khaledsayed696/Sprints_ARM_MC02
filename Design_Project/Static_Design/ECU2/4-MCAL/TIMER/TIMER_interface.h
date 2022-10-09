/*******************************************************************

* FILE DESCRIPTION
--------------------------------------------------------------------
*		FILE: IntCtrl.h
*  		Module:  IntCtrl
*
*	Description:  <Write File DESCRIPTION here>
*
**********************************************************************/
#ifndef MCAL_TIMER_TIMER_INTERFACE1_H_
#define MCAL_TIMER_TIMER_INTERFACE1_H_

/**************************************************************************
* INCLUDE
**************************************************************************/

#include "TIMER_config1.h"
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

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
* \Syntax			: void TIMER_VoidInit(void);
* \Description		: * This Function Shall : Initialoze TIME0
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			: void TIMER_VoidClearTCNT0(void);
* \Description		: /* This function SHall Clear the TIMER preload
*					 
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	: Reentrant
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/
/******************************************************************
* \Syntax			: void TIMER_VoidEnInt2(void);
* \Description		: /* This function SHall Enable the INTURRUPT 
*					 
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	: Reentrant
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/
/******************************************************************
* \Syntax			: void TIMER_VoidDis(void);
* \Description		: Int Disable
*					 
*	
* \Sync\Async		: ASynchronous
* \Reenrancy    	: Reentrant
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/
/******************************************************************
* \Syntax			: void TIMER_VoidPrescaler(void);
* \Description		: Select prescaler
*					 
*	
* \Sync\Async		: ASynchronous
* \Reenrancy    	: Reentrant
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/
/******************************************************************
* \Syntax			: void TIMER0_VoidDutyCycle(u8 TIMER_u16CopyDutyCycle);
* \Description		: Change Duty Cycle
*					 
*	
* \Sync\Async		: ASynchronous
* \Reenrancy    	: Reentrant
* \Parameters (in)	: TIMER_u16CopyDutyCycle 
						TIMER_u16CopyDutyCycle -> ( size:8 bits , range: zero or 255 ,type u8, description this variable defines the DutyCycle)
* \Return value     : void
*********************************************************************/
/* This Function Shall : Initialoze TIME0*/
void TIMER_VoidInit(void);
/* This Function Shall : Start the timer preload*/
void TIMER_VoidSetTCNT0(u16 TIMER_u16CopyCounter);
/* This function SHall Clear the TIMER preload*/
void TIMER_VoidClearTCNT0(void);
/* This function SHall Enable the INTURRUPT */
void TIMER_VoidEnInt2(void);
/* This function SHall Disable the INTURRUPT */
void TIMER_VoidDis(void);

void TIMER_VoidPrescaler(void);

void TIMER0_VoidDutyCycle(u8 TIMER_u16CopyDutyCycle);

#endif /* MCAL_TIMER_TIMER_INTERFACE1_H_ */
