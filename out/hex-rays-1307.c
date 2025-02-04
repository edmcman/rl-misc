#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(unsigned int *a1)
{
__int64 result; // rax
int v2; // [rsp+10h] [rbp-8h]
int v3; // [rsp+14h] [rbp-4h]

result = *a1;
v2 = *a1;
v3 = 1;
while ( v2 )
{
if ( v2 % 10 == 3 || v2 % 10 == -7 )
{
*a1 += 4 * v3;
}
else if ( v2 % 10 == 7 || v2 % 10 == -3 )
{
*a1 -= 4 * v3;
}
v3 *= 10;
result = (unsigned int)(v2 / 10);
v2 /= 10;
}
return result;
}