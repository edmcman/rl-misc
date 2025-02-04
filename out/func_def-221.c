#include <stdlib.h>

# 1 
static float avg11( float *BufX, float *BufY, size_t Cnt )
{
  float Avg = 0;
  size_t n;
  for( n = 0; n < Cnt; n++ )
  {
    Avg += (BufY[n] * BufX[n]);
  }
  Avg /= Cnt;

  return Avg;
}