#include "Pressure_Sensor.h"

static unsigned int PS_Pressure_Value;
PS_Status PS_Current_State;

State_Define(PS_Init) 
{
	PS_Current_State = PS_Init;
	PS_State = State_Set(PS_Reading);
}	

State_Define(PS_Reading) 
{
	PS_Current_State = PS_Reading;
	PS_Pressure_Value = GPIO_Get_Pressure_Val();
	PS_State = State_Set(PS_Waiting);
}
	
State_Define(PS_Waiting) 
{
	PS_Current_State = PS_Waiting;
	Delay(1000);
	PS_State = State_Set(PS_Reading);
}

unsigned int Get_Pressure_Val()
{
	return PS_Pressure_Value;
}


