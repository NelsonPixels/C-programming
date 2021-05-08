#include <stdio.h>
int main() {
    double a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a >= b && a >= c)
        printf("%f is the largest number", a);

    if (b >= a && b >= c)
        printf("%f is the largest number", b);

    if (c >= a && c >= b)
        printf("%f is the largest number", c);

    return 0;
}