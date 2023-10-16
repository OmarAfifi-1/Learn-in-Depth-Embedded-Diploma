#include <stdio.h>

int main() {
    float num1, num2, result;
    char opera;

    printf("Enter an operator either + or - or * or /: ");
    scanf(" %c", &opera);
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(opera) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 == 0) {
                printf("Can't Divide by Zero");
                return 0;
            }
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator");
            return 1;
    }

    printf("%f %c %f = %f", num1, opera, num2, result);

    return 0;
}
