#include <stdio.h>

int main() {
    float a[2][2]; 
    float b[2][2];
    float sum[2][2];

    printf("Enter The Elements of The 1st Matrix\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf(" %f", &a[i][j]);
        }
    }
    
    printf("Enter The Elements of The 2nd Matrix\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            printf("Enter b%d%d: ", i + 1, j + 1);
            scanf(" %f", &b[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
    printf("Sum of The Matrices:\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            printf("%f ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
