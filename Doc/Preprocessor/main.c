#include "App_main.h"
#include "App_main.h"

#define MACRO_OBJECT	2

char u18InitGlobalVar = 2;
static long int u32NonInitStaticGlobalVar ;

#if (MACRO_OBJECT == 1)
	const short int u18InitGlobalVar = 3;
#else
	const short int u18InitGlobalVar = 8;
#warning Const Variable is initialized with 8
#endif

void main(void) 
{
	
	// khaled sayed
	int x=5;
	int y;
	
	if(x==5)
		y=3;
	else
		y=2;
	
	while(1)
	{
		
	}
}
