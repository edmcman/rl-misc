#include <stdio.h>

#include <math.h>

#include <stdlib.h>

# 1 
void liefere_int_array_statistik(const int array[], int laenge, int *min, int *max, int *summe, double *durchschnitt)
{
  *min = array[0];
  *max = array[0];
  *summe = 0;
  for (int i = 0; i < laenge; i++)
  {
    if (array[i] < *min)
      *min = array[i];
    if (array[i] > *max)
      *max = array[i];
    *summe += array[i];
  }
  *durchschnitt = (1.0 * *summe) / laenge;
}