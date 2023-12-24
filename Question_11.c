#include <stdio.h>

void main()
{
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;

    printf("a. Increment a pointer: %d\n", *(ptr++))
}