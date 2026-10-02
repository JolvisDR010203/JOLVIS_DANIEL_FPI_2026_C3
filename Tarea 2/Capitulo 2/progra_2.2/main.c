#include <stdio.h>

/* Incremento de salario.
El programa, al recibir como dato el salario de un profesor, incrementa el
mismo teniendo en cuenta la siguiente regla:
- Si el salario es menor a $18,000, incrementa un 15%.
- Si el salario es mayor o igual a $18,000, incrementa un 8%. */

void main(void)
{
    float SAL, PRE;
    printf("Ingrese el salario del profesor: ");
    scanf("%f", &SAL);

    if (SAL < 18000)
        PRE = SAL * 1.15;
    else
        PRE = SAL * 1.08;

    printf("\nEl nuevo salario del profesor es: %5.2f\n", PRE);
}
