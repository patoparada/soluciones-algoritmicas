// Se lee el número, si es mayor que 9 o menor que 1 
// se imprime un mensaje de error y se sale del programa.
// Mediante ciclos for y las posibilidades de formato que 
// da el comando printf, se pobla la pantalla con la pirámide
// numérica solicitada, tomando en cuenta que en cada fila
// hay un incremento y decremento.

#include <stdio.h>
#include <stdlib.h>

int n;

int main()
{
    printf ("Ingrese un número 'n' tal que 1<=n<=9: ");
    scanf("%d",&n);
    if (n>9)
    {
        printf ("Número fuera de rango.");
        return 1;
    }
    else if (n < 1)
    {
        printf ("Número fuera de rango.");
        return 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
        
            for (int c=1;c<=i; c++)
            {
                printf ("%d", c);
            }
            for (int d=i-1; d>=1; d--)
            {
                printf ("%d", d);
            }
            printf("\n");
        }
    }
    return 0;
}
