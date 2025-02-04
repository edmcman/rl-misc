#include <stdio.h>

#include <string.h>

#include <sys/time.h>

# 1 
void chunks(int e[8][8], int f[8][8], int g[8][8])
{
 int i, j, k, ii, jj, kk;
 int sum = 0;

 for(i = 0; i < 8; i++)
 for(j = 0; j < 8; j++)
  g[i][j] = 0;

 for(ii = 0; ii < 8; ii = ii + 8/2)
 {
  for(jj = 0; jj < 8; jj = jj + 8/2)
  {
   for(k = 0; k < 8; k++)
   {
    for(i = ii; i < ii + 8/2; i++)
    {
     sum = g[k][i];
     for(j = jj; j < jj + 8/2; j++)
     {
      sum += e[k][j] * f[j][i];
     }
     g[k][i] = sum;
    }
   }
  }
 }
}