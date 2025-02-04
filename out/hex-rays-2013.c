#include <stdio.h>

#include <stdlib.h>

#include <arpa/inet.h>

# 1 
#include "defs.h"
__int64  func0(int a1, __int64 a2)
{
int v3; // [rsp+14h] [rbp-14h] BYREF
int *v4; // [rsp+20h] [rbp-8h]

v3 = a1;
v4 = &v3;
_snprintf(a2, 8LL, "%d.%d.%d.%d", (unsigned __int8)a1, BYTE1(a1), BYTE2(a1), HIBYTE(a1));
return a2;
}