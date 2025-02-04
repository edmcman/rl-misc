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
unsigned int v4; // [rsp+18h] [rbp-8h]
int v5; // [rsp+1Ch] [rbp-4h]

if ( a3 >= *(float *)(4LL * a2 + a1) )
return (unsigned int)a2;
v5 = 1;
v4 = a2;
while ( v5 <= a2 )
{
if ( *(float *)(4LL * v5 + a1) >= a3 )
{
v4 = v5 - 1;
v5 = a2 + 1;
}
++v5;
}
return v4;
}