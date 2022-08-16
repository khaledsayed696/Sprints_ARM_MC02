#include "App_main.h"
#include "App_main.h"


#define MACRO_OBJECT	1

const unsigned char __attribute__ ((section (".sprints"))) test[16]; 
//const unsigned int __attribute__ ((section (".sprints"))) (*Arr[154])(); place vector table

//unsigned int __attribute__((section (".sprints"))) myVar;
//#pragma GCC diagnostic ignored "-Wunknown-pragmas"
//#pragma GCC diagnostic ignored "-Wuninitialized"
//#pragma FUNC_ALWAYS_INLINE(".sprints")
 //#pragma arm sectiom
//#pragma DATA_SECTION(.sprints, ".sprints")Arr[3]
//#pragma default_variable_attributes =

//#pragma arm section sprints = ".sprints"
 //unsigned const int Arr[3]={1,2,3};
//#pragma arm section 
/*
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma clang section bss=".sprints"
unsigned const int Arr[3]={1,2,3};
#pragma clang section bss="" data="" text=""
 long int u32NonInitStaticGlobalVar ;
*/
#if (MACRO_OBJECT == 1)
	int u18InitGlobalVar = 3;
#else
	int u18InitGlobalVar = 8;
#warning Const Variable is initialized with 8
#endif

int main(void) 
{
	
	// khaled sayed
	int x=5;
	int y=0;
	
	if(x==5)
		y=3;
	else
		y=2;
	while(1)
	{
		
	}
	
	return 0;
}
