
# 1 
#include "defs.h"
float  func0(__int64 a1, int a2, float *a3, float a4, float a5)
{
int v5; // ebx
float v7; // [rsp+2Ch] [rbp-14h]

v5 = (int)*a3;
v7 = *a3 - (float)v5;
for ( *a3 = *a3 + a5; *a3 >= (float)a2; *a3 = *a3 - (float)a2 )
;
return a4 * (*(double *)(8LL * v5 + a1) + v7 * (*(double *)(8LL * ((v5 + 1) % a2) + a1) - *(double *)(8LL * v5 + a1)));
}