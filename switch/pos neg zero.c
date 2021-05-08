#include <stdio.h>

int main()
{
    int a;

    printf("Enter any number: ");
    scanf("%d", &a);

    switch (a > 0)
    {
        case 1:
            printf("%d is positive.", a);
        break;
        case 0:
            switch (a < 0)
            {
                case 1: 
                    printf("%d is negative.",a);
                    break;
                case 0:
                    printf("%d is zero.",a);
                    break;
            }
        break;
    }

    return 0;
}