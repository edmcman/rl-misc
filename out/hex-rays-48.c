
# 1 
#include "defs.h"
__int64  func0(char *a1)
{
int v1; // er12
char *v2; // rbx
char *v3; // r13
char v4; // r14
char *v5; // rax
char *i; // rbx
int v7; // eax
__int64 result; // rax

v1 = 0;
v2 = a1;
v3 = a1;
while ( *v2 )
++v2;
while ( --v2 > v3 )
{
v4 = *v3;
v5 = v3++;
*v5 = *v2;
*v2 = v4;
}
for ( i = a1; ; ++i )
{
result = (unsigned __int8)*i;
if ( !(_BYTE)result )
break;
v7 = *i;
if ( v7 == 92 )
{
if ( v1 )
{
*i = *(i - 1);
*(i - 1) = 92;
}
}
else if ( v7 <= 92 )
{
if ( v7 == 34 )
{
if ( v1 )
{
if ( (v1 & 2) != 0 && i[1] != 92 )
v1 &= 0xFFFFFFFD;
}
else
{
v1 = 2;
}
}
else if ( v7 == 39 )
{
if ( v1 )
{
if ( (v1 & 1) != 0 && i[1] != 92 )
v1 &= 0xFFFFFFFE;
}
else
{
v1 = 1;
}
}
}
}
return result;
}