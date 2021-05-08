#include <stdio.h>
#include <string.h>
int main() {
   char str1[100] = "I am ", str2[] = "Batman";

   strcat(str1, str2);

   puts(str1);
   puts(str2);

   return 0;
}