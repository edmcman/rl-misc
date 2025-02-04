#include <stdarg.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, _BYTE *a2)
{
int v2; // edx
_BYTE *v3; // rax
int i; // [rsp+18h] [rbp-18h]
int j; // [rsp+18h] [rbp-18h]
char v9[11]; // [rsp+1Ch] [rbp-14h]
char v10; // [rsp+27h] [rbp-9h]
unsigned __int64 v11; // [rsp+28h] [rbp-8h]

v11 = __readfsqword(0x28u);
v9[0] = 0;
for ( i = 1; i <= 11; ++i )
{
v9[i] = (a1 & 7) + 48;
a1 >>= 3;
}
v10 &= 0x33u;
for ( j = 11; v9[j] == 48; --j )
;
if ( !j )
j = 1;
while ( j >= 0 )
{
v2 = j--;
v3 = a2++;
*v3 = v9[v2];
}
return __readfsqword(0x28u) ^ v11;
}