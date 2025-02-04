#include <stdio.h>

# 1 
void
upzero (int dlt, int *dlti, int *bli)
{
  int i, wd2, wd3;

  if (dlt == 0)
    {
      for (i = 0; i < 6; i++)
 {
   bli[i] = (int) ((255L * bli[i]) >> 8L);
 }
    }
  else
    {
      for (i = 0; i < 6; i++)
 {
   if ((long) dlt * dlti[i] >= 0)
     wd2 = 128;
   else
     wd2 = -128;
   wd3 = (int) ((255L * bli[i]) >> 8L);
   bli[i] = wd2 + wd3;
 }
    }

  dlti[5] = dlti[4];
  dlti[4] = dlti[3];
  dlti[3] = dlti[2];
  dlti[2] = dlti[1];
  dlti[1] = dlti[0];
  dlti[0] = dlt;
}