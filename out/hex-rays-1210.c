#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
double  func0(double *a1, double a2)
{
double v3; // [rsp+18h] [rbp-8h]

v3 = *a1;
*a1 = *a1 + a2;
return v3;
}