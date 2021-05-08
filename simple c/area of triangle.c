#include <stdio.h>

int main(void){
	int base,height,area;
	printf("enter the height: \n");
	scanf("%d",&height);
	printf("enter the base: \n");
	scanf("%d",&base);
	area = 0.5*base*height;
	printf("the area is:%d",area);
	
	return 0;
}