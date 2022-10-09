#ifndef _NvM_interface_H_
#define _NvM_interface_H_

#include "../../LIB/STD_TYPES.h"




/******************************************************************
* \Syntax			: ErrorStatus NvMMgr(u8 Id, u8 Data);
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

CommMgr_Cfg_s NvMMgr_Cfg[NUM]
{
	
	/* Write Code here */
}

ErrorStatus NvMMgr(u8 Id, u8 Data);

#endif
