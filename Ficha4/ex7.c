#include <stdio.h>
#include <string.h>

void procuraPal(int nLin, int nCol, char tab[][nCol], char *pal)
{
    int len = strlen(pal);
    printf("A palavra %s surge:\n", pal);

    for (int i = 0; i < nLin; i++)
    {
        for (int j = 0; j <= nCol - len; j++)
        {
            int k;
            for (k = 0; k < len; k++)
            {
                if (tab[i][j + k] != pal[k])
                    break;
            }
            if (k == len)
                printf("- Ao longo da linha %d com início na coluna %d\n", i, j);
        }
    }

    for (int j = 0; j < nCol; j++)
    {
        for (int i = 0; i <= nLin - len; i++)
        {
            int k;
            for (k = 0; k < len; k++)
            {
                if (tab[i + k][j] != pal[k])
                    break;
            }
            if (k == len)
                printf("- Ao longo da coluna %d com início na linha %d\n", j, i);
        }
    }
}

int main()
{
    char tab[5][6] = {
        {'e', 'B', 'a', 'u', 'l', 'q'},
        {'l', 'e', 'r', 'r', 's', 's'},
        {'u', 'w', 'u', 'q', 'g', 'r'},
        {'a', 'a', 'l', 'l', 'u', 'a'},
        {'p', 'm', 'h', 'u', 'd', 'j'}};

    char palavra[] = "lua";

    procuraPal(5, 6, tab, palavra);

    return 0;
}
