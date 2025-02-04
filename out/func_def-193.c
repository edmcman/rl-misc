#include <stdio.h>

#include <stdlib.h>

# 1 
void arr_to_vec(int from[5][5], int to[25])
{
 int i=0,j=0;

 for(i;i<5;i++){
  for(j;j<5;j++){

   to[i*5+j] = from[i][j];
  }
 }
}