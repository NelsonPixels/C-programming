#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000];  
    int i;
    printf("enter string in lower case: ");
    scanf("%s",&s);
    for(i=0;s[i];i++)  
    {
        if(s[i]>=97 && s[i]<=122)
         s[i]-=32;
 	}	     
    printf("uppercase: %s",s);
    return 0;
}
