#include "Platform_Types.h"
#include <stdlib.h>

#define SYSCTL_RCGC2_R *((volatile unsigned long*)0x400FE108) 
#define GPIO_PORTF_DATA_R *((volatile unsigned long*)0x400253FC)
#define GPIO_PORTF_DIR_R *((volatile unsigned long*)0x40025400)
#define GPIO_PORTF_DEN_R *((volatile unsigned long*)0x4002551C)

unsigned long ticks;

void * _sbrk(int Increment)
{
	extern unsigned int _E_Bss;
	extern unsigned int _Heap_End;
	static unsigned char * Heap_Ptr = NULL;
	static unsigned char * Prev_Heap_Ptr = NULL;

	if(Heap_Ptr==NULL)
		Heap_Ptr = (unsigned char *)&_E_Bss;
	Prev_Heap_Ptr = Heap_Ptr;

	if( (Heap_Ptr + Increment) >  (unsigned char *)&_Heap_End)
		return (void *) NULL;

	Heap_Ptr += Increment; 
	return (void *)Prev_Heap_Ptr;
}

int main(void)
{
	SYSCTL_RCGC2_R = 0x20;
	for(ticks = 0;ticks < 200;ticks++);
	GPIO_PORTF_DIR_R |= 1<<3;
	GPIO_PORTF_DEN_R |= 1<<3;

	while(1)
	{
		GPIO_PORTF_DATA_R |= 1<<3;
		for(ticks = 0 ; ticks < 1000000 ; ticks++ );
		GPIO_PORTF_DATA_R &= ~(1<<3);
		for(ticks = 0 ; ticks < 1000000 ; ticks++ );
	}
	return 0 ;
}
