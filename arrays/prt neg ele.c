#include <stdio.h>

int main()
{
    int arr[100];
    int i, a;
    printf("enter size of the array : ");
    scanf("%d", &a);
    printf("enter elements in array : ");
    for(i=0; i<a; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nnegative elements in array: ");
    for(i=0; i<a; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}