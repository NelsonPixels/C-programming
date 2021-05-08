#include <stdio.h>

int main(void){
	int r,area,cir;
	printf("enter the radius: ");
	scanf("%d",&r);
	area = 3.14*r*r;
	cir = 2*r*3.14;
	printf("the area is %d ", area);
	printf("the circumference is %d ", cir);	
	return 0;
}