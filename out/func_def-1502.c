#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
float median_filt(float* input)
{
 float buffer[9];
 int k,i,h;
 for(k=0;k<9;k++)
  buffer[k]=0;
 int enter;
 for(k=0;k<9;k++)
 {
  enter=1;
  for(i=k-1;i>=0;i--)
  {
   if((enter==1)&&(*(input+k)>buffer[i]))
    {
     if(i==k-1)
     {
      buffer[k]=*(input+k);
      enter=0;
     }
     else
     {
     for(h=k-1;h>=(i+1);h--)
      buffer[h+1]=buffer[h];
     buffer[i+1]=*(input+k);
     enter=0;
     }
    }
  }
  if(enter==1)
  {
   for(h=k-1;h>=0;h--)
      buffer[h+1]=buffer[h];
   buffer[0]=*(input+k);
  }
 }
return buffer[4];

}