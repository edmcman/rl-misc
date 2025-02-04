
# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
_BYTE *v2; // [rsp+0h] [rbp-18h]
unsigned int v3; // [rsp+10h] [rbp-8h]
int v4; // [rsp+14h] [rbp-4h]

v2 = (_BYTE *)(a1 + 9);
v3 = 71;
while ( 1 )
{
result = (unsigned int)(char)*v2;
v4 = (char)*v2;
if ( !*v2 )
break;
if ( v4 == 47 )
break;
result = v3--;
if ( !(_DWORD)result )
break;
if ( v4 == 68 || v4 == 100 )
{
*v2 = 69;
}
else if ( (v4 <= 47 || v4 > 57) && v4 != 43 && v4 != 45 && v4 != 101 && v4 != 69 && v4 != 46 )
{
*v2 = 32;
}
++v2;
}
return result;
}