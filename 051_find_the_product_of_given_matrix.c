/*
Name:Dibyendu Barman
Date:02/Dec/2022
Description: A51. Write a program to find the product of given matrix.
Sample Input:
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :
1      2      3
1      2      3
1      2      3
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :

1      1     1
2      2     2
3      3     3

Sample Output:
Product of two matrix :
14      14      14
14      14      14
14      14      14
*/

#include <stdio.h>
#include <stdlib.h>

int matrix_mul(int **, int, int, int **, int, int, int **); // function declaration

int main()
{
    int row1, col1, a, b; // variable declaration
    int **matrix_a, **matrix_b; // pointer variable declaration

    printf("Enter number of rows : ");
    scanf("%d", &row1); //reading the row1 from user
    printf("Enter number of columns : ");
    scanf("%d", &col1); //reading the col1 from user
    
    printf("Enter values for %d x %d matrix :\n", row1, col1);

    matrix_a = malloc(row1 * sizeof(int *)); // declaring the size of row for matrix a
    for (int i = 0; i < row1; i++)           // declaring the size of column for matrix a
        matrix_a[i] = malloc(col1 * sizeof(int)); // dynamic memory allocation

    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col1; j++)
            scanf("%d", &matrix_a[i][j]); // reading the matrix elements from user

    int row2, col2;

    printf("Enter number of rows : ");
    scanf("%d", &row2); //reading the row2 from user
    printf("Enter number of columns : ");
    scanf("%d", &col2); //reading the col2 from user
    
    if (col1 == row2)
    {
        printf("Enter values for %d x %d matrix  :\n", row2, col2);

        matrix_b = malloc(row2 * sizeof(int)); // declaring the size of row for matrix b
        for (int i = 0; i < row2; i++)         // declaring the size of column for matrix b
            matrix_b[i] = malloc(col2 * sizeof(int)); // dynamic memory allocation

        for (int i = 0; i < row2; i++)
            for (int j = 0; j < col2; j++)
                scanf("%d", &matrix_b[i][j]);

        int **multi;

        multi = malloc(row1 * sizeof(int)); // declaring the size of row for result matrix
        for (int i = 0; i < row1; i++)      // declaring the size of column for result matrix
            multi[i] = malloc(col2 * sizeof(int));

        matrix_mul(matrix_a, row1, col1, matrix_b, row2, col2, multi); // function call
    }
    else
    {
        printf("Matrix multiplication is not possible\n");
    }

    return 0;
}

int matrix_mul(int **matrix_a, int row1, int col1, int **matrix_b, int row2, int col2, int **multi) 
// function definition
{
    int i, j, k;

    for (i = 0; i < row1; i++) // loop for row
    {
        for (j = 0; j < col2; j++) // loop for column
        {
            multi[i][j] = 0;           // initializing result matrix as 0
            for (k = 0; k < row2; k++) // loop to multiplication of 2 matrixes
            {
                multi[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
    printf("Product of two matrix :\n");
    for (i = 0; i < row1; i++) // loop to print the final multiplied matrix
    {
        for (j = 0; j < col2; j++)
        {
            printf("%-4d", multi[i][j]); // printing the final matrix output
        }
        printf("\n");
    }
}
