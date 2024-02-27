// Perform 2D matrix array

#include <stdio.h>

#define ROWS 3
#define COLS 3

void printMatrix(int mat[][COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void multiplyMatrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS], int rows1, int cols1, int rows2, int cols2)
{
    if (cols1 != rows2)
    {
        printf("Multiplication not possible: Columns of the first matrix must be equal to rows of the second matrix.\n");
        return;
    }

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    int matrix1[ROWS][COLS] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};
    int matrix2[ROWS][COLS] = {{9, 8, 7},
                               {6, 5, 4},
                               {3, 2, 1}};
    int result[ROWS][COLS];

    printf("Matrix 1:\n");
    printMatrix(matrix1, ROWS, COLS);

    printf("\nMatrix 2:\n");
    printMatrix(matrix2, ROWS, COLS);

    printf("\nAddition of the matrices:\n");
    addMatrices(matrix1, matrix2, result, ROWS, COLS);
    printMatrix(result, ROWS, COLS);

    printf("\nSubtraction of the matrices:\n");
    subtractMatrices(matrix1, matrix2, result, ROWS, COLS);
    printMatrix(result, ROWS, COLS);

    printf("\nMultiplication of the matrices:\n");
    multiplyMatrices(matrix1, matrix2, result, ROWS, COLS, ROWS, COLS);
    printMatrix(result, ROWS, COLS);

    return 0;
}
