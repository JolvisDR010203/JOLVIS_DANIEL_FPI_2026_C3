#include <stdio.h>

/* Serie de Fibonacci.
El programa genera los N primeros términos de la serie de Fibonacci. */

void main(void)
{
    int I, N, PRI = 0, SEG = 1, SIG;

    printf("Ingrese el numero de terminos de la serie: ");
    scanf("%d", &N);

    if (N > 0)
    {
        printf("\nLos primeros %d terminos de la serie de Fibonacci son:\n", N);

        for (I = 1; I <= N; I++)
        {
            if (I == 1)
            {
                printf("%d ", PRI);
            }
            else if (I == 2)
            {
                printf("%d ", SEG);
            }
            else
            {
                SIG = PRI + SEG;
                PRI = SEG;
                SEG = SIG;
                printf("%d ", SIG);
            }
        }
        printf("\n");
    }
    else
    {
        printf("\nEl numero de terminos debe ser mayor a cero\n");
    }
}
