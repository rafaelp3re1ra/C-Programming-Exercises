#include <stdio.h>

void calculaSoma(int tab[], int dim, int valor)
{
    for (int i = 0; i < dim - 2; i++)
    {
        for (int j = i + 1; j < dim - 1; j++)
        {
            for (int k = j + 1; k < dim; k++)
            {
                if (tab[i] + tab[j] + tab[k] == valor)
                {
                    printf("Combinacao [%d]: %d + %d + %d = %d\n", i + 1, tab[i], tab[j], tab[k], valor);
                }
            }
        }
    }
}

int main()
{
    int tab[] = {1, -2, 3, 4, -5, 6};
    int valor = 8;

    calculaSoma(tab, 6, valor);

    return 0;
}