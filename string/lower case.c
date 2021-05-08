#include<stdio.h>
#include<string.h>
int main(){
   char string[100];
   int i;
   printf("enter the string: ");
   scanf("%s",string);
 
   for(i=0;i<=strlen(string);i++){
      if(string[i]>=65&&string[i]<=90)
         string[i]=string[i]+32;
   }
   printf("lower Case: %s",string);
   return 0;
}