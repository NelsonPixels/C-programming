#include <stdio.h>

void eo(int cur, int limit);

int main()
{
    int ln, hn;
    printf("enter low num: ");
    scanf("%d", &ln);
    printf("enter high num: ");
    scanf("%d", &hn);
    
    printf("even and 'odd numbers from %d to %d are: ", ln, hn);
    eo(ln, hn); 
    
    return 0;
}
void eo(int cur, int limit)
{
    if(cur > limit)
        return;
    
    printf("%d, ", cur);
    eo(cur + 2, limit);
}