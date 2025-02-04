#include <ctype.h>

#include <stdbool.h>

#include <stdint.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(char *a1, _DWORD *a2)
{
unsigned int v3; // [rsp+14h] [rbp-Ch]
int v4; // [rsp+18h] [rbp-8h]
int v5; // [rsp+1Ch] [rbp-4h]

v3 = 0;
v4 = 0;
v5 = *a1;
if ( v5 == 79 || v5 == 111 || v5 == 48 )
{
do
{
++v3;
if ( a1[++v4] == 45 )
++v4;
}
while ( v5 == a1[v4] );
}
if ( v4 != v3 && v4 != 2 * v3 - 1 )
{
v3 = 0;
v4 = 0;
}
*a2 = v4;
return v3;
}