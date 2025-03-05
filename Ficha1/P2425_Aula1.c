// Programação 2024/25
// Aula Prática 1

#include <stdio.h>

// Recebe: Tabela de inteiros a com tamanho tam
// Mostra na consola os valores armazenados na tabela
void mostraTab(int a[], int tam)
{
    int i;

    for (i = 0; i < tam; i++)
        printf("%d\t", a[i]);
    putchar('\n');
}

// Exercicio 1
// Recebe: Tabela de inteiros a com tamanho tam
// Devolve maior valor armazenado na tabela
int maior(int a[], int tam)
{
    int i, m = a[0];
    for (i = 1; i < tam; i++)
        if (a[i] > m)
            m = a[i];
    return m;
}

// Exercicio 2
// Recebe: Tabela de inteiros a com tamanho tam
// Devolve posição do maior valor armazenado na tabela
int posMaior(int a[], int tam)
{
    int m = a[0], pos = 0;
    for (int i = 0; i < tam; i++)
        if (a[i] >= m)
            pos = i;
    return pos;
}

// Exercicio 3
// Recebe: Tabela de inteiros a com tamanho tam
// Devolve número de ocorrências do maior valor na tabela
int contaMaior(int a[], int tam)
{
    int conta = 0, m = maior(a, tam);
    for (int i = 0; i < tam; i++)
        if (a[i] == m)
            conta++;
    return conta;
}

// Exercicio 4
// Recebe: Tabela de inteiros a com tamanho tam
// Devolve o elemento mais comum da tabela
int maisComum(int a[], int tam)
{
    int maxAparicoes = 0, elemento = a[0];
    for (int i = 0; i < tam; i++)
    {
        int aparicoes = 0;
        for (int j = 0; j < tam; j++)
        {
            if (a[i] == a[j])
            {
                aparicoes++;
            }
        }
        if (aparicoes > maxAparicoes || (maxAparicoes == aparicoes && a[i] > elemento))
        {
            maxAparicoes = aparicoes;
            elemento = a[i];
        }
    }
    return elemento;
}

// Exercicio 5
// Recebe: Tabela de inteiros com tamanho tam
// Inverte tabela

void inverte(int a[], int tam)
{
    int *inicio = a;
    int *fim = a + tam - 1;
    int temp;

    while (inicio < fim)
    {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}

// Exercicio 6
// Recebe: Tabela de inteiros com tamanho tam
// Desloca todos os elementos 1 pos para a direita

void deslocaDir(int a[], int tam)
{
    int ultimo = a[tam - 1];

    for (int i = tam - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    a[0] = ultimo;
}

int main()
{

    int tab1[8] = {3, 6, 8, 8, 10, 1, 4, 2};
    int tab2[6] = {5, 5, 5, 9, 1, 9};

    printf("Tabela 1:\n");
    mostraTab(tab1, 8);
    printf("Maior: %d\n", maior(tab1, 8));
    printf("Pos Maior: %d\n", posMaior(tab1, 8));
    printf("Conta Maior: %d\n", contaMaior(tab1, 8));
    printf("Mais comum: %d\n\n", maisComum(tab1, 8));
    inverte(tab1, 8);
    mostraTab(tab1, 8);
    deslocaDir(tab1, 8);
    mostraTab(tab1, 8);

    printf("Tabela 2:\n");
    mostraTab(tab2, 6);
    printf("Maior: %d\n", maior(tab2, 6));
    printf("Pos Maior: %d\n", posMaior(tab2, 6));
    printf("Conta Maior: %d\n", contaMaior(tab2, 6));
    printf("Mais comum: %d\n\n", maisComum(tab2, 6));
    inverte(tab2, 6);
    mostraTab(tab2, 6);
    deslocaDir(tab2, 6);
    mostraTab(tab2, 6);

    return 0;
}
