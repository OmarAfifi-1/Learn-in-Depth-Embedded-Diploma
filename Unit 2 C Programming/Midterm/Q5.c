#include <stdio.h>
int onenum(int num);

int main() 
{
    int num;
    printf("Input: ");
    scanf("%d", &num);
    printf("Output: %d\n", onenum(num));
    return 0;
}

int onenum(int num) 
{
    int count = 0;
    while (num != 0) 
    {
        if ((num&1) == 1) 
        {
            count++;
        }
        num >>= 1;
    }
    return count;
}