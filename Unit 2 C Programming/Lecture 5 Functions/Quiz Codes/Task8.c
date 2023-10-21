#include <stdio.h>

int main() {

    int size;
    int num;
    printf("Enter The Size of The Array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter The Elements of The Array: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter The Number You Want to Search for: ");
    scanf("%d", &num);
    for(int i = size-1; i > 0; i--)
    {
        if(arr[i] == num)
        {
            printf("The Number is Found at Index %d", i);
            return 0;
        }
    }
    return 0;
}
