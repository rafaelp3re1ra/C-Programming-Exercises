
#include "retangulo.h"
#include <stdio.h>

void initPonto(ret *r)
{
    int a, b;
    printf("Ponto x e y: ");
    scanf("%d %d", &a, &b);
    printf("x: %d\t y: %d\n", a, b);

    r->canto.x = a;
    r->canto.y = b;
}

// Escreve as coordenadas dos 4 cantos do retangulo recebido como parâmetro
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

// Inicializa os dados do retangulo referenciado pelo parâmetro recebido.
// O utilizador indica os valores
void initRet(ret *p)
{
    printf("\nInsira as coordenadas do canto inferior esquerdo:\n");
    initPonto(p);
    printf("Indique a altura (inteiro): ");
    scanf("%d", &(p->alt));
    printf("Indique a largura (inteiro): ");
    scanf("%d", &(p->larg));
}

// Devolve a area do retangulo recebido como parâmetro
int areaR(ret r)
{
    if (r.alt != 0 && r.larg != 0)
        return r.larg * r.alt;

    return 0;
}

// Verifica se o ponto a se encontra dentro do retangulo r
// Devolve 1 se suceder, ou 0, caso contrario
int dentroR(ret r, ponto2D a)
{
    if (a.x > r.canto.x && a.x < r.canto.x + r.larg &&
        a.y > r.canto.y && a.y < r.canto.y + r.alt)
    {
        return 1;
    }
    return 0;
}

// Verifica se os 2 retangulos recebidos como parametro se intersetam.
// Devolve 1 se suceder, ou 0, caso contrario
int overlap(ret r1, ret r2)
{
    return 0;
}