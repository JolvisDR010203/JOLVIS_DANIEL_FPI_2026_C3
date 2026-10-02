#include <stdio.h>

/* Billete de ferrocarril.
El programa calcula el costo de un billete de ferrocarril teniendo en
cuenta la distancia entre las dos ciudades y el tiempo de estancia
del pasajero. */

void main(void)
{
    int DIS, TIE;
    float BIL;
    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");
    scanf("%d %d", &DIS, &TIE);

    if ((DIS * 2 > 500) && (TIE > 10))
        BIL = DIS * 2 * 0.19 * 0.80;
    else
        BIL = DIS * 2 * 0.19;

    printf("\nCosto del billete: %7.2f\n", BIL);
}
