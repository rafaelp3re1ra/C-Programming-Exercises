#ifndef PEIXE_H
#define PEIXE_H

#include <stdio.h>
#include <stdlib.h>
#include "aquario.h"

struct aquario;
typedef struct aquario aqua;

typedef struct fish
{
    char especie[20];
    int id; // Único
    int peso;
    int aquario;
} cool;

void listFish(aqua *p, int tam);
aqua *addFish(aqua *p, int tam);

#endif //   PEIXE_H