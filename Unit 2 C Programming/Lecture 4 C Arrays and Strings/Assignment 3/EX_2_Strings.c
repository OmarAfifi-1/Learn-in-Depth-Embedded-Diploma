#include <stdio.h>

int main() {
    char str[1000];
    int length = 0;
    printf("Enter a String: ");
    fgets(str , sizeof(str) , stdin);
    while (str[length] != '\0') 
    {
        length++;
    }
    length--;
    printf("Length of the string: %d\n", length);

    return 0;
}
