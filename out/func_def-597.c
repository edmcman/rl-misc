#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
void geom_matinv4d(double m[16]){
 float sum;
 unsigned int i, j, k;

 for(i = 1; i < 4; ++i){
  m[0+4*i] /= m[0+4*0];
 }

 for(i = 1; i < 4; ++i){
  for(j = i; j < 4; ++j){
   sum = 0.;
   for(k = 0; k < i; ++k){
    sum += m[j+4*k] * m[k+4*i];
   }
   m[j+4*i] -= sum;
  }
  if(i == 4-1) continue;
  for(j = i+1; j < 4; ++j){
   sum = 0.;
   for(k = 0; k < i; ++k){
    sum += m[i+4*k]*m[k+4*j];
   }
   m[i+4*j] = (m[i+4*j]-sum) / m[i+4*i];
  }
 }

 for(i = 0; i < 4; ++i){
  for(j = i; j < 4; ++j){
   sum = 1.;
   if(i != j){
    sum = 0.;
    for(k = i; k < j; ++k){
     sum -= m[j+4*k]*m[k+4*i];
    }
   }
   m[j+4*i] = sum / m[j+4*j];
  }
 }
 for(i = 0; i < 4; ++i){
  for(j = i; j < 4; ++j){
   if(i == j){ continue; }
   sum = 0.;
   for(k = i; k < j; ++k){
    sum += m[k+4*j]*( (i==k) ? 1. : m[i+4*k] );
   }
   m[i+4*j] = -sum;
  }
 }
 for(i = 0; i < 4; ++i){
  for(j = 0; j < 4; ++j){
   sum = 0.;
   for(k = ((i>j)?i:j); k < 4; k++ ){
    sum += ((j==k) ? 1. : m[j+4*k])*m[k+4*i];
   }
   m[j+4*i] = sum;
  }
 }
}