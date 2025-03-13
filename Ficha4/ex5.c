#include <stdio.h>

#define TAM 8

int reduz(int M, int tab[][M], int tabR[][M / 2])
{
    if (M <= 0 || M % 2 != 0)
    {
        return 1;
    }

    for (int i = 0; i < M / 2; i++)
    {
        for (int j = 0; j < M / 2; j++)
        {
            tabR[i][j] = (tab[2 * i][2 * j] +
                          tab[2 * i][2 * j + 1] +
                          tab[2 * i + 1][2 * j] +
                          tab[2 * i + 1][2 * j + 1]) /
                         4;
        }
    }
    return 0;
}

int main()
{
    int original[TAM][TAM] = {
        {2, 2, 4, 4, 1, 1, 3, 3},
        {2, 2, 4, 4, 1, 1, 3, 3},
        {5, 5, 7, 7, 0, 0, 2, 2},
        {5, 5, 7, 7, 0, 0, 2, 2},
        {1, 1, 3, 3, 5, 5, 7, 7},
        {1, 1, 3, 3, 5, 5, 7, 7},
        {4, 4, 6, 6, 8, 8, 9, 9},
        {4, 4, 6, 6, 8, 8, 9, 9}};

    int reduced[TAM / 2][TAM / 2];

    if (reduz(TAM, original, reduced) == 0)
    {
        printf("Reduced image:\n");
        for (int i = 0; i < TAM / 2; i++)
        {
            for (int j = 0; j < TAM / 2; j++)
            {
                printf("%d ", reduced[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error reducing image\n");
    }

    return 0;
}