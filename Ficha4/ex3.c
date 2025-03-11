#include <stdio.h>

void tMat(int n, int mat[][n])
{
    int auxMat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            auxMat[i][j] = mat[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[j][i] = auxMat[i][j];
        }
    }
}

int main()
{
    int matriz[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    printf("Original:\n");

    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
            printf("%3d", matriz[i][j]);
        }
    }

    printf("\n\n");

    tMat(4, matriz);

    printf("After:\n");

    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
            printf("%3d", matriz[i][j]);
        }
    }

    printf("\n");

    return 0;
}