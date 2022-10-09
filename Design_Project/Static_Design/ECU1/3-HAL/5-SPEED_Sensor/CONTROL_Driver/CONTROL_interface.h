#ifndef _CONTROL_interface_H_
#define _CONTROL_interface_H_

#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/DIO_Driver/DIO_interface.h"



/******************************************************************
* \Syntax			: void CONTROL_VoidControlInit(void);
* \Description		: /* Description: This function shall Init Car
*					  
*	
* \Sync\Async		: None
* \Reenrancy    	: None
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			:void CONTROL_VoidMoveUpdate(u16 CONTROL_u16CopyData );
* \Description		: /*Description : This function shall Update Car movement
*					  
*	
* \Sync\Async		: None
* \Reenrancy    	: None
* \Parameters (in)	:CONTROL_u16CopyData
						CONTROL_u16CopyData -> ( size:16 bits , range: zero or u16 ,type u16, description this variable defines motor speed)
						
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			: void CONTROL_VoidControlStop(void);
* \Description		: /*Description : This function Stop Car movement
*					  
*	
* \Sync\Async		: None
* \Reenrancy    	: None
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			: void CONTROL_VoidControlStart(void);
* \Description		: /*Description : This function shall Start Car movement
*					  
*	
* \Sync\Async		: None
* \Reenrancy    	: None
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/
/* LED VALUE*/

void CONTROL_VoidControlInit(void;

void CONTROL_VoidMoveUpdate(u16 CONTROL_u16CopyData );

void CONTROL_VoidControlStop(void);

void CONTROL_VoidControlStart(void);



#endif
