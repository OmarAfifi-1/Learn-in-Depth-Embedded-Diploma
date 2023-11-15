#ifndef LIFO_H_
#define LIFO_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned int* Base;
    unsigned int* Top;
    unsigned int Length;
    unsigned int Count;
}LIFO;

typedef enum
{
    LIFO_No_Error,
    LIFO_Full,
    LIFO_Empty,
    LIFO_NULL
}LIFO_Status;

LIFO_Status LIFO_init(LIFO* lifo, unsigned int* Base, unsigned int Length);
LIFO_Status LIFO_Push(LIFO* lifo, unsigned int Data);
LIFO_Status LIFO_Pop(LIFO* lifo, unsigned int* Storage);

#endif // LIFO_H_