// Programação 2024/25
// Aula Prática 2A - Matrizes

#include <stdio.h>

// Recebe: Matriz de inteiros mat com 3 colunas e nLin linhas
// Mostra na consola os valores armazenados na matriz
void printMat(int mat[][3], int nLin)
{
    int i, j;

    for (i = 0; i < nLin; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", mat[i][j]);
        putchar('\n');
    }
}

// Recebe: Matriz de inteiros mat com 3 colunas e nLin linhas
// Preenche a matriz de acordo com as regras definidas nos exercícios 2 e 3 da ficha prática 2
int ePrimo(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int existe(int mat[][3], int nLin, int valor)
{
    for (int i = 0; i < nLin; i++)
        if (mat[i][0] == valor)
            return 1;
    return 0;
}

void preencheMat(int mat[][3], int nLin)
{
    for (int i = 0; i < nLin; i++)
    {
        int valor;
        do
        {
            printf("Valor para a linha %d: ", i);
            scanf("%d", &valor);
        } while (valor < 1 || valor > 100 || !ePrimo(valor) || existe(mat, nLin, valor));

        mat[i][0] = valor;
        mat[i][1] = valor * valor;
        mat[i][2] = valor * valor * valor;
    }
}

int main()
{

    int m1[4][3] = {{1, 2, 3}, {6, 7, 8}, {10, 11, 12}, {20, 30, 40}};
    int m2[10][3] = {0};

    printMat(m1, 4);

    // Chamada da função dos exercicios 2 e 3
    preencheMat(m2, 10);
    printf("\nMatriz preenchida:\n");
    printMat(m2, 10);

    return 0;
}
