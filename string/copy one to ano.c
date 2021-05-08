#include <stdio.h>
int main()
{
    char a[100],b[100];  
    int i;
    printf("enter a string: ");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
    	b[i]=a[i];
	}
	b[i]='\0';
 
    printf("a='%s'\n",a);
    printf("copy b='%s'",b);
 
 
    return 0;
}