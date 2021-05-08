#include <stdio.h>

int main()
{
    int a,b,c,sum;
    printf("Enter three angles of the triangle: \n");
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c; 
    if(sum == 180 && a > 0 && b > 0 && c > 0) 
    {
        printf("valid");
    }
    else
    {
        printf("not valid");
    }

    return 0;
}