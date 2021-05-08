#include<stdio.h>
 
int Fib(int);
 
int main()
{
   int a, i = 0, c;
 
   scanf("%d",&a);
 
   printf("fibonacci series\n");
 
   for ( c = 1 ; c <= a ; c++ )
   {
      printf("%d\t", Fib(i));
      i++; 
   }
 
   return 0;
}
 
int Fib(int a)
{
   if ( a == 0 )
      return 0;
   else if ( a == 1 )
      return 1;
   else
      return ( Fib(a-1) + Fib(a-2) );
} 