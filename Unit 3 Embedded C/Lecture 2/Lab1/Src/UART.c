#include "UART.h"

#define UART0DR *((volatile unsigned int*) ((unsigned int*)0x101f1000))

void UART_Send_String(unsigned char* tx_str)
{
    while(*tx_str != '\0')
    {
        UART0DR = (unsigned int)(*tx_str);
        tx_str++;
    }
}