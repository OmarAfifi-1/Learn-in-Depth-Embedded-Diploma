#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reversewords(char *str);

int main() 
{
    char str[1000];
    gets(str);
    reversewords(str);
    return 0;
}

void reversewords(char *str)
{
    int i=0;
    char* arr[1000]; //This will be an array of pointers to tokens i get from the strtok
    char* temp=strtok(str, " ");
    while(temp!=NULL)
    {
        arr[i]=temp;
        temp = strtok(NULL, " ");
        i++; // used also for counting the number of tokens
    }
    for(int j=i-1; j>=0; j--)
    {
        printf("%s ", arr[j]); //now i used the j index using the i which is the number of tokens and printed it in revrse order
    }    
}