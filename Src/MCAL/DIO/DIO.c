
#include "Mcu_Hw.h"
#include "DIO.h"
void Dio_voidSetPinMode(PIN_Tag Dio_ChannelType,u8 Dio_Mode)
{
	//RCGCGPIO |=(1<<0); 
	u8 Local_u8Port=Dio_ChannelType/8;
	u8 Local_u8Pin=Dio_ChannelType%8;
	GPIOA_LOCK = 0x4C4F434B;
	
	switch (Local_u8Port)
	{
		case PORT_A:
				Pb_GPIOA_CR(Dio_ChannelType) = 1;
				Pb_GPIOA_DIR(Dio_ChannelType) = Dio_Mode ;
				Pb_GPIOA_AFSEL(Dio_ChannelType) = 0;
				Pb_GPIOA_PUR(Dio_ChannelType) = 1;
				Pb_GPIOA_DEN(Dio_ChannelType)= 1;
						break;
		case PORT_B:
				Pb_GPIOB_CR(Dio_ChannelType) = 1;
				Pb_GPIOB_DIR(Dio_ChannelType) = Dio_Mode ;
				Pb_GPIOB_AFSEL(Dio_ChannelType) = 0;
				Pb_GPIOB_PUR(Dio_ChannelType) = 1;
				Pb_GPIOB_DEN(Dio_ChannelType)= 1;
				break;
		case PORT_C:
				Pb_GPIOC_CR(Dio_ChannelType) = 1;
				Pb_GPIOC_DIR(Dio_ChannelType) = Dio_Mode ;
				Pb_GPIOC_AFSEL(Dio_ChannelType) = 0;
				Pb_GPIOC_PUR(Dio_ChannelType) = 1;
				Pb_GPIOC_DEN(Dio_ChannelType)= 1;
						break;
		case PORT_D:
				Pb_GPIOD_CR(Dio_ChannelType) = 1;
				Pb_GPIOD_DIR(Dio_ChannelType) = Dio_Mode ;
				Pb_GPIOD_AFSEL(Dio_ChannelType) = 0;
				Pb_GPIOD_PUR(Dio_ChannelType) = 1;
				Pb_GPIOD_DEN(Dio_ChannelType)= 1;
				break;
		case PORT_E:
				Pb_GPIOE_CR(Dio_ChannelType) = 1;
				Pb_GPIOE_DIR(Dio_ChannelType) = Dio_Mode ;
				Pb_GPIOE_AFSEL(Dio_ChannelType) = 0;
				Pb_GPIOE_PUR(Dio_ChannelType) = 1;
				Pb_GPIOE_DEN(Dio_ChannelType)= 1;
						break;
		case PORT_F:
				Pb_GPIOF_CR(Dio_ChannelType) = 1;
				Pb_GPIOF_DIR(Dio_ChannelType) = Dio_Mode ;
				Pb_GPIOF_AFSEL(Dio_ChannelType) = 0;
				Pb_GPIOF_PUR(Dio_ChannelType) = 1;
				Pb_GPIOF_DEN(Dio_ChannelType)= 1;
				break;
			}
		}

void Dio_WriteChannnel(u8 Dio_ChannelType , u8 Dio_LevelType)	// 0XEB
{
	u8 Local_u8Port=Dio_ChannelType/8;
	u8 Local_u8Pin=Dio_ChannelType%8;
	
	switch (Local_u8Port)
	{
		case PORT_A:
				Pb_GPIOA_DATA(Dio_ChannelType)=Dio_LevelType;
						break;
		case PORT_B:
				Pb_GPIOB_DATA(Dio_ChannelType)=Dio_LevelType;
				break;
		case PORT_C:
				Pb_GPIOC_DATA(Dio_ChannelType)=Dio_LevelType;
						break;
		case PORT_D:
				Pb_GPIOD_DATA(Dio_ChannelType)=Dio_LevelType;
				break;
		case PORT_E:
				Pb_GPIOE_DATA(Dio_ChannelType)=Dio_LevelType;
						break;
		case PORT_F:
				Pb_GPIOF_DATA(Dio_ChannelType)=Dio_LevelType;
				break;
			}
}

