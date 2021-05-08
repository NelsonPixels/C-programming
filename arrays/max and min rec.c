#include <stdio.h>

int maximum(int array[], int index, int len);
int minimum(int array[], int index, int len);


int main()
{
    int array[100], a, max, min;
    int i;
    printf("enter size of the array: ");
    scanf("%d", &a);
    printf("enter %d elements in array: ", a);
    for(i=0; i<a; i++)
    {
        scanf("%d", &array[i]);
    }

    max = maximum(array, 0, a);
    min = minimum(array, 0, a);

    printf("Minimum element in array = %d\n", min);
    printf("Maximum element in array = %d\n", max);

    return 0;
}


int maximum(int array[], int index, int len)
{
    int max;

    if(index >= len-2)
    {
        if(array[index] > array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }
    max = maximum(array, index + 1, len);
    if(array[index] > max)
        return array[index];
    else
        return max;
}

int minimum(int array[], int index, int len)
{
    int min;

    if(index >= len-2)
    {
        if(array[index] < array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }

    min = minimum(array, index + 1, len);

    if(array[index] < min)
        return array[index];
    else
        return min;
}