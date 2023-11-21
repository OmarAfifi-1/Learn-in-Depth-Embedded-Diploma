#ifndef CA_H_
#define CA_H_

#include "State.h"
#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    CA_Waiting,
    CA_Driving
}CA_State;

State_Define(CA_Waiting);
State_Define(CA_Driving);
extern void (*CA_State_PF)();

#endif // CA_H_
