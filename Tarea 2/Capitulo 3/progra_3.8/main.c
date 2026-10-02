#include <stdio.h>

/* Factorial.
El programa calcula el factorial de un número entero positivo. */

void main(void)
{
    int I, N;
    long FAC = 1;

    printf("Ingrese el numero entero positivo: ");
    scanf("%d", &N);

    if (N >= 0)
    {
        for (I = 1; I <= N; I++)
        {
            FAC = FAC * I;
        }
        printf("\nEl factorial de %d es: %ld\n", N, FAC);
    }
    else
    {
        printf("\nEl numero ingresado no es correcto\n");
    }
}
