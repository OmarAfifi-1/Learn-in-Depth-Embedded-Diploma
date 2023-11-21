#include "CA.h"
#include "DC_Motor.h"
#include "ULTRASONIC.h"

int main()
{
	ULTRASONIC_Init();
	DC_Motor_Init();
	CA_State_PF = State_Set(CA_Waiting);
	ULTRASONIC_State_PF = State_Set(ULTRASONIC_Busy);
	DC_Motor_State_PF = State_Set(DC_Motor_Idle);
	while(1)
    {
		ULTRASONIC_State_PF();
		DC_Motor_State_PF();
		CA_State_PF();
		for(volatile int i=0;i<10000000;i++);
	}

	return 0;
}