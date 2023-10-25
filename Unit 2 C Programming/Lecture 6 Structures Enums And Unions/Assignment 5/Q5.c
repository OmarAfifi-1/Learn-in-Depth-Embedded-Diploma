#include <stdio.h>

#define PI 3.14
#define AREA(r) (PI * (r) * (r))

int main() {
    float radius,area;
    printf("Enter The Radius: ");
    scanf("%f", &radius);
    area = AREA(radius);
    printf("The Area = %.2f", area);
    return 0;
}
