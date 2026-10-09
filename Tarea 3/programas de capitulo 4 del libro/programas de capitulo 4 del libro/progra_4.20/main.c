#include <stdio.h>

/* Funciones y variables globales. */

int f1(void);
int f2(void);

int K = 5; /* Variable global. */

void main(void)
{
    int I;
    for (I = 1; I <= 4; I++)
    {
        printf("\n\nResultado de la función f1: %d", f1());
        printf("\nResultado de la función f2: %d", f2());
    }
}

int f1(void)
{
    K += K;
    return (K);
}

int f2(void)
{
    K++;
    return (K);
}
