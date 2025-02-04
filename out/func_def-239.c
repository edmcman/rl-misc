#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <unistd.h>	

# 1 
static int
endZuker(char *s, int *addend)
{
  *addend = 0;
  return( *s == '(' );
}