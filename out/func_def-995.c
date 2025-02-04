#include <stdio.h>         /* Standard Libraries */

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <math.h>

# 1 
static void Swap(short *p)
{
   char temp,*q;

   q = (char*) p;
   temp = *q; *q = *(q+1); *(q+1) = temp;
}