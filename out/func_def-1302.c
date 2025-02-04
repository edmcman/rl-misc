#include <stdio.h>

# 1 
void copicad(char *p, char *q)
{
  while ((*p = *q) != '\0')
  {
    p++;
    q++;
  }
}