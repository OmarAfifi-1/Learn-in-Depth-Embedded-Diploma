#include <stdio.h>

int reversed(int num);

int main() {

    int num;
    printf("Input: ");
    scanf("%d", &num);
    printf("Output: %d", reversed(num));
    return 0;
}

int reversed(int num) 
{
    int reversed = 0;
    while (num != 0) 
    {
        reversed = reversed * 10;
        reversed = reversed + num % 10;
        num = num / 10;
    }
    return reversed;
}