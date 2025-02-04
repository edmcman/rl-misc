#include <math.h>

#include <string.h>

#include <time.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
#include "defs.h"
void  func0(__int64 a1, unsigned int a2, unsigned int *a3)
{
unsigned int v3; // eax
unsigned int v4; // edx

if ( a1 )
{
v3 = *a3 >> 1;
if ( a2 <= 1 )
v4 = 0;
else
v4 = 0x80000000;
*a3 = v3 | v4;
}
}