#include <stdarg.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, _BYTE *a2)
{
char v2; // al
__int64 v3; // rsi
int v4; // edx
_BYTE *v5; // rax
__int64 v8; // [rsp+8h] [rbp-28h]
int i; // [rsp+18h] [rbp-18h]
int j; // [rsp+18h] [rbp-18h]
char v11[11]; // [rsp+1Dh] [rbp-13h]
unsigned __int64 v12; // [rsp+28h] [rbp-8h]

v12 = __readfsqword(0x28u);
v11[0] = 0;
if ( a1 >= 0 )
v2 = a1 % 10 + 48;
else
v2 = 48 - a1 % 10;
v11[1] = v2;
if ( a1 >= 0 )
v3 = 10LL;
else
v3 = -10LL;
v8 = a1 / v3;
for ( i = 2; i <= 10; ++i )
{
v11[i] = (char)v8 % 10 + 48;
v8 /= 10LL;
}
for ( j = 10; v11[j] == 48; --j )
;
if ( !j )
j = 1;
while ( j >= 0 )
{
v4 = j--;
v5 = a2++;
*v5 = v11[v4];
}
return __readfsqword(0x28u) ^ v12;
}