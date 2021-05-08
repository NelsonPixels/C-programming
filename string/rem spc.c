#include <stdio.h>
int main()
{
    char a[50];
    int i=0, j,b;
    printf("enter a String: ");
    scanf("%s",&a);
    while(a[i]!=0)
    {
        b=0;
        if(a[i]==' ')
        {
            j=i;
            while(a[j-1]!='\0')
            {
                a[j] = a[j+1];
                j++;
            }
            b = 1;
        }
        if(b==0)
            ++i;
    }
    printf("\nwithout spaces: %s",a);

    return 0;
}