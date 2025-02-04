#include <ctype.h>

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
char *strset( char *s, int ch )
{
  unsigned char c;

  for(c=0; s[c] != 0; c++)
    s[c] = ch;

  return s;
}