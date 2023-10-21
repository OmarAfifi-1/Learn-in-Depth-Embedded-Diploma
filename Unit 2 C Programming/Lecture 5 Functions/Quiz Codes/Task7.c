#include <stdio.h>
#include <math.h>

int isPowerOfThree(int n) {
    if(n%3==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("%d",isPowerOfThree(n));
    return 0;
}
