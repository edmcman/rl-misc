#include <stdlib.h>

#include <string.h>

#include <stdio.h>

# 1 
void getBin(int num, char *str)
{
  *(str+5) = '\0';
  int mask = 0x10 << 1;
  while(mask >>= 1)
    *str++ = !!(mask & num) + '0';
}