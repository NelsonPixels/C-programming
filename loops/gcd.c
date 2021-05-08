#include <stdio.h>
int main()
{
    int a, b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);

    while(a!=b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    printf("gcd = %d",a);
    return 0;
}