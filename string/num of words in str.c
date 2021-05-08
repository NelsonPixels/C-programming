#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char str[100];
    int i, a; 	
       printf("enter the string : ");
       fgets(str, sizeof str, stdin);	
	
    i = 0;
    a = 1;
    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            a++;
        }

        i++;
    }
    printf("number of words in the string: %d", a-1);
}