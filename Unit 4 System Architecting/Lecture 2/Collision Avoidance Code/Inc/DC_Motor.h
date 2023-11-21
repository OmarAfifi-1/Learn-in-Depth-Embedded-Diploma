#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include "State.h"
#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    DC_Motor_Idle,
    DC_Motor_Busy
}DC_Motor_State;

void DC_Motor_Init(void);
State_Define(DC_Motor_Idle);
State_Define(DC_Motor_Busy);

extern void (*DC_Motor_State_PF)();

#endif // DC_MOTOR_H_
