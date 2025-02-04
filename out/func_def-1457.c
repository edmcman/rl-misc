#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <math.h>

# 1 
void un_zig_zag(int quant_coefficient_matrix[8][8]){
  int i, j, h;

  int temp_matrix[8][8];

  int zz_order[64] = {0,1,8,16,9,2,3,10,17,24,32,25,18,11,4,5,12,19,26,33,40,48,41,34,27,20,13,6,7,14,21,28,35,42,49,56,57,50,43,36,29,22,15,23,30,37,44,51,58,59,52,45,38,31,39,46,53,60,61,54,47,55,62,63};

  for(h = 0; h < 64; h++){
    for(i = 0; i < 8; i++){
      for(j = 0; j < 8; j++){
 if(i*8 + j == zz_order[h]){

   temp_matrix[i][j] = quant_coefficient_matrix[h/8][h%8];
 }
      }
    }
  }


  for(i = 0; i < 8; i++){
    for(j = 0; j < 8; j++){
      quant_coefficient_matrix[i][j] = temp_matrix[i][j];
    }
  }



}