#include <stdio.h>

int main() {

    int num;
    printf("Enter a Number:");
    scanf("%d", &num);
    if(num==0)
    {
        printf("You Entered Zero");
    }
    else if(num>0)
    {
        printf("%d is Positive", num);
    }
    else if(num<0)
    {
        printf("%d is Negative", num);
    }

    return 0;
}