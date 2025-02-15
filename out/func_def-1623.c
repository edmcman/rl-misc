#include <stdio.h>

#include <string.h>

#include <ctype.h>

# 1 
static int
compare_lists(int *k1, int *k2, int *t1, int *t2, int len1, int len2, float *ret_sc)
{
  float id;
  float tot;
  int i;

  id = tot = 0.0;
  for (i = 0; i < len1; i++)
    {
      tot += 1.0;
      if (t1[i] == k1[i]) id += 1.0;
    }

  for ( i = 0; i < len2; i++)
    {
      tot += 1.0;
      if (k2[i] == t2[i]) id += 1.0;
    }

  *ret_sc = id / tot;
  return 1;
}