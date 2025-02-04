#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
int matM3toM4(double *m3,double *m4)
{
  m4[0]=m3[0]; m4[1]=m3[1]; m4[2]=m3[2]; m4[3]=0.0;
  m4[4]=m3[3]; m4[5]=m3[4]; m4[6]=m3[5]; m4[7]=0.0;
  m4[8]=m3[6]; m4[9]=m3[7]; m4[10]=m3[8]; m4[11]=0.0;
  m4[12]=0.0; m4[13]=0.0; m4[14]=0.0; m4[15]=1.0;
  return 0;
}