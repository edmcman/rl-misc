#include <stdlib.h>

#include <unistd.h>

#include <float.h>

#include <math.h>

# 1 
int mpg123_seek_point(unsigned char TOC[100], int file_bytes, float percent)
{


  int a, seekpoint;

  float fa, fb, fx;



  if (percent < 0.0f)
  percent = 0.0f;

  if (percent > 100.0f)
  percent = 100.0f;


  a = (int) percent;

  if (a > 99)
  a = 99;

  fa = TOC[a];

  if (a < 99)
 {

   fb = TOC[a + 1];

 }

  else
 {

   fb = 256.0f;

 }



  fx = fa + (fb - fa) * (percent - a);


  seekpoint = (int) ((1.0f / 256.0f) * fx * file_bytes);



  return seekpoint;

}