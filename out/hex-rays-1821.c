#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 15; ++i )
*(_QWORD *)(8LL * i + a2) = *(_QWORD *)(a1 + 8LL * i);
return 0LL;
}