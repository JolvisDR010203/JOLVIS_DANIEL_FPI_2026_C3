#include <stdio.h>

/* Serie de término alternante.
El programa obtiene la suma de los primeros N términos de una serie alternante. */

void main(void)
{
    int I, N;
    float SSE = 0;

    printf("Ingrese el numero de terminos de la serie: ");
    scanf("%d", &N);

    if (N > 0)
    {
        for (I = 1; I <= N; I++)
        {
            if (I % 2 == 1)
                SSE = SSE + (float)1 / I;
            else
                SSE = SSE - (float)1 / I;
        }
        printf("\nLa suma de la serie es: %.4f\n", SSE);
    }
    else
    {
        printf("\nEl numero de terminos debe ser mayor a cero\n");
    }
}
