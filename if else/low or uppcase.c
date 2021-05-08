#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    if(a >= 'A' && a <= 'Z')
    {
        printf("%c is uppercase", a);
    }
    else if(a >= 'a' && a <= 'z')
    {
        printf("%c is lowercase", a);
    }
    else
    {
        printf("%c is not an alphabet", a);
    }

    return 0;
}