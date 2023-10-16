#include <stdio.h>

int main() {

    int num;
    long factorial=1;
    printf("Enter an Integer:");
    scanf("%d", &num);
    if(num<0)
    {
        printf("Error!!! Factorial of a negative number doesn't exist.");
        return 0;
    }
    for(int i=1;i<=num;i++)
    {
        factorial*=i;
    }
    printf("Factorial = %ld", factorial);

    return 0;
}