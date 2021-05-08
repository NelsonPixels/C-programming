#include<stdio.h>
int main()
{
  int a, b, c, d, matrix[10][10], transpose[10][10];

  printf("enter the number of rows and columns of matrix\n");
  scanf("%d%d", &a, &b);
  printf("enter elements of the matrix\n");

  for (c = 0; c < a; c++)
    for (d = 0; d < b; d++)
      scanf("%d", &matrix[c][d]);

  for (c = 0; c < a; c++)
    for (d = 0; d < b; d++)
      transpose[d][c] = matrix[c][d];

  if (a == b)
  {
    for (c = 0; c < a; c++)
    {
      for (d = 0; d < b; d++)
      {
        if (matrix[c][d] != transpose[c][d])
          break;
      }
      if (d != a)
        break;
    }
    if (c == b)
      printf("symmetric");
    else
      printf("not symmetric");
  }
  else
    printf("not symmetric");

  return 0;
}