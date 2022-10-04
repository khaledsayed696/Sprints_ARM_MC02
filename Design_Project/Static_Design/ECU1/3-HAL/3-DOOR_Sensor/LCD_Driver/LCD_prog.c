#ifndef _LCD_PROG_H_
#define _LCD_PROG_H_


#include "../../MCAL/DIO_Driver/DIO_interface.h" 
#include "../../MCAL/DIO_Driver/DIO_private.h"

#include "LCD_interface.h"
#include "util/delay.h"
#include "stdlib.h"
#include "string.h"
#define RS	0
#define EN 	1
#define LCD_PORT	PORTB_REG
#define LCD_4BIT 	0
#define LCD_8BIT	1
#define LCD_MODE	LCD_8BIT


void LCD_VoidLcdInit(void)
{
	/* Write Code*/

}

void LCD_VoidSendCommand(u8 LCD_u8CopyCmd)
{
	/* Write Code*/
}

void LCD_VoidDisplayChar(u8 LCD_u8CopyChar)
{
	/* Write Code*/
}



void LCD_VoidGoToRowCol(u8 LCD_u8CopyRow , u8 LCD_u8CopyCol)
{
	/* Write Code*/
}



void LCD_VoidDisplayString(u8 *LCD_u8CopyString)
{
	/* Write Code*/

}
void LCD_VoidClearScreen(void)
{
	/* Write Code*/
}

void LCD_VoidIntegerToString(u32 LCD_u8CopyValue)
{
	/* Write Code*/
}
void LCD_VoidSpecialCharacter(u8 *Pattern , u8 CGRAM_index)
{/* Write Code*/
}

void LCD_DisplayCustomChr(u8 CGRAM_index , u8 Row , u8 Col )
{
	/* Write Code*/

}

void LCD_VoidIntegerToFloatString(f32 LCD_u8CopyValue)
{
	/* Write Code*/
}
