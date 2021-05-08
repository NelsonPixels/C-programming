#include <stdio.h>

void nn(int ll, int ul);

int main()
{
    int ll, ul;
   
    printf("enter low num: ");
    scanf("%d", &ll);
    printf("enter high num: ");
    scanf("%d", &ul);

    printf("natural numbers from %d to %d are: ", ll, ul);
    nn(ll, ul);
    
    return 0;
}
void nn(int ll, int ul)
{
    if(ll > ul)
        return;
    
    printf("%d, ", ll);

    nn(ll + 1, ul);
}