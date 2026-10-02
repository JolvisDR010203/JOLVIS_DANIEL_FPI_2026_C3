#include <stdio.h>

/* Lanzamiento de dados.
El programa calcula la frecuencia de aparición de las caras de un dado en N lanzamientos. */

void main(void)
{
    int I, N, LAN, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, C6 = 0;

    printf("Ingrese el numero de lanzamientos: ");
    scanf("%d", &N);

    if (N > 0)
    {
        for (I = 1; I <= N; I++)
        {
            printf("Ingrese el resultado del lanzamiento %d (1-6): ", I);
            scanf("%d", &LAN);

            switch (LAN)
            {
                case 1: C1++; break;
                case 2: C2++; break;
                case 3: C3++; break;
                case 4: C4++; break;
                case 5: C5++; break;
                case 6: C6++; break;
                default: printf("Lanzamiento incorrecto\n"); break;
            }
        }

        printf("\nCara 1: %d\nCara 2: %d\nCara 3: %d\nCara 4: %d\nCara 5: %d\nCara 6: %d\n", C1, C2, C3, C4, C5, C6);
    }
    else
    {
        printf("\nEl numero de lanzamientos debe ser mayor a cero\n");
    }
}
