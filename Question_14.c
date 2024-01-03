#include <stdio.h>
#include <stdlib.h>

void main()
 {
    int n, i, *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Error! Memory not allocated.");
        exit(0);
    }

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
    }

    printf("The elements of the array are: ");
    for (i = 0; i < n; ++i) {
        printf("%d ", *(ptr + i));
    }

    free(ptr);
}