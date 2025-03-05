#include <stdio.h>

int pesquisaLinear(int tab[], int dim, int valor)
{
    for (int i = 0; i < dim; i++)
    {
        printf("Valor atual: %d\n", tab[i]);
        if (tab[i] == valor)
        {
            return 1;
        }
    }
    return 0;
}

int pesquisaBinaria(int tab[], int dim, int valor)
{
    int inicio = 0;
    int fim = dim - 1;

    while (inicio <= fim)
    {
        int meio = inicio + (fim - inicio) / 2;

        printf("Valor atual: %d\n", tab[meio]);

        if (tab[meio] == valor)
            return 1;

        if (tab[meio] < valor)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }
    return 0;
}

int main()
{
    int valor = 10, tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, tam = 10;

    printf("Pesquisa Linear: %d\n", pesquisaLinear(tab, tam, valor));
    printf("Pesquisa Binaria: %d\n", pesquisaBinaria(tab, tam, valor));

    return 0;
}