#include <stdio.h>
#include <string.h>

int checkPlanet(char *s)
{

    char *planets[8] = {"Mercurio", "Venus", "Terra", "Marte", "Jupiter", "Saturno", "Urano", "Neptuno"};

    for (int i = 0; i < 8; i++)
        if (strcmp(s, planets[i]) == 0)
            return 1;

    return 0;
}

int main()
{
    printf("\n");
    printf("Terra é planeta? %s\n", (checkPlanet("Terra") == 1) ? "Sim" : "Não");
    printf("Plutao é planeta? %s\n", (checkPlanet("Plutao") == 1) ? "Sim" : "Não");
    printf("Marte é planeta? %s\n", (checkPlanet("Marte") == 1) ? "Sim" : "Não");
    printf("\n");

    return 0;
}