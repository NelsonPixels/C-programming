#include <stdio.h>

int isEven(int a)
{
    return !(a & 1);
}

int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    if(isEven(a))
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    
    return 0;
}