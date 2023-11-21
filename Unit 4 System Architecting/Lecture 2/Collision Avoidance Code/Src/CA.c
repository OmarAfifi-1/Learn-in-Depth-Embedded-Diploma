#include "CA.h"
#include "DC_Motor.h"
#include "ULTRASONIC.h"

int CA_Speed       =0;
int CA_Distance    =0;
int CA_Threshold   =50;
CA_State CA_Current_State;

void (*CA_State_PF) ();

void ULTRASONIC_Get_Distance(int Distance)
{
	CA_Distance = Distance;
	(CA_Distance <= CA_Threshold ) ? (CA_State_PF = State_Set(CA_Waiting)) : (CA_State_PF = State_Set(CA_Driving));
	printf("Signal -> ULTRASONIC -> Collision Avoidance -> The Current Distance is %d\n",CA_Distance);
}

State_Define(CA_Waiting)
{
	CA_Current_State = CA_Waiting ;
	printf("State -> CA_Waiting -> Distance = %d  Speed = %d \n",CA_Distance,CA_Speed);
	CA_Speed = 0 ;
	DC_MOTOR_Set_Speed(CA_Speed);
}


State_Define(CA_Driving)
{
	CA_Current_State = CA_Driving ;
	printf("State -> CA_Driving -> Distance = %d  Speed = %d \n",CA_Distance,CA_Speed);
	CA_Speed = 30 ;
	DC_MOTOR_Set_Speed(CA_Speed);
}