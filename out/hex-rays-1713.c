#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#include <errno.h>

#include <unistd.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 13; ++i )
{
if ( *(_BYTE *)(i + a2) != 42 )
*(_BYTE *)(i + a1) = *(_BYTE *)(i + a2);
}
return 0LL;
}