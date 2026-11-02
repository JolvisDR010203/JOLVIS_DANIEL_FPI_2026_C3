#include <stdio.h>

/* Universidad.
El programa, al recibir información sobre el número de alumnos que han ingresado
a sus ocho diferentes carreras en los dos semestres lectivos de los últimos
cinco años, obtiene información útil para el departamento de escolar. */

const int F = 8, C = 2, P = 5;
/* Se declaran constantes para la fila, la columna y la profundidad. */

void Lectura(int [][C][P], int, int, int);
void Funcion1(int [][C][P], int, int, int);
void Funcion2(int [][C][P], int, int, int);
void Funcion3(int [][C][P], int, int, int);
/* Prototipo de funciones. Cada prototipo de función corresponde a uno de los
incisos. */

int main(void)
{
    int UNI[F][C][P];

    Lectura(UNI, F, C, P);
    Funcion1(UNI, F, C, P);
    Funcion2(UNI, F, C, P);
    Funcion3(UNI, 6, C, P);
    /* Se coloca el 6 como parámetro ya que es la clave de la Ingeniería en
    Computación (índice 5, o pasada como clave 6). */

    return 0;
}

void Lectura(int A[][C][P], int FI, int CO, int PR)
/* La función Lectura se utiliza para leer un arreglo tridimensional de tipo
entero de FI filas, CO columnas y PR profundidad. Observa que al ser
tridimensional se necesitan tres ciclos para recorrer el arreglo. */
{
    int K, I, J;
    for (K = 0; K < PR; K++)
    {
        for (I = 0; I < FI; I++)
        {
            for (J = 0; J < CO; J++)
            {
                printf("Ingrese el año %d, carrera %d, semestre %d: ", K + 1, I + 1, J + 1);
                scanf("%d", &A[I][J][K]);
            }
        }
    }
}

void Funcion1(int A[][C][P], int FI, int CO, int PR)
/* Esta función se utiliza para determinar el año en el que la universidad
recibió el mayor número de alumnos. */
{
    int K, I, J;
    int MAY = 0, AO = -1;

    for (K = 0; K < PR; K++)
    {
        int SUM = 0;
        for (I = 0; I < FI; I++)
        {
            for (J = 0; J < CO; J++)
            {
                SUM += A[I][J][K];
            }
        }
        if (SUM > MAY)
        {
            MAY = SUM;
            AO = K;
        }
    }
    printf("\n\nAño con mayor ingreso de alumnos: %d Alumnos: %d", AO + 1, MAY);
}

void Funcion2(int A[][C][P], int FI, int CO, int PR)
/* Esta función se utiliza para determinar la carrera que recibió el mayor
número de alumnos el último año. Observa que no se utiliza un ciclo para los
planos de la profundidad, ya que es un dato (PR - 1). */
{
    int I, J, MAY = 0, CAR = -1;
    int K = PR - 1; /* Último año */

    for (I = 0; I < FI; I++)
    {
        int SUM = 0;
        for (J = 0; J < CO; J++)
        {
            SUM += A[I][J][K];
        }
        if (SUM > MAY)
        {
            MAY = SUM;
            CAR = I;
        }
    }
    printf("\n\nCarrera con mayor número de alumnos: %d Alumnos: %d", CAR + 1, MAY);
}

void Funcion3(int A[][C][P], int FI, int CO, int PR)
/* Esta función se utiliza para determinar el año en el que la carrera
Ingeniería en Computación recibió el mayor número de alumnos. El parámetro
FI recibe la clave o índice de la carrera. */
{
    int K, J;
    int MAY = 0, AO = -1;
    int CAR = FI - 1; /* Se ajusta a índice basado en 0 */

    for (K = 0; K < PR; K++)
    {
        int SUM = 0;
        for (J = 0; J < CO; J++)
        {
            SUM += A[CAR][J][K];
        }
        if (SUM > MAY)
        {
            MAY = SUM;
            AO = K;
        }
    }
    printf("\n\nAño con mayor ingreso de alumnos en Computación: %d Alumnos: %d", AO + 1, MAY);
}
