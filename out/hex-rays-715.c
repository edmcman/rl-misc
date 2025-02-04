#include <math.h>

# 1 
#include "defs.h"
__int64  func0(int *a1, int *a2, int *a3, double a4)
{
int v5; // [rsp+24h] [rbp-Ch]

v5 = (int)(86400.0 * a4) % 3600;
*a1 = (int)(86400.0 * a4) / 3600;
*a2 = v5 / 60;
*a3 = v5 % 60;
return 0LL;
}