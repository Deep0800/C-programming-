/*
WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array
*/

#include <stdio.h>

void addMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void multiplyMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows1, int cols1, int rows2, int cols2)
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

void printMatrix(int mat[][100], int rows, int cols)
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

int main()
{
    int mat1[100][100], mat2[100][100], result[100][100];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("First matrix:\n");
    printMatrix(mat1, rows1, cols1);

    printf("\nSecond matrix:\n");
    printMatrix(mat2, rows2, cols2);

    if (rows1 != rows2 || cols1 != cols2)
    {
        printf("\nAddition and subtraction are not possible: Matrices must have the same dimensions.\n");
    }
    else
    {
        printf("\nAddition of the matrices:\n");
        addMatrices(mat1, mat2, result, rows1, cols1);
        printMatrix(result, rows1, cols1);

        printf("\nSubtraction of the matrices:\n");
        subtractMatrices(mat1, mat2, result, rows1, cols1);
        printMatrix(result, rows1, cols1);
    }

    if (cols1 != rows2)
    {
        printf("\nMultiplication is not possible: Columns of the first matrix must be equal to rows of the second matrix.\n");
    }
    else
    {
        printf("\nMultiplication of the matrices:\n");
        multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);
        printMatrix(result, rows1, cols2);
    }

    return 0;
}
