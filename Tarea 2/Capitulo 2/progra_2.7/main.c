#include <stdio.h>

/* Ventas de vendedores.
El programa, al recibir como datos las ventas de tres vendedores, calcula
el total de ventas y la comisión correspondiente a cada uno. */

void main(void)
{
    float P1, P2, P3;
    printf("Ingrese las ventas de los 3 vendedores: ");
    scanf("%f %f %f", &P1, &P2, &P3);

    if (P1 > P2)
        if (P1 > P3)
            if (P2 > P3)
                printf("\nEl orden de mayor a menor es: %8.2f %8.2f %8.2f\n", P1, P2, P3);
            else
                printf("\nEl orden de mayor a menor es: %8.2f %8.2f %8.2f\n", P1, P3, P2);
        else
            printf("\nEl orden de mayor a menor es: %8.2f %8.2f %8.2f\n", P3, P1, P2);
    else
        if (P2 > P3)
            if (P1 > P3)
                printf("\nEl orden de mayor a menor es: %8.2f %8.2f %8.2f\n", P2, P1, P3);
            else
                printf("\nEl orden de mayor a menor es: %8.2f %8.2f %8.2f\n", P2, P3, P1);
        else
            printf("\nEl orden de mayor a menor es: %8.2f %8.2f %8.2f\n", P3, P2, P1);
}
