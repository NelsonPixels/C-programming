#include<stdio.h>
#include<string.h>
  
int main()
{
   char str[50] = "warano", d;
   
   printf("str is =%s\n",str);
   d = strrev(str);
   printf("after =%s",d);
  
   return 0;
}