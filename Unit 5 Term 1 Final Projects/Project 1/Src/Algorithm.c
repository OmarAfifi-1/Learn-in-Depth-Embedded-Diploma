#include "Algorithm.h"

Algorithm_Status Alegorithm_Current_State;

State_Define(Algorithm_High_Pressure)
{
    Alegorithm_Current_State = Algorithm_High_Pressure;
    if(Get_Pressure_Val() <= 20)
    {
        Algorithm_State = State_Set(Algorithm_Low_Pressure);
    }
}
State_Define(Algorithm_Low_Pressure)
{
    Alegorithm_Current_State = Algorithm_Low_Pressure;
    if(Get_Pressure_Val() > 20)
    {
        Algorithm_State = State_Set(Algorithm_High_Pressure);
    }
}

unsigned int High_Pressure_Detection()
{
    return Alegorithm_Current_State == Algorithm_High_Pressure;
}
