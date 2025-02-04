#include <ctype.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *v2; // rax
_BYTE *v3; // rax
_BYTE *result; // rax
char v7; // [rsp+1Eh] [rbp-2h]
char v8; // [rsp+1Fh] [rbp-1h]

v7 = 0;
v8 = 0;
while ( *a2 )
{
if ( !strchr(&s, (char)*a2) )
{
if ( *a2 == 3 )
{
v7 = 1;
v8 = 0;
}
else if ( (char)*a2 <= 47 || (char)*a2 > 57 )
{
if ( *a2 == 44 && v7 )
{
v8 = 1;
}
else
{
v3 = a1++;
*v3 = *a2;
}
}
else if ( v7 )
{
if ( ++v7 > v8 + 2 )
{
v8 = 0;
v7 = 0;
}
}
else
{
v2 = a1++;
*v2 = *a2;
}
}
++a2;
}
result = a1;
*a1 = 0;
return result;
}