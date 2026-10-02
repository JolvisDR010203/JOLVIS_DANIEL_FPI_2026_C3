#include <stdio.h>
#include <math.h>

/* Igualdad de expresiones.
El programa, al recibir como datos T, P y Q, determina si los mismos
satisfacen una igualdad determinada. */

void main(void)
{
    int T, P, Q;
    float RES;
    printf("Ingrese los valores de T, P y Q: ");
    scanf("%d %d %d", &T, &P, &Q);

    if (P != 0)
    {
        RES = pow(T / (float)P, Q);
        if (RES == (pow(T, Q) / pow(P, Q)))
            printf("\nSe comprueba la igualdad\n");
        else
            printf("\nNo se comprueba la igualdad\n");
    }
    else
        printf("\nP tiene que ser diferente de cero\n");
}
