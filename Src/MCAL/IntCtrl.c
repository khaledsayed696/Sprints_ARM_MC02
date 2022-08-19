

/******************************************************************
* \Syntax			: void InitCtrl_Init(void)
* \Description		: initialize Nvic\SCB Module by parsing the Configuration
*					  into Nvic\SCB register
*	
* \Sync\Async		: Synchronous
* \Reenrancy    	: None Reentrant
* \Parameters (in)	: None
* \Return value     : None
*********************************************************************/
#include "Mcu_Hw.h"
void InitCtrl_Init(void)
{
	u8 u8IntNum=0;
	/*TODO Configure Grouping\SubGroubing System in SCB_APINT register in SCB*/
	/*TODO : Assign Group\Subgroup prioity in NVIC_PRIx Nvic and SCB_SYSPRIx Registrt*/
	/* We assign the 3 for group priority and 0 bit for SB*/
	#if (GRO_SUB_PRIO == 0)
		SCB_APINT = 0x05FA0400;
		NVIC_PRI[u8IntNumber] = (u8GrouptPriotity );
				/*Assign Group and Subgroub for Eception Interrupt*/
			#if (Exc_Handler == 1)
					SCB_SYSPRI1.B.MEM =	(u8GrouptPriotity );
			#elif (Exc_Handler == 2)
					SCB_SYSPRI1.B.BUS=	(u8GrouptPriotity );
			#elif (Exc_Handler == 3)
					SCB_SYSPRI1.B.USAGE=	(u8GrouptPriotity );
			#elif (Exc_Handler == 4)
					SCB_SYSPRI2.B.SVC=	(u8GrouptPriotity );
			#elif (Exc_Handler == 5)
					SCB_SYSPRI3.B.DEBUG=	(u8GrouptPriotity );
			#elif (Exc_Handler == 6)
					SCB_SYSPRI3.B.PENDSV=	(u8GrouptPriotity );
			#elif (Exc_Handler == 7)
						SCB_SYSPRI3.B.TICK=	(u8GrouptPriotity );
			#endif
	/* We assign the 2 for group priority and 1 bit for SB*/
	#elif (GRO_SUB_PRIO == 1)
		SCB_APINT = 0x05FA0500;
		NVIC_PRI[u8IntNumber] = ((u8GrouptPriotity << 6) | (u8SubGrouptPriotity << 5));
		/*Assign Group and Subgroub for Eception Interrupt*/
			#if (Exc_Handler == 1)
					SCB_SYSPRI1.B.MEM =	((u8GrouptPriotity << 1U) | (u8SubGrouptPriotity ));
			#elif (Exc_Handler == 2)
					SCB_SYSPRI1.B.BUS=	Priority_Level;
			#elif (Exc_Handler == 3)
					SCB_SYSPRI1.B.USAGE=	((u8GrouptPriotity << 1) | (u8SubGrouptPriotity ));
			#elif (Exc_Handler == 4)
					SCB_SYSPRI2.B.SVC=	((u8GrouptPriotity << 1) | (u8SubGrouptPriotity ));
			#elif (Exc_Handler == 5)
					SCB_SYSPRI3.B.DEBUG=	((u8GrouptPriotity << 1) | (u8SubGrouptPriotity ));
			#elif (Exc_Handler == 6)
					SCB_SYSPRI3.B.PENDSV=	((u8GrouptPriotity << 1) | (u8SubGrouptPriotity ));
			#elif (Exc_Handler == 7)
						SCB_SYSPRI3.B.TICK=	((u8GrouptPriotity << 1) | (u8SubGrouptPriotity ));
			#endif
	#elif (GRO_SUB_PRIO == 2)
	/* We assign the 1 for group priority and 2 bit for SB*/
		SCB_APINT = 0x05FA0600;
		NVIC_PRI[u8IntNumber] = ((u8GrouptPriotity << 7) | (u8SubGrouptPriotity << 5U));
		/*Assign Group and Subgroub for Eception Interrupt*/
			#if (Exc_Handler == 1)
					SCB_SYSPRI1.B.MEM =	((u8GrouptPriotity << 2) | (u8SubGrouptPriotity));
			#elif (Exc_Handler == 2)
					SCB_SYSPRI1.B.BUS=	((u8GrouptPriotity << 2) | (u8SubGrouptPriotity ));
			#elif (Exc_Handler == 3)
					SCB_SYSPRI1.B.USAGE=	((u8GrouptPriotity << 2) | (u8SubGrouptPriotity ));
			#elif (Exc_Handler == 4)
					SCB_SYSPRI2.B.SVC=	((u8GrouptPriotity << 2) | (u8SubGrouptPriotity ));
			#elif (Exc_Handler == 5)
					SCB_SYSPRI3.B.DEBUG=	((u8GrouptPriotity << 2) | (u8SubGrouptPriotity ));
			#elif (Exc_Handler == 6)
					SCB_SYSPRI3.B.PENDSV=	((u8GrouptPriotity << 2) | (u8SubGrouptPriotity ));
			#elif (Exc_Handler == 7)
						SCB_SYSPRI3.B.TICK=	((u8GrouptPriotity << 2) | (u8SubGrouptPriotity << 5U));
			#endif
	#elif (GRO_SUB_PRIO == 3)
	/* We assign the 3 priority bitS for SB*/
		SCB_APINT = 0x05FA0700;
		NVIC_PRI[u8IntNumber] = (u8SubGrouptPriotity );
				/*Assign Group and Subgroub for Eception Interrupt*/
			#if (Exc_Handler == 1)
					SCB_SYSPRI1.B.MEM =	(u8SubGrouptPriotity );
			#elif (Exc_Handler == 2)
					SCB_SYSPRI1.B.BUS=	(u8SubGrouptPriotity );
			#elif (Exc_Handler == 3)
					SCB_SYSPRI1.B.USAGE=	(u8SubGrouptPriotity );
			#elif (Exc_Handler == 4)
					SCB_SYSPRI2.B.SVC=	(u8SubGrouptPriotity );
			#elif (Exc_Handler == 5)
					SCB_SYSPRI3.B.DEBUG=	(u8SubGrouptPriotity );
			#elif (Exc_Handler == 6)
					SCB_SYSPRI3.B.PENDSV=	(u8SubGrouptPriotity );
			#elif (Exc_Handler == 7)
						SCB_SYSPRI3.B.TICK=	(u8SubGrouptPriotity );
			#endif
	#else
		#error "Error not GRO_SUB_PRIO configuration option "
	#endif
	 /*TODO : Enable\Disable based on user configuration in NVIC_ENx and SCB_Sys Registers*/
	 
	#if INT_EN_DIS == 1
		/* MEMA .. BUSA .. USGA .. SVCA .. MON .. PNDSV .. TICK .. USAGEP .. MEMP .. BUSP .. SVC .. MEM .. BUS.. USAGE*/
		SCB_SYSHND |= (1<<Int_Type);
		
		if(u8IntNumber<=31)
			NVIC_EN.NVIC_EN0 = (1<<u8IntNumber);
		else if ((u8IntNumber>=32)&& (u8IntNumber <= 63))
		{
			u8IntNum = u8IntNumber-32;
			NVIC_EN.NVIC_EN1 = (1<<u8IntNum);
		}
		
		else if ((u8IntNumber>=64)&& (u8IntNumber <= 95))
		{
			u8IntNum=u8IntNumber -64;
			NVIC_EN.NVIC_EN2 = (1<<u8IntNum);
		}
		else if ((u8IntNumber>=96)&& (u8IntNumber <= 127))
		{
			u8IntNum=u8IntNumber -96;
			NVIC_EN.NVIC_EN3 = (1<<u8IntNum);
		}
		else if((u8IntNumber>=128)&& (u8IntNumber <= 138))
		{
			u8IntNum=u8IntNumber -128;
			NVIC_EN.NVIC_EN4 = (1<<u8IntNum);
		}
	#elif INT_EN_DIS == 0
		/* MEMA .. BUSA .. USGA .. SVCA .. MON .. PNDSV .. TICK .. USAGEP .. MEMP .. BUSP .. SVC .. MEM .. BUS.. USAGE*/
		SCB_SYSHND &= ~(1<<Int_Type);
		
		if(u8IntNumber<=31)
			NVIC_DIS.NVIC_DIS0 = (1<<u8IntNumber);
		else if ((u8IntNumber>=32)&& (u8IntNumber <= 63))
		{
			u8IntNum = u8IntNumber-32;
			NVIC_DIS.NVIC_DIS1 = (1<<u8IntNumber);
		}
		
		else if ((u8IntNumber>=64)&& (u8IntNumber <= 95))
		{
			u8IntNum=u8IntNumber -64;
			NVIC_DIS.NVIC_DIS2 = (1<<u8IntNumber);
		}
		else if ((u8IntNumber>=96)&& (u8IntNumber <= 127))
		{
			u8IntNum=u8IntNumber -96;
			NVIC_DIS.NVIC_DIS3 = (1<<u8IntNumber);
		}
		else if((u8IntNumber>=128)&& (u8IntNumber <= 138))
		{
			u8IntNum=u8IntNumber -128;
			NVIC_DIS.NVIC_DIS4 = (1<<u8IntNumber);
		}
	#else
		#error "Error  NVIC_INT configuration option "
	#endif
		// SYSHNDCTRL
		

	
}