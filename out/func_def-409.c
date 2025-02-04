#include <stdint.h>

#include <stdlib.h>

#include <math.h>

# 1 
static void rifft4pt(float *ioptr, float scale)
{

    float f0r, f0i, f1r, f1i, f2r, f2i, f3r, f3i;
    float t0r, t0i, t1r, t1i;
    float w0r = 1.0 / 1.414213562373095048801688724209698078569;
    const float Two = 2.0;


    t0r = ioptr[0];
    t0i = ioptr[1];
    f2r = ioptr[2];
    f2i = ioptr[3];
    f1r = Two * ioptr[4];
    f1i = Two * ioptr[5];
    f3r = ioptr[6];
    f3i = ioptr[7];


    f0r = t0r + t0i;
    f0i = t0r - t0i;

    t1r = f2r + f3r;
    t1i = f2i - f3i;
    t0r = f2r - f3r;
    t0i = f2i + f3i;

    f2r = t1r - w0r * t0r - w0r * t0i;
    f2i = t1i + w0r * t0r - w0r * t0i;
    f3r = Two * t1r - f2r;
    f3i = f2i - Two * t1i;
# 2726 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/narner/AudioKit/refs/heads/master/AudioKit/Common/Internals/Soundpipe/lib/fft/fft.c"
    t0r = f0r + f1r;
    t0i = f0i - f1i;
    f1r = f0r - f1r;
    f1i = f0i + f1i;

    t1r = f2r - f3r;
    t1i = f2i - f3i;
    f2r = f2r + f3r;
    f2i = f2i + f3i;

    f0r = t0r + f2r;
    f0i = t0i + f2i;
    f2r = t0r - f2r;
    f2i = t0i - f2i;

    f3r = f1r + t1i;
    f3i = f1i - t1r;
    f1r = f1r - t1i;
    f1i = f1i + t1r;


    ioptr[0] = scale * f0r;
    ioptr[1] = scale * f0i;
    ioptr[2] = scale * f1r;
    ioptr[3] = scale * f1i;
    ioptr[4] = scale * f2r;
    ioptr[5] = scale * f2i;
    ioptr[6] = scale * f3r;
    ioptr[7] = scale * f3i;
}