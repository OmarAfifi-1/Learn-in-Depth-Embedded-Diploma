#include "ULTRASONIC.h"

ULTRASONIC_State ULTRASONIC_Current_State;

void (*ULTRASONIC_State_PF)();

unsigned int ULTRASONIC_Distance = 0;

void ULTRASONIC_Init()
{
    printf("ULTRASONIC_Init\n");
}

int Generate_Random_Number(int min, int max, int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        int num = (rand() % (max - min + 1)) + min;
        return num;
    }
}

State_Define(ULTRASONIC_Busy)
{
    ULTRASONIC_Current_State = ULTRASONIC_Busy;
    ULTRASONIC_Distance = Generate_Random_Number(45, 55, 1);
    printf("State -> ULTRASONIC_Busy -> Distance = %d\n", ULTRASONIC_Distance);
    ULTRASONIC_Get_Distance(ULTRASONIC_Distance);
    ULTRASONIC_State_PF = State_Set(ULTRASONIC_Busy);
}