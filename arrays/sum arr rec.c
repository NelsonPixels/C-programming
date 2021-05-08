#include <stdio.h>

int sum(int arr[], int fir, int len);

int main()
{
    int arr[100];
    int a, i, sa;
    printf("enter size of the array: ");
    scanf("%d", &a);
    printf("enter elements in the array: ");
    for(i=0; i<a; i++)
    {
        scanf("%d", &arr[i]);
    }
    sa = sum(arr, 0, a);
    printf("sum of elements: %d", sa);
    return 0;
}
int sum(int arr[], int fir, int len) 
{
    if(fir >= len)
        return 0;
        
    return (arr[fir] + sum(arr, fir + 1, len));
}