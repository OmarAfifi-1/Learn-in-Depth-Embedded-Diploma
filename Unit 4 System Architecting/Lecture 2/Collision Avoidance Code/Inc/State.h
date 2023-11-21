#ifndef STATE_H_
#define STATE_H_

#include <stdio.h>
#include <stdlib.h>

#define State_Define(State)  void ST_##State()
#define State_Set(State)   ST_##State

void ULTRASONIC_Get_Distance(int Distance);
void DC_MOTOR_Set_Speed(int Speed);

#endif // STATE_H_
