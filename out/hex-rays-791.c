







# 1 
#include "defs.h"
_DWORD * func0(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
_DWORD *result; // rax

*a3 = (((unsigned __int16)(a2 * HIWORD(a1))
+ (unsigned __int16)(HIWORD(a2) * a1)
+ (((unsigned __int16)a2 * (unsigned int)(unsigned __int16)a1) >> 16)) >> 16)
+ (((unsigned __int16)a2 * (a1 >> 16)) >> 16)
+ (((a2 >> 16) * (unsigned __int16)a1) >> 16)
+ (a2 >> 16) * (a1 >> 16);
result = a4;
*a4 = (((unsigned __int16)(a2 * HIWORD(a1))
+ (unsigned __int16)(HIWORD(a2) * a1)
+ (((unsigned __int16)a2 * (unsigned int)(unsigned __int16)a1) >> 16)) << 16)
+ (unsigned __int16)(a2 * a1);
return result;
}