#include <stdio.h>
#include "tabela.h"

void printRet(ret r)
{
    printf("\nCanto superior esquerdo: x: %d y: %d\n"
           "Canto superior direito: x: %d y: %d\n"
           "Canto inferior esquerdo: x: %d y: %d\n"
           "Canto inferior direito: x: %d y: %d\n",
           r.canto.x, r.canto.y + r.alt,
           r.canto.x + r.larg, r.canto.y + r.alt,
           r.canto.x, r.canto.y,
           r.canto.x + r.larg, r.canto.y);
}

void printV(ret a[], int total)
{
    int i;

    printf("\nExistem %d retangulos na tabela\n", total);
    for (i = 0; i < total; i++)
    {
        printf("\nR. %d", i);
        printRet(a[i]);
    }
}

void printQuadrados(ret a[], int total)
{
    printf("\nRetângulos que são quadrados:\n");
    for (int i = 0; i < total; i++)
    {
        if (a[i].alt == a[i].larg) // Verifica se o retângulo é um quadrado
        {
            printf("\nR. %d", i);
            printRet(a[i]); // Usa a função existente para imprimir os cantos
        }
    }
}

void initPonto(ret *r)
{
    int a, b;
    printf("Ponto x e y: ");
    scanf("%d %d", &a, &b);
    printf("x: %d\t y: %d\n", a, b);

    r->canto.x = a;
    r->canto.y = b;
}

void initRet(ret *p)
{
    printf("\nInsira as coordenadas do canto inferior esquerdo:\n");
    initPonto(p);
    printf("Indique a altura (inteiro): ");
    scanf("%d", &(p->alt));
    printf("Indique a largura (inteiro): ");
    scanf("%d", &(p->larg));
}

int addRet(ret a[], int *total)
{
    ret r;

    initRet(&r);

    a[*total] = r;

    (*total)++;

    return 0;
}

void duplicaAltLarg(ret a[], int total)
{
    for (int i = 0; i < total; i++)
        if ((a[i].alt * a[i].larg) % 2 == 0)
        {
            a[i].alt *= 2;
            a[i].larg *= 2;
        }
}

int quadrante1(ret a[], int total)
{
    return 0;
}

void eliminaMenor(ret a[], int *total)
{
}

void eliminaVarios(ret a[], int *total, int lim)
{
}