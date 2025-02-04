#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <assert.h>

#include <time.h>

# 1 
#include "defs.h"
__int64  func0(unsigned __int16 a1, _WORD *a2)
{
unsigned int v3; // [rsp+18h] [rbp-8h]
unsigned int v4; // [rsp+1Ch] [rbp-4h]

v4 = ((unsigned __int16)(a1 ^ (a1 >> 1)) << 15) | a1;
v3 = (v4 ^ (v4 >> 1)) & 0xFFFFFFF;
if ( a2 )
*a2 = v3 >> 13;
return v3;
}