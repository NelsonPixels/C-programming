#include <stdio.h>
int main() {
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *,/): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (operator) {
    case '+':
        printf("%f + %f = %f", a, b, a + b);
        break;
    case '-':
        printf("%f - %f = %f", a, b, a - b);
        break;
    case '*':
        printf("%f * %f = %f", a, b, a * b);
        break;
    case '/':
        printf("%f / %f = %f", a, b, a / b);
        break;
    default:
        printf("wrong operator");
    }

    return 0;
}