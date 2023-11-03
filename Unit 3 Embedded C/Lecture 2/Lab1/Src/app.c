#include "UART.h"

unsigned char buffer[100] = "Omar Afifi";

int main(void)
{
    UART_Send_String(buffer);
}
