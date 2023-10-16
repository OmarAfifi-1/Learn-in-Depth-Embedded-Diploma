#include <stdio.h>

int main() {

    float num1, num2, num3;
    printf("Enter Three Numbers:");
    scanf("%f %f %f", &num1, &num2, &num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("%f is the largest number", num1);
        }
        else
        {
            printf("%f is the largest number", num3);
        }
    }
    else
    {
        if(num2>num3)
        {
            printf("%f is the largest number", num2);
        }
        else
        {
            printf("%f is the largest number", num3);
        }
    }
    return 0;
}