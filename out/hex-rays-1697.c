#include <math.h>

# 1 
#include "defs.h"
float  func0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
float result; // xmm0_4

sdot_3039 = 0;
stemp_3040 = 0;
if ( a1 <= 0 )
return *(float *)&sdot_3039;
if ( a3 == 1 && a5 == 1 )
{
m_3037 = a1 % 5;
if ( !(a1 % 5) )
goto LABEL_18;
for ( i_3034 = 0LL; i_3034 < m_3037; ++i_3034 )
*(float *)&stemp_3040 = *(float *)&stemp_3040 + (float)(*(float *)(4 * i_3034 + a2) * *(float *)(4 * i_3034 + a4));
if ( a1 > 4 )
{
LABEL_18:
mp1_3038 = m_3037 + 1;
for ( i_3034 = m_3037 + 1; a1 >= i_3034; i_3034 += 5LL )
*(float *)&stemp_3040 = *(float *)&stemp_3040
+ (float)((float)((float)((float)((float)(*(float *)(4 * i_3034 - 4 + a2)
* *(float *)(4 * i_3034 - 4 + a4))
+ (float)(*(float *)(4 * i_3034 + a4)
* *(float *)(4 * i_3034 + a2)))
+ (float)(*(float *)(4 * (i_3034 + 1) + a4)
* *(float *)(4 * (i_3034 + 1) + a2)))
+ (float)(*(float *)(4 * (i_3034 + 2) + a4)
* *(float *)(4 * (i_3034 + 2) + a2)))
+ (float)(*(float *)(4 * (i_3034 + 3) + a4) * *(float *)(4 * (i_3034 + 3) + a2)));
}
sdot_3039 = stemp_3040;
result = *(float *)&stemp_3040;
}
else
{
iy_3036 = 1LL;
ix_3035 = 1LL;
if ( a3 < 0 )
ix_3035 = a3 * (1 - a1) + 1;
if ( a5 < 0 )
iy_3036 = a5 * (1 - a1) + 1;
for ( i_3034 = 1LL; a1 >= i_3034; ++i_3034 )
{
*(float *)&stemp_3040 = *(float *)&stemp_3040
+ (float)(*(float *)(4 * ix_3035 - 4 + a2) * *(float *)(4 * iy_3036 - 4 + a4));
ix_3035 += a3;
iy_3036 += a5;
}
sdot_3039 = stemp_3040;
result = *(float *)&stemp_3040;
}
return result;
}