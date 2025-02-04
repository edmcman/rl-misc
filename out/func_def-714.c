#include <math.h>

#include <string.h>

# 1 
static int find_max_idx(const float *f)
{
 float en = 0;
 int idx = -1, i;

 for (i = 0; i < 4; i++)
  if (f[i] > en) {
   en = f[i];
   idx = i;
  }
 if (idx < 0)
  return -1;
 en *= 0.1;
 for (i = 0; i < 4; i++)
  if (idx != i && f[i] > en)
   return -1;
 return idx;
}