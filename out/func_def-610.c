#include <malloc.h>

#include <stdlib.h>

#include <string.h>

#include <memory.h>

#include <math.h>

# 1 
static void placev(long *osbuf, long osptr, long *obound, long *vwin)
{

    int crit;
    long i, q, osptr1, hrange, lrange;



    --osbuf;



    lrange = ((vwin[3] + 1) >= (180 + 1) ? (vwin[3] + 1) : (180 + 1));
    hrange = 3 * 180;

    for (osptr1 = osptr; osptr1 >= 1; --osptr1) {
        if (osbuf[osptr1] <= hrange) {
            break;
        }
    }
    ++osptr1;

    if (osptr1 <= 1 || osbuf[osptr1 - 1] < lrange) {

        vwin[4] = ((vwin[3] + 1) >= (307) ? (vwin[3] + 1) : (307));
        vwin[5] = vwin[4] + 156 - 1;
        *obound = 0;
    } else {


        for (q = osptr1 - 1; q >= 1; --q) {
            if (osbuf[q] < lrange) {
                break;
            }
        }
        ++q;


        crit = (0);
        for (i = q + 1; i <= (osptr1 - 1); ++i) {
            if (osbuf[i] - osbuf[q] >= 90) {
                crit = (1);
                break;
            }
        }

        if (! crit && osbuf[q] > ((2 * 180) >= (lrange + 90 - 1) ? (2 * 180) : (lrange + 90 - 1))) {
            vwin[5] = osbuf[q] - 1;

            vwin[4] = ((lrange) >= (vwin[5] - 156 + 1) ? (lrange) : (vwin[5] - 156 + 1));
            *obound = 2;

        } else {
            vwin[4] = osbuf[q];
L110:
            ++q;
            if (q >= osptr1) {
                goto L120;
            }
            if (osbuf[q] > vwin[4] + 156) {
                goto L120;
            }
            if (osbuf[q] < vwin[4] + 90) {
                goto L110;
            }
            vwin[5] = osbuf[q] - 1;
            *obound = 3;
            return;
L120:

            vwin[5] = ((vwin[4] + 156 - 1) <= (hrange) ? (vwin[4] + 156 - 1) : (hrange));
            *obound = 1;
        }
    }
}