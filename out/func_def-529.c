#include <ctype.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void julian2mmdd( int inYYYY, int inDDD,
           int* outMM, int* outDD )
{
  static int days_per_month[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};



  if ( ((inYYYY % 4)==0) && (((inYYYY % 100)!=0)||(inYYYY % 400)==0)) {
    days_per_month[1] = 29;
  } else {
    days_per_month[1] = 28;
  }



  *outMM = 1;
  *outDD = inDDD;
  while( *outMM <= 12 && *outDD > days_per_month[*outMM - 1] ) {

    *outDD -= days_per_month[*outMM - 1];
    (*outMM)++;
  }
}