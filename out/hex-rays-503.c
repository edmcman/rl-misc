
# 1 
#include "defs.h"
float * func0(float *a1, float a2, float a3, float a4, float a5)
{
float *result; // rax

*a1 = 1.0 / (float)((float)((float)(a2 - a3) * (float)(a2 - a4)) * (float)(a2 - a5));
a1[1] = 1.0 / (float)((float)((float)(a3 - a2) * (float)(a3 - a4)) * (float)(a3 - a5));
a1[2] = 1.0 / (float)((float)((float)(a4 - a2) * (float)(a4 - a3)) * (float)(a4 - a5));
result = a1 + 3;
a1[3] = 1.0 / (float)((float)((float)(a5 - a2) * (float)(a5 - a3)) * (float)(a5 - a4));
return result;
}