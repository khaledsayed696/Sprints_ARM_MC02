#ifndef _COM_interface_H_
#define _COM_interface_H_

#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/DIO_Driver/DIO_interface.h"



/******************************************************************
* \Syntax			: ErrorStatus CommMgr(u8 Id, u8 Data);
* \Description		: /* Description: Choose between Internal Or External EEPROM
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	:Id , Data
						Id -> ( size:8 bits , range: zero or u8 ,type u8, description this variable defines EEPROM Id)
						Data -> ( size:8 bits , range: zero or 255 ,type u8, description this variable defines EEPROM Data)
* \Return value     : enum
*********************************************************************/ 
typedef struct 
{
	/*Write Code Here*/
	
	/*Id*/
	
	/*Bus_Type*/
	
	/*Lenght */
}

CommMgr_Cfg_s CommMgr_Cfg[NUM]
{
	
	/* Write Code here */
}

ErrorStatus CommMgr(u8 Id, u8 Data);

#endif
