#include <stdio.h>
int main() {
    int i, a, b1 = 0, b2 = 1, nt;
    printf("enter the number of terms: ");
    scanf("%d", &a);
    printf("fibonacci series: ");
    for (i = 1; i <= a; ++i) {
        printf("%d, ", b1);
        nt = b1 + b2;
        b1 = b2;
        b2 = nt;
    }
    return 0;
}