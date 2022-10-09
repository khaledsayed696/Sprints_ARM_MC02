#ifndef _INTERRUPT_INTERFACE_CONFIG_H
#define _INTERRUPT_INTERFACE_CONFIG_H

#include "../../LIB/STD_TYPES.h"
#include "Int_private.h"
#include "Int_config.h"

/*#####################################################################################
 # Function name : EXTI_VoidInt0Init()                                                 #
 # Argument		 : VOID 															   #
 # Return		 : VOID													    		   #
 # Description	 : Set the required sense control of INT0 Using PostBild configuration #
 ################################################################################3#####*/


 /******************************************************************
* \Syntax			: void EXTI_VoidInt0Init(void);
* \Description		: Init interrupt
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
* \

/******************************************************************
* \Syntax			: void EXTI_VoidGieEnable(void);
* \Description		: Enable globale interrupt
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
* \
/*This Function Shall Initialize INT0*/
void EXTI_VoidInt0Init(void);
/*This Function Shall Initialize INT1*/

void EXTI_VoidGieEnable(void);







#endif
