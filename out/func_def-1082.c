#include <errno.h>

#include <inttypes.h>

#include <limits.h>

#include <setjmp.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
static void
kmp(short d[48][2], const char x[48])
{
  int i, j, c;
  int p[48];

  i = 0;
  j = p[0] = -1;
  while (i < 47) {
    while (j > -1 && x[i] != x[j])
      j = p[j];
    i++, j++;
    p[i] = x[i] == x[j] ? p[j] : j;
  }

  for (i = 0; i < 48; i++)
    for (c = 0; c < 2; c++)
      d[i][c] = (x[i] == c ? i : p[i]) + 1;
}