#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[100];  
    int  a[100],i,j,k,count=0,n;
 
    printf("enter a string : ");
    scanf("%s",&s);
     
    for(j=0;s[j];j++);
	k=n=j; 
    
    for(i=0;i<n;i++)  
    {
    	a[i]=n;
    	count=1;
    	if(s[i])
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
	      a[i]=count;
	    if(count<=k)
	     k=count;
       }   
 	}
 	printf("min occuring characters ");
 	for(j=0;j<n;j++)  
	    {
	    	
	        if(a[j]==k)
    	    {
	             printf(" %c,",s[j]);
	     	}
	   }   
	printf(" : %d times \n ",k);  
    return 0;
}