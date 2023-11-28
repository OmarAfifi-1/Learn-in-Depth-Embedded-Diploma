#ifndef PRESSURE_SENSOR_H
#define PRESSURE_SENSOR_H

#include "State.h"

typedef enum
{
	PS_Init,
	PS_Reading,
	PS_Waiting
}PS_Status;

State_Define(PS_Init);
State_Define(PS_Reading);
State_Define(PS_Waiting);

extern void (*PS_State)();

#endif // PRESSURE_SENSOR_H
