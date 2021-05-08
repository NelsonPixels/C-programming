#include <stdio.h>

void main(){
  int arr1[50],a,i,j=0,lrg,lrg2;
       printf("enter size of array : ");
       scanf("%d", &a);
       printf("enter %d elements in the array :\n",a);
       for(i=0;i<a;i++)
            {
	      printf("elm %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
   lrg=0;
  for(i=0;i<a;i++)
  {
      if(lrg<arr1[i])
	  {
           lrg=arr1[i];
           j = i;
      }
  }		
   lrg=0;
  for(i=0;i<a;i++)
  {
     if(i==j)
        {
          i++; 
		  i--;
        }
      else
        {
          if(lrg2<arr1[i])
	     {
               lrg2=arr1[i];
             }
        }
  }
  printf("second largest element in array is :  %d \n\n", lrg2);
}