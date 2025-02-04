#include <stdio.h> //For Standatd I/O Operations.

#include <stdlib.h> //For Exit() Function.

#include <string.h> //For strrev() and strlen() functions.

#include <stdbool.h> //For _Bool Boolean.

#include <ctype.h> //For isUpper(). isLower()

#include <time.h> //For Clock .

#include <math.h> //For pow().

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
char v2; // [rsp+17h] [rbp-419h]
int v3; // [rsp+18h] [rbp-418h]
int v4; // [rsp+1Ch] [rbp-414h]
int v5[258]; // [rsp+20h] [rbp-410h] BYREF
unsigned __int64 v6; // [rsp+428h] [rbp-8h]

v6 = __readfsqword(0x28u);
memset(v5, 0, 0x400uLL);
v3 = 0;
v4 = 0;
while ( *(_BYTE *)(v3 + a1) )
{
v2 = *(_BYTE *)(v3 + a1);
if ( !v5[v2] )
{
v5[v2] = 1;
*(_BYTE *)(v4++ + a1) = *(_BYTE *)(v3 + a1);
}
++v3;
}
*(_BYTE *)(v4 + a1) = 0;
return a1;
}