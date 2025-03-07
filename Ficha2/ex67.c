// Programação 2024/25
// Aula Prática 2B - Strings

#include <stdio.h>
#include <string.h>

// Exercicio 6
// Recebe string
// Mostra na consola a string escrita por ordem inversa
// A função não recebe o número de caracteres da strings, pelo que essa é a sua primeira tarefa
void printInv(char s[])
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        ;
    i--;

    // Possivel alternativa ao código que surge nas linhas anteriores: i = strlen(s)-1;

    while (i >= 0)
        putchar(s[i--]);
}

// Exercicio 7
// Recebe string
// Mostra na consola as várias palavras da string, uma em cada linha
void printPal(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
            printf("\n");
        else
            putchar(s[i]);
    }
}

int main()
{
    char st1[15] = "Ola Mundo!";

    printInv(st1);

    printf("\n\n");

    printPal(st1);

    printf("\n");

    return 0;
}