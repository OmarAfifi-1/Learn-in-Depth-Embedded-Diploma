#include <stdio.h>

struct distance 
{
    float feet;
    float inch;
};

int main() 
{

    struct distance d1, d2, sum;
    printf("Enter 1st Distance:\n");
    printf("Enter Feet: ");
    scanf("%f", &d1.feet);
    printf("Enter Inch: ");
    scanf("%f", &d1.inch);
    printf("Enter 2nd Distance:\n");
    printf("Enter Feet: ");
    scanf("%f", &d2.feet);
    printf("Enter Inch: ");
    scanf("%f", &d2.inch);
    sum.inch = d1.inch + d2.inch;
    if (sum.inch >= 12) 
    {
        sum.feet++;
        sum.inch -= 12;
    }
    sum.feet += d1.feet + d2.feet;
    printf("Sum of Distances = %0.2f feet %0.2f inches\n", sum.feet, sum.inch);

    return 0;
}
