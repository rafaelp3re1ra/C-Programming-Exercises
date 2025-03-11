#include <stdio.h>
#include <ctype.h>

int contaDistintos(char *str)
{
    // Array para marcar letras encontradas (0-25 para a-z)
    int letras[26] = {0};
    int distintos = 0;

    // Percorre a string
    for (int i = 0; str[i] != '\0'; i++)
    {
        // Converte para minúscula e verifica se é letra
        if (isalpha(str[i]))
        {
            char c = tolower(str[i]);
            // Se ainda não encontramos esta letra
            if (letras[c - 'a'] == 0)
            {
                letras[c - 'a'] = 1;
                distintos++;
            }
        }
    }

    return distintos;
}

int main()
{
    // Casos de teste
    char *testes[] = {
        "Hello World",  // 7 letras distintas: h,e,l,o,w,r,d
        "abcABC",       // 3 letras distintas: a,b,c
        "Testing 123!", // 6 letras distintas: t,e,s,i,n,g
        "aaa",          // 1 letra distinta: a
        "!@#$%"         // 0 letras distintas
    };

    for (int i = 0; i < 5; i++)
    {
        printf("'%s': %d letras distintas\n",
               testes[i],
               contaDistintos(testes[i]));
    }

    return 0;
}