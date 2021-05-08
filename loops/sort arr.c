#include <stdio.h>

void main()
{
    int arr[100];
    int a, i, j, tmp;	
    printf("input the size of array : ");
    scanf("%d", &a);
       printf("input %d elements in the array :\n",a);
       for(i=0;i<a;i++)
            {
	      printf("%d : ",i);
	      scanf("%d",&arr[i]);
	    }
    for(i=0; i<a; i++)
    {
        for(j=i+1; j<a; j++)
        {
            if(arr[j] <arr[i])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    printf("elements of array sorted in ascending order:");
    for(i=0; i<a; i++)
    {
        printf("%d ", arr[i]);
    }
	       
}