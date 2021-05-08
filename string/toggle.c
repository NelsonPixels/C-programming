#include <stdio.h>
#define MAX_SIZE 100
void tc(char * str);

int main()
{
    char str[MAX_SIZE];
    printf("enter a string: ");
    scanf("%s",&str);

    printf("before: %s\n", str);

    tc(str);

    printf("after: %s", str);

    return 0;
}
void tc(char * str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }
}