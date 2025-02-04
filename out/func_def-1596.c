#include <stdio.h>

# 1 
void ltr_int_assign_matrix(double src[3][3], double tgt[3][3])
{
  int i,j;
  for(i = 0; i < 3; ++i){
    for(j = 0; j < 3; ++j){
      tgt[i][j] = src[i][j];
    }
  }
}