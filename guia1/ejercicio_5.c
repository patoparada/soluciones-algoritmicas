/*
   Preguntar cuántos dinosaurios va a tabular.
   Leer nombre, peso y longitud.
   Convertir peso y longitud de libras y pies a
   kg y metros, respectivamente.
   Mostrar los resultados en pantalla.
   Fin.
*/

#include <stdio.h>
#include <stdlib.h>

char *dino;
float *peso_im, *largo_im, *peso_me, *largo_me;
int n;

int main(void)
{
    printf ("Ingrese el número de especies de dinosaurios: ");
    scanf ("%d", &n);

    dino = malloc (n * sizeof (char));
    peso_im = malloc (n * sizeof (float));
    peso_me = malloc (n * sizeof (float));
    largo_im = malloc (n * sizeof (float));
    largo_me = malloc (n * sizeof (float));
    
    for (int i = 0; i < n; i++)
    {
        printf ("Ingrese el nombre del dinosario %d: ", i+1);
        scanf ("%s", &dino[i]);
        printf ("Ingrese el peso (en libras) del dinosaurio %d: ", i+1);
        scanf ("%f",&peso_im[i]);
        printf ("Ingrese la longitud (en pies) del dinosaurio %d: ", i+1);
        scanf ("%f",&largo_im[i]);
    }

    for (int i = 0; i < n; i++)
    {
        peso_me[i] = peso_im[i] * 0.45;
        largo_me[i] = largo_im[i] * 0.3048;
    }
    
    printf ("Las medidas expresadas en el sistema internacional son:\n");

    for (int i = 0; i < n ; i++)
    {
        printf ("Dinosaurio: %s\t%.4f [kg]\t%.4f[m]\t", dino[i], peso_me[i], largo_me[i]);
    }
    return 0;
}
