#include <stdio.h>

/* Suma serie.
El programa obtiene la suma de la serie 1 + 1/2 + 1/3 + 1/4 + ... + 1/N. */

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
            SSE = SSE + (float)1 / I;
        }
        printf("\nLa suma de la serie es: %.4f\n", SSE);
    }
    else
    {
        printf("\nEl numero de terminos debe ser mayor a cero\n");
    }
}
