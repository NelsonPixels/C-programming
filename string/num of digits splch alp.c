#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char str[100];
    int alp, digit, splch, i;
    alp = digit = splch = i = 0; 	
       printf("enter the string : ");
       fgets(str, sizeof str, stdin);	

    while(str[i]!=0)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            splch++;
        }

        i++;
    }

    printf("number of alphabets: %d\n", alp);
    printf("number of digits: %d\n", digit);
    printf("number of special characters: %d", splch);
}