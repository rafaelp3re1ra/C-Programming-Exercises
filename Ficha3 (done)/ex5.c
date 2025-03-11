#include <stdio.h>

void procuraDupla(int *tab, int tam, int *prim, int *seg)
{
    *prim = tab[0];
    *seg = tab[1];
    for (int i = 0; i < tam; i++)
    {
        if (tab[i] > *prim)
        {
            *seg = *prim;
            *prim = tab[i];
        }
        else if (tab[i] > *seg)
            *seg = tab[i];
    }
}

int main()
{
    int tab[] = {5, 2, 9, 1, 7, 6, 3};
    int tam = 7;
    int maior, segundo;

    procuraDupla(tab, tam, &maior, &segundo);
    printf("Maior: %d\nSegundo maior: %d\n", maior, segundo);

    return 0;
}