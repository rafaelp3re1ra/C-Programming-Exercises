#include <stdio.h>

void rotacao(float *p1, float *p2, float *p3)
{
    float aux;
    aux = (*p1);
    (*p1) = (*p3);
    (*p3) = (*p2);
    (*p2) = aux;
}

int main()
{
    // Test the rotation
    float x = 1.0, y = 2.0, z = 3.0;

    printf("Before: x=%.1f, y=%.1f, z=%.1f\n", x, y, z);
    rotacao(&x, &y, &z);
    printf("After:  x=%.1f, y=%.1f, z=%.1f\n", x, y, z);

    return 0;
}