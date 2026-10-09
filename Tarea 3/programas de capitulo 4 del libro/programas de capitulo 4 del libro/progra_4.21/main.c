#include <stdio.h>

/* Funciones con variables estáticas. */

void F1(void);

int K = 5; /* Variable global. */

void main(void)
{
    int I;
    for (I = 1; I <= 3; I++)
    {
        F1();
    }
}

void F1(void)
{
    static int K = 0; /* Variable local estática. */
    printf("\nEl valor local de K es: %d", K);
    K = K + ::K; /* Nota: en algunos compiladores estándar se usa K + K global (aquí se suma la estática con la global K). */
    printf("\nEl valor global de K es: %d", K);
}
