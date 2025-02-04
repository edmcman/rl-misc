#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
int matMultVM(double *v,double *m, double *r2)
{
  double r[4];
  r[0]=v[0]*m[0]+v[1]*m[4]+v[2]*m[8]+v[3]*m[12];
  r[1]=v[0]*m[1]+v[1]*m[5]+v[2]*m[9]+v[3]*m[13];
  r[2]=v[0]*m[2]+v[1]*m[6]+v[2]*m[10]+v[3]*m[14];
  r[3]=v[0]*m[3]+v[1]*m[7]+v[2]*m[11]+v[3]*m[15];

  r2[0]=r[0]; r2[1]=r[1]; r2[2]=r[2]; r2[3]=r[3];

  return 0;
}