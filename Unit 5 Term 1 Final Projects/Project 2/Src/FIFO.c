#include "FIFO.h"

FIFO_Status FIFO_Init(FIFO* FIFO , ELEMENT_TYPE* Buffer, unsigned int Length)
{
    FIFO->Base = Buffer;
    FIFO->Head = Buffer;
    FIFO->Tail = Buffer;
    FIFO->Length = Length;
    FIFO->Count = 0;
    if(FIFO->Base == NULL || FIFO->Length == 0)
        return FIFO_ERROR;
    return FIFO_OK;
}

FIFO_Status FIFO_Enqueue(FIFO* FIFO, ELEMENT_TYPE Data)
{
    if(!FIFO->Base || !FIFO->Head || !FIFO->Tail)
        return FIFO_ERROR;
    if(FIFO->Count == FIFO->Length)
        return FIFO_FULL;
    *(FIFO->Head) = Data;
    FIFO->Count++;
    if(FIFO->Head == FIFO->Base + FIFO->Length * sizeof(ELEMENT_TYPE))
        FIFO->Head = FIFO->Base;
    else
        FIFO->Head++;
    return FIFO_OK;

}

FIFO_Status FIFO_Dequeue(FIFO* FIFO, ELEMENT_TYPE* Storage)
{
    if(!FIFO->Base || !FIFO->Head || !FIFO->Tail)
        return FIFO_ERROR;
    if(FIFO->Count == 0)
        return FIFO_EMPTY;
    *Storage = *(FIFO->Tail);
    FIFO->Count--;
    if(FIFO->Tail == (FIFO->Base + FIFO->Length * sizeof(ELEMENT_TYPE)))
        FIFO->Tail = FIFO->Base;
    else
        FIFO->Tail++;
    return FIFO_OK;
}

FIFO_Status FIFO_Is_Full(FIFO* FIFO)
{
    if(!FIFO->Base || !FIFO->Head || !FIFO->Tail)
        return FIFO_ERROR;
    if(FIFO->Count == FIFO->Length)
        return FIFO_FULL;
    return FIFO_OK;
}

void FIFO_Print(FIFO* FIFO)
{
    ELEMENT_TYPE* Temp = FIFO->Tail;
    unsigned int i = 0;
    if(!FIFO->Base || !FIFO->Head || !FIFO->Tail)
        return;
    if(FIFO->Count == 0)
        return;
    for(i = 0; i < FIFO->Count; i++)
    {
        printf("%d \n", *Temp);
        if(Temp == (FIFO->Base + FIFO->Length * sizeof(ELEMENT_TYPE)))
            Temp = FIFO->Base;
        else
        Temp++;
    }
    printf("\n");
}