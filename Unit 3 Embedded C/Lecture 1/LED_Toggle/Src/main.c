#include "Platform_types.h"

#define RCC_BASE 0x40021000
#define PORTC_BASE 0x40011000

#define RCC_APB2ENR  *((volatile uint32_t *) (RCC_BASE + 0x18))
#define GPIOC_CRH    *((volatile uint32_t *) (PORTC_BASE + 0x04))

typedef union
{
	vuint32_t all_bits ;
	struct
	{
		vuint32_t P1toP12 : 13 ;
		vuint32_t P13     : 1  ;
		vuint32_t P14toReserved : 18  ;
	}PIN;
}GPIO_ODR_T;

volatile GPIO_ODR_T* GPIOC_ODR = (volatile GPIO_ODR_T*)(PORTC_BASE + 0x0C);

int main(void)
{
	RCC_APB2ENR |= 1<<4 ;
	GPIOC_CRH   &= 0xFF0FFFFF;
	GPIOC_CRH   |= 0X00200000;
	while(1)
	{
		GPIOC_ODR->PIN.P13 = 1 ;
		for(int i =0 ; i < 1000000 ; i++ );
		GPIOC_ODR->PIN.P13 = 0 ;
		for(int i =0 ; i < 1000000 ; i++ );
	}
	return 0 ;
}
