
#include <stdio.h>
#include "ponto.h"

// Escreve as coordenadas do ponto recebido como parâmetro
void printPonto(ponto2D a)
{
    printf("Ponto: (%d,%d)\n", a.x, a.y);
}

// Inicializa as coordenadas do ponto referenciado pelo parâmetro recebido. O utilizador indica os valores
void initPonto(ponto2D *p)
{
    int a, b;
    printf("a b: ");
    scanf("%d %d", &a, &b);
    printf("a: %d\t b: %d\n", a, b);

    p->x = a;
    p->y = b;
}

// Recebe endereço de um ponto e valores para o deslocamento ao longo dos eixos
// Atualiza as coordenadas do ponto
void movePonto(ponto2D *p, int dx, int dy)
{
    p->x += dx;
    p->y += dy;
}

// Devolve o quadrante a que pertence o ponto recebido por parâmetro
int quadrante(ponto2D a)
{
    if (a.x > 0 && a.y > 0)
        return 1;
    if (a.x < 0 && a.y < 0)
        return 3;
    if (a.x > 0 && a.y < 0)
        return 4;
    if (a.x < 0 && a.y > 0)
        return 2;

    return -1;
}

// Recebe 3 pontos
// Devolve 1 se estiverem na mesma reta, 0 se não estiverem
int eReta(ponto2D a, ponto2D b, ponto2D c)
{
    if ((b.y - a.y) * (c.x - a.x) == (c.y - a.y) * (b.x - a.x))
        return 1;

    return 0;
}

int distancia(ponto2D a, ponto2D b)
{
    int dx = b.x - a.x;
    int dy = b.y - a.y;
    return dx * dx + dy * dy;
}