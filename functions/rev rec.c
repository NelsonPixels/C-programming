#include<stdio.h>
void rev(int a);

int main(void)
{    
    int a;

    printf("enter a number: ");
    scanf("%d", &a);       

    rev(a);

    return 0;
}

void rev(int a)
{    
    int rem;
    if (a == 0)
    {
        return;
    }

    else
    {
        rem = a % 10;
        printf("%d", rem);
        rev(a/10);
    }
}