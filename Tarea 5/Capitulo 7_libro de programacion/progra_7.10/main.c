#include <stdio.h>
#include <stdlib.h>

/* Suma y promedio.
El programa, al recibir como datos varias cadenas de caracteres que
contienen reales, los suma y obtiene el promedio de los mismos. */

int main(void)
{
    char c, cad[10];
    int i = 0;
    float sum = 0.0;

    printf("\nDesea ingresar una cadena de caracteres (S/N)? ");
    c = getchar();

    while (c == 'S')
    {
        printf("\nIngrese la cadena de caracteres: ");
        fflush(stdin);
        gets(cad);
        i++; // Correccion de coma a punto y coma
        sum += atof(cad);

        printf("\nDesea ingresar otra cadena de caracteres (S/N)? ");
        fflush(stdin);
        c = getchar();
    }

    printf("\nSuma: %.2f", sum);
    if (i > 0)
        printf("\nPromedio: %.2f\n", sum / i);
    else
        printf("\nPromedio: 0.00\n");

    return 0;
}
