#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    //Enter Nums With Spaces ex: 0x30 0x31 0x32 0x33 0x34
    char num[100];
    char temp=0;
    int i=0;
    gets(num);
    int length = strlen(num);
    unsigned int output = 0;
    for(int j = 3; j < length; j+=5)
    {
        output = output * 10 + (num[j] - '0');   
    }
    printf("%u", output);
    return 0;
}
