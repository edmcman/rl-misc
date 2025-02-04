#include <string.h>

#include <ctype.h>

# 1 
static void embofs(double *xemb, double *xmoon)
{
  int i;
  for (i = 0; i <= 2; i++)
    xemb[i] -= xmoon[i] / ((1 / 0.0123000383) + 1.0);
}