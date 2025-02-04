#include <stdlib.h>

#include <stdio.h>

#include <math.h>

#include <pthread.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, float a3)
{
int v4; // [rsp+14h] [rbp-Ch]

v4 = 0;
while ( v4 < a2 )
{
if ( a3 < *(float *)(4LL * ((v4 + a2) / 2) + a1) )
a2 = (v4 + a2) / 2;
else
v4 = (v4 + a2) / 2 + 1;
}
return (unsigned int)v4;
}