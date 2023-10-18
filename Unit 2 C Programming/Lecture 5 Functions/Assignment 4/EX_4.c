#include <stdio.h>
#include <stdlib.h>

long int getpower(int base, int power);

long int getpower(int base, int power)
{
    if(power==0)
    {
        return 1;
    }
    else if(power==1)
    {
        return base;
    }
    else if(power>1)
    {
        return base*getpower(base,power-1);
    }
    return 0;
}

int main() 
{
    
    int base,power;
    long int result;
    printf("Enter Base Number: ");
    scanf(" %d", &base);
    printf("Enter Power Number(Positive Integer): ");
    scanf(" %d", &power);
    result = getpower(base,power);
    printf("%d^%d = %d", base,power,result);

    return 0;
}
