#include <stdio.h>

int LinearSearch(int arr[10], int key)
{
    for(int i=0; i < 10; i++)
    {
        if(arr[i] == key)
        return i;
    }
    return -1;
}
void main()
{
    int key;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result = LinearSearch(arr, key);

    if(result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found \n");
}