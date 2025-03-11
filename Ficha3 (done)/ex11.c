#include <stdio.h>
#include <string.h>

void f12A(char *a, char *b)
{
    do
    {
        b--;
        printf("%s\n", b);
    } while (a != b);
}
void f12B(char *a, char *b)
{
    while (a < b)
        printf("%s\n", a++);
}
int main()
{
    char st1[10] = "123!";

    f12A(st1, st1 + strlen(st1));
    f12B(st1, st1 + strlen(st1));

    return 0;
}

/*

!
3!
23!
123!
123!
23!
3!
!

*/