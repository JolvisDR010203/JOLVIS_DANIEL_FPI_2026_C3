#include <stdio.h>
#include <math.h>

/* Función.
El programa, al recibir como dato el valor de X, calcula el valor de Y. */

void main(void)
{
    float X, Y;
    printf("Ingrese el valor de X: ");
    scanf("%f", &X);

    if (X < 0 || X > 50)
        Y = 0;
    else if (X <= 10)
        Y = 4 / X - X;
    else if (X <= 25)
        Y = pow(X, 3) - 12;
    else
        Y = pow(X, 2) + pow(X, 3) - 18;

    printf("\n\nY = %6.2f", Y);
}
