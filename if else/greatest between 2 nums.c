#include <stdio.h>
int main() {
    double a, b;
    printf("Enter 2 numbers: ");
    scanf("%lf %lf", &a, &b);
    if (a > b)
        printf("%f is the largest number.", a);
    else if (b > a )
        printf("%f is the largest number.", b);
	else
		printf("they are the same");
    return 0;
}
