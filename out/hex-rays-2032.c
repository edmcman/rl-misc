#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
#include "defs.h"
__int64  func0(double *a1, double *a2)
{
*a1 = *a2 + *a1;
a1[1] = a2[1] + a1[1];
a1[2] = a2[2] + a1[2];
return 0LL;
}