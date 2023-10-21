#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int result = num & 0b00001000;
    result = result >> 3;
    printf("Result: %d",result);
    return 0;
}
