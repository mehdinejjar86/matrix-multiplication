#include <stdio.h>
#define SIZE 3

#define MSy1 5
#define MSx1 3
#define MSx2 4
#define MSy2 3

int main()
{

    int m1[MSy1][SIZE];
    int m2[SIZE][MSx2];
    int p[MSy1][MSx2];

    int i, j, k;

    // Prompting the user to fill the matrix
    for (i = 0; i < MSy1; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("Enter the element [%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    // Displaying the matrix to the user
    for (i = 0; i < MSy1; i++)
    {
        printf("|\t");
        for (j = 0; j < SIZE; j++)
        {
            printf("%d\t", m1[i][j]);
        }
        printf("|\n");
    }

    // Prompting the user to fill the matrix
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < MSx2; j++)
        {
            printf("Enter the element [%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    // Displaying the matrix to the user
    for (i = 0; i < SIZE; i++)
    {
        printf("|\t");
        for (j = 0; j < MSx2; j++)
        {
            printf("%d\t", m2[i][j]);
        }
        printf("|\n");
    }

    
    // Dot product algorithm
    for (k = 0; k < MSy1; k++)
    {
        for (i = 0; i < MSx2; i++)
        {
            int product = 0;
            for (j = 0; j < SIZE; j++)
            {
                product += m1[k][j] * m2[j][i];
            }
            p[k][i] = product;
        }
    }


    // GUI of the dot product

    printf("\n\nThe Dot Product of the two Matrices.\n");

    // Displaying the first matrix to the user
    for (i = 0; i < MSy1; i++)
    {
        printf("|\t");
        for (j = 0; j < MSx1; j++)
        {
            printf("%d\t", m1[i][j]);
        }
        printf("|\n");
    }

    printf("\nX\n\n");

    // Displaying the second matrix to the user
    for (i = 0; i < MSy2; i++)
    {
        printf("|\t");
        for (j = 0; j < MSx2; j++)
        {
            printf("%d\t", m2[i][j]);
        }
        printf("|\n");
    }

    printf("\n=\n\n");

    // Displaying the dot product of matrices to the user
    for (i = 0; i < MSy1; i++)
    {
        printf("|\t");
        for (j = 0; j < MSx2; j++)
        {
            printf("%d\t", p[i][j]);
        }
        printf("|\n");
    }
    
    return 0;
}
