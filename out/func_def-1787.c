#include <malloc.h>

#include <stdlib.h>

#include <string.h>

#include <memory.h>

#include <math.h>

# 1 
static void ivfilt(float *lpbuf, float *ivbuf, long nsamp, float *ivrc)
{

    long i, j, k;
    float r[3], pc1, pc2;


    for (i = 0; i < 3; ++i) {
        r[i] = 0.f;
        k = (i) << 2;
        for (j = ((i + 1) << 2) + 312 - nsamp - 1; j < 312; j += 2) {
            r[i] += lpbuf[j] * lpbuf[j - k];
        }
    }

    pc1 = 0.f;
    pc2 = 0.f;
    ivrc[0] = 0.f;
    ivrc[1] = 0.f;
    if (r[0] > 1e-10f) {
        ivrc[0] = r[1] / r[0];
        ivrc[1] = (r[2] - ivrc[0] * r[1]) / (r[0] - ivrc[0] * r[1]);
        pc1 = ivrc[0] - ivrc[0] * ivrc[1];
        pc2 = ivrc[1];
    }

    for (i = 312 - nsamp; i < 312; ++i) {
        ivbuf[i] = lpbuf[i] - pc1 * lpbuf[i - 4] - pc2 * lpbuf[i - 8];
    }
}