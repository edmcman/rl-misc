#include <time.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, __int64 a2)
{
char v3; // [rsp+1Bh] [rbp-5h]
int v4; // [rsp+1Ch] [rbp-4h]

v4 = 0;
v3 = 0;
if ( a2 == 3 )
{
while ( !v3 && v4 <= 6 )
{
if ( *a1 == *((_BYTE *)&a_ref_wday_2110 + 3 * v4)
&& a1[1] == *((_BYTE *)&unk_D1 + 3 * v4)
&& a1[2] == byte_D2[3 * v4] )
{
v3 = 1;
}
else
{
++v4;
}
}
}
if ( !v3 )
v4 = -1;
return (unsigned int)v4;
}