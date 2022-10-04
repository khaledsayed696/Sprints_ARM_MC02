#ifndef _NvM_interface_H_
#define _NvM_interface_H_

#include "../../LIB/STD_TYPES.h"




/******************************************************************
* \Syntax			: ErrorStatus CommMgr(u8 Id, u8 Data);
* \Description		: /* Description: Choose between Internal Or External EEPROM
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
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
