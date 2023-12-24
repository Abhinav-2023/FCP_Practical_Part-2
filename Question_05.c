#include <stdio.h>

int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n-1);
}
int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n-r));
}

void main()
{
    int n, r;

    printf("Enter values for n and r: ");
    scanf("%d %d", &n, &r);

    printf("nCr = %d\n", nCr(n, r));
}