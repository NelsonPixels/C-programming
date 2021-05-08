#include <stdio.h>

double cube(double num);

int main()
{
    int a;
    double c;
    printf("Enter any number: ");
    scanf("%d", &a);
    
    c = cube(a);

    printf("Cube of %d is %.2f",a, c); 
    
    return 0;
}

double cube(double a)
{
    return (a * a * a);
}