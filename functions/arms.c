#include <stdio.h>
int main() {
    int a, oa, rem, result = 0;
    printf("Enter number: ");
    scanf("%d", &a);
    oa = a;

    while (oa != 0) {
        rem = oa % 10;
       result += rem * rem * rem;
       oa /= 10;
    }

    if (result == a)
        printf("%d armstrong", a);
    else
        printf("%d is not armstrong", a);

    return 0;
}