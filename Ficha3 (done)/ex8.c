#include <stdio.h>

int comuns(int *tabA, int tamA, int *tabB, int tamB)
{
    int emComum = 0;
    int i = 0, j = 0;

    // Compare elements using two pointers since arrays are sorted
    while (i < tamA && j < tamB)
    {
        if (tabA[i] == tabB[j])
        {
            emComum++;
            i++;
            j++;
        }
        else if (tabA[i] < tabB[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return emComum;
}

int main()
{
    // Test arrays (sorted, no duplicates)
    int tabA[] = {1, 3, 5, 7, 9};
    int tabB[] = {2, 3, 6, 7, 8, 9};

    printf("Elements in common: %d\n",
           comuns(tabA, 5, tabB, 6));

    // Test case 2: No common elements
    int tabC[] = {1, 3, 5};
    int tabD[] = {2, 4, 6};
    printf("Elements in common (none): %d\n",
           comuns(tabC, 3, tabD, 3));

    return 0;
}