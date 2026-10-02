#include <stdio.h>
#include <math.h>

/* Par, impar o nulo.
El programa, al recibir como dato un número entero, determina si el
mismo es par, impar o nulo. */

void main(void)
{
    int NUM;
    printf("Ingrese el numero entero: ");
    scanf("%d", &NUM);

    if (NUM == 0)
        printf("\nNulo\n");
    else if (pow(-1, NUM) > 0)
        printf("\nPar\n");
    else
        printf("\nImpar\n");
}
