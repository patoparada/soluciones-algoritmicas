/*
   Leer cantidad surtida.
   Leer valor bencina hoy.
   Convertir a sistema decimal.
   Imprimir en pantalla cantidad en litro e importe.
   Fin.
*/

#include <stdio.h>
#include <stdlib.h>

float val_ben, gal, lit, cost;

int main(void)
{
    printf ("Ingrese precio bencina: ");
    scanf ("%f", &val_ben);
    printf ("Ingrese cantidad surtida (gal): ");
    scanf ("%f", &gal);

    lit = gal * 3.785;
    cost = 820 * lit;

    printf ("Se han cargado %.2f [l]. Costo del llenado: %.f pesos.\n", lit, cost);
    return 0;
}
