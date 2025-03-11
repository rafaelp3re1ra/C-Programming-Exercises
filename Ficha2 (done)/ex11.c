#include <stdio.h>

void elimina(char *str)
{
    int i, j = 0;
    int espaco = 0; // flag para controlar espaços

    // Ignora espaços no início
    while (str[j] == ' ')
        j++;

    // Processa o resto da string
    for (i = 0; str[j] != '\0'; j++)
    {
        if (str[j] == ' ')
        {
            if (!espaco)
            {
                str[i++] = ' ';
                espaco = 1;
            }
        }
        else
        {
            str[i++] = str[j];
            espaco = 0;
        }
    }

    // Remove espaço no final se existir
    if (i > 0 && str[i - 1] == ' ')
        i--;

    str[i] = '\0'; // Termina a string
}

int main()
{
    char testes[][50] = {
        "  hello   world  ",
        "one    two     three",
        "   spaces   everywhere   ",
        "noextraspaces",
        "  "};

    for (int i = 0; i < 5; i++)
    {
        printf("Original: '%s'\n", testes[i]);
        elimina(testes[i]);
        printf("Modificada: '%s'\n\n", testes[i]);
    }

    return 0;
}