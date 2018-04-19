// Leer masa del infante.
// Imprimir en pantalla la cantidad de mg diarios, siguiendo
// la relación matemática 0.2 * X, donde X es la masa del infante en kg.
// Calcular la cantidad de gotas necesarias, mediante la expresión
// 25 * W, donde W es la dosis diaria de medicamente de acuerdo a lo obtenido
// anteriormente.
// Imprimir en pantalla la cantidad de gotas.

#include <stdio.h>
#include <stdlib.h>

float masa_infante;
float dosis_diaria;
float gotas_diarias;

int main ()
{
    printf ("Rutina para dosis de medicamento en infantes menores de 1 año.\n");
    printf ("Ingrese la masa, en kg, del infante: \n");
    scanf ("%f", &masa_infante);
    dosis_diaria = 0.2 * masa_infante;
    printf ("La dosis diaria de medicamento es: %.1f mg\n", dosis_diaria);
    gotas_diarias = 25 * dosis_diaria;
    printf ("La cantidad diaria de gotas es %2.0f gotas.\n", gotas_diarias);
    return 0;
}
