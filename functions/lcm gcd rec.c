#include <stdio.h>
int gcd(int x, int y);

int main()
{
   int a, b, gccd, lcm;

   printf("enter two numbers:\n");
   scanf("%d %d", &a, &b);

   gccd = gcd(a, b);
   printf("gcd: %d", gccd);
   printf("\nlcm: %d", (a * b) / gccd);
   return 0;
}

int gcd(int x, int y)
{
   if (y == 0)
   {
      return x;
   }
   else 
   {
      return gcd(y, x % y);
   }
}