
# 1 
#include "defs.h"
__int64  func0(char a1, __int64 a2, unsigned int a3)
{
unsigned int v3; // eax
_BYTE *v4; // rcx
unsigned int v5; // eax
__int64 result; // rax
unsigned int v7; // eax
unsigned int v8; // edx
unsigned int v10; // [rsp+18h] [rbp-8h]
unsigned int v11; // [rsp+1Ch] [rbp-4h]

v10 = 0;
v11 = 0;
if ( a1 == 1 )
{
if ( a3 < 384 - content_1918 )
{
while ( v10 < a3 )
{
v3 = v10++;
v4 = (_BYTE *)(v3 + a2);
v5 = write_pointer_1917++;
buffer_1915[v5] = *v4;
}
content_1918 += a3;
return 1LL;
}
return 0LL;
}
if ( a1 )
{
if ( a1 == 2 )
{
if ( content_1918 )
result = 0LL;
else
result = 373LL;
return result;
}
return 0LL;
}
if ( a3 > content_1918 )
return 0LL;
while ( v11 < a3 )
{
v7 = read_pointer_1916++;
v8 = v11++;
*(_BYTE *)(v8 + a2) = buffer_1915[v7];
}
content_1918 -= a3;
if ( !content_1918 )
{
write_pointer_1917 = 0;
read_pointer_1916 = 0;
}
return 1LL;
}