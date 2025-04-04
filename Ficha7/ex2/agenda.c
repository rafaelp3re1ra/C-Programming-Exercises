
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "agenda.h"

// Escreve os dados de todos os contactos na agenda
// Recebe endereço do vetor e numero de contactos armazenados
void listaC(pct p, int total)
{
    int i;

    printf("Existem %d contactos na agenda\n", total);
    for (i = 0; i < total; i++)
        printf("%s\t%d\n", p[i].nome, p[i].num);
}

// Adiciona um novo contacto ao vetor dinamico. Os dados são indicados pelo utilizador
// Recebe endereço do vetor e endereço de variavel inteira contento o numero de contactos
// Devolve endereço de vetor depois de efetuada a atualizacao
pct addC(pct p, int *total)
{
    char nome[200];
    int num;

    printf("Nome do novo contacto: ");
    scanf(" %[^\n]", nome);
    printf("Numero do novo contacto: ");
    scanf(" %d", &num);

    pct novo = realloc(p, (*total + 1) * sizeof(ct));
    if (novo == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return p;
    }

    p = novo;

    strcpy(p[*total].nome, nome);
    p[*total].num = num;

    (*total)++;

    return p;
}

/* Interesting aproach
pct addC(pct p, int *total){
    char nome[200];
    int num, existe=0;

    if((*total) == 0) {
        p = malloc(sizeof(ct));
        if(p == NULL) {
            printf("Erro na alocacao de memoria\n");
            return NULL;
        }
        printf("Nome do novo contacto:");
        scanf(" %[^\n]", nome);
        printf("Numero do novo contacto:");
        scanf(" %d", &num);
        p[0].num = num;
        strcpy(p[0].nome, nome);
        (*total)++;
        printf("\n");
    }
    else{
        p = realloc(p, ((*total)+1)*sizeof(ct));
        if(p == NULL) {
            printf("Erro na alocacao de memoria\n");
            return NULL;
        }
        do {
            printf("Nome do novo contacto:");
            scanf(" %[^\n]", nome);
            for(int i=0; i<(*total); i++) {
                if(strcmp(p[i].nome, nome) == 0) {
                    printf("Esse contacto ja existe\n\n");
                    existe = 1;
                    break;
                }
                else
                    existe = 0;
            }
        } while (existe);
        printf("Numero do novo contacto:");
        scanf(" %d", &num);
        p[(*total)].num = num;
        strcpy(p[(*total)].nome, nome);
        (*total)++;
        printf("\n");
    }


    return p;
}
*/

// Recebe endereço do vetor, numero de contactos armazenados e nome do contacto a pesquisar
// Devolve o numero de telemovel de um contacto
int getTel(pct p, int total, char *nome)
{
    for (int i = 0; i < total; i++)
    {
        if (strcmp(p[i].nome, nome) == 0)
            return p[i].num;
    }

    return -1;
}

// Atualiza numero de telemovel de um contacto
// Recebe endereço do vetor, numero de contactos armazenados, nome do contacto a atualizar e novo numero
// Devolve 1 se a atualizacao for efetuada, ou 0, caso contrario
int atualizaTel(pct p, int total, char *nome, int novoT)
{
    for (int i = 0; i < total; i++)
    {
        if (strcmp(p[i].nome, nome) == 0)
        {
            p[i].num = novoT;
            return 1;
        }
    }
    return 0;
}

// Recebe endereço do vetor e numero de contactos armazenados
// Devolve o numero de operadores moveis diferentes que existem no array
int getOperador(pct p, int total)
{
    int operadores[total];
    int count = 0;

    for (int i = 0; i < total; i++)
    {
        operadores[i] = -1;
    }

    for (int i = 0; i < total; i++)
    {
        int prefixo = p[i].num / 100000000;

        int encontrado = 0;
        for (int j = 0; j < count; j++)
        {
            if (operadores[j] == prefixo)
            {
                encontrado = 1;
                break;
            }
        }

        if (!encontrado)
        {
            operadores[count] = prefixo;
            count++;
        }
    }

    return count;
}

// Eliminar um novo contacto do vetor dinamico
// Recebe endereço do vetor, endereço de variavel inteira contento o numero de contactos e nome do contacto a eliminar
// Devolve endereço de vetor depois de efetuada a atualizacao
pct eliminaC(pct p, int *total, char *nome)
{
    for (int i = 0; i < *total; i++)
    {
        if (strcmp(p[i].nome, nome) == 0)
        {
            for (int j = i; j < *total - 1; j++)
            {
                p[j] = p[j + 1];
            }

            pct novo = realloc(p, (*total - 1) * sizeof(ct));
            if (novo == NULL && *total - 1 > 0)
            {
                printf("Erro ao realocar memória.\n");
                return p;
            }

            (*total)--;

            return novo;
        }
    }

    printf("Contacto não encontrado.\n");
    return p;
}