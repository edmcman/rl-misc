#include <stdarg.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, _BYTE *a2)
{
char v2; // dl
int v3; // edx
_BYTE *v4; // rax
int i; // [rsp+1Ch] [rbp-34h]
int j; // [rsp+1Ch] [rbp-34h]
char v10[40]; // [rsp+20h] [rbp-30h]
unsigned __int64 v11; // [rsp+48h] [rbp-8h]

v11 = __readfsqword(0x28u);
v10[0] = 0;
for ( i = 1; i <= 32; ++i )
{
if ( (a1 & 1) != 0 )
v2 = 49;
else
v2 = 48;
v10[i] = v2;
a1 >>= 1;
}
for ( j = 32; v10[j] == 48; --j )
;
if ( !j )
j = 1;
while ( j >= 0 )
{
v3 = j--;
v4 = a2++;
*v4 = v10[v3];
}
return __readfsqword(0x28u) ^ v11;
}