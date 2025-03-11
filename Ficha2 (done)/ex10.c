#include <stdio.h>

char conta(char *str)
{
    int contador = 0;
    int palavra = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && !palavra)
        {
            contador++;
            palavra = 1;
        }
        else if (str[i] == ' ')
            palavra = 0;
    }
    return contador;
}

int main()
{
    char *testes[] = {
        "hello world",         // 2 palavras
        "one   two     three", // 3 palavras
        " word ",              // 1 palavra
        "",                    // 0 palavras
        "single"               // 1 palavra
    };

    for (int i = 0; i < 5; i++)
    {
        printf("'%s': %d palavras\n", testes[i], conta(testes[i]));
    }

    return 0;
}