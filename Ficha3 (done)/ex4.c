#include <stdio.h>

void conta(int *t, int tam, int *np, int *ni, int *maior, int *pos)
{
    *maior = t[0];
    for (int i = 0; i < tam; i++)
    {
        if (t[i] % 2 == 0)
            (*np)++;
        if (t[i] % 2 == 1)
            (*ni)++;
        if (t[i] > (*maior))
        {
            *maior = t[i];
            *pos = i;
        }
    }
}

int main()
{
    int t[] = {1, 3, 7, 5, 2, 10, 9, 7, 7, 1};
    int tam = 10, np = 0, ni = 0, maior = 0, pos = 0;
    conta(t, tam, &ni, &np, &maior, &pos);
    printf("Números pares: %d\n", np);
    printf("Números ímpares: %d\n", ni);
    printf("Maior número: %d na posição %d\n", maior, pos);
    return 0;
}