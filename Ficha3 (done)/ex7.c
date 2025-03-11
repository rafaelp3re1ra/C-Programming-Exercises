#include <stdio.h>

int igual(int *tab1, int *tab2, int tam1, int tam2)
{
    if (tam1 != tam2)
    {
        return 0;
    }
    for (int i = 0; i < tam1; i++)
    {
        if (tab1[i] != tab2[i])
            return 0;
    }
    return 1;
}

int main()
{
    // Test case 1: Equal arrays
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};

    // Test case 2: Different arrays
    int arr3[] = {1, 2, 3, 4, 6};

    // Test case 3: Different sizes
    int arr4[] = {1, 2, 3};

    printf("Test 1 (should be 1): %d\n", igual(arr1, arr2, 5, 5));
    printf("Test 2 (should be 0): %d\n", igual(arr1, arr3, 5, 5));
    printf("Test 3 (should be 0): %d\n", igual(arr1, arr4, 5, 3));

    return 0;
}