#include "LIFO.h"

LIFO_Status LIFO_init(LIFO* lifo, unsigned int* Base, unsigned int Length)
{
    if(lifo == NULL)
    {
        return LIFO_NULL;
    }
    else
    {
        lifo->Base = Base;
        lifo->Top = Base;
        lifo->Length = Length;
        lifo->Count = 0;
        return LIFO_No_Error;
    }
}
LIFO_Status LIFO_Push(LIFO* lifo, unsigned int Data)
{
    if(lifo == NULL)
    {
        return LIFO_NULL;
    }
    else if(lifo->Count == lifo->Length)
    {
        return LIFO_Full;
    }
    else
    {
        *(lifo->Top) = Data;
        lifo->Top++;
        lifo->Count++;
        return LIFO_No_Error;
    }
}
LIFO_Status LIFO_Pop(LIFO* lifo, unsigned int* Storage)
{
    if(lifo == NULL)
    {
        return LIFO_NULL;
    }
    else if(lifo->Count == 0)
    {
        return LIFO_Empty;
    }
    else
    {
        lifo->Top--;
        *Storage = *(lifo->Top);
        lifo->Count--;
        return LIFO_No_Error;
    }
}