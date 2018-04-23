/*
   Leer costo por kilómetro.
   Leer cantidad de kilómetros.
   Calcular valor como
      cantidad de km * costo km
   Mostrar el resultado en pantalla.
   Fin.
*/

#include <stdio.h>
#include <stdlib.h>

float km, cost_km, cost_ticket;
int cap_bus;

int main(void)
{
    printf ("Ingrese cantidad de kilómetros del recorrido: ");
    scanf ("%f", &km);
    printf ("Ingrese costo por kilómetro: ");
    scanf ("%f", &cost_km);
    printf ("Ingrese capacidad del bus: ");
    scanf ("%d", &cap_bus);

    cost_ticket = km * cost_km / cap_bus;

    printf ("El costo de cada pasaje es: %.0f pesos.\n",cost_ticket);
    return 0;
}
