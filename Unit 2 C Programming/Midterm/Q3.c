#include <stdio.h>
#include <stdlib.h>

void allprime(int num1,int num2);

int main() 
{
    int num1, num2;
    printf("Input: ");
    scanf("%d %d", &num1, &num2);
    printf("Output: ");
    allprime(num1,num2);
    return 0;
}

void allprime(int num1,int num2)
{
    for(int i=num1;i<=num2;i++)
    {
        int flag=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",i);
        }
    }
}