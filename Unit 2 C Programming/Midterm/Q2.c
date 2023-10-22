#include <stdio.h>
#include <stdlib.h>

float squareRoot(int n) 
{
    float temp, sqrt;
    sqrt = n / 2;
    temp = 0;
    while(sqrt != temp)
    {
        temp = sqrt;
        sqrt = ( n/temp + temp) / 2;
    }
    return sqrt;
}

int main() {
    int num;
    printf("Input: ");
    scanf(" %d", &num);
    printf("Output: %f", squareRoot(num));
    return 0;
}
