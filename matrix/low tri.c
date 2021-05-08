#include <stdio.h>
 
void main()
{
    int array[3][3], i, j, flag = 0 ;
    printf("enter the elements of matrix : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (array[i] < array[j] && array[i][j] == 0)
            {
                flag = flag + 1;
            }
        }
    }
    if (flag == 3)
        printf("\nMatrix is a Lower triangular matrix");
    else
        printf("\nMatrix is not a lower triangular matrix");
}