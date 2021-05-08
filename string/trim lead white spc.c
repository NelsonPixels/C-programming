#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[200];  
    int  i,j; 
    printf("enter a string : ");
    scanf("%s",&s);
	printf("before:%s",s);
	for(i=0;s[i]==' '||s[i]=='\t';i++);
 
	for(j=0;s[i];i++)
	{
		s[j++]=s[i];
	}
	s[j]=0;
    printf("\nafter:%s",s);
}