#include<stdio.h>

int main()
{
    int a, b, c, d, matrix[10][10];
    int counter = 0;
    printf("Enter the number of rows and columns of the matrix\n ");
    scanf("%d%d",&a,&b);

    printf("\nEnter the %d elements of the matrix \n\n", a*b);
    for(c = 0; c < a; c++) 
    {
        for(d = 0; d < b; d++)
        {
            scanf("%d", &matrix[c][d]);
            if(matrix[c][d] == 0)
            counter++;
        }
    }

    printf("\nthe matrix is: \n");
    for(c = 0; c < a; c++)
    {
        for(d = 0; d < b; d++)
        {
            printf("%d\t", matrix[c][d]);
        }
    printf("\n");
    }
    if(counter > (a*b)/2)
        printf("sparse matrix\n");
    else
        printf("not a sparse matrix\n");

    return 0;
}