#include <stdio.h>
#include <string.h>

void igual(char st1[], char st2[], char st3[])
{
    if (strcmp(st1, st2) == 0)
    {
        strcpy(st3, "Conteudo Igual!");
    }
    else if (strlen(st1) == strlen(st2))
    {
        strcpy(st3, "Tamanho Igual!");
    }
    else
    {
        if (strlen(st1) < strlen(st2))
        {
            strcpy(st3, st1);
            strcat(st3, st2);
        }
        else
        {
            strcpy(st3, st2);
            strcat(st3, st1);
        }
    }
}

int main()
{
    char s1[100] = "Hello";
    char s2[100] = "Hello";
    char s3[200];

    igual(s1, s2, s3);
    printf("Resultado: %s\n", s3);

    return 0;
}