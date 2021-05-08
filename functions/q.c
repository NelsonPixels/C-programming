#include<stdio.h>
#include <string.h>
  
int main()
{
  char str[] = "dream";
  
  printf("str is: %s\n",str);
  
  printf("\nafter: %s",strlwr(str));
  
  return 0;
}