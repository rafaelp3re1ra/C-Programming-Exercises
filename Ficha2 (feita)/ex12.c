#include <stdio.h>
#include <ctype.h>

char Up(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            str[i++] = toupper(str[i]);
    }
}

int main()
{
    char str[] = "ola meninos e meninas";
    Up(str);
    printf("%s", str);
}