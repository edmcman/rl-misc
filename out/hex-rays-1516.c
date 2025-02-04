#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(int *a1, char a2, int a3)
{
unsigned int v4; // [rsp+1Ch] [rbp-4h]

v4 = (*a1 >> 15) & 1;
*a1 = a3 ^ v4 ^ (2 * *a1) ^ (v4 << a2);
return v4;
}