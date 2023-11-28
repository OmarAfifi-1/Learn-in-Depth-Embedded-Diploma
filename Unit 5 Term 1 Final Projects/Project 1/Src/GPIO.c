#include "GPIO.h"
#include "Bit_Math.h"

void GPIO_Init()
{
	SET_BIT(APB2ENR, 2);
	GPIOA_CRL &= 0xFF0FFFFF;
	GPIOA_CRL |= 0x00000000;
	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH |= 0x22222222;
}

void GPIO_Set_Alarm_Actuator(int i)
{
	if (i == 1){
		SET_BIT(GPIOA_ODR,13);
	}
	else if (i == 0){
		RESET_BIT(GPIOA_ODR,13);
	}
}

int GPIO_Get_Pressure_Val()
{
	return (GPIOA_IDR & 0xFF);
}
