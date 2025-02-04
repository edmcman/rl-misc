#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <float.h>

#include <ctype.h>

#include <time.h>

#include <limits.h>

#include <string.h>

#include <stdarg.h>

# 1 
#include "defs.h"
__int64  func0(double *a1)
{
__int64 v2; // [rsp+10h] [rbp-8h]

if ( a1[2] <= 0.0 || a1[3] <= 0.0 )
return 0LL;
if ( a1[3] > a1[2] )
{
v2 = *((_QWORD *)a1 + 3);
a1[3] = a1[2];
*((_QWORD *)a1 + 2) = v2;
a1[4] = a1[4] + 1.57079632679;
}
if ( a1[2] / a1[3] > 100.0 )
return 0LL;
if ( a1[4] > 1.57079632679 )
a1[4] = a1[4] - 3.141592653589793;
if ( a1[4] > 3.141592653589793 )
a1[4] = a1[4] - 3.141592653589793;
if ( a1[4] < -1.57079632679 )
a1[4] = a1[4] + 3.141592653589793;
return 1LL;
}