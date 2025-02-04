#include <string.h>

#include <ctype.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
void
fisica_regla1(const char *paterno, const char *materno, const char *nombre, char *result)
{
  result[0] = *paterno++;
  while ( *paterno ) {
    if ( *paterno == 'A' || *paterno == 'E' ||
  *paterno == 'I' || *paterno == 'O' ||
  *paterno == 'U' ) {
      result[1] = *paterno;
      break;
    }
    paterno++;
  }
  result[2] = *materno;
  result[3] = *nombre;
  result[4] = 0;
}