#include <stdio.h>

#include <math.h>

# 1 
void bilinear(
    double a0, double a1, double a2,
    double b0, double b1, double b2,
    double *k,
    double fs,
    double *coef
)
{
    double ad, bd;


    ad = 4. * a2 * fs * fs + 2. * a1 * fs + a0;

    bd = 4. * b2 * fs * fs + 2. * b1* fs + b0;


    *k *= ad/bd;


    *coef++ = (2. * b0 - 8. * b2 * fs * fs)
                           / bd;
    *coef++ = (4. * b2 * fs * fs - 2. * b1 * fs + b0)
                           / bd;


    *coef++ = (2. * a0 - 8. * a2 * fs * fs)
                           / ad;
    *coef = (4. * a2 * fs * fs - 2. * a1 * fs + a0)
                           / ad;
}