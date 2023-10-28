#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    char strrev[100];
    char *p = str;
    char *q = strrev;
    gets(str);
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        *(q + i) = *(p + length - i - 1);
    }
    for (int i = 0; i < length; i++)
    {
        printf("%c", *(q + i));
    }
    return 0;
}
