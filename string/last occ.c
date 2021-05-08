#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    char s[1000],c;  
    int i,n,k=0;
 
    printf("enter  a string : ");
    scanf("%s",&s);
    printf("enter character to be searched: ");
    scanf("%s",&c);
    
    for(i=strlen(s)-1;i>=0;i--)  
    {
    	if(s[i]==c)
    	{
		  k=1;
    	  break;
		}
 	}
    if(k)
 	    printf("last occurrence at position:%d ",i);
    else
        printf("character is not in the string");
 
 	 
     
    return 0;
}