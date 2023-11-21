#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include <stdio.h>
#include <stdlib.h>
#include "State.h"

typedef enum
{
    ULTRASONIC_Busy
}ULTRASONIC_State;

void ULTRASONIC_Init(void);
State_Define(ULTRASONIC_Busy);
extern void (*ULTRASONIC_State_PF)();

#endif // ULTRASONIC_H_
