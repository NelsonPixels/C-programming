#include <stdio.h>

int main(void){
	int a;
	printf("enter a number: ");
	scanf("%d",&a);
	if(a == 1)
		printf("it's monday");
	else if(a == 2)
		printf("it's tuesday");
	else if(a == 3)
		printf("it's wednesday");
	else if(a == 4)
		printf("it's thursday");
	else if(a == 5)
		printf("it's friday");
	else if(a == 6)
		printf("it's saturday");
	else if(a == 7)
		printf("it's sunday");
	else
		printf("wrong input");
	
	return 0;
}