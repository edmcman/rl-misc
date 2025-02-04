#include <string.h>

#include <stdlib.h>

#include <stdint.h>

# 1 
void getMean3(double *samples, long numberOfSamples, float* mean) {
    long n;


    mean[0] = 0;
    mean[1] = 0;
    mean[2] = 0;
    n = 3 * numberOfSamples;

    while(n--) {
        mean[0] += (float) *samples++;
        mean[1] += (float) *samples++;
        mean[2] += (float) *samples++;
    }


    mean[0] /= numberOfSamples;
    mean[1] /= numberOfSamples;
    mean[2] /= numberOfSamples;
}