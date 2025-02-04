#include <string.h>

#include <ctype.h>

#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, unsigned int a2, int a3, int *a4)
{
int v6; // [rsp+20h] [rbp-8h]

v6 = 0;
while ( (int)a2 < a3 && *(unsigned __int8 *)((int)a2 + a1) > 0x2Fu && *(unsigned __int8 *)((int)a2 + a1) <= 0x39u )
v6 = 10 * v6 + *(unsigned __int8 *)((int)a2++ + a1) - 48;
if ( a4 )
*a4 = v6;
return a2;
}