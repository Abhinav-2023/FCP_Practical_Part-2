#include <stdio.h>

int fibonacci(int n)
{
    if(n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void main()
{
    int n;

    printf("Enter the number of terms in the fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms: \n",n);
    for(int i = 0; i < n; i++)
        printf("%d ", fibonacci(i));
}