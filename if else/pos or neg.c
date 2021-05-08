#include <stdio.h>
int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num <= 0.0) {
        if (num == 0.0)
            printf("the number is 0.");
        else
            printf("the number is negative.");
    } else
        printf("the number is positive.");
    return 0;
}