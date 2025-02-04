#include <stdio.h>

# 1 
void CopiarArray( float destino[][3], float origen[][3] )
{
  int fila = 0, col = 0;
  for (fila = 0; fila < 3; fila++)
  {
    for (col = 0; col < 3; col++)
      destino[fila][col] = origen[fila][col];
  }
}