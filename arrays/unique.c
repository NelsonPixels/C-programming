#include <stdio.h>
int main()
{
    int arr[100], a,ctr=0;
    int i, j, k;	
       printf("number of ele: ");
       scanf("%d",&a);
       printf("enter %d elements in the array :\n",a);
       for(i=0;i<a;i++)
            {
	      printf("elm %d : ",i);
	      scanf("%d",&arr[i]);
	    }
    printf("\nunique elements: \n");
    for(i=0; i<a; i++)
    {
        ctr=0;
        for(j=0,k=a; j<k+1; j++)
        {
            if (i!=j)
            {
		       if(arr[i]==arr[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d ",arr[i]);
        }
    }
       printf("\n\n");
}