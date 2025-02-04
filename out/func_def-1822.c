#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <math.h>

#include <unistd.h>

# 1 
static int Pack_Tag(char *tags, char *qvs, int rlen, int rchar)
{ int j, k;

  j = 0;
  for (k = 0; k < rlen; k++)
    if (qvs[k] != rchar)
      tags[j++] = tags[k];
  tags[j] = '\0';
  return (j);
}