#ifndef ALARM_H
#define ALARM_H

#include "State.h"

typedef enum
{
	Alarm_Off,
	Alarm_On,
	Alarm_Waiting
}Alarm_Status;

State_Define(Alarm_Off);
State_Define(Alarm_On);
State_Define(Alarm_Waiting);

extern void (*Alarm_State)();

#endif // ALARM_H
