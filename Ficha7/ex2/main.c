#include <stdio.h>
#include <stdlib.h>

#include "agenda.h"

int main()
{

    pct tab = NULL;
    int i, total = 0;

    for (i = 0; i < 2; i++)
        tab = addC(tab, &total);

    listaC(tab, total);

    printf("Contacto: %d\n", getTel(tab, total, "Ana"));

    printf("%s\n", (atualizaTel(tab, total, "Ana", 921231230)) == 1 ? "Sucesso. Numero atualizado!" : "Correu mal a coisa");

    printf("Contacto: %d\n", getTel(tab, total, "Ana"));

    printf("Existem %d operadores moveis\n", getOperador(tab, total));

    free(tab);

    return 0;
}
