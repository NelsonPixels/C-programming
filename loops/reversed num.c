#include <stdio.h>
int main() {
    int a, revn = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &a);
    while (a != 0) {
        rem = a % 10;
        revn = revn * 10 + rem;
        a /= 10;
    }
    printf("Reversed number = %d", revn);
    return 0;
}