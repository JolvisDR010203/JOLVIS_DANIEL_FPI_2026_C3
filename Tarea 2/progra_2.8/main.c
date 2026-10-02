#include <stdio.h>

/* Cursos.
El programa, al recibir como datos la matrícula y el promedio de un alumno,
así como el tipo de curso en el que se inscribió, determina si el alumno
puede ser inscrito en el siguiente periodo. */

void main(void)
{
    int MAT, CAR, SEM;
    float PRO;
    printf("Ingrese matricula, carrera, semestre y promedio: ");
    scanf("%d %d %d %f", &MAT, &CAR, &SEM, &PRO);

    switch(CAR)
    {
        case 1:
            if (SEM >= 6 && PRO >= 8.5)
                printf("\n%d %d %5.2f", MAT, CAR, PRO);
            break;
        case 2:
            if (SEM >= 5 && PRO >= 9.0)
                printf("\n%d %d %5.2f", MAT, CAR, PRO);
            break;
        case 3:
            if (SEM >= 6 && PRO >= 8.8)
                printf("\n%d %d %5.2f", MAT, CAR, PRO);
            break;
        case 4:
            if (SEM >= 7 && PRO >= 9.0)
                printf("\n%d %d %5.2f", MAT, CAR, PRO);
            break;
        default:
            printf("\nError en la carrera");
            break;
    }
}
