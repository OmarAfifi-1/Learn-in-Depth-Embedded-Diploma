#include <stdio.h>

int main() 
{
    char alphapets[27];
    char *p = alphapets;
    for(int i = 0; i < 26; i++)
    {
        *p = 'A' + i;
        p++;
    }
    p = alphapets;
    for(int i = 0; i < 26; i++)
    {
        printf("%c ", *p);
        p++;
    }
    return 0;
}
