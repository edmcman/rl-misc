#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <ctype.h>

# 1 
double random01Self(long int *r){

 int a=100,c=1000,m=6000;
 *r = (*r*a+c)%m;
 return (double)*r/(double)m;

}