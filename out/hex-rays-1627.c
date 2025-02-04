
# 1 
#include "defs.h"
__int64  func0(int *a1, int *a2)
{
int v3; // [rsp+1Ch] [rbp-4h]

v3 = *a2;
*a2 = *a1;
*a1 = v3;
return 0LL;
}