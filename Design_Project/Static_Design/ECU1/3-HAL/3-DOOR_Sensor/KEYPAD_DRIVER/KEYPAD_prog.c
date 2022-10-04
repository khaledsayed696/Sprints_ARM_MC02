
#include "KEYPAD_interface.h"
#include "KEYPAD_private.h"
#include "../../MCAL/DIO_Driver/DIO_interface.h"
#include "../../LIB/STD_TYPES.h"
#include "../LCD_Driver/LCD_interface.h"
#include "util/delay.h"

/*********************FUNCTIONS DEFFINITIONS**********************/
u8 KPD_u8GetPressedKey(void)
{
	/* Write Code Here*/
}

#if N_COLS == 3
static u32 KPD_u8Adjust4x3KPD(u32 KPD_u8CopyRowColNum)
{
	/* Write Code Here*/
}
#elif N_COLS == 4
static u32 KPD_u8Adjust4x4KPD(u32 KPD_u8CopyRowColNum)
{
	/* Write Code Here*/

}

#endif
