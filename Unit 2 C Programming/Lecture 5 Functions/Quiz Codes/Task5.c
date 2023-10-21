#include <stdio.h>

int main() 
{
    int num,pos;
    printf("Input Number: ");
    scanf("%d", &num);
    printf("Bit Position: ");
    scanf("%d", &pos);
    num &= ~(1 << pos);
    printf("Result: %d",num);
    return 0;
}
