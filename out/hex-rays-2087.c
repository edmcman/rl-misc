
# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3)
{
float *result; // rax

*(float *)&y_1915 = (float)(0.114 * *a3) + (float)((float)(*a1 * 0.29899999) + (float)(0.58700001 * *a2));
*(float *)&cb_1916 = (float)((float)((float)(-0.16869999 * *a1) - (float)(0.33129999 * *a2)) + (float)(0.5 * *a3))
+ 128.0;
*(float *)&cr_1917 = (float)((float)((float)(0.5 * *a1) - (float)(0.41870001 * *a2)) - (float)(0.081299998 * *a3))
+ 128.0;
*(_DWORD *)a1 = y_1915;
*(_DWORD *)a2 = cb_1916;
result = a3;
*(_DWORD *)a3 = cr_1917;
return result;
}