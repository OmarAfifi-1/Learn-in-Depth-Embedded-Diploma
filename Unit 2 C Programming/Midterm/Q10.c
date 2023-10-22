#include <stdio.h>

#define MAX(a,b) (((a)>(b))?(a):(b))

int maxnumofones(int num);

int main() {
    int num;
    printf("Input: ");
    scanf("%d", &num);
    int max_ones = maxnumofones(num);
    printf("Output: %d", max_ones);
    return 0;
}

int maxnumofones(int num)
{
    int max_ones = 0;
    int temp = 0;
    while(num!=0)
    {
        if(num%2==1)
        {
            temp++;
        }
        else
        {
            if(temp>max_ones)
            {
                max_ones = temp;
            }
            temp = 0;
        }
        num/=2;
    }
    return MAX(max_ones, temp);
}