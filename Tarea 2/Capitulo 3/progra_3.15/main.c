#include <stdio.h>
#include <math.h>

/* Cálculo de Pi.
El programa obtiene el valor aproximado de Pi utilizando una serie. */

void main(void)
{
    int I = 1, B = 0;
    float RES;
    double PI = 4.0;

    printf("Termino %d: %.4f\n", I, PI);

    while ((fabs(3.1415 - PI)) > 0.0005)
    {
        I++;
        if (B)
        {
            PI = PI + (double)4 / (2 * I - 1);
            B = 0;
        }
        else
        {
            PI = PI - (double)4 / (2 * I - 1);
            B = 1;
        }
        printf("Termino %d: %.4f\n", I, PI);
    }
}
