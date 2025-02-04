
















# 1 
#include "defs.h"
__int64  func0(int a1, unsigned __int8 *a2, int a3)
{
int v5; // [rsp+14h] [rbp-Ch]
int i; // [rsp+18h] [rbp-8h]
int v7; // [rsp+1Ch] [rbp-4h]
int v8; // [rsp+1Ch] [rbp-4h]

if ( a3 <= 0 )
return 0xFFFFFFFFLL;
do
{
if ( (int)read(a1, a2, 1uLL) <= 0 )
return 0xFFFFFFFFLL;
}
while ( *a2 != 4 );
for ( i = 1; i <= 2; i += v7 )
{
v7 = read(a1, &a2[i], (unsigned int)(3 - i));
if ( v7 <= 0 )
return 0xFFFFFFFFLL;
}
if ( a2[2] >= a3 - 3 )
v5 = a3 - 3;
else
v5 = a2[2];
while ( v5 >= i - 2 )
{
v8 = read(a1, &a2[i], (unsigned int)(v5 - (i - 3)));
if ( v8 <= 0 )
return 0xFFFFFFFFLL;
i += v8;
}
return (unsigned int)i;
}