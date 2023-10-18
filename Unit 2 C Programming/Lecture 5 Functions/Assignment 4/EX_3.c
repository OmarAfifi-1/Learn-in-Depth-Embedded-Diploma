#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *str, int len);

void reverse(char *str, int len)
{
    if (*str == '\0')
    {
        return;
    }
    reverse(str + 1, len - 1);
    printf("%c", *str);
}

int main() 
{

    char str[1000];
    printf("Enter a Sentance: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    reverse(str, len);

    return 0;
}
