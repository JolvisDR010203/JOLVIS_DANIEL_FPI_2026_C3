#include <stdio.h>

/* Declaración de cadenas de caracteres y asignación de valores. */
int main(void)
{
    char *cad0;
    cad0 = "Argentina"; /* La declaración y la asignación son correctas. */
    puts(cad0);

    cad0 = "Brasil";
    /* Correcto. Se modifica el contenido de la posición en memoria a la que apunta cad0. */
    puts(cad0);

    /*
       NOTA: Las siguientes líneas del texto original generan errores de compilación
       o ejecución, por lo que se mantienen comentadas para que el programa pueda compilar:

       char *cad1;
       gets(*cad1); gets(cad1); // Error en ejecución

       char cad1[]; // Error en compilación

       cad2[10] = "Guatemala"; // Error en compilación (se intenta asignar una cadena a un solo char)
    */

    char buffer[50] = "";
    char *cad1 = buffer;
    /* gets(cad1); */ /* Correcto si el apuntador tiene memoria reservada */

    char cad2[20] = "Mexico"; /* Correcto. */
    puts(cad2);

    return 0;
}
