#ifndef _KEYPAD_PRIVATE_H
#define _KEYPAD_PRIVATE_H
#include "KEYPAD_confgi.h"
#include "../../LIB/STD_TYPES.h"

/* Define you want kypade 3*3*/
#if N_COLS == 3 
static u32 KPD_u8Adjust4x3KPD(u32 KPD_u8CopyRowColNum);

/* Define you want kypade 3*4*/
#elif N_COLS == 4
static u32 KPD_u8Adjust4x4KPD(u32 KPD_u8CopyRowColNum);
#endif

#endif
