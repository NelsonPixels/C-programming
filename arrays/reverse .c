#include <stdio.h>

int main()
{
    int arr[100];
    int size, i;
    printf("enter size of array: ");
    scanf("%d", &size);
    printf("enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nreverse order: ");
    for(i = size-1; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}