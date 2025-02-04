#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <time.h>

#include <sys/timeb.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, float a3)
{
unsigned int v4; // [rsp+10h] [rbp-10h]

v4 = 1;
while ( (int)(a2 - v4) > 1 )
{
if ( *(float *)(4LL * ((int)(a2 + v4) / 2) + a1) < a3 )
v4 = (int)(a2 + v4) / 2;
else
a2 = (int)(a2 + v4) / 2;
}
return v4;
}