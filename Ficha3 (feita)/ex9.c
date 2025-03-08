#include <stdio.h>

void desloca(int *v, int tam, int shift)
{
    // If shift >= tam, no changes needed
    if (shift >= tam)
        return;

    // Create temporary array to store original values
    int temp[tam];
    for (int i = 0; i < tam; i++)
    {
        temp[i] = v[i];
    }

    // Move elements
    for (int i = 0; i < tam; i++)
    {
        // Calculate new position with wraparound
        int newPos = (i + shift) % tam;
        v[newPos] = temp[i];
    }
}

int main()
{
    // Test case 1: shift = 2
    int v1[] = {2, 4, 6, 8, 10};
    int tam1 = 5;

    printf("Original array: ");
    for (int i = 0; i < tam1; i++)
    {
        printf("%d ", v1[i]);
    }
    printf("\n");

    desloca(v1, tam1, 2);

    printf("After shift 2: ");
    for (int i = 0; i < tam1; i++)
    {
        printf("%d ", v1[i]);
    }
    printf("\n");

    // Test case 2: shift >= tam (no change)
    int v2[] = {1, 2, 3, 4};
    int tam2 = 4;

    printf("\nOriginal array: ");
    for (int i = 0; i < tam2; i++)
    {
        printf("%d ", v2[i]);
    }
    printf("\n");

    desloca(v2, tam2, 4);

    printf("After shift 4: ");
    for (int i = 0; i < tam2; i++)
    {
        printf("%d ", v2[i]);
    }
    printf("\n");

    return 0;
}