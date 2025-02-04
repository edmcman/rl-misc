#include <math.h>

#include <string.h>

#include <stdlib.h>

# 1 
void Mat4_Copy(float dst[16], const float src[16])
{
    {(dst)[0] = (src)[0]; (dst)[1] = (src)[1]; (dst)[2] = (src)[2]; (dst)[3] = (src)[3];};
    {(dst+4)[0] = (src+4)[0]; (dst+4)[1] = (src+4)[1]; (dst+4)[2] = (src+4)[2]; (dst+4)[3] = (src+4)[3];};
    {(dst+8)[0] = (src+8)[0]; (dst+8)[1] = (src+8)[1]; (dst+8)[2] = (src+8)[2]; (dst+8)[3] = (src+8)[3];};
    {(dst+12)[0] = (src+12)[0]; (dst+12)[1] = (src+12)[1]; (dst+12)[2] = (src+12)[2]; (dst+12)[3] = (src+12)[3];};
}