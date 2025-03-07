#include <stdio.h>

int magic(int mat[3][3])
{
    // Verifica números de 1-9
    int used[10] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] < 1 || mat[i][j] > 9 || used[mat[i][j]])
                return 0;
            used[mat[i][j]] = 1;
        }
    }

    // Soma da primeira linha como referência
    int sum = mat[0][0] + mat[0][1] + mat[0][2];

    // Verifica outras linhas e colunas
    for (int i = 0; i < 3; i++)
    {
        if ((mat[i][0] + mat[i][1] + mat[i][2] != sum) || // linhas
            (mat[0][i] + mat[1][i] + mat[2][i] != sum))   // colunas
            return 0;
    }

    // Verifica diagonais
    if ((mat[0][0] + mat[1][1] + mat[2][2] != sum) || // diagonal principal
        (mat[0][2] + mat[1][1] + mat[2][0] != sum))   // diagonal secundária
        return 0;

    return 1;
}

int main()
{
    int mat[3][3] = {{6, 1, 8},
                     {7, 5, 3},
                     {2, 9, 4}};

    printf("%d\n", magic(mat));

    return 0;
}