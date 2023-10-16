#include <stdio.h>

int main() {

    char character;
    printf("Enter an Alphapet:");
    scanf("%c", &character);
    if(character =='a' || character =='e' || character =='i' || character =='o' || character =='u' || character =='A' || character =='E' || character =='I' || character =='O' || character =='U')
        printf("%c is Vowel.", character);
    else
        printf("%c is Consonant.", character);

    return 0;
}