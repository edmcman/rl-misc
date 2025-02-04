#include <math.h>

# 1 
void rifft8pt(float *ioptr, float scale){

float w0r = 1.0/1.414213562373095048801688724209698078569;
float w1r = 0.9238795325112867561281831893967882868224;
float w1i = 0.3826834323650897717284599840303988667613;
float f0r, f0i, f1r, f1i, f2r, f2i, f3r, f3i;
float f4r, f4i, f5r, f5i, f6r, f6i, f7r, f7i;
float t0r, t0i, t1r, t1i;
const float Two = 2.0;


t0r = ioptr[0];
t0i = ioptr[1];
f4r = ioptr[2];
f4i = ioptr[3];
f2r = ioptr[4];
f2i = ioptr[5];
f6r = ioptr[6];
f6i = ioptr[7];
f1r = Two * ioptr[8];
f1i = Two * ioptr[9];
f5r = ioptr[10];
f5i = ioptr[11];
f3r = ioptr[12];
f3i = ioptr[13];
f7r = ioptr[14];
f7i = ioptr[15];



f0r = t0r + t0i;
f0i = t0r - t0i;

t0r = f2r + f3r;
t0i = f2i - f3i;
t1r = f2r - f3r;
t1i = f2i + f3i;

f2r = t0r - w0r * t1r - w0r * t1i;
f2i = t0i + w0r * t1r - w0r * t1i;
f3r = Two * t0r - f2r;
f3i = f2i - Two * t0i;

t0r = f4r + f7r;
t0i = f4i - f7i;
t1r = f4r - f7r;
t1i = f4i + f7i;

f4r = t0r - w1i * t1r - w1r * t1i;
f4i = t0i + w1r * t1r - w1i * t1i;
f7r = Two * t0r - f4r;
f7i = f4i - Two * t0i;

t0r = f6r + f5r;
t0i = f6i - f5i;
t1r = f6r - f5r;
t1i = f6i + f5i;

f6r = t0r - w1r * t1r - w1i * t1i;
f6i = t0i + w1i * t1r - w1r * t1i;
f5r = Two * t0r - f6r;
f5i = f6i - Two * t0i;
# 2886 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/asfadmin/ASF_MapReady/refs/heads/devel/src/asf_fft/fftlib.c"
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


t0r = f4r + f5r;
t0i = f4i + f5i;
f5r = f4r - f5r;
f5i = f4i - f5i;

t1r = f6r - f7r;
t1i = f6i - f7i;
f6r = f6r + f7r;
f6i = f6i + f7i;

f4r = t0r + f6r;
f4i = t0i + f6i;
f6r = t0r - f6r;
f6i = t0i - f6i;

f7r = f5r + t1i;
f7i = f5i - t1r;
f5r = f5r - t1i;
f5i = f5i + t1r;


t0r = f0r - f4r;
t0i = f0i - f4i;
f0r = f0r + f4r;
f0i = f0i + f4i;

t1r = f2r + f6i;
t1i = f2i - f6r;
f2r = f2r - f6i;
f2i = f2i + f6r;

f4r = f1r - f5r * w0r + f5i * w0r;
f4i = f1i - f5r * w0r - f5i * w0r;
f1r = f1r * Two - f4r;
f1i = f1i * Two - f4i;

f6r = f3r + f7r * w0r + f7i * w0r;
f6i = f3i - f7r * w0r + f7i * w0r;
f3r = f3r * Two - f6r;
f3i = f3i * Two - f6i;


ioptr[0] = scale*f0r;
ioptr[1] = scale*f0i;
ioptr[2] = scale*f1r;
ioptr[3] = scale*f1i;
ioptr[4] = scale*f2r;
ioptr[5] = scale*f2i;
ioptr[6] = scale*f3r;
ioptr[7] = scale*f3i;
ioptr[8] = scale*t0r;
ioptr[9] = scale*t0i;
ioptr[10] = scale*f4r;
ioptr[11] = scale*f4i;
ioptr[12] = scale*t1r;
ioptr[13] = scale*t1i;
ioptr[14] = scale*f6r;
ioptr[15] = scale*f6i;
}