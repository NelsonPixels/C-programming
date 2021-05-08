#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[100],c,temp=1;  
    int  i,j,k,count=0,n;
    printf("enter a string : ");
    scanf("%s",s);
	printf("enter character: ");
    scanf("%s",c);
    for(i=0;s[i];i++);
	 n=i; 
    for(i=0;i<n;i++)  
    {
     	 
       if(temp)
        {
          	 if(c==s[i])
          	  {
				temp=0;
				s[i]=s[i+1];
		     }
	    }
	    else
	     s[i]=s[i+1]; 
    }   
 	 printf("%s",s);
    return 0;
}