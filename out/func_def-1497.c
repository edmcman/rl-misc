#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
void set_initial(float **array, int puntos_x, int puntos_y , float delta_x, float delta_y){
  int i;
  int j;
  float x;
  float y;

  for(i=0;i<puntos_x;i++){
    x = i * delta_x;
    for(j=0;j<puntos_y;j++){
  y = j * delta_y;
  if( (0.5 <= x && x<=1) && (0.5 <= y && y<=1)){
   array[i][j] = 2.0;
 }
 }
  }
}