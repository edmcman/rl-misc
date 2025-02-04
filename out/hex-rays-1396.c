#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, double a2, double a3, double a4)
{
int i; // [rsp+2Ch] [rbp-4h]

for ( i = 0; i <= 15; ++i )
*(_QWORD *)(8LL * i + a1) = 0LL;
*(double *)a1 = a2;
*(double *)(a1 + 40) = a3;
*(double *)(a1 + 80) = a4;
*(_QWORD *)(a1 + 120) = 0x3FF0000000000000LL;
return 0LL;
}