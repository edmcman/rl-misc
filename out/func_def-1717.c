#include <stdio.h>

# 1 
void mat_add(const int ma[2][3],const int mb[2][3], int mc[2][3])
{
  int i, j;
  for (i=0; i <2; i++)
   for(j=0; j<3; j++)
     mc[i][j] = ma[i][j] + mb[i][j];
}