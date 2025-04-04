#include "peixe.h"
#include "aquario.h"

void listFish(aqua *p, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("\nAquário - %d: %s\n", p[i].id, p[i].nome);
        printf("Peixes:\n");

        for (int j = 0; j < p[i].capAtual; j++)
        {
            printf("  Peixe - %d\n", p[i].peixes[j].id);
            printf("    Espécie: %s\n", p[i].peixes[j].especie);
            printf("    Peso: %d\n", p[i].peixes[j].peso);
            printf("    Aquário: %d\n", p[i].peixes[j].aquario);
        }

        if (p[i].capAtual == 0)
        {
            printf("  Nenhum peixe neste aquário.\n");
        }
    }
}

aqua *addFish(aqua *p, int tam)
{
    cool *aux = realloc(p->peixes, sizeof(cool) * (p->capAtual + 1));
    if (aux == NULL)
    {
        printf("Nao deu para arranjar memoria meu caro colega!");
        return p;
    }

    p->peixes = aux;

    printf("Especie do bicho: ");
    scanf("%[^\n]", p->peixes[p->capAtual].especie);
    printf("Quanto pesa o gordo? ");
    scanf("%d", &p->peixes[p->capAtual].peso);
    printf("A que aquario pertence? ");
    scanf("%d", &p->peixes[p->capAtual].aquario);

    for (int i = 0; i < tam; i++)
    {
        if (p[i].id == p->peixes[p->capAtual].aquario)
        {
            if (p[i].capAtual >= p[i].capMax)
            {
                printf("Esse aquario ta cheio deles. Escolhe outro.");
                return p;
            }
            else
            {
                p[i].capAtual++;
                p->peixes[p->capAtual].id = p->capAtual;
                printf("Peixe pronto a afogar!");
                return p;
            }
        }
    }

    printf("Aquario nao encontrado.\n");

    return p;
}