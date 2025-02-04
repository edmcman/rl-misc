#include <stdio.h>

#include <math.h>

# 1 
void HSLtoRGB(float h, float s, float l, float* outR, float* outG, float* outB)
{
 float temp1,
    temp2;
 float temp[3];
 int i;


 if(s == 0.0) {
  if(outR)
   *outR = l;
  if(outG)
   *outG = l;
  if(outB)
   *outB = l;
  return;
 }


 if(l < 0.5)
  temp2 = l * (1.0 + s);
 else
  temp2 = l + s - l * s;
    temp1 = 2.0 * l - temp2;


 temp[0] = h + 1.0 / 3.0;
 temp[1] = h;
 temp[2] = h - 1.0 / 3.0;

 for(i = 0; i < 3; ++i) {


  if(temp[i] < 0.0)
   temp[i] += 1.0;
  if(temp[i] > 1.0)
   temp[i] -= 1.0;


  if(6.0 * temp[i] < 1.0)
   temp[i] = temp1 + (temp2 - temp1) * 6.0 * temp[i];
  else {
   if(2.0 * temp[i] < 1.0)
    temp[i] = temp2;
   else {
    if(3.0 * temp[i] < 2.0)
     temp[i] = temp1 + (temp2 - temp1) * ((2.0 / 3.0) - temp[i]) * 6.0;
    else
     temp[i] = temp1;
   }
  }
 }


 if(outR)
  *outR = temp[0];
 if(outG)
  *outG = temp[1];
 if(outB)
  *outB = temp[2];
}