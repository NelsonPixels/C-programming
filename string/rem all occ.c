#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000],c,temp=1;  
    int  i,j,k=0,n;
 
    printf("enter a string : ");
    scanf("%s",&s);
	printf("enter a character: ");
    scanf("%s",&c);
    for(i=0;s[i];i++)
    {
     	s[i]=s[i+k]; 	
     	if(s[i]==c)
     	{
		  k++;
		  i--;
	    } 	
	}
 
 	 printf("%s",s);  
    return 0;
}