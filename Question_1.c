#include <stdio.h>

void MatrixAddition(int a[10][10], int b[10][10], int result[10][10], int rows, int coloumns)
{
    for(int i = 0; i < rows; i++)
    for(int j = 0; j < coloumns; j++)
    result[i][j] = a[i][j] + b[i][j];
}

void main()
{
    int a[10][10], b[10][10], result[10][10];
    int rows, coloumns;

    printf("Enter number of rows and coloumns: ");
    scanf("%d %d", &rows, &coloumns);

    printf("Enter elements of matrix 1:\n");
    for(int i = 0; i < rows; i++)
    for(int j = 0; j < coloumns; j++)
    scanf("%d", &a[i][j]);

    printf("Enter elements of matrix 2:\n");
    for(int i = 0; i < rows; i++)
    for(int j = 0; j < coloumns; j++)
    scanf("%d", &b[i][j]);

    MatrixAddition(a, b, result, rows, coloumns);

    printf("Added matrix:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < coloumns; j++)
        printf("%d ", result[i][j]);
        printf("\n");
    }
}