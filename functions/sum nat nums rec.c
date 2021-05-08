#include <stdio.h>
int addnums(int n);
int main() {
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("sum = %d", addnums(a));
    return 0;
}

int addnums(int n) {
    if (n != 0)
        return n + addnums(n - 1);
    else
        return n;
}