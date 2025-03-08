#include <stdio.h>

void limpaMedia(int *tab, int tam)
{
    int total = 0;
    int media = 0;
    for (int i = 0; i < tam; i++)
        total += tab[i];

    media = total / tam;

    for (int i = 0; i < tam; i++)
        if (tab[i] < media)
            tab[i] = 0;
}

int main()
{
    // Test array with some values
    int tab[] = {1, 5, 2, 8, 3, 9, 4, 7, 6};
    int tam = 9;

    // Print original array
    printf("Original array: ");
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Call function
    limpaMedia(tab, tam);

    // Print modified array
    printf("Modified array: ");
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}