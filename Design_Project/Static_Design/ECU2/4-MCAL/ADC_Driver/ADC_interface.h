#ifndef ADC_INTERFACE_H
#define ADC_INTERFACE_H


#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "ADC_private.h"
#include "ADC_config.h"


/************************* ADC CONFIGURATIONS *************/

#define ADC_VOLTAGE 	 ADC_AREF_INT
#define ADC_CHANNEL  	 ADC_CH0
#define ADC_PRESCALER	 ADC_PRE_128
#define ADC_INT_MODE	ADC_ENABLE_INT


/********************* FUNCTIONS PROTOTYPE ******************/

/******************************************************************
* \Syntax			: void ADC_VoidInit(void);

* \Description		: * This Function Shall : Initialoze ADC
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			: void ADC_VoidStartConversion(void);
* \Description		: * This Function Shall : Start conversion
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			: void ADC_VoidDisableADC(void);
* \Description		: * This Function Shall : Disable ADC
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	: void
						void -> ( size:unkown , range: unkown ,type unkown, description unkown)
* \Return value     : void
*********************************************************************/

/******************************************************************
* \Syntax			: u16 ADC_u16ReadData(u8 ADC_u8CopyChannelId);
* \Description		: * This Function Shall : Read Data
*					  
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	:  Reentrant
* \Parameters (in)	:ADC_u8CopyChannelId
						ADC_u8CopyChannelId -> ( size:8 bits , range: zero or u8 ,type u8, description this variable defines ADC_u8CopyChannelId )
						
* \Return value     : u16
*********************************************************************/


void ADC_VoidInit(void);

void ADC_VoidStartConversion(void);

u16 ADC_u16ReadData(u8 ADC_u8CopyChannelId);

void ADC_VoidDisableADC(void);









#endif
