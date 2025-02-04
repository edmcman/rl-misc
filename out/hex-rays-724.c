#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, __int64 a2)
{
unsigned __int64 i; // [rsp+18h] [rbp-18h]
unsigned __int64 v4; // [rsp+20h] [rbp-10h]
unsigned __int64 v5; // [rsp+28h] [rbp-8h]

v4 = 1LL;
v5 = a2 - 1;
while ( v4 <= v5 )
{
for ( i = 0LL; i < v4 && *(_QWORD *)(8 * v4 + a1) != *(_QWORD *)(8 * i + a1); ++i )
;
if ( i == v4 )
++v4;
else
*(_QWORD *)(8 * v4 + a1) = *(_QWORD *)(8 * v5-- + a1);
}
return v4;
}