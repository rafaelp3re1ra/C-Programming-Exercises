#include <stdio.h>
#include <ctype.h>

char conta(char *str)
{
    int digito = 0;
    int pontu = 0;
    for (int i; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]) == 0)
            digito++;
        if (ispunct(str[i]) == 0)
            pontu++;
    }
    if (digito < pontu)
        return -1;
    else if (digito > pontu)
        return 1;
    else if (digito == pontu)
        return 0;
}

int main()
{
    // Test cases
    char *testes[] = {
        "hello123!!!", // 3 digits, 3 puncts -> 0
        "abc123",      // 3 digits, 0 puncts -> 1
        "hello!!",     // 0 digits, 2 puncts -> -1
        "no-special-1" // 1 digit, 2 puncts -> -1
    };

    for (int i = 0; i < 4; i++)
    {
        printf("'%s': %d\n", testes[i], conta(testes[i]));
    }

    return 0;
}