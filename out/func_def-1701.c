#include <string.h>

#include <stdlib.h>

#include <errno.h>

#include <math.h>

#include <float.h>

# 1 
void complexDivisionRI(double *zReal, double *zImag, double xReal, double xImag, double yReal, double yImag)
{
 *zReal = (xReal * yReal + xImag * yImag) / (yReal * yReal + yImag * yImag);
 *zImag = (xImag * yReal - xReal * yImag) / (yReal * yReal + yImag * yImag);
}