#include <stdio.h>

int main() {
    char character;
    printf("Enter a Character:");
    scanf("%c", &character);
    printf("ASCII Value of %c: %d\n",character,character);
    return 0;
}