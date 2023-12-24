#include <stdio.h>

void MatrixAddition(int a[3][3], int b[3][3], int result[3][3])
{
    for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++)
    result[i][j] = a[i][j] + b[i][j];
}

void main()
{
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];

    MatrixAddition(matrix1, matrix2, result);

    printf("Matrix 1:\n");
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j)
            printf("%d\t", matrix1[i][j]);
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j)
            printf("%d\t", matrix2[i][j]);
        printf("\n");
    }

    printf("\nResult Matrix:\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            printf("%d\t", result[i][j]);
        printf("\n");
    }
}