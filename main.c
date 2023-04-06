#include <stdio.h>
#include <stdlib.h>

int main()
{
    // m1x m1y defines the size of matrix 1
    int m1x=0, m1y=0, m2x=0, m2y=0;

    // Asking the user to enter the size of the matrices
    printf("(NOTE: X-axis of matrix 1 must be equal to Y-axis of matrix 2)");
    do
    {
        printf("\nPlease enter the X-axis size of Matrix 1: ");
        scanf("%d", &m1x);

        printf("Please enter the Y-axis size of Matrix 1: ");
        scanf("%d", &m1y);

        printf("(NOTE: X-axis of matrix 1 must be equal to Y-axis of matrix 2)"
               "\nPlease enter the X-axis size of Matrix 2: ");
        scanf("%d", &m2x);

        printf("Please enter the Y-axis size of Matrix 2: ");
        scanf("%d", &m2y);

    } while (m1x != m2y || m1x <= 0 || m1y <= 0 || m2x <= 0 || m2y <= 0); // Making sure the user enter size of X-axis of matrix 1 equal to the size of Y-axis of matrix 2

    int i, j, k;

    // Creating our Matrices along with the final matrix (product result)
    int **matrix1 = (int **)malloc(m1y * sizeof(int *));
    for (i = 0; i < m1y; i++)
        matrix1[i] = (int *)malloc(m1x * sizeof(int));

    int **matrix2 = (int **)malloc(m2y * sizeof(int *));
    for (i = 0; i < m2y; i++)
        matrix2[i] = (int *)malloc(m2x * sizeof(int));

    int **product = (int **)malloc(m1y * sizeof(int *));
    for (i = 0; i < m1y; i++)
        product[i] = (int *)malloc(m2x * sizeof(int));

    // Prompting the user to fill the matrix
    for (i = 0; i < m1y; i++)
    {
        for (j = 0; j < m1x; j++)
        {
            printf("Enter the element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Displaying the matrix to the user
    for (i = 0; i < m1y; i++)
    {
        printf("|\t");
        for (j = 0; j < m1x; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
        printf("|\n");
    }

    // Prompting the user to fill the matrix
    for (i = 0; i < m2y; i++)
    {
        for (j = 0; j < m2x; j++)
        {
            printf("Enter the element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Displaying the matrix to the user
    for (i = 0; i < m2y; i++)
    {
        printf("|\t");
        for (j = 0; j < m2x; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("|\n");
    }

    // Matrix multiplication algorithm
    for (k = 0; k < m1y; k++)
    {
        for (i = 0; i < m2x; i++)
        {
            int element_product = 0;
            for (j = 0; j < m2y; j++) // m2y can be used as well (For the matrix multiplication m2y == m1x)
            {
                element_product += matrix1[k][j] * matrix2[j][i];
            }
            product[k][i] = element_product;
        }
    }

    // Displying the matrix multiplication

    printf("\n\nThe Dot Product of the two Matrices.\n\n");

    // Displaying the first matrix to the user
    for (i = 0; i < m1y; i++)
    {
        printf("|\t");
        for (j = 0; j < m1x; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
        printf("|\n");
    }

    printf("\nX\n\n");

    // Displaying the second matrix to the user
    for (i = 0; i < m2y; i++)
    {
        printf("|\t");
        for (j = 0; j < m2x; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("|\n");
    }

    printf("\n=\n\n");

    // Displaying the matrix multiplication of matrices to the user
    for (i = 0; i < m1y; i++)
    {
        printf("|\t");
        for (j = 0; j < m2x; j++)
        {
            printf("%d\t", product[i][j]);
        }
        printf("|\n");
    }

    return 0;
}
