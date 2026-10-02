#include <stdio.h>

/* Empresa textil.
El programa, al recibir como datos el tratamiento y los años de antigüedad
de un trabajador, determina si es apto para un puesto. */

void main(void)
{
    int CLA, CAT, ANT, RES;
    printf("Ingrese la clave del trabajador, categoria y antiguedad: ");
    scanf("%d %d %d", &CLA, &CAT, &ANT);

    switch(CAT)
    {
        case 3:
        case 4:
            if (ANT >= 5)
                RES = 1;
            else
                RES = 0;
            break;
        case 2:
            if (ANT >= 7)
                RES = 1;
            else
                RES = 0;
            break;
        default:
            RES = 0;
            break;
    }

    if (RES)
        printf("\nEl trabajador con clave %d reune las condiciones para el puesto\n", CLA);
    else
        printf("\nEl trabajador con clave %d no reune las condiciones para el puesto\n", CLA);
}
