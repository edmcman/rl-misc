#include <math.h>

# 1 
float sdot(long n, float *sx, long incx, float *sy, long incy)
{
    static long i, ix, iy, m, mp1;
    static float sdot, stemp;
    stemp = sdot = 0.0;
    if (n <= 0)
        return sdot;
    if (incx == 1 && incy == 1)
        goto S20;
    ix = iy = 1;
    if (incx < 0)
        ix = (-n + 1) * incx + 1;
    if (incy < 0)
        iy = (-n + 1) * incy + 1;
    for (i = 1; i <= n; i++) {
        stemp += (*(sx + ix - 1) ** (sy + iy - 1));
        ix += incx;
        iy += incy;
    }
    sdot = stemp;
    return sdot;
S20:
    m = n % 5L;
    if (m == 0)
        goto S40;
    for (i = 0; i < m; i++)
        stemp += (*(sx + i) ** (sy + i));
    if (n < 5)
        goto S60;
S40:
    mp1 = m + 1;
    for (i = mp1; i <= n; i += 5)
        stemp += (*(sx + i - 1) ** (sy + i - 1) + *(sx + i) ** (sy + i) + *(sx + i
                                                                            + 1) ** (sy + i + 1) + *(sx + i + 2) ** (sy + i + 2) + *(sx + i + 3) ** (sy + i + 3));
S60:
    sdot = stemp;
    return sdot;
}