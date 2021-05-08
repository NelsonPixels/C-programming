#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100],a;
  	int i;
 
  	printf("enter a str :  ");
  	scanf("%s",&str);
  	printf("\nenter the char you are searching:  ");
  	scanf("%s", &a);
  	
  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == a)  
		{
  			printf("\n%c is found at position %d ", a, i + 1);
 		}
	}
	
  	return 0;
}