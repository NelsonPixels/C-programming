#include <stdio.h>

double pow(double base, int exp);

int main()
{
    double base, power;
    int exp;
    printf("enter base: ");
    scanf("%lf", &base);
    printf("enter exponent: ");
    scanf("%d", &exp);
    power = pow(base, exp); 
    
    printf("%f ^ %d = %f", base, exp, power);
    
    return 0;
}

double pow(double base, int exp)
{
    if(exp == 0)
        return 1;
    else if(exp > 0)
        return base * pow(base, exp - 1);
    else
        return 1 / pow(base, -exp);
}