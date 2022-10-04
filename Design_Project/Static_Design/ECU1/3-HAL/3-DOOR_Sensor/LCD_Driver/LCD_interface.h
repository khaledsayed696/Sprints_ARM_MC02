#ifndef _LCD_INTERFACE_H
#define _LCD_INTERFACE_H

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/DIO_Driver/DIO_interface.h" 
#include "LCD_private.h"
#include "LCD_config.h" 


/******************************************************************
* \Syntax			: void LCD_VoidLcdInit(void);
* \Description		: /* This function shall initialize the LCD
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/  

/******************************************************************
* \Syntax			:void LCD_VoidSendCommand(u8 LCD_u8CopyCmd);
* \Description		: /* This function shall send command to the LCD
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void LCD_VoidDisplayChar(u8 LCD_u8CopyChar);
* \Description		: /* Description: This function shall move to certain position in lcd c
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void LCD_VoidGoToRowCol(u8 LCD_u8CopyRow , u8 LCD_u8CopyCol);
* \Description		: /* Description: This function shall move to certain position in lcd 
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/


/******************************************************************
* \Syntax			: void LCD_VoidDisplayString(u8 *LCD_u8CopyString);
* \Description		: /* Description: This function shall display full string on lcd 
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void LCD_VoidClearScreen(void);
* \Description		: * This Function Shall : ClearScrren
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void LCD_VoidIntegerToString(u32 LCD_u8CopyValue);
* \Description		: /* Description: This function shall convert integer value into character value *
*					 
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void LCD_VoidSpecialCharacter(u8 *Pattern , u8 CGRAM_index);
* \Description		: * This Function Shall : Disable Speacial char
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void LCD_DisplayCustomChr(u8 CGRAM_index , u8 Row , u8 Col );
* \Description		: * This Function Shall : Custom char
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/******************************************************************
* \Syntax			: void LCD_VoidIntegerToFloatString(f32 LCD_u8CopyValue);
* \Description		: * This Function Shall : Convert from int to str
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/

/* This function shall initialize the LCD*/
void LCD_VoidLcdInit(void);

/* This function shall send command to the LCD*/
void LCD_VoidSendCommand(u8 LCD_u8CopyCmd);

/* This function shall desplay char to the LCD*/
void LCD_VoidDisplayChar(u8 LCD_u8CopyChar);

/* Description: This function shall move to certain position in lcd */

void LCD_VoidGoToRowCol(u8 LCD_u8CopyRow , u8 LCD_u8CopyCol);

/* Description: This function shall display full string on lcd */
void LCD_VoidDisplayString(u8 *LCD_u8CopyString);

 /*Description: This function shall display full string on lcd*/
void LCD_VoidClearScreen(void);

/* Description: This function shall convert integer value into character value */
void LCD_VoidIntegerToString(u32 LCD_u8CopyValue);

void LCD_VoidSpecialCharacter(u8 *Pattern , u8 CGRAM_index);

void LCD_DisplayCustomChr(u8 CGRAM_index , u8 Row , u8 Col );
void LCD_VoidIntegerToFloatString(f32 LCD_u8CopyValue);

#endif
