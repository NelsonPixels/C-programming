#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000],c,temp=1;  
    int  i,j,k,count=0,n;
 
    printf("enter a string : ");
    scanf("%s",&s);
	printf("enter a character: ");
    scanf("%s",&c);
     
    for(i=0;s[i];i++);
	 n=i;  
 
     while(i)  
	{
       if(temp)
        {
            i--;
          	 if(c==s[i])
          	  {
				temp=0;
				s[i]=s[i+1];
					i++;
		     }             
	    }
	    else
	     {
	     	if(i==n)
		    break;
	     	
		   s[i]=s[i+1];
		   i++;
		   
	     }
    }  
 	 printf("%s",s); 
    return 0;
}