
# 1 
#include "defs.h"
double * func0(__int64 a1, double *a2)
{
double *result; // rax
double v3; // [rsp+20h] [rbp-20h]

result = (double *)(a1 + 8);
v3 = *(double *)(a1 + 16) / *(double *)(a1 + 8);
if ( v3 <= 0.0 || v3 >= 0.5 )
{
if ( v3 >= 0.5 && v3 < 1.0 )
{
a2[1] = (0.7213000000000001 * (1.0 - v3) - 0.5947 * ((1.0 - v3) * (1.0 - v3)))
/ (1.2113 * ((1.0 - v3) * (1.0 - v3)) + 1.0 - (1.0 - v3) * 2.1817);
result = a2;
*a2 = *(double *)(a1 + 16) / a2[1];
}
}
else
{
a2[1] = (1.0 - 3.14159265358979 * v3 * v3 * 0.308)
/ (0.01765 * (3.14159265358979 * v3 * v3 * (3.14159265358979 * v3 * v3) * (3.14159265358979 * v3 * v3))
+ 3.14159265358979 * v3 * v3
- 3.14159265358979 * v3 * v3 * (3.14159265358979 * v3 * v3) * 0.05812);
result = a2;
*a2 = *(double *)(a1 + 8) / a2[1];
}
return result;
}