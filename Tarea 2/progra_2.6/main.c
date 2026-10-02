#include <stdio.h>

/* Incremento de salario de profesores.
El programa, al recibir como datos el nivel y el salario de un profesor,
calcula el incremento correspondiente teniendo en cuenta la tabla de la institución. */

void main(void)
{
    int NIV;
    float SAL;
    printf("Ingrese el nivel del profesor y el salario: ");
    scanf("%d %f", &NIV, &SAL);

    switch(NIV)
    {
        case 1:
            SAL = SAL * 1.0035;
            break;
        case 2:
            SAL = SAL * 1.0041;
            break;
        case 3:
            SAL = SAL * 1.0048;
            break;
        case 4:
            SAL = SAL * 1.0053;
            break;
    }

    printf("\nNivel: %d \tNuevo salario: %8.2f\n", NIV, SAL);
}
