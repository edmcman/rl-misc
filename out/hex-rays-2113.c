
# 1 
#include "defs.h"
_BOOL8  func0(float *a1)
{
_BOOL4 v1; // eax
_BOOL4 v2; // eax
_BOOL4 v3; // eax
_BOOL4 v5; // [rsp+Ch] [rbp-Ch]
_BOOL4 v6; // [rsp+10h] [rbp-8h]

v1 = *a1 > -1.0e-12 && *a1 < 1.0e-12;
v5 = v1;
v2 = a1[1] > (float)-1.0e-12 && a1[1] < 1.0e-12;
v6 = v2;
v3 = a1[2] > (float)-1.0e-12 && a1[2] < 1.0e-12;
return v5 && v6 && v3;
}