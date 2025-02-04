#include <stdio.h>

#include <string.h>

#include <sys/time.h>

# 1 
void nochunks(int e[8][8], int f[8][8], int g[8][8])
{
 int i, j, k;
 int sum = 0;

 for(i = 0; i < 8; i++)
  for(j = 0; j < 8; j++)
  {
   sum = 0;
   for(k = 0; k < 8; k++)
   {
    sum += e[i][k] * f[k][j];
   }
   g[i][j] = sum;
  }
}