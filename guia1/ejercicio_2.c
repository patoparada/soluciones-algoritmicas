/* Ingresar número.
   Calcular su segunda y tercera potencia.
   Mostrar en pantalla el resultado.
   Fin
*/

#include <stdio.h>
#include <stdlib.h>

int n, n2, n3;

int main(void)
{
    printf ("Ingrese un número entero positivo: ");
    scanf ("%d", &n);
    n2 = n * n;
    n3 = n2 * n;
    printf("%d al cuadrado es %d.\n",n,n2);
    printf("%d al cubo es %d.\n",n,n3);
    return 0;
}
