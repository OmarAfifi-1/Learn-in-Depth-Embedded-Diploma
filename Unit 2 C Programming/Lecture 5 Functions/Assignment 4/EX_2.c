#include <stdio.h>
#include <stdlib.h>

void factorial(int num) ;

void factorial(int num) 
{
    const static int og_num = num;
    static long int fact = 1;
    fact *= num;
    if(num == 1)
    {
        printf("Factorial of %d = %ld",og_num, fact);
        return;
    }
    else if(num > 1)
    {
        factorial(num - 1);
    }
}
int main() 
{
    printf("Enter a Positive Integer: ");
    int num;
    scanf("%d", &num);
    factorial(num);
    return 0;
}
