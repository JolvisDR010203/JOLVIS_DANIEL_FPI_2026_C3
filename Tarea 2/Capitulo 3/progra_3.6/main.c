#include <stdio.h>

/* Nomina de profesores.
El programa obtiene el total de la nomina de una universidad. */

void main(void)
{
    int I, N;
    float SUE, NOM = 0;

    printf("Ingrese el numero de profesores: ");
    scanf("%d", &N);

    if (N > 0)
    {
        for (I = 1; I <= N; I++)
        {
            printf("Ingrese el sueldo del profesor %d: ", I);
            scanf("%f", &SUE);
            NOM = NOM + SUE;
        }
        printf("\nEl total de la nomina es: %.2f\n", NOM);
    }
    else
    {
        printf("\nEl numero de profesores debe ser mayor a cero\n");
    }
}
