#ifndef STATE_H
#define STATE_H

#include "GPIO.h"
#include "Delay.h"

#define State_Define(State)  void ST_##State()
#define State_Set(State)   ST_##State

unsigned int Get_Pressure_Val();
void GPIO_Set_Alarm_Actuator(int i);
unsigned int High_Pressure_Detection();

#endif // STATE_H
