#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char users[3][20] = {"Omar", "Ahmed", "Afifi"};
    char input[20];
    printf("Enter Your Username: ");
    gets(input);
    if(strcmp(input, users[0]) == 0 || strcmp(input, users[1]) == 0 || strcmp(input, users[2]) == 0)
    {
        printf("Welcome %s", input);
    }
    else
    {
        printf("Invalid Username");

    }
    return 0;
}
