#include<stdio.h>
long int nn(int a);
int main() {
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("fact of %d = %ld", a, nn(a));
    return 0;
}

long int nn(int a) {
    if (a>=1)
        return a*nn(a-1);
    else
        return 1;
}