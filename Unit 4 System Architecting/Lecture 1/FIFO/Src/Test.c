#include "FIFO.h"

int main(void)
{
    ELEMENT_TYPE UART_Buffer[FIFO_LENGTH];
    FIFO UART_FIFO;
    ELEMENT_TYPE Storage;
    ELEMENT_TYPE i;
    if(FIFO_Init(&UART_FIFO, UART_Buffer, FIFO_LENGTH) == FIFO_OK)
    {
        printf("FIFO Initialized Successfully\n");
    }
    else
    {
        printf("FIFO Initialization Failed\n");
    }
    for(i = 0; i < FIFO_LENGTH; i++)
    {
        if(FIFO_Enqueue(&UART_FIFO, i) == FIFO_OK)
        {
            printf("Enqueued %d\n", i);
        }
        else
        {
            printf("Enqueue Failed\n");
        }
    }
    FIFO_Print(&UART_FIFO);
    FIFO_Dequeue(&UART_FIFO, &Storage);
    printf("Dequeued %d\n", Storage);
    FIFO_Dequeue(&UART_FIFO, &Storage);
    printf("Dequeued %d\n", Storage);
    FIFO_Dequeue(&UART_FIFO, &Storage);
    printf("Dequeued %d\n", Storage);
    FIFO_Print(&UART_FIFO);
    FIFO_Enqueue(&UART_FIFO, 55);
    FIFO_Enqueue(&UART_FIFO, 44);
    FIFO_Enqueue(&UART_FIFO, 33);
    FIFO_Print(&UART_FIFO);
    while(1);
    return 0;
}