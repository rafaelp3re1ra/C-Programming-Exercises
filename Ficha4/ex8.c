#include <stdio.h>
#include <string.h>

void traduz(char palavra[])
{
    char *months_pt[] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho",
                         "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    char *months_en[] = {"january", "february", "march", "april", "may", "june",
                         "july", "august", "september", "october", "november", "december"};

    for (int i = 0; palavra[i]; i++)
    {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z')
            palavra[i] = palavra[i] + 32;
    }

    for (int i = 0; i < 12; i++)
    {
        if (strcmp(palavra, months_pt[i]) == 0)
        {
            printf("%s -> %s\n", palavra, months_en[i]);
            return;
        }
    }

    printf("Invalid month\n");
}

int main()
{
    char test[][20] = {"janeiro", "JULHO", "dezembro", "invalid"};

    for (int i = 0; i < 4; i++)
    {
        traduz(test[i]);
    }
    return 0;
}