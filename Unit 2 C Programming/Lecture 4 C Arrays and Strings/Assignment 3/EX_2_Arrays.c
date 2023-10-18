#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    float *arr;
    float sum = 0, avg;

    printf("Enter The Number of Data: ");
    scanf(" %d", &num);

    arr = (float*) malloc(num * sizeof(float));

    printf("Enter %d elements:\n", num);
    for(int i = 0; i < num; i++) 
    {
        printf("Enter Number %d: ", i + 1);
        scanf(" %f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / num;
    printf("Average = %f", avg);

    free(arr);
    return 0;
}
