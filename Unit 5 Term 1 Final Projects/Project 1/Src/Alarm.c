#include "Alarm.h"

Alarm_Status Alarm_Current_State;

State_Define(Alarm_Off)
{
    Alarm_Current_State = Alarm_Off;
    GPIO_Set_Alarm_Actuator(0);
    if(High_Pressure_Detection() == 1)
    {
        Alarm_State = State_Set(Alarm_On);
    }
    
}

State_Define(Alarm_On)
{
    Alarm_Current_State = Alarm_On;
    GPIO_Set_Alarm_Actuator(1);
    Alarm_State = State_Set(Alarm_Waiting);
}

State_Define(Alarm_Waiting)
{
    Alarm_Current_State = Alarm_Waiting;
    Delay(1000000);
    Alarm_State = State_Set(Alarm_Off);
}

