#include <stdio.h>

int Uniquenum(int arr[], int size);

int main() 
{
    int size;
    printf("Input Size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Input Elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Output: %d", Uniquenum(arr, size));
    return 0;
}

int Uniquenum(int arr[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++) 
    {
        result ^= arr[i];
    }

    return result;
}
