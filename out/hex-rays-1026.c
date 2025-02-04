
# 1 
#include "defs.h"
char * func0(char *a1, _BYTE *a2)
{
_BYTE *v2; // rax
int v4; // [rsp+1Ch] [rbp-14h]
_BYTE *v5; // [rsp+20h] [rbp-10h]
char *i; // [rsp+28h] [rbp-8h]

v5 = a2;
for ( i = a1; ; ++i )
{
v4 = *i;
if ( v4 != 47 )
break;
}
while ( i < a1 + 128 && v4 != 47 && v4 )
{
if ( v5 < a2 + 12 )
{
v2 = v5++;
*v2 = v4;
}
v4 = *++i;
}
while ( v4 == 47 && i < a1 + 128 )
v4 = *++i;
if ( v5 < a2 + 12 )
*v5 = 0;
return i;
}