#include <stdio.h>
#include <string.h>

/* Cuenta cadenas.
El programa, al recibir dos cadenas de caracteres, calcula e imprime cuántas
veces se encuentra la segunda cadena en la primera. */

int main(void)
{
    char cad1[50], cad2[50];
    char *cad0;
    int i = 0;

    printf("\nIngrese la primera cadena de caracteres: ");
    gets(cad1);

    printf("\nIngrese la cadena a buscar: ");
    gets(cad2);

    cad0 = strstr(cad1, cad2); /* En cad0 se asigna el apuntador a la primera ocurrencia. */

    while (cad0 != NULL)
    {
        i++;
        cad0 = strstr(cad0 + 1, cad2); /* Se busca a partir de la siguiente posición. */
    }

    printf("\nEl numero de veces que aparece la segunda cadena es: %d\n", i);

    return 0;
}
