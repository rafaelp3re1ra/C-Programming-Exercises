
#ifndef P2324_AULA5_TABELA_H
#define P2324_AULA5_TABELA_H

typedef struct ponto
{
    int x, y;
} ponto2D;

typedef struct retangulo
{
    ponto2D canto;
    int alt, larg;
} ret;

void printRet(ret r);

void printV(ret a[], int total);

void printQuadrados(ret a[], int total);

int addRet(ret a[], int *total);

void duplicaAltLarg(ret a[], int total);

int quadrante1(ret a[], int total);

void eliminaMenor(ret a[], int *total);

void eliminaVarios(ret a[], int *total, int lim);

#endif // P2324_AULA5_TABELA_H
