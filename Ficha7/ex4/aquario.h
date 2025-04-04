#ifndef AQUARIO_H
#define AQUARIO_H

#include <stdio.h>
#include <stdlib.h>
#include "peixe.h"

typedef struct aquario
{
    char nome[20];
    int id; // Único
    int capMax;
    int capAtual;
    cool *peixes;
} aqua;

void listAqua(aqua *p, int tam);
aqua *addAq(aqua *p, int *tam);
aqua *elimina(aqua *p, int *tam, int id);

#endif //   AQUARIO_H