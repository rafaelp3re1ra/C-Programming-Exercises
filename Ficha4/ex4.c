#include <stdio.h>

int unicaMat(int nLin, int nCol, int mat[][nCol])
{
    int flag = 0;
    int auxMat[nLin][nCol];

    for (int i = 0; i < nLin; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            auxMat[i][j] = mat[i][j];
        }
    }

    for (int i = 0; i < nLin; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            for (int k = 0; k < nLin; k++)
            {
                for (int l = 0; l < nCol; l++)
                {
                    if (i == k && j == l)
                        continue;

                    if (mat[k][l] == auxMat[i][j])
                        return 0;
                }
            }
        }
    }

    return 1;
}

int main()
{
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    if (unicaMat(3, 3, mat))
        printf("Todos os elementos são únicos.\n");
    else
        printf("Existem elementos duplicados.\n");

    return 0;
}