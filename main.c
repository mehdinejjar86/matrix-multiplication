#include <stdio.h>
#define SIZE 3
#define MSy1 5
#define MSx2 4

int main()
{
    int m1[MSy1][SIZE];
    int m2[SIZE][MSx2];
    int p[MSy1][MSx2];

    int i, j, k;

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

    return 0;
}
