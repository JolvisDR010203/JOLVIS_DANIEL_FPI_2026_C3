#include <stdio.h>

/* Calificaciones.
El programa, al recibir como datos las calificaciones obtenidas en un examen por
un grupo de alumnos, obtiene el número de aprobados y reprobados. */

void main(void)
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0;
    float CAL;

    printf("Ingrese la calificacion del alumno (-1 para terminar): ");
    scanf("%f", &CAL);

    while (CAL != -1)
    {
        if (CAL < 4)
            R1++;
        else if (CAL < 6)
            R2++;
        else if (CAL < 8)
            R3++;
        else if (CAL < 9)
            R4++;
        else
            R5++;

        printf("Ingrese la calificacion del alumno (-1 para terminar): ");
        scanf("%f", &CAL);
    }

    printf("\n0..3.99: %d", R1);
    printf("\n4..5.99: %d", R2);
    printf("\n6..7.99: %d", R3);
    printf("\n8..8.99: %d", R4);
    printf("\n9..10  : %d\n", R5);
}
