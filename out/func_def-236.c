#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void sacUdata(float *hd, int pos, float *t, int n, int type)
{
  int i;
  hd += type;
  for(i=pos;i<n && i<10;i++) hd[i] = t[i];
}