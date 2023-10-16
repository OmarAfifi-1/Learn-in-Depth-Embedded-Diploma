#include <stdio.h>

int main() {

    char character;
    printf("Enter a Character:");
    scanf("%c", &character);
    if(character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z')
    {
        printf("%c is an Alphabet", character);
    }
    else
    {
        printf("%c is not an Alphapet", character);
    }
        
    return 0;
}