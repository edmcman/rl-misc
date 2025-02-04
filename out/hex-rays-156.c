#include <string.h>

#include <math.h>

# 1 
#include "defs.h"
__int64  func0(float *a1, float *a2, float a3, float a4)
{
float *v4; // rax
float *v5; // rax
__int64 result; // rax
unsigned int v9; // [rsp+1Ch] [rbp-Ch]
float v10; // [rsp+20h] [rbp-8h]
float v11; // [rsp+24h] [rbp-4h]

v9 = 3;
while ( 1 )
{
result = v9--;
if ( !(_DWORD)result )
break;
v10 = *a1;
v4 = a1 + 1;
a1 += 2;
v11 = *v4;
*a2 = (float)(v10 * a4) - (float)(*v4 * a3);
v5 = a2 + 1;
a2 += 2;
*v5 = (float)(v11 * a4) + (float)(v10 * a3);
}
return result;
}