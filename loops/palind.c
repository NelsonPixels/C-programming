#include <stdio.h>
int main() {
    int a, rn = 0, rem, on;
    printf("enter an integer: ");
    scanf("%d", &a);
    on = a;
    while (a != 0) {
        rem = a % 10;
        rn = rn * 10 + rem;
        a /= 10;
    }

    if (on == rn)
        printf("%d is a palindrome.", on);
    else
        printf("%d is not a palindrome.", on);

    return 0;
}