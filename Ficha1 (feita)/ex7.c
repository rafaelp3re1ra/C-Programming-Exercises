#include <stdio.h>

void unicos(int v[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        int repetido = 0;
        for (int j = 0; j < tam; j++)
        {
            if (i != j && v[i] == v[j])
            {
                repetido = 1;
                break;
            }
        }
        if (!repetido)
        {
            printf("%d ", v[i]);
        }
    }
    printf("\n");
}

int main()
{
    int tab[] = {2, 30, 4, 7, 10, 3, 12, 15, 2, 10};

    unicos(tab, 10);

    return 0;
}