/*********************************************************************/
/*********************************************************************/
/******** Author:    Amr Hossam    ***********************************/
/******** Component: EEPROM        ***********************************/
/******** Layer:     HAL           ***********************************/
/******** Version:   1.0           ***********************************/
/*********************************************************************/
/*********************************************************************/
#ifndef EXTERNAL_EEPROM_H_
#define EXTERNAL_EEPROM_H_
#include "../../LIB/STD_TYPES.h"

/******************************************************************
* \Syntax			: void EEPROM_writeByte(u16 u16addr,u8 u8data);
* \Description		: /* Description: 	EEPROM Writr
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	:u16addr , u8data
						u16addr -> ( size:16 bits , range: zero or u16 ,type u16, description this variable defines EEPROM u16addr)
						u8data -> ( size:16 bits , range: zero or 255 ,type u16, description this variable defines EEPROM u8data)
* \Return value     : void
*********************************************************************/ 
/******************************************************************
* \Syntax			: u8 EEPROM_readByte(u16 u16addr);
* \Description		: /* Description: EEPROM Read
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	:u16addr , u8data
						u16addr -> ( size:16 bits , range: zero or u16 ,type u16, description this variable defines EEPROM u16addr)
						u8data -> ( size:16 bits , range: zero or 255 ,type u16, description this variable defines EEPROM u8data)
* \Return value     : u8
*********************************************************************/ 

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/
#define ERROR 0
#define SUCCESS 1

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

void EEPROM_writeByte(u16 u16addr,u8 u8data);
u8 EEPROM_readByte(u16 u16addr);


 
#endif /* EXTERNAL_EEPROM_H_ */
