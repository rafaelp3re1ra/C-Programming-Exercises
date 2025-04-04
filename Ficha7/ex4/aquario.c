#include "aquario.h"

void listAqua(aqua *p, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("\n\nAquario - %d\nNome: %s\n"
               "Capacidade maxima: %d\nCapacidade Atual: %d\n\n",
               p[i].id, p[i].nome, p[i].capMax, p[i].capAtual);
    }
}

aqua *addAq(aqua *p, int *tam)
{
    aqua *aux = realloc(p, sizeof(aqua) * (*tam + 1));

    if (aux == NULL)
    {
        printf("Ocorreu um erro ao alocar a memoria meu mano.");
        return p;
    }

    p = aux;

    printf("Nome da casa dos peixes: ");
    scanf("%[^\n]", p[*tam].nome);
    printf("Quantos cabem la? ");
    scanf("%d", &p[*tam].capMax);

    p[*tam].id = *tam;
    p[*tam].capAtual = 0;

    aux->peixes = realloc(p, sizeof(cool) * aux->capMax);
    if (aux->peixes == NULL)
    {
        printf("Nao funcionou a cena dos cool's!");
        return p;
    }

    (*tam)++;

    return p;
}

aqua *elimina(aqua *p, int *tam, int id)
{
    for (int i = 0; i < *tam; i++)
    {
        if (id == p[i].id)
        {
            for (int j = i; j < *tam - 1; j++)
            {
                p[j] = p[j + 1];
            }

            (*tam)--;

            if (*tam == 0)
            {
                free(p);
                return NULL;
            }

            aqua *aux = realloc(p, sizeof(aqua) * (*tam));
            if (aux == NULL)
            {
                printf("Nao deu para realocar a memoria meu caro!");
                return p;
            }

            return aux;
        }
    }

    printf("Esse aquario nao esta ca!");

    return p;
}
