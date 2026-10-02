#include <stdio.h>

/* Números perfectos.
El programa obtiene los números perfectos entre 1 y N. */

void main(void)
{
    int I, J, N, SUM;

    printf("Ingrese el numero limite N: ");
    scanf("%d", &N);

    if (N > 0)
    {
        for (I = 1; I <= N; I++)
        {
            SUM = 0;
            for (J = 1; J <= (I / 2); J++)
            {
                if (I % J == 0)
                    SUM = SUM + J;
            }

            if (SUM == I)
                printf("\n%d es un numero perfecto", I);
        }
        printf("\n");
    }
    else
    {
        printf("\nEl numero limite debe ser mayor a cero\n");
    }
}
