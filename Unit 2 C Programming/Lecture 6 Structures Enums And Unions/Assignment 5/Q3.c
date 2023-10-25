#include <stdio.h>

struct Complex_Num 
{
    float real;
    float imag;
};

struct Complex_Num add(struct Complex_Num n1, struct Complex_Num n2) 
{
    struct Complex_Num temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}

int main() 
{
    
    struct Complex_Num num1, num2, sum;
    printf("Enter Real and Imaginary Parts Respectively:\n");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("Enter Real and Imaginary Parts Respectively:\n");
    scanf("%f %f", &num2.real, &num2.imag);
    sum = add(num1, num2);
    printf("Sum = %.2f + %.2fi", sum.real, sum.imag);

    return 0;
}
