#ifndef _COM_interface_H_
#define _COM_interface_H_

#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/DIO_Driver/DIO_interface.h"



/******************************************************************
* \Syntax			: ErrorStatus CommMgr(u8 Id, u8 Data);
* \Description		: /* Description: Choose between Basic Communication Protocol (BCM)
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

CommMgr_Cfg_s CommMgr_Cfg[NUM]
{
	
	/* Write Code here */
}

ErrorStatus CommMgr(u8 Id, u8 Data);

#endif
