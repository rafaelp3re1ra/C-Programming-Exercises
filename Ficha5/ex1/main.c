#include <stdio.h>
#include "ponto.h"

int main()
{

    ponto2D p1 = {3, 5}, p2;

    printPonto(p1);

    initPonto(&p2);
    printPonto(p2);

    movePonto(&p1, -4, -1);
    printPonto(p1);
    printf("Quadrante deste ponto: %d\n", quadrante(p1));

    int dist = distancia(p1, p2);
    printf("Distância entre p1 e p2: %d\n", dist);

    ponto2D p3;
    initPonto(&p3);
    printPonto(p3);

    if (eReta(p1, p2, p3))
        printf("Os pontos estão na mesma reta.\n");
    else
        printf("Os pontos não estão na mesma reta.\n");

    return 0;
}
