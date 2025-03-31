#include "retangulo.h"

int main()
{

    ret r;
    ponto2D p = {2, 3};

    initRet(&r);

    printRet(r);

    printf("\nArea do retangulo: %d\n", areaR(r));

    printf("\n%s\n", (dentroR(r, p) == 1) ? "Está dentro" : "Está fora");

    return 0;
}