#include <stdlib.h>

#include <math.h>

#include <stdio.h>

#include <time.h>

# 1 
#include "defs.h"
__int64  func0(int *a1, int a2)
{
__int64 result; // rax
int i; // [rsp+14h] [rbp-8h]
unsigned int v4; // [rsp+18h] [rbp-4h]

for ( i = 1; i != a2; ++i )
{
v4 = a2 / i;
if ( i >= a2 / i && a2 == v4 * i )
goto LABEL_7;
}
v4 = 1;
LABEL_7:
*a1 = i;
result = v4;
a1[1] = v4;
return result;
}