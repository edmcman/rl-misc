#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <unistd.h>	

# 1 
static int
endIG(char *s, int *addend)
{
  *addend = 1;
  return((strchr(s,'1')!=NULL) || (strchr(s,'2')!=NULL));
}