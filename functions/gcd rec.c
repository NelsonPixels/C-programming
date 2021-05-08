#include <stdio.h>
int gcd(int n1, int n2);
int main() {
    int a, b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("gcd of %d and %d is %d.", a, b, gcd(a, b));
    return 0;
}
int gcd(int a, int b) {
    if (b != 0)
        return gcd(b, a % b);
    else
        return a;
}