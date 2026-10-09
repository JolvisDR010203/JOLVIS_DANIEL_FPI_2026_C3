#include <stdio.h>

int f1(void);
int a = 3;

void main(void)
{
    int a = 5;
    printf("\nEl valor de a en main es: %d", a);
    a = f1();
    printf("\nEl valor de a en main es: %d", a);
}

int f1(void)
{
    int a = 2;
    a += a;
    return a;
}
