#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void RotMxMultiply(int *rmxab, const int *rmxa, const int *rmxb)
{
  const int *a, *b;



  a = rmxa;
  b = rmxb;
  *rmxab = *a++ * *b; b += 3;
  *rmxab += *a++ * *b; b += 3;
  *rmxab += *a * *b; b -= 5;
   rmxab++;

  a = rmxa;
  *rmxab = *a++ * *b; b += 3;
  *rmxab += *a++ * *b; b += 3;
  *rmxab += *a * *b; b -= 5;
   rmxab++;

  a = rmxa;
  *rmxab = *a++ * *b; b += 3;
  *rmxab += *a++ * *b; b += 3;
  *rmxab += *a++ * *b; b = rmxb;
   rmxab++;

  rmxa = a;
  *rmxab = *a++ * *b; b += 3;
  *rmxab += *a++ * *b; b += 3;
  *rmxab += *a * *b; b -= 5;
   rmxab++;

  a = rmxa;
  *rmxab = *a++ * *b; b += 3;
  *rmxab += *a++ * *b; b += 3;
  *rmxab += *a * *b; b -= 5;
   rmxab++;

  a = rmxa;
  *rmxab = *a++ * *b; b += 3;
  *rmxab += *a++ * *b; b += 3;
  *rmxab += *a++ * *b; b = rmxb;
   rmxab++;

  rmxa = a;
  *rmxab = *a++ * *b; b += 3;
  *rmxab += *a++ * *b; b += 3;
  *rmxab += *a * *b; b -= 5;
   rmxab++;

  a = rmxa;
  *rmxab = *a++ * *b; b += 3;
  *rmxab += *a++ * *b; b += 3;
  *rmxab += *a * *b; b -= 5;
   rmxab++;

  a = rmxa;
  *rmxab = *a++ * *b; b += 3;
  *rmxab += *a++ * *b; b += 3;
  *rmxab += *a * *b;
}