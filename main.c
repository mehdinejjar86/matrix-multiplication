#include <stdio.h>
#include <stdlib.h>

int main()
{
    // nAc number of columns of matrix A, mAr number of rows of matrix A
    // nBc number of columns of matrix B, mBr number of rows of matrix B
    int nAc=0, mAr=0, nBc=0, mBr=0;

    // Asking the user to enter the size of the matrices
    printf("(NOTE: Number of columns of matrix A must be equal to number of rows of matrix B)\n");
    do
    {
        printf("Please enter number of rows of matrix A: ");
        scanf("%d", &mAr);
        
        printf("Please enter number of columns of matrix A: ");
        scanf("%d", &nAc);

        printf("\n(NOTE: number of columns of matrix A must be equal to number of rows of matrix B)"
               "\nPlease enter number of rows of matrix B: ");
        scanf("%d", &mBr);

        printf("Please enter the number of rows of matrix B: ");
        scanf("%d", &nBc);

    } while (nAc != mBr || nAc <= 0 || mAr <= 0 || nBc <= 0 || mBr <= 0); 
    // Making sure the user enter number of columns of matrix A equal to number of rows of matrix B

    int i, j, k;

    // Creating our Matrices along with the final matrix (product result)
    int **matrix1 = (int **)malloc(mAr * sizeof(int *));
    for (i = 0; i < mAr; i++)
        matrix1[i] = (int *)malloc(nAc * sizeof(int));

    int **matrix2 = (int **)malloc(mBr * sizeof(int *));
    for (i = 0; i < mBr; i++)
        matrix2[i] = (int *)malloc(nBc * sizeof(int));

    int **product = (int **)malloc(mAr * sizeof(int *));
    for (i = 0; i < mAr; i++)
        product[i] = (int *)malloc(nBc * sizeof(int));

    // Prompting the user to fill the matrix
    for (i = 0; i < mAr; i++)
    {
        for (j = 0; j < nAc; j++)
        {
            printf("Enter the element Row %d Column %d of Matrix A: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Displaying the matrix to the user
    for (i = 0; i < mAr; i++)
    {
        printf("|\t");
        for (j = 0; j < nAc; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
        printf("|\n");
    }

    // Prompting the user to fill the matrix
    for (i = 0; i < mBr; i++)
    {
        for (j = 0; j < nBc; j++)
        {
            printf("Enter the element Row %d Column %d of Matrix B: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Displaying the matrix to the user
    for (i = 0; i < mBr; i++)
    {
        printf("|\t");
        for (j = 0; j < nBc; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("|\n");
    }

    // Matrix multiplication algorithm
    for (k = 0; k < mAr; k++)
    {
        for (i = 0; i < nBc; i++)
        {
            int element_product = 0;
            for (j = 0; j < mBr; j++) // mBr can be used as well (For the matrix multiplication mBr == m1x)
            {
                element_product += matrix1[k][j] * matrix2[j][i];
            }
            product[k][i] = element_product;
        }
    }

    // Displying the matrix multiplication

    printf("\n\nThe matrix multiplication of the two Matrices.\n\n");

    // Displaying the first matrix to the user
    for (i = 0; i < mAr; i++)
    {
        printf("|\t");
        for (j = 0; j < nAc; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
        printf("|\n");
    }

    printf("\nX\n\n");

    // Displaying the second matrix to the user
    for (i = 0; i < mBr; i++)
    {
        printf("|\t");
        for (j = 0; j < nBc; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("|\n");
    }

    printf("\n=\n\n");

    // Displaying the matrix multiplication of matrices to the user
    for (i = 0; i < mAr; i++)
    {
        printf("|\t");
        for (j = 0; j < nBc; j++)
        {
            printf("%d\t", product[i][j]);
        }
        printf("|\n");
    }

    return 0;
}
