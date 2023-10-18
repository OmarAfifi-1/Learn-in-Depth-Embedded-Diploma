#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char character;
    int count = 0;

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a Character to Find Frequency: ");
    scanf("%c", &character);
    for (int i = 0; i < strlen(str); i++) 
    {
        if (str[i] == character) 
        {
            count++;
        }
    }
    
    printf("Frequency of %c = %d\n", character, count);
    return 0;
}
