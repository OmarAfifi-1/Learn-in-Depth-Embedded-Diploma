#include <stdio.h>
#define MAX(a,b) (((a)>(b))?(a):(b))

void swapArrays(int arr1[], int arr2[], int size) 
{
    int temp;
    for (int i = 0; i < size; i++) 
    {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

void printarray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    int arr1[100], arr2[100];
    int size1, size2;
    printf("Enter The Size of The First Array: ");
    scanf("%d", &size1);
    printf("Enter The Size of The Second Array: ");
    scanf("%d", &size2);
    printf("Enter The Elements of The First Array: ");
    for (int i = 0; i < size1; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter The Elements of The Second Array: ");
    for (int i = 0; i < size2; i++) 
    {
        scanf("%d", &arr2[i]);
    }
    printf("Before Swapping:\nArray 1: ");
    printarray(arr1, size1);
    printf("\nArray 2: ");
    printarray(arr2, size2);
    swapArrays(arr1, arr2, MAX(size1, size2));
    printf("\nAfter Swapping:\nArray 1: ");
    printarray(arr1, size2);
    printf("\nArray 2: ");
    printarray(arr2, size1);

    return 0;
}
