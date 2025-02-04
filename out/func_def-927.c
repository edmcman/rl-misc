#include <stdint.h>

#include <stddef.h>

#include <stdlib.h>

#include <string.h>

# 1 
char* strcpy(char* destination, const char* source)
{
  int i = 0;
  while ((destination[i] = source[i]) != '\0')
    i++;
  return destination;
}