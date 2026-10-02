#include <stdio.h>

/* Incremento de precio de producto.
El programa, al recibir como dato el precio de un producto, incrementa el
mismo un 11% si es menor a $1500, o un 8% si es mayor o igual a $1500. */

void main(void)
{
    float PRE, NPR;
    printf("Ingrese el precio del producto: ");
    scanf("%f", &PRE);

    if (PRE < 1500)
        NPR = PRE * 1.11;
    else
        NPR = PRE * 1.08;

    printf("\nEl nuevo precio del producto es: %7.2f\n", NPR);
}
