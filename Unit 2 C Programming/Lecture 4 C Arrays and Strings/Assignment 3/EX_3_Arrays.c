#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, colums, i, j;

    printf("Enter The Rows and Colums of The Matrix: ");
    scanf("%d", &rows);
    scanf("%d", &colums);

    float **arr = (float **)malloc(rows * sizeof(float *));
    for (i = 0; i < rows; i++) 
    {
        arr[i] = (float *)malloc(colums * sizeof(float));
    }

    printf("Enter elements of array:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < colums; j++) 
        {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf(" %f", &arr[i][j]);
        }
    }

    float **transposed_arr = (float **)malloc(colums * sizeof(float *));
    for (i = 0; i < colums; i++) 
    {
        transposed_arr[i] = (float *)malloc(rows * sizeof(float));
    }

    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < colums; j++) 
        {
            transposed_arr[j][i] = arr[i][j];
        }
    }

    printf("Entered Matrix:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < colums; j++) 
        {
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Transposed of The Matrix:\n");
    for (i = 0; i < colums; i++) 
    {
        for (j = 0; j < rows; j++) 
        {
            printf("%f ", transposed_arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++) 
    {
        free(arr[i]);
    }
    free(arr);

    for (i = 0; i < colums; i++) 
    {
        free(transposed_arr[i]);
    }
    free(transposed_arr);

    return 0;
}
