#include <stdio.h>


void disa(int arr[], int fir, int len);

int main()
{
    int arr[100];
    int a, i;
    printf("enter size of the array: ");
    scanf("%d", &a);
    printf("enter elements in the array: ");
    for(i=0; i<a; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("elements in the array: ");
    disa(arr, 0, a);
    
    return 0;
}
void disa(int arr[], int fir, int len)
{
    if(fir >= len)
        return;
    printf("%d, ", arr[fir]);
    disa(arr, fir + 1, len); 
}