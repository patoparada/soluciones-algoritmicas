/*
   Leer cantidad de días.
   Calcular cantidad de segundos según el siguiente factor de cambio:

   1 día   24 horas   60 minutos   60 segundos   86400 segundos
         x -------- x ---------- x ----------- = 
            1 día       1 hora      1 minuto   

   Imprimir en pantalla resultado.
   Fin.
*/

#include <stdio.h>
#include <stdlib.h>

int dias, seg;

int main(void)
{
    printf ("Ingese cantidad de días: ");
    scanf ("%d", &dias);
    seg = dias * 86400;
    printf ("%d días equivalen a %d segundos.\n", dias, seg);
    return 0;
}
