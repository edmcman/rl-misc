
# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2, _DWORD *a3, double a4)
{
_DWORD *result; // rax
int v5; // [rsp+2Ch] [rbp-14h]
int v6; // [rsp+30h] [rbp-10h]
int v7; // [rsp+34h] [rbp-Ch]

v6 = ((int)(a4 + 0.5) + 1401) / 1461;
v7 = -1461 * v6 + (int)(a4 + 0.5) + 1402;
v5 = 80 * (-365 * ((v7 - 1) / 365 + v7 / -1461) + v7 + 30) / 2447;
*a3 = -365 * ((v7 - 1) / 365 + v7 / -1461) + v7 + 30 + 2447 * v5 / -80;
*a2 = v5 + 2 - 12 * (v5 / 11);
result = a1;
*a1 = (v7 - 1) / 365 + v7 / -1461 + 4 * v6 + v5 / 11 - 4716;
return result;
}