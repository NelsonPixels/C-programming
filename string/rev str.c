#include<stdio.h>
#include<string.h>

int main(void)
{
    char a[60];
    int length, b;
    printf("enter string: ");
    scanf( "%s",&a );
    length = strlen(a);
    for(b = length - 1; b >= 0; b--) {
        printf("%c",a[b]);
    }
    return 0;
}