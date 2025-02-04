#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void countRomanDigit(int n, int* num_i, int* num_v, int* num_x, int* num_l, int* num_c)
{

 while (n > 0) {
  if (n >= 100) {
   ++*num_c;
   n -= 100;
  }
  else if (n >= 90) {
   ++*num_c;
   ++*num_x;
   n -= 90;
  }
  else if (n >= 50) {
   ++*num_l;
   n -= 50;
  }
  else if (n >= 40) {
   ++*num_l;
   ++*num_x;
   n -= 40;
  }
  else if (n >= 10) {
   ++*num_x;
   n -= 10;
  }
  else if (n >= 9) {
   ++*num_x;
   ++*num_i;
   n -= 9;
  }
  else if (n >= 5) {
   ++*num_v;
   n -= 5;
  }
  else if (n >= 4) {
   ++*num_v;
   ++*num_i;
   n -= 4;
  }
  else if (n >= 1) {
   ++*num_i;
   n -= 1;
  }
 }

 return;
}