#include <stdio.h>
#include <string.h>
int main()
{
   char a[100], b[100];
   printf("enter a string: \n");
   scanf("%s",&a);
   printf("enter a string: \n");
   scanf("%s",&b);
   if (strcmp(a,b) == 0)
      printf("equal.");
   else
      printf("not equal");

   return 0;
}