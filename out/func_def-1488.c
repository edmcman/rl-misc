#include <math.h>

# 1 
void rfft2pt(float *ioptr){

float f0r, f0i, f1r, f1i;
float t0r, t0i;


f0r = ioptr[0];
f0i = ioptr[1];
f1r = ioptr[2];
f1i = ioptr[3];







t0r = f0r + f1r;
t0i = f0i + f1i;
f1r = f0r - f1r;
f1i = f1i - f0i;

f0r = t0r + t0i;
f0i = t0r - t0i;


ioptr[0] = f0r;
ioptr[1] = f0i;
ioptr[2] = f1r;
ioptr[3] = f1i;
}