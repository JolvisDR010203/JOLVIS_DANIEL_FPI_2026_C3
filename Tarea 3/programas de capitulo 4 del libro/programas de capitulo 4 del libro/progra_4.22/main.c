#include <stdio.h>

/* Funciones con parámetros por valor y referencia. */

int a, b, c, d;

int funcion1(int, int *);
int funcion2(int *, int *);

void main(void)
{
    int a;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    printf("\n%d %d %d %d", a, b, c, d);
    a = funcion1(c, &d);
    printf("\n%d %d %d %d", a, b, c, d);
    a = funcion2(&b, &c);
    printf("\n%d %d %d %d", a, b, c, d);
}

int funcion1(int c, int *d)
{
    int b;
    a++;
    b = 7;
    c += 3;
    (*d) += 2;
    printf("\n%d %d %d %d", a, b, c, *d);
    return (c);
}

int funcion2(int *b, int *c)
{
    int d;
    a++;
    d = 3;
    (*b)++;
    (*c) += 2;
    printf("\n%d %d %d %d", a, *b, *c, d);
    return (*c);
}
