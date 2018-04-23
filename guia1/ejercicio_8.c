/* 
   Leer constantes de un polonomio de segundo grado.
   Leer valor variable independiente.
   Determinar valor variable dependiente.
   Imprimir en pantalla resultado de la variable dependiente.
   Fin.
*/

#include <stdio.h>
#include <stdlib.h>

float a,b,c,x,y;

int main(void)
{
    printf ("Programa para evaluar valores de un polinomio de segundo grado de la forma\n\t\tp(x) =  a x^2 + b x + c\n");
    
    printf ("Ingrese valor de 'a': ");
    scanf ("%f", &a);
    printf ("Ingr&se valor de 'b': ");
    scanf ("%f", &b);
    printf ("Ingrese valor de 'c': ");
    scanf ("%f", &c);
    printf ("Ingrese valor de 'x': ");
    scanf ("%f", &x);
    
    y = a * x * x + b * x + c;

    printf ("El polinomio evaluado en %f es\n%f\n", x , y);
    return 0;
}
