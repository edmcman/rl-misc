#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
static int get_regparm(char *dst, size_t dlen, char *p, int *retreg)
{
 int i = 0, o;

 *retreg = 0;

 if (*p != '<')
  return 0;

 i++;
 if (p[i] == '*') {
  *retreg = 1;
  i++;
 }

 for (o = 0; o < dlen; i++) {
  if (p[i] == 0)
   return 0;
  if (p[i] == '>')
   break;
  dst[o++] = p[i];
 }
 dst[o] = 0;
 return i + 1;
}