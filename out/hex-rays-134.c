
# 1 
#include "defs.h"
__int64  func0(int *a1, int *a2)
{
int v3; // [rsp+18h] [rbp-8h]
int v4; // [rsp+1Ch] [rbp-4h]

v3 = *a1;
v4 = *a2;
*a1 = *a2;
*a2 = v3;
return (unsigned int)(v3 + v4);
}