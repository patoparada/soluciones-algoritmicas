/*
   Leer base y altura.
   Calcular perímetro.
   Calcular área.
   Mostrar en pantalla resultados.
   Fin.
*/

#include <stdio.h>
#include <stdlib.h>

float a, b, s, p;

int main(void)
{
    printf ("Programa para calcular área y perímetro de un rectángulo.\n");
    printf ("Ingrese altura: ");
    scanf ("%f", &a);
    printf ("Ingrese base: ");
    scanf ("%f", &b);

    p = 2 * (a + b);
    s = a * b;

    printf ("El perímetro del rectángulo ingresado es: %.2f.\n", p);
    printf ("La superficie del rectángulo ingresado es: %.2f.\n", s);
    return 0;
}
