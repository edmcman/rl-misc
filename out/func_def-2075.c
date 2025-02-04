#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
static int plot_digit (char digit, float row, float col, float hgt,
                       float vx[], float vy[] )
{
   static int lb[91] = { 0,
      105,102,80,20,02,05,27,87,105,85,103,3,1,5,87,105,102,80,
      60,7,0,87,105,102,80,70,52,54,52,30,20,2,5,27,104,57,50,100,0,
      100,107,67,62,40,20,2,5,27,80,102,105,87,27,5,2,20,30,52,57,
      107,100,4,105,102,80,70,52,55,37,27,5,2,20,30,52,55,77,87,105,
      27, 5,2,20,80,102,105,87,77,55,50 };
   static int lt[12] = { 0,
      1,10,15,22,35,40,49,60,63,80,91 };

   float rs, cs, hl, he;
   int i, ib, ie, llin, llel;
   int num = 0;

   if ((digit < '0') || (digit > '9')) return 0;

   i = digit - '0';
   ib = lt[i+1];
   ie = lt[i+2]-1;
   for (i=ib;i<=ie;i++) {
      llin = lb[i]/10;
      llel = lb[i]-llin*10;
      hl = hgt*llin;
      he = hgt*llel;
      if (i != ib) {
         vx[num] = rs;
         vy[num] = cs;
         num++;
         vx[num] = row-hl;
         vy[num] = col-he;
         num++;
      }
      rs = row-hl;
      cs = col-he;
   }


   return num;
}