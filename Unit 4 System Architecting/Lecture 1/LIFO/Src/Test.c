#include "LIFO.h"

unsigned int Buffer[10];

int main(void)
{
    LIFO UART_LIFO;
    unsigned int Storage;
    LIFO_init(&UART_LIFO, Buffer, 10);
    for(int i = 0; i < 10; i++)
    {
        LIFO_Push(&UART_LIFO,i);
        printf("Pushed %d\n", i);
    }
    for(int i = 0; i < 10; i++)
    {
        LIFO_Pop(&UART_LIFO, &Storage);
        printf("Popped %d\n", Storage);
    }
    return 0;
}