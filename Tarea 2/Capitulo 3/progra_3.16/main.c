#include <stdio.h>

/* Calificaciones.
El programa, al recibir un grupo de calificaciones de un alumno, calcula el promedio y determina la mejor y peor calificación. */

void main(void)
{
    int I, MAT, MAMAT, MEMAT;
    float CAL, SUM = 0, MAPRO = 0, MEPRO = 11;

    printf("Ingrese la matricula del alumno (0 para terminar): ");
    scanf("%d", &MAT);

    while (MAT != 0)
    {
        SUM = 0;
        for (I = 1; I <= 5; I++)
        {
            printf("Ingrese la calificacion %d del alumno: ", I);
            scanf("%f", &CAL);
            SUM = SUM + CAL;
        }

        CAL = SUM / 5;
        printf("\nMatricula: %d \t Promedio: %.2f\n\n", MAT, CAL);

        if (CAL > MAPRO)
        {
            MAPRO = CAL;
            MAMAT = MAT;
        }

        if (CAL < MEPRO)
        {
            MEPRO = CAL;
            MEMAT = MAT;
        }

        printf("Ingrese la matricula del alumno (0 para terminar): ");
        scanf("%d", &MAT);
    }

    printf("\nAlumno con mejor promedio: %d \t Promedio: %.2f", MAMAT, MAPRO);
    printf("\nAlumno con peor promedio:  %d \t Promedio: %.2f\n", MEMAT, MEPRO);
}
