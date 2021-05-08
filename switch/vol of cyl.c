#include<stdio.h>  
  
int main()  
{  
    const float PI = 3.14159265359;  
          float r, h, volume;  
    printf("enter radius and height:\n");  
    scanf("%f%f", &r, &h);  
    volume = PI * r * r * h;  
    printf("volume of cylinder is %f\n", volume);  
  
    return 0;  
} 