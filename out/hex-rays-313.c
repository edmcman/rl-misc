
# 1 
#include "defs.h"
float * func0(float *a1, float a2, float a3, float a4, float a5, float a6)
{
float *result; // rax

*a1 = 1.0 / (float)((float)((float)((float)(a2 - a3) * (float)(a2 - a4)) * (float)(a2 - a5)) * (float)(a2 - a6));
a1[1] = 1.0 / (float)((float)((float)((float)(a3 - a2) * (float)(a3 - a4)) * (float)(a3 - a5)) * (float)(a3 - a6));
a1[2] = 1.0 / (float)((float)((float)((float)(a4 - a2) * (float)(a4 - a3)) * (float)(a4 - a5)) * (float)(a4 - a6));
a1[3] = 1.0 / (float)((float)((float)((float)(a5 - a2) * (float)(a5 - a3)) * (float)(a5 - a4)) * (float)(a5 - a6));
result = a1 + 4;
a1[4] = 1.0 / (float)((float)((float)((float)(a6 - a2) * (float)(a6 - a3)) * (float)(a6 - a4)) * (float)(a6 - a5));
return result;
}