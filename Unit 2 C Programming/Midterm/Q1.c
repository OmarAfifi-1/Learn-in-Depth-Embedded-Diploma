#include <stdio.h>
int sum(int n);

int main() 
{

    int num,result;
    printf("Input: ");
    scanf("%d", &num);
    result = sum(num);
    printf("Output: %d\n", result);

    return 0;
}

int sum(int n) 
{
    int result = 0;
    while (n != 0) 
    {
        int digit = n % 10;
        result += digit;
        n /= 10;
    }
    return result;
}