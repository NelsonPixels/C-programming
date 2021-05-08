#include<stdio.h>
#include <string.h>
  
int main()
{
  char str[] = "waraoui";
  
  printf("str: %s\n", str);
  
  printf("\nafter: %s", strupr(str));
  return 0;
}