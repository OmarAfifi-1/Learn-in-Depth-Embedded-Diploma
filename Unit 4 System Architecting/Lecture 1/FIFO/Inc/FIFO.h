#ifndef FIFO_H_
#define FIFO_H_

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define ELEMENT_TYPE uint8_t
#define FIFO_LENGTH 20

typedef struct {
    ELEMENT_TYPE* Base;
    ELEMENT_TYPE* Head;
    ELEMENT_TYPE* Tail;
    unsigned int Length;
    unsigned int Count;
}FIFO;

typedef enum 
{
    FIFO_OK,
    FIFO_FULL,
    FIFO_EMPTY,
    FIFO_ERROR
}FIFO_Status;

FIFO_Status FIFO_Init(FIFO* FIFO , ELEMENT_TYPE* Buffer, unsigned int Length);
FIFO_Status FIFO_Enqueue(FIFO* FIFO, ELEMENT_TYPE Data);
FIFO_Status FIFO_Dequeue(FIFO* FIFO, ELEMENT_TYPE* Storage);
FIFO_Status FIFO_Is_Full(FIFO* FIFO);
void FIFO_Print(FIFO* FIFO);


#endif // FIFO_H_
