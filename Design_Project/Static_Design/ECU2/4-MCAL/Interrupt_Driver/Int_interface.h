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


/*This Function Shall Initialize INT0*/
void EXTI_VoidInt0Init(void);
/*This Function Shall Initialize INT1*/

void EXTI_VoidGieEnable(void);







#endif
