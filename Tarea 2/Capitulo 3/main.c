#include <stdio.h>

/* Suma serie.
El programa obtiene la suma de los primeros N términos de una serie. */

void main(void)
{
    int I, N;
    float SUE, NOM = 0;

    printf("Ingrese el numero de pagos: ");
    scanf("%d", &N);

    for (I = 1; I <= N; I++)
    {
        printf("Ingrese el pago %d: ", I);
        scanf("%f", &SUE);
        NOM = NOM + SUE;
    }

    printf("\nEl total de pagos es: %.2f\n", NOM);
}
