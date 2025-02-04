#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <inttypes.h>

#include <arpa/inet.h>

# 1 
int buscarCoincidencia(char *ventana, char *buffer, int *posicion) {

  int longitud, maxLongitud, i, j;

  maxLongitud = 0;

  for (i = 0; i < 8192; i++) {
    longitud = 0;

    for (j = 0; j < 8192; j++) {
      if (ventana[i + j] == buffer[j]) {
        longitud++;
      } else {
        break;
      }

      if (longitud > maxLongitud) {
        *posicion = i;
        maxLongitud = longitud;
      }

      if (maxLongitud == 15) {
        break;
      }
    }
  }

  return maxLongitud;
}