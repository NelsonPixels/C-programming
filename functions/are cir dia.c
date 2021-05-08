#include <stdio.h>
#include <math.h>

double M_PI = 3.14;
double diameter(double radius);
double circumference(double radius);
double area(double radius);


int main() 
{
    float radius, diam, circ, are;
    printf("enter radius of circle: ");
    scanf("%f", &radius);
    
    diam  = diameter(radius); 
    circ = circumference(radius);
    are = area(radius);
    
    printf("diameter = %f\n", diam);
    printf("circumference = %f\n", circ);
    printf("area = %f", are);
    
    return 0;
}

double diameter(double radius) 
{
    return (2 * radius);
}

double circumference(double radius) 
{
    return (2 * M_PI * radius);
}

double area(double radius)
{
    return (M_PI * radius * radius);
}