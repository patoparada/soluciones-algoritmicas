// Resolución del problema 4 del laboratorio 2.
// El problema consiste en obtener la cantidad de puntos obtenidos hasta el momento
// sabien los resultados de los partidos jugados. Por cada partido ganado, se suman 3
// puntos, por cada empate se suma 1 punto y por cada derrota no se obtienen puntos.
// Así, el algoritmo es el siguiente:
// Leer la cantidad de fechas.
// Leer los resultados de cada partido y almacenarlos arreglos unidimensionales.
// Comparar las entradas de cada arreglo y asignar, en otro vector, los puntos obtenidos
// por fecha.
// Sumar los elemenos del arreglo con los puntajes obtenidos por fecha.
// Desplegar en pantalla el resultado.

#include <stdio.h>
#include <stdlib.h>

int num_fechas;
int *goles_gloriosos;
int *goles_contrario;
int *puntos_fecha;
int total_puntos;

int main()
{
   printf ("Ingrese la cantidad de fechas: \n");
    scanf ("%d", &num_fechas);

    // Reserva de memoria para arreglos.
    goles_gloriosos = malloc(num_fechas * sizeof(int));
    goles_contrario = malloc(num_fechas * sizeof(int));
    puntos_fecha = malloc(num_fechas * sizeof(int));
    
    // Poblar Arreglo con resultados de partidos.
    for (int i = 0; i < num_fechas; i++)
    {
        printf ("Ingrese goles Los Gloriosos en la fecha %d: \n", i+1);
        scanf ("%d", &goles_gloriosos[i]);
        printf ("Ingrese goles en contra en la fecha %d: \n", i+1);
        scanf ("%d", &goles_contrario[i]);
    }

    //Comparar resultados de cada fecha.
    for (int i = 0; i < num_fechas; i++)
    {
        if (goles_gloriosos[i] < goles_contrario[i])
            puntos_fecha[i] = 0;
        else if  (goles_gloriosos[i] > goles_contrario[i])
            puntos_fecha[i] = 3;
        else
            puntos_fecha[i] = 1;
    }

    // Mostrar puntos por fecha.
    for (int i = 0; i < num_fechas; i++)
    {
        printf ("Puntos obtenidos en la fecha %d: %d puntos.\n", i+1, puntos_fecha[i]);
    }

    // Mostrar puntos totales a la fecha.
    for (int i=0; i<num_fechas; i++)
    {
        total_puntos += puntos_fecha[i];
    }
    printf ("Total puntos obtenidos: %d\n", total_puntos);
    return 0;
}
