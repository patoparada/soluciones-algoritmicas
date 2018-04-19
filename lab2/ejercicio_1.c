/*
Leer un número 'm' que será la cota superior del intervalo [1,m].
Comparar el resto de la división del i-ésimo número en el intervalo [2,m]
por el j-ésimo elemento del intervalo [2,i] (se inicia desde el 2, ya que
por convención el 1 es aprimal, para el intervalo [2,m] y se sabe que todo
número natural tiene como divisor al 1, en el caso del intervalo [2,j]).
Si el i-ésimo término del intervalo [2,m] tiene sólo un divisor (el mismo
i), entonces se aumenta en 1 el contador.
Imprimir el resultado del contador.
Fin.
*/

#include <stdio.h>
#include <stdlib.h>

int cota;
int cont=0;
int discr;
int i;
int j;

int main()
{
    printf ("Rutina que indica la cantidad de números primos\nmenores que un número 'm'\n");
    printf ("Ingrese el número 'm': ");
    scanf ("%d", &cota);
    for (i = 2; i <= cota; i++)
    {
        discr = 0;
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
                discr++;
        }
        if (discr == 1)
            cont++;
    }
    printf("Hay %d números primos menores que %d\n", cont, cota);
    return 0;
}
