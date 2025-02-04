#include <assert.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
static float binary_search( float value, float array[], int size )
{
   int low, high, mid;
   float x;



   if (value < (array[0] - 1e-05)){
      return -1.0;
   }
   else if( size == 1) {
      return 0.0;
   }
   else if (value > (array[size-1] + 1e-05)) {


      return (float)(size+1);
   }
# 946 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/VisualIdeation/vis5d--1.3.1/refs/heads/master/src/proj.c"
   else {

      low = 0;
      high = size-1;

      while (low<=high) {
         mid = (low+high)/2;
         if (value<array[mid])
           high = mid - 1;
         else if (value>array[mid])
           low = mid + 1;
         else
           return (float) mid;
      }


      x = (value-array[high]) / (array[low]-array[high]);
      return high * (1.0-x) + low * x;
   }
}