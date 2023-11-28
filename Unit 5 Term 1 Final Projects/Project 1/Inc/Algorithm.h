#ifndef ALGORITHM_H
#define ALGORITHM_H

#include "state.h"

typedef enum 
{
    Algorithm_Low_Pressure,
	Algorithm_High_Pressure
    
}Algorithm_Status;

State_Define(Algorithm_High_Pressure);
State_Define(Algorithm_Low_Pressure);

extern void (*Algorithm_State)();


#endif // ALGORITHM_H
