/*
Ingresar número de mátricula y notas.
Calcular promedio mediante la expresion (n1 + n2 + n3) / 3
Mostrar número de matrícula y promedio en pantalla.
Fin.
*/

#include <stdio.h>
#include <stdlib.h>

int matricula ;
float n1, n2, n3, prom;

int main(void)
{
    printf ("Promedio de Notas.\n");
    printf ("Ingrese su número de matrícula: ");
    scanf ("%d", &matricula);
    printf("\n");
    printf ("Ingrese calificación 1: ");
    scanf ("%f", &n1);
    printf("\n");
    printf ("Ingrese calificación 2: ");
    scanf ("%f", &n2);
    printf("\n");
    printf ("Ingrese calificación 3: ");
    scanf ("%f", &n3);
    printf("\n");
    prom = (n1 + n2 + n3) / 3;
    printf ("El alumno identificado con el número de matrícula %d\n", matricula);
    printf ("Tiene promedio %.2f, según lo ingresado\n", prom);
    return 0;
}
