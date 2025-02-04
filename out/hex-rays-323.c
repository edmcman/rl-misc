
# 1 
#include "defs.h"
__int64  func0(char a1, char a2, int *a3)
{
char v3; // cl
__int64 result; // rax
unsigned __int64 v5; // [rsp+10h] [rbp-20h]

v5 = (a2 & 3) + 4LL;
v3 = 0;
result = v5 * ((a1 & 0x3F) + 31LL);
if ( !is_mul_ok(v5, (a1 & 0x3F) + 31LL) )
v3 = 1;
if ( result != (char)result )
v3 = 1;
*a3 = v3 & 1;
return (unsigned __int8)result;
}