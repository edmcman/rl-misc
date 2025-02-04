#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

# 1 
int *sort(int *arr) {
 int len = 0;
 while(arr[len++]);
 int flag = 1;
 while(flag) {
  flag = 0;
  for(int i=0;i<len-2;i++)
   if(arr[i]>arr[i+1]) {
    int r = arr[i]; arr[i] = arr[i+1]; arr[i+1] = r;
    flag = 1;
   }
 }
 return arr;
}