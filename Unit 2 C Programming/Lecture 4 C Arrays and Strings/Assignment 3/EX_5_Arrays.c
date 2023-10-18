#include <stdio.h>
#include <stdlib.h>

int main() {
    int location = 0;
    int i,num;
    int size;
    float entered_num;
    float *arr;
    printf("Enter The Number of Elements: ");
    scanf(" %d", &size);
    arr = (float*) malloc(size * sizeof(float));

    for(int i = 0; i < size; i++) 
    {
        scanf(" %f", &arr[i]);
    }

    printf("Enter a number to search for: ");
    scanf("%d", &num);
    
    for (i = 0; i < 10; i++) {
        if (arr[i] == num) {
            location = i+1;
            break;
        }
    }
    
    if (location == 0) {
        printf("Number not found in The Array.\n");
    } else {
        printf("Number Found at Location %d.\n", location);
    }
    
    return 0;
}
