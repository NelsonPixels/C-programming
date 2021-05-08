#include <stdio.h>
#include <string.h>
int main () {
   const char str[20] = "Hello, world is bad?";
   const char searchString[10] = "is";
   char *result;

   result = strstr(str, searchString);
   printf("the substring starting from the given string: %s", result);
   return 0;
}