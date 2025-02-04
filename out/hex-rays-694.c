
# 1 
#include "defs.h"
unsigned __int64 * func0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, float a4)
{
unsigned __int64 *result; // rax
unsigned __int64 v5; // rax
_BOOL4 v6; // [rsp+24h] [rbp-1Ch]
unsigned __int64 v7; // [rsp+28h] [rbp-18h]
unsigned __int64 v8; // [rsp+30h] [rbp-10h]
unsigned __int64 v9; // [rsp+38h] [rbp-8h]

v6 = *(float *)(4 * a2 + a1) > *(float *)(a1 + 4);
if ( *a3 && a2 >= *a3 )
{
v8 = 1LL;
if ( v6 == a4 >= *(float *)(4 * *a3 + a1) )
{
result = (unsigned __int64 *)*a3;
if ( a2 == *a3 )
return result;
v7 = *a3 + 1;
while ( v6 == a4 >= *(float *)(4 * v7 + a1) )
{
*a3 = v7;
v8 *= 2LL;
v7 = *a3 + v8;
if ( v7 > a2 )
{
v7 = a2 + 1;
break;
}
}
}
else
{
if ( *a3 == 1 )
{
result = a3;
*a3 = 0LL;
return result;
}
v5 = (*a3)--;
v7 = v5;
while ( v6 == *(float *)(4 * *a3 + a1) > a4 )
{
v7 = *a3;
v8 *= 2LL;
if ( v8 >= *a3 )
{
*a3 = 0LL;
break;
}
*a3 = v7 - v8;
}
}
}
else
{
*a3 = 0LL;
v7 = a2 + 1;
}
while ( 1 )
{
result = (unsigned __int64 *)(v7 - *a3);
if ( result == (unsigned __int64 *)((char *)hunt + 1) )
break;
v9 = (*a3 + v7) >> 1;
if ( v6 == a4 > *(float *)(4 * v9 + a1) )
*a3 = v9;
else
v7 = (*a3 + v7) >> 1;
}
return result;
}