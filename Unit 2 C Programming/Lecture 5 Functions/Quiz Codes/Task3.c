#include <stdio.h>
#include <string.h>

int main() 
{

    char input[50];
    printf("Input: ");
    gets(input);
    printf("Output: ");
    int length = strlen(input);
    for(int i = 0; i < length; i++)
    {
        printf("%c", input[length-i-1]);
    }


    return 0;
}
