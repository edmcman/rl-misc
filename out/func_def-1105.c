#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

# 1 
int linear_expansion_sum_zeroelim(int elen, double* e, int flen, double* f, double* h)

{
    double Q, q, hh;
    double Qnew;
    double R;
    double bvirt;
    double avirt, bround, around;
    int eindex, findex, hindex;
    int count;
    double enow, fnow;
    double g0;

    enow = e[0];
    fnow = f[0];
    eindex = findex = 0;
    hindex = 0;
    if ((fnow > enow) == (fnow > -enow))
    {
        g0 = enow;
        enow = e[++eindex];
    }
    else
    {
        g0 = fnow;
        fnow = f[++findex];
    }
    if ((eindex < elen) && ((findex >= flen)
                            || ((fnow > enow) == (fnow > -enow))))
    {
        Qnew = (double) (enow + g0); bvirt = Qnew - enow; q = g0 - bvirt;
        enow = e[++eindex];
    }
    else
    {
        Qnew = (double) (fnow + g0); bvirt = Qnew - fnow; q = g0 - bvirt;
        fnow = f[++findex];
    }
    Q = Qnew;
    for (count = 2; count < elen + flen; count++)
    {
        if ((eindex < elen) && ((findex >= flen)
                                || ((fnow > enow) == (fnow > -enow))))
        {
            R = (double) (enow + q); bvirt = R - enow; hh = q - bvirt;
            enow = e[++eindex];
        }
        else
        {
            R = (double) (fnow + q); bvirt = R - fnow; hh = q - bvirt;
            fnow = f[++findex];
        }
        Qnew = (double) (Q + R); bvirt = (double) (Qnew - Q); avirt = Qnew - bvirt; bround = R - bvirt; around = Q - avirt; q = around + bround;
        Q = Qnew;
        if (hh != 0)
        {
            h[hindex++] = hh;
        }
    }
    if (q != 0)
    {
        h[hindex++] = q;
    }
    if ((Q != 0.0) || (hindex == 0))
    {
        h[hindex++] = Q;
    }
    return hindex;
}