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
* \Syntax			: void Dio_voidSetPinMode(u8 Dio_ChannelType,u8 Dio_Mode);
* \Description		: Set CHannel as input or output 
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: Dio_ChannelType - Dio_Mode
						Dio_ChannelType -> ( size:8 bits , range: zero or eight ,type u8, description this variable defines the Channel)
						Dio_Mode -> ( size:8 bits , range: zero or eight ,type u8, description this variable defines the Mode(input - output))
* \Return value     : void
* \
*********************************************************************/
/******************************************************************
* \Syntax			: void Dio_WriteChannnel(u8 Dio_ChannelType , u8 Dio_LevelType);
* \Description		: Set pin value	high or low
*					 
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	: Reentrant
* \Parameters (in)	: Dio_ChannelType - Dio_LevelType
						Dio_ChannelType -> ( size:8 bits , range: zero or eight ,type u8, description this variable defines the Channel)
						Dio_LevelType -> ( size:8 bits , range: zero or one ,type u8, description this variable defines the Type (HIGH - LOW)
* \Return value     : void
*********************************************************************/
/******************************************************************
* \Syntax			: void Dio_ReadChannel(u8 Dio_ChannelType);
* \Description		: Read CHannel value
*					 
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	: Reentrant
* \Parameters (in)	: Dio_ChannelType
						Dio_ChannelType -> ( size:8 bits , range: zero or eight ,type u8, description this variable defines the Channel)
						
* \Return value     : void
*********************************************************************/
/******************************************************************
* \Syntax			: void Dio_WritePort(u8 Portld , u8 Dio_LevelType);
* \Description		: Write Port value
*					 
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	: Reentrant
* \Parameters (in)	: Portld - Dio_LevelType
						Portld -> ( size:8 bits , range: zero or eight ,type u8, description this variable defines the Portld)
						Dio_LevelType -> ( size:8 bits , range: zero or one ,type u8, description this variable defines the Type (HIGH - LOW)
* \Return value     : void
*********************************************************************/
/******************************************************************
* \Syntax			: u32 Dio_ReadCPort(u8 Portld);
* \Description		: Read pORT value
*					 
*	
* \Sync\Async		: ASynchronous
* \Reenrancy    	: Reentrant
* \Parameters (in)	: Portld
						Portld -> ( size:8 bits , range: zero or eight ,type u8, description this variable defines the Portld)
* \Return value     : u32
*********************************************************************/
/******************************************************************
* \Syntax			: u32 Dio_FlipChannel(u8 Dio_ChannelType);
* \Description		: Flip CHannel value
*					 
*	
* \Sync\Async		: ASynchronous
* \Reenrancy    	: Reentrant
* \Parameters (in)	:Dio_ChannelType
						Dio_ChannelType -> ( size:8 bits , range: zero or eight ,type u8, description this variable defines the Channel)
						
* \Return value     : u32
*********************************************************************/
void Dio_voidSetPinMode(u8 Dio_ChannelType,u8 Dio_Mode);
void Dio_WriteChannnel(u8 Dio_ChannelType , u8 Dio_LevelType);
u32 Dio_ReadChannel(u8 Dio_ChannelType);
void Dio_WritePort(u8 Portld , u8 Dio_LevelType);
u32 Dio_ReadCPort(u8 Portld);
u32 Dio_FlipChannel(u8 Dio_ChannelType);

#endif   /* INTCTRL_H */

/***************************************************************************
* END OF FILE: MCU_HW_H
****************************************************************************/