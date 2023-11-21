#include "DC_Motor.h"

unsigned int DC_Motor_Speed = 0;
void (*DC_Motor_State_PF)();
DC_Motor_State DC_Motor_Current_State;

void DC_Motor_Init(void)
{
    printf("DC_Motor_Init\n");
}

void DC_MOTOR_Set_Speed(int Speed)
{
    DC_Motor_Speed = Speed;
    DC_Motor_State_PF = State_Set(DC_Motor_Busy);
    printf("Signal -> Collision Avoidance -> DC Motor Set Speed To %d\n", DC_Motor_Speed);
    printf("=============================================================================================\n");
}

State_Define(DC_Motor_Busy)
{
    DC_Motor_Current_State = DC_Motor_Busy;
    DC_Motor_State_PF = State_Set(DC_Motor_Busy);
    printf("State -> DC_Motor_Busy -> Speed = %d\n", DC_Motor_Speed);
    
}

State_Define(DC_Motor_Idle)
{
    DC_Motor_Current_State = DC_Motor_Idle;
    DC_Motor_State_PF = State_Set(DC_Motor_Idle);
    printf("State -> DC_Motor_Idle -> Speed = %d\n", DC_Motor_Speed);
}