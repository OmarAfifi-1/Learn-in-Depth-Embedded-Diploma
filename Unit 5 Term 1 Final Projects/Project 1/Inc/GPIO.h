#ifndef GPIO_H
#define GPIO_H

#include "State.h"

#define GPIO_PORTA 0x40010800
#define BASE_RCC   0x40021000

#define APB2ENR   *(volatile unsigned int *)(BASE_RCC + 0x18)

#define GPIOA_CRL *(volatile unsigned int *)(GPIO_PORTA + 0x00)
#define GPIOA_CRH *(volatile unsigned int *)(GPIO_PORTA + 0X04)
#define GPIOA_IDR *(volatile unsigned int *)(GPIO_PORTA + 0x08)
#define GPIOA_ODR *(volatile unsigned int *)(GPIO_PORTA + 0x0C)

void GPIO_Init();
int GPIO_Get_Pressure_Val();

#endif // GPIO_H
