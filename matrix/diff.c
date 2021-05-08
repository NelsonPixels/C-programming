#include <stdio.h>
 
int main()
{
   int a, b, c, d, first[10][10], second[10][10], difference[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &a, &b);
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < a; c++)
     for (d = 0 ; d < b; d++)
       scanf("%d", &first[c][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < a; c++)
     for (d = 0; d < b; d++)
         scanf("%d", &second[c][d]);
 
   printf("Difference of the two matrices:-\n");
 
   for (c = 0; c < a; c++) {
     for (d = 0; d < b; d++) {
       difference[c][d] = first[c][d] - second[c][d];
       printf("%d\t",difference[c][d]);
     }
     printf("\n");
   }
 
   return 0;
}