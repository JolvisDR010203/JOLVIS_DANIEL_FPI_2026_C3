#include <stdio.h>

/* Votos.
El programa calcula el número de votos y el porcentaje obtenido por cada uno de los 5 candidatos en una elección. */

void main(void)
{
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO = 0;

    printf("Ingrese el primer voto (0 para terminar): ");
    scanf("%d", &VOT);

    while (VOT != 0)
    {
        switch (VOT)
        {
            case 1: C1++; break;
            case 2: C2++; break;
            case 3: C3++; break;
            case 4: C4++; break;
            case 5: C5++; break;
            default: NU++; break;
        }

        printf("Ingrese el siguiente voto (0 para terminar): ");
        scanf("%d", &VOT);
    }

    SVO = C1 + C2 + C3 + C4 + C5 + NU;

    if (SVO > 0)
    {
        printf("\nTotal de votos: %d\n", SVO);
        printf("\nCandidato 1: %d votos (%.2f%%)", C1, (float)C1 / SVO * 100);
        printf("\nCandidato 2: %d votos (%.2f%%)", C2, (float)C2 / SVO * 100);
        printf("\nCandidato 3: %d votos (%.2f%%)", C3, (float)C3 / SVO * 100);
        printf("\nCandidato 4: %d votos (%.2f%%)", C4, (float)C4 / SVO * 100);
        printf("\nCandidato 5: %d votos (%.2f%%)", C5, (float)C5 / SVO * 100);
        printf("\nVotos nulos: %d votos (%.2f%%)\n", NU, (float)NU / SVO * 100);
    }
    else
    {
        printf("\nNo se ingresaron votos.\n");
    }
}#include <stdio.h>

/* Votos.
El programa calcula el número de votos y el porcentaje obtenido por cada uno de los 5 candidatos en una elección. */

void main(void)
{
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO = 0;

    printf("Ingrese el primer voto (0 para terminar): ");
    scanf("%d", &VOT);

    while (VOT != 0)
    {
        switch (VOT)
        {
            case 1: C1++; break;
            case 2: C2++; break;
            case 3: C3++; break;
            case 4: C4++; break;
            case 5: C5++; break;
            default: NU++; break;
        }

        printf("Ingrese el siguiente voto (0 para terminar): ");
        scanf("%d", &VOT);
    }

    SVO = C1 + C2 + C3 + C4 + C5 + NU;

    if (SVO > 0)
    {
        printf("\nTotal de votos: %d\n", SVO);
        printf("\nCandidato 1: %d votos (%.2f%%)", C1, (float)C1 / SVO * 100);
        printf("\nCandidato 2: %d votos (%.2f%%)", C2, (float)C2 / SVO * 100);
        printf("\nCandidato 3: %d votos (%.2f%%)", C3, (float)C3 / SVO * 100);
        printf("\nCandidato 4: %d votos (%.2f%%)", C4, (float)C4 / SVO * 100);
        printf("\nCandidato 5: %d votos (%.2f%%)", C5, (float)C5 / SVO * 100);
        printf("\nVotos nulos: %d votos (%.2f%%)\n", NU, (float)NU / SVO * 100);
    }
    else
    {
        printf("\nNo se ingresaron votos.\n");
    }
}
