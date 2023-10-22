#include <stdio.h>

static int result = 0;

int sum(int num);

int main() 
{
    printf("%d",sum(100));
    return 0;
}

int sum(int num)
{
    result += num;
    if(num == 0)
        return result;
    else
        sum(num-1);
}
