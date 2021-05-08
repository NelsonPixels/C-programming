#include <stdio.h>

int per(int num);
void printper(int a, int b);

int main()
{
    int a, b;
    printf("enter lower limit: ");
    scanf("%d", &a);
    printf("enter upper limit: ");
    scanf("%d", &b);
    
    printf("perfect numbers between %d to %d are: \n",a, b);
    printper(a, b);
    
    return 0;
}

int per(int num)
{
    int i, sum;

    sum = 0;
    for(i=1; i<num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }

    if(sum == num)
        return 1;
    else
        return 0;
}

void printper(int a, int b)
{
    while(a <= b)
    {
        if(per(a))
        {
            printf("%d, ", a);
        }
        
        a++;
    }   
}