#include <stdio.h>

void f1()
{
    int a = 12, *p;
    float x = 3.5, *q;
    p = &a;
    q = &x;
    printf("Valores: a=%d\tx=%.2f\n", a, x);
    printf("Valores: a=%d\tx=%.2f\n", *p, *q);
    printf("Endereco/Localizacao: a -> %p\tx -> %p\n", &a, &x);
    printf("Endereco/Localizacao: a -> %p\tx -> %p\n", p, q);
}

int main()
{
    f1();
    return 0;
}