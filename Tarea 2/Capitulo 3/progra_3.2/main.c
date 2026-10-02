#include <stdio.h>

/* Aumento de sueldo.
El programa, al recibir como datos los sueldos de un grupo de empleados,
obtiene el total de la nómina de la universidad considerando un aumento. */

void main(void)
{
    int I, N;
    float SUE, NOM = 0;

    printf("Ingrese el numero de empleados: ");
    scanf("%d", &N);

    for (I = 1; I <= N; I++)
    {
        printf("Ingrese el sueldo del empleado %d: ", I);
        scanf("%f", &SUE);

        if (SUE < 1000)
            SUE = SUE * 1.15;
        else
            SUE = SUE * 1.12;

        NOM = NOM + SUE;
    }

    printf("\nEl total de la nomina es: %.2f\n", NOM);
}
