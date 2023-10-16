#include <stdio.h>

int main() {
    
    int a = 0,b = 0,temp;
    printf("Enter Value of a: ");
    scanf("%d", &a);
    printf("Enter Value of b: ");
    scanf("%d", &b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping Value of a: %d\n", a);
    printf("After swapping Value of b: %d\n", b);

    return 0;
}
