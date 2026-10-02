#include <stdio.h>
#include <math.h>

/* Función matemática.
El programa obtiene el resultado de una función según el valor de OP y T. */

void main(void)
{
    int OP;
    float T, RES;
    printf("Ingrese la opcion y el valor de T: ");
    scanf("%d %f", &OP, &T);

    switch(OP)
    {
        case 1:
            RES = T / 5;
            break;
        case 2:
            RES = pow(T, T);
            break;
        case 3:
        case 4:
            RES = 6 * T / 2;
            break;
        default:
            RES = 1;
            break;
    }

    printf("\nResultado: %7.2f\n", RES);
}
