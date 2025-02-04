#include <stdio.h>

# 1 
void copicad(char p[], char q[])
{
  int i = 0;

  while ((p[i] = q[i]) != '\0')
    i++;
}