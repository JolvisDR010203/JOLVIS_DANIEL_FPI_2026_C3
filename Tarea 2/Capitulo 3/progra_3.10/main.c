#include <stdio.h>
#include <math.h>

/* Pares e impares.
El programa, al recibir como datos N números enteros, calcula la suma de los
números pares y el promedio de los números impares. */

void main(void)
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;

    printf("Ingrese el numero de datos que se van a procesar: ");
    scanf("%d", &N);

    if (N > 0)
    {
        for (I = 1; I <= N; I++)
        {
            printf("Ingrese el numero %d: ", I);
            scanf("%d", &NUM);

            if (NUM != 0)
            {
                if (pow(-1, NUM) > 0)
                    SPA = SPA + NUM;
                else
                {
                    SIM = SIM + NUM;
                    CIM++;
                }
            }
        }

        printf("\nLa suma de los numeros pares es: %d", SPA);

        if (CIM > 0)
            printf("\nEl promedio de los numeros impares es: %.2f\n", (float)SIM / CIM);
        else
            printf("\nNo se ingresaron numeros impares\n");
    }
    else
    {
        printf("\nEl numero de datos debe ser mayor a cero\n");
    }
}
