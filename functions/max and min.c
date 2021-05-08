#include <stdio.h>

int max(int num1, int num2);
int min(int num1, int num2);

int main() 
{
    int a, b, maximum, minimum;
    printf("enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    maximum = max(a,b);
    minimum = min(a,b);
    
    printf("\nmaximum = %d\n", maximum);
    printf("minimum = %d", minimum);
    
    return 0;
}

int max(int a, int b)
{
    return (a > b ) ? a : b;
}

int min(int a, int b) 
{
    return (a > b ) ? b : a;
}