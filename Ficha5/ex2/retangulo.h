
#ifndef RETANGULO_H
#define RETANGULO_H

typedef struct ponto
{
    int x, y;
} ponto2D;

typedef struct retangulo
{
    ponto2D canto;
    int alt, larg;
} ret;

// Prototipos das funções definidas no modulo retangulo.c

void printRet(ret r);

void initRet(ret *p);

int areaR(ret r);

int dentroR(ret r, ponto2D a);

int overlap(ret r1, ret r2);

#endif
