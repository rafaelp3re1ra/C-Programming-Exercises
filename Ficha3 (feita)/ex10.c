#include <stdio.h>

int main()
{
    int i, *p, *q;
    int a[5] = {0, 1, 2, 3, 4};

    for (p = a; p <= a + 4; p++)
        printf("%d\t", *p);

    putchar('\n');

    for (p = a, i = 1; i < 3; i++)
        printf("%d\t", p[i]);

    putchar('\n');

    for (p = a, q = a + 4; p <= q; p++, q--)
        printf("%d\t%d\t", *p, *q);

    return 0;
}

/*
1º - 0  1   2   3   4
2º - 1  2
3º - 0  4   1   3   2   2

*/