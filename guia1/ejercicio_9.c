/*
   Leer sueldo base.
   Leer comisión ventas.
   Leer valor ventas realizas.
   Calcular sueldo total mediante
      sueldo total = ventas realizas * comisión + sueldo base
   Mostrar en pantalla comisión por ventas y suelto total.
*/

#include <stdio.h>
#include <stdlib.h>

float ventas, por_com, suel_base, suel_total, com;

int main(void)
{
    printf ("Ingrese suedo base: ");
    scanf ("%f", &suel_base);
    printf ("Ingrese monto ventas realizas: ");
    scanf ("%f", &ventas);
    printf ("Ingrese porcentaje (%) de comisión: ");
    scanf ("%f", &por_com);

    com = 0.01 * por_com * ventas;
    suel_total = suel_base + com;

    printf ("La comisión obtenida es: %.0f pesos. Sueldo total: %.0f pesos.\n", com, suel_total);
    return 0;
}
