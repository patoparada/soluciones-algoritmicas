/*
    Leer las medidas de los catetos del triángulo rectángulo.
    Elevar al cuadrado cada número y sumarlos.
    Calcular raíz cuadrada de la suma resultante.
    Mostrar resultado en pantalla.
    Fin.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a,a2,b,b2,c,c2;

int main()
{
    printf ("Ingrese medida del primer cateto: ");
    scanf ("%f", &a);
    printf ("Ingrese medida del segundo cateto: ");
    scanf ("%f", &b);
    a2 = a * a;
    b2 = b * b;
    c = a2 + b2;
    c2 = sqrt(c);
    printf ("La hipotenusa del triángulo rectángulo es: %.2f.\n",c2);
    return 0;
}
