#include <stdio.h>

/* Lluvia.
El programa, al recibir como datos mensuales las lluvias caídas en tres regiones,
obtiene promedios y la región con mayor pluviometría. */

void main(void)
{
    int I;
    float ARNO = 0, ARCE = 0, ARSU = 0;
    float RNO, RCE, RSU;

    for (I = 1; I <= 12; I++)
    {
        printf("Ingrese la lluvia del mes %d de la Region Norte: ", I);
        scanf("%f", &RNO);
        printf("Ingrese la lluvia del mes %d de la Region Centro: ", I);
        scanf("%f", &RCE);
        printf("Ingrese la lluvia del mes %d de la Region Sur: ", I);
        scanf("%f", &RSU);

        ARNO = ARNO + RNO;
        ARCE = ARCE + RCE;
        ARSU = ARSU + RSU;
    }

    printf("\nPromedio de la Region Norte: %.2f", ARNO / 12);
    printf("\nPromedio de la Region Centro: %.2f", ARCE / 12);
    printf("\nPromedio de la Region Sur: %.2f\n", ARSU / 12);

    if (ARNO > ARCE && ARNO > ARSU)
        printf("La Region Norte tuvo la mayor pluviometria.\n");
    else if (ARCE > ARSU)
        printf("La Region Centro tuvo la mayor pluviometria.\n");
    else
        printf("La Region Sur tuvo la mayor pluviometria.\n");
}
