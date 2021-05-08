#include<stdio.h>

int main(void)
{
    float principal_amt, rate, simple_interest;
    int time;
    printf("Enter the value of principal amount, rate and time\n");
    scanf("%f%f%d", &principal_amt, &rate, &time);

    simple_interest = (principal_amt*rate*time)/100.0;

    printf("principal amount = %f\n ", principal_amt);

    printf("Rate = %f\n ", rate);
    printf("Time= %d years \n", time);
    printf("Simple Interest = %f\n ", simple_interest);
    return 0;
}