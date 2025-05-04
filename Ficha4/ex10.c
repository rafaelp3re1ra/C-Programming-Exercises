#include <stdio.h>
#include <string.h>

//  a
void printSin(char *t[][2], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%s \t %s\n", t[i][0], t[i][1]);
    }
}

//  b
char *findSin(char *t[][2], int size, char *word)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(t[i][0], word) == 0)
            return t[i][1];
        if (strcmp(t[i][1], word) == 0)
            return t[i][0];
    }
    return NULL;
}

//  c
char *smallest(char *t[][2], int size)
{
    char *word;
    int letras = strlen(t[0][0]);

    for (int i = 0; i < size; i++)
    {
        if (strlen(t[i][0]) < letras)
        {
            letras = strlen(t[i][0]);
            word = t[i][0];
        }

        if (strlen(t[i][1]) < letras)
        {
            letras = strlen(t[i][1]);
            word = t[i][1];
        }
    }

    return word;
}

//  d
void contaVogal(char *t[][2], int size)
{
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    for (int l = 0; l < size; l++)
    {
        for (int j = 0; j < 2; j++)
        {
            char *p = t[i][j];
            for (int k = 0; p[k] != '\0'; k++)
            {
                switch (p[k])
                {
                case 'a':
                case 'A':
                    a++;
                    break;
                case 'e':
                case 'E':
                    e++;
                    break;
                case 'i':
                case 'I':
                    i++;
                    break;
                case 'o':
                case 'O':
                    o++;
                    break;
                case 'u':
                case 'U':
                    u++;
                    break;
                }
            }
        }
    }

    printf("\na: %d\te: %d\ti: %d\to: %d\tu: %d\n", a, e, i, o, u);
}

//  e
int palavrasRepetidas(char *t[][2], int size)
{
    int count = 0;
    int total = size * 2;
    char *todas[total];
    int idx = 0;

    for (int i = 0; i < size; i++)
    {
        todas[idx++] = t[i][0];
        todas[idx++] = t[i][1];
    }

    for (int i = 0; i < total; i++)
    {
        int repetida = 0;
        for (int k = 0; k < i; k++)
        {
            if (strcmp(todas[i], todas[k]) == 0)
            {
                repetida = 1;
                break;
            }
        }
        if (repetida)
            continue;

        for (int j = i + 1; j < total; j++)
        {
            if (strcmp(todas[i], todas[j]) == 0)
            {
                count++;
                break;
            }
        }
    }
    return count;
}

//  f
void verificaSinonimos(char *t[][2], int size)
{
    char frase[256];
    printf("Introduza uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = 0;

    char *palavra = strtok(frase, " ");
    while (palavra != NULL)
    {
        char *sin = findSin(t, size, palavra);
        if (sin != NULL)
        {
            printf("%s -> %s\n", palavra, sin);
        }
        palavra = strtok(NULL, " ");
    }
}

int main()
{
    char *sin[][2] = {
        {"estranho", "bizarro"},
        {"desconfiar", "suspeitar"},
        {"vermelho", "encarnado"},
        {"duvidar", "desconfiar"},
        {"carro", "automóvel"}};

    printSin(sin, 5);
    char *w = "vermelho";
    char *sinonimoW = findSin(sin, 5, w);
    if (sinonimoW == NULL)
        printf("Nao ha sinonimo!");
    else
        printf("\n%s - %s\n", w, sinonimoW);

    printf("\n%s\n", smallest(sin, 5));

    contaVogal(sin, 5);

    printf("\nPalavras repetidas: %d\n", palavrasRepetidas(sin, 5));

    verificaSinonimos(sin, 5);

    return 0;
}