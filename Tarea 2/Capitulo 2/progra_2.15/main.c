#include <stdio.h>

/* Spa.
El programa, al recibir como datos el tipo de tratamiento y la edad de
un cliente, calcula el costo total del tratamiento. */

void main(void)
{
    int TRA, EDA, DIA;
    float COS;
    printf("Ingrese el tipo de tratamiento, edad y dias de internacion: ");
    scanf("%d %d %d", &TRA, &EDA, &DIA);

    switch(TRA)
    {
        case 1: COS = DIA * 2800; break;
        case 2: COS = DIA * 1950; break;
        case 3: COS = DIA * 2500; break;
        case 4: COS = DIA * 1150; break;
        default: COS = -1; break;
    }

    if (COS != -1)
    {
        if (EDA >= 60)
            COS = COS *Aquí tienes el código del **Programa 2.15** (Spa):

```c
#include <stdio.h>

/* Spa.
El programa, al recibir como datos el tratamiento y los días de estancia,
calcula el costo total del tratamiento de un cliente. */

void main(void)
{
    int TRA, DIA, ED;
    float COS;
    printf("Ingrese el tratamiento, dias de estancia y edad: ");
    scanf("%d %d %d", &TRA, &DIA, &ED);

    switch(TRA)
    {
        case 1: COS = DIA * 2800; break;
        case 2: COS = DIA * 1950; break;
        case 3: COS = DIA * 2500; break;
        case 4: COS = DIA * 1150; break;
        default: COS = -1; break;
    }

    if (COS != -1)
    {
        if (ED >= 60)
            COS = COS * 0.75;
        else if (ED <= 25)
            COS = COS * 0.85;

        printf("\nClave tratamiento: %d \tDias: %d \tCosto total: %8.2f\n", TRA, DIA, COS);
    }
    else
        printf("\nLa clave del tratamiento es incorrecta\n");
}
