#include <stdio.h>

int media(int mat[][4], int linhas, int colunas, int *maxCol, int *minCol, double *maxMedia, double *minMedia)
{
    double somas[colunas];
    double medias[colunas];

    for (int i = 0; i < colunas; i++)
        somas[i] = 0;

    for (int i = 0; i < colunas; i++)
    {
        for (int j = 0; j < linhas; j++)
        {
            somas[i] += mat[j][i];
        }
        medias[i] = somas[i] / linhas;
        printf("Média da coluna %d: %.2f\n", i, medias[i]);
    }

    *maxMedia = *minMedia = medias[0];
    *maxCol = *minCol = 0;

    for (int i = 1; i < colunas; i++)
    {
        if (medias[i] > *maxMedia)
        {
            *maxMedia = medias[i];
            *maxCol = i;
        }
        if (medias[i] < *minMedia)
        {
            *minMedia = medias[i];
            *minCol = i;
        }
    }
    return 1;
}

int main()
{
    // Test matrix 3x4
    int matriz[3][4] = {
        {1, 8, 3, 12},
        {5, 2, 7, 8},
        {9, 4, 11, 4}};

    int maxCol, minCol;
    double maxMedia, minMedia;

    media(matriz, 3, 4, &maxCol, &minCol, &maxMedia, &minMedia);

    printf("\nResultados:\n");
    printf("Coluna com maior média: %d (média: %.2f)\n", maxCol, maxMedia);
    printf("Coluna com menor média: %d (média: %.2f)\n", minCol, minMedia);

    return 0;
}