#include <stdio.h>

#include <time.h>

#include <stdlib.h>

# 1 
double rnd(long *prandom)
{
  *prandom = (25173 * *prandom + 13849) % 65536;
  return((double)*prandom / 65535);
}