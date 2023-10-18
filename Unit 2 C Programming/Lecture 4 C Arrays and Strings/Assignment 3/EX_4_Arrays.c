#include <stdio.h>

int main() {
    int arr[100], n, pos, val;
    printf("Enter no of Elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter The Element to be Inserted: ");
    scanf("%d", &val);
    printf("Enter The Location: ");
    scanf("%d", &pos);
    for (int i = n - 1; i >= pos - 1; i--) 
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = val;
    for (int i = 0; i < n+1; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
