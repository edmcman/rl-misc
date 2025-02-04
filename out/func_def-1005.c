#include <time.h>

#include <math.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
int binary_search(float *arr, int dim, float key){

   int high = 0;
   int low = dim - 1;
   int middle = 0;
   int pos_left=0;
   int pos_right=0;

   if(key>arr[0]){
 return -1;
   }
   else if(key<arr[dim-1]){
 return -2;
   }
   while (high < low) {
      middle = (high + low)/2;
      if (arr[middle] == key){
      return middle;
    }
      else if (low == middle || high == middle) {
         return high;
      }
      else if (arr[middle] < key)
      {low=middle;}
      else if (arr[middle] > key){
   high=middle;}
   }
}