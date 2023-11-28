#include "Bit_Math.h"
#include "Platform_Types.h"

#include "Algorithm.h"
#include "Pressure_Sensor.h"
#include "GPIO.h"
#include "Alarm.h"
#include "Delay.h"

void (*PS_State)() = State_Set(PS_Init);
void (*Alarm_State)() = State_Set(Alarm_Off);
void (*Algorithm_State)() = State_Set(Algorithm_High_Pressure);

int main ()
{
	GPIO_Init();
	while (1)
	{
		PS_State();
		Algorithm_State();
		Alarm_State();
	}

}
