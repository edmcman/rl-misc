
# 1 
#include "defs.h"
__int64  func0(double *a1, __int64 a2, __int64 a3)
{
__int64 result; // rax
int i; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 4; ++i )
{
*(double *)(a3 + 8LL * i) = *(double *)(a3 + 8LL * i)
- *(double *)(a2 + 8LL * i) * *a1
- *(double *)(a2 + 40 + 8LL * i) * a1[1]
- *(double *)(a2 + 80 + 8LL * i) * a1[2]
- *(double *)(a2 + 120 + 8LL * i) * a1[3]
- *(double *)(a2 + 160 + 8LL * i) * a1[4];
*(double *)(a3 + 40 + 8LL * i) = *(double *)(a3 + 40 + 8LL * i)
- *(double *)(a2 + 8LL * i) * a1[5]
- *(double *)(a2 + 40 + 8LL * i) * a1[6]
- *(double *)(a2 + 80 + 8LL * i) * a1[7]
- *(double *)(a2 + 120 + 8LL * i) * a1[8]
- *(double *)(a2 + 160 + 8LL * i) * a1[9];
*(double *)(a3 + 80 + 8LL * i) = *(double *)(a3 + 80 + 8LL * i)
- *(double *)(a2 + 8LL * i) * a1[10]
- *(double *)(a2 + 40 + 8LL * i) * a1[11]
- *(double *)(a2 + 80 + 8LL * i) * a1[12]
- *(double *)(a2 + 120 + 8LL * i) * a1[13]
- *(double *)(a2 + 160 + 8LL * i) * a1[14];
*(double *)(a3 + 120 + 8LL * i) = *(double *)(a3 + 120 + 8LL * i)
- *(double *)(a2 + 8LL * i) * a1[15]
- *(double *)(a2 + 40 + 8LL * i) * a1[16]
- *(double *)(a2 + 80 + 8LL * i) * a1[17]
- *(double *)(a2 + 120 + 8LL * i) * a1[18]
- *(double *)(a2 + 160 + 8LL * i) * a1[19];
result = i;
*(double *)(a3 + 160 + 8LL * i) = *(double *)(a3 + 160 + 8LL * i)
- *(double *)(a2 + 8LL * i) * a1[20]
- *(double *)(a2 + 40 + 8LL * i) * a1[21]
- *(double *)(a2 + 80 + 8LL * i) * a1[22]
- *(double *)(a2 + 120 + 8LL * i) * a1[23]
- *(double *)(a2 + 160 + 8LL * i) * a1[24];
}
return result;
}