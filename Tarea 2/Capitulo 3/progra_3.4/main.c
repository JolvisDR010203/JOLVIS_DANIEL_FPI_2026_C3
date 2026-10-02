#include <stdio.h>
#include <math.h>

/* Suma cuadrados.
El programa obtiene la suma de los cuadrados de los primeros N números naturales. */

void main(void)
{
    int I, N;
    long SUC = 0;

    printf("Ingrese el numero de terminos: ");
    scanf("%d", &N);

    if (N > 0)
    {
        for (I = 1; I <= N; I++)
        {
            SUC = SUC + pow(I, 2);
        }
        printf("\nLa suma de los cuadrados es: %ld\n", SUC);
    }
    else
    {
        printf("\nEl numero de terminos debe ser mayor a cero\n");
    }
}
