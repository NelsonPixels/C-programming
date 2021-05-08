#include <stdio.h>
int chkp(int n);
int main() {
    int a, b, i, c;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("prime numbers between %d and %d are: ", a, b);
    for (i = a + 1; i < b; ++i) {
        c = chkp(i);

        if (c == 1)
            printf("%d ", i);
    }
    return 0;
}
int chkp(int n) {
    int j, c = 1;
    for (j = 2; j <= n / 2; ++j) {
        if (n % j == 0) {
            c = 0;
            break;
        }
    }
    return c;
}