u32 Dio_ReadChannel(u8 Dio_ChannelType)
{
	u32 Copy_u8Value=0;
	u8 Local_u8Port=Dio_ChannelType/8;
	u8 Local_u8Pin=Dio_ChannelType%8;
	switch (Local_u8Port)
	{
		case PORT_A: Copy_u8Value=Pb_GPIOA_DATA(Dio_ChannelType);
				break;
		case PORT_B: Copy_u8Value=Pb_GPIOB_DATA(Dio_ChannelType);
			break;
		case PORT_C: Copy_u8Value=Pb_GPIOC_DATA(Dio_ChannelType);
				break;
		case PORT_D: Copy_u8Value=Pb_GPIOD_DATA(Dio_ChannelType);
			break;
		case PORT_E: Copy_u8Value=Pb_GPIOE_DATA(Dio_ChannelType);
				break;
		case PORT_F: Copy_u8Value=Pb_GPIOF_DATA(Dio_ChannelType);
			break;
	}
	
	return Copy_u8Value;
	
}
void Dio_WritePort(u8 Portld , u8 Dio_LevelType)
{
	
	switch (Portld)
	{
		case PORT_A:
				GPIOA_DATA = Dio_LevelType;
						break;
		case PORT_B:
				GPIOB_DATA = Dio_LevelType;
				break;
			case PORT_C:
				GPIOC_DATA = Dio_LevelType;
						break;
		case PORT_D:
				GPIOD_DATA = Dio_LevelType;
				break;
		case PORT_E:
				GPIOE_DATA = Dio_LevelType;
				break;
		case PORT_F:
				GPIOF_DATA = Dio_LevelType;
				break;
			}
}
u32 Dio_ReadPort(u8 Portld)
{
	u32 Copy_u8Value=0;
	switch (Portld)
	{
		case PORT_A:
			 Copy_u8Value=	GPIOA_DATA ;
						break;
		case PORT_B:
				Copy_u8Value =GPIOB_DATA;
				break;
		case PORT_C:
			 Copy_u8Value=	GPIOC_DATA ;
						break;
		case PORT_D:
				Copy_u8Value =GPIOD_DATA;
				break;
		case PORT_E:
			 Copy_u8Value=	GPIOE_DATA ;
						break;
		case PORT_F:
				Copy_u8Value =GPIOF_DATA;
				break;
			}
	
	return Copy_u8Value;
	
}

u32 Dio_FlipChannel(u8 Dio_ChannelType)
{
	u8 Local_u8Port=Dio_ChannelType/8;
	u8 Local_u8Pin=Dio_ChannelType%8;
	u32 Copy_u8Value=0;
	switch (Local_u8Port)
	{
		case PORT_A:
				Pb_GPIOA_DATA(Dio_ChannelType)=(~Pb_GPIOA_DATA(Dio_ChannelType));
						break;
		case PORT_B:
				Pb_GPIOA_DATA(Dio_ChannelType)=(~Pb_GPIOA_DATA(Dio_ChannelType));
				break;
		case PORT_C:
				Pb_GPIOA_DATA(Dio_ChannelType)=(~Pb_GPIOA_DATA(Dio_ChannelType));
						break;
		case PORT_D:
				Pb_GPIOA_DATA(Dio_ChannelType)=(~Pb_GPIOA_DATA(Dio_ChannelType));
				break;
		case PORT_E:
			Pb_GPIOA_DATA(Dio_ChannelType)=(~Pb_GPIOA_DATA(Dio_ChannelType));
						break;
		case PORT_F:
			Pb_GPIOA_DATA(Dio_ChannelType)=(~Pb_GPIOA_DATA(Dio_ChannelType));
				break;
			}
	
	return Pb_GPIOA_DATA(Dio_ChannelType);
	
}