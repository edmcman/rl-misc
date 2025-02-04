#include <string.h>

#include <ctype.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
void
fisica_regla4(const char *paterno, const char *materno, const char *nombre, char *result)
{
  result[0] = *paterno;
  result[1] = *materno;
  result[2] = *nombre++;
  result[3] = *nombre;
  result[4] = 0;
}