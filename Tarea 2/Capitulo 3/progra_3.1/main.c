#include <stdio.h>

/* Sueldo de profesores.
El programa, al recibir como datos los sueldos de 15 profesores,
obtiene el total de la nómina de la universidad. */

void main(void)
{
    int I;
    float SUE, NOM;
    NOM = 0;

    for (I = 1; I <= 15; I++)
    {
        printf("\nIngrese el sueldo del profesor %d: ", I);
        scanf("%f", &SUE);
        NOM = NOM + SUE;
    }

    printf("\nEl total de la nomina es: %.2f\n", NOM);
}
