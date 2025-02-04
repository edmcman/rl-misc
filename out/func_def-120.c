#include <alloca.h>

#include <math.h>

# 1 
extern size_t find_ind_float(float *v, float el, size_t maxlen)
{
 size_t i;

 for (i = 0; i < maxlen; i++)
  if (v[i] == el)
   return i;
 return -1;
}