#ifndef _CONTROL_interface_H_
#define _CONTROL_interface_H_

#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/DIO_Driver/DIO_interface.h"



/******************************************************************
* \Syntax			: void CONTROL_VoidControlInit(void;
* \Description		: /* Description: This function shall Init Car
*					  
*	
* \Sync\Async		: None
* \Reenrancy    	: None
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			:void CONTROL_VoidMoveUpdate(u16 CONTROL_u16CopyData );
* \Description		: /*Description : This function shall Update Car movement
*					  
*	
* \Sync\Async		: None
* \Reenrancy    	: None
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void CONTROL_VoidControlStop(void);
* \Description		: /*Description : This function Stop Car movement
*					  
*	
* \Sync\Async		: None
* \Reenrancy    	: None
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void CONTROL_VoidControlStart(void);
* \Description		: /*Description : This function shall Start Car movement
*					  
*	
* \Sync\Async		: None
* \Reenrancy    	: None
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/
/* LED VALUE*/

void CONTROL_VoidControlInit(void;

void CONTROL_VoidMoveUpdate(u16 CONTROL_u16CopyData );

void CONTROL_VoidControlStop(void);

void CONTROL_VoidControlStart(void);



#endif
