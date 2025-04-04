#include "aquario.h"
#include "peixe.h"

int main()
{
    aqua *aquario = NULL;
    int tam = 0;

    aquario = addAq(aquario, &tam);
    if (aquario == NULL)
    {
        printf("Erro ao adicionar aquário.\n");
        return 1;
    }

    listAqua(aquario, tam);

    aquario = addFish(aquario, tam);

    listFish(aquario, tam);

    int id;
    printf("Elimina ai um aquario: ");
    scanf("%d", &id);
    aquario = elimina(aquario, &tam, id);

    listAqua(aquario, tam);

    free(aquario);
    return 0;
}