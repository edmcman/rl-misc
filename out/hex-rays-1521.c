#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <time.h>

#include <sys/timeb.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, int a3, __int64 a4)
{
int i; // [rsp+20h] [rbp-8h]
unsigned int v6; // [rsp+24h] [rbp-4h]

v6 = 0;
for ( i = 1; i <= a2; ++i )
{
if ( a3 == *(_DWORD *)(4LL * i + a1) )
*(_DWORD *)(a4 + 4LL * (int)++v6) = i;
}
return v6;
}