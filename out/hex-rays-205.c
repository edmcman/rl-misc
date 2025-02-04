#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(_DWORD *a1)
{
int v2; // [rsp+10h] [rbp-28h]
int v3; // [rsp+14h] [rbp-24h]
int *v4; // [rsp+18h] [rbp-20h]
int *v5; // [rsp+20h] [rbp-18h]
unsigned int *i; // [rsp+28h] [rbp-10h]

v5 = a1;
v4 = a1;
for ( i = a1 + 1; i < a1 + 10; ++i )
{
if ( (int)*i <= *v4 )
{
if ( (int)*i < *v5 )
v5 = (int *)i;
}
else
{
v4 = (int *)i;
}
}
v2 = *v4;
v3 = *v5;
*i = *a1;
*a1 = v3;
*i = a1[9];
a1[9] = v2;
return *i;
}