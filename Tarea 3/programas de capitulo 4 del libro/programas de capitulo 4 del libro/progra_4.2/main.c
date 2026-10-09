#include <stdio.h>

int cuadrado(void); /* Declaración de función */
int x;             /* Variable global */

void main(void)
{
    int res;
    for (x = 1; x <= 5; x++)
    {
        res = cuadrado();
        printf("\nEl cuadrado de %d es %d", x, res);
    }
}

int cuadrado(void)
{
    return (x * x);
}
