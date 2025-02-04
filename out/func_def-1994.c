#include <string.h>

# 1 
void g3_computeUniformProbs(double *probabilities) {
    int i;
    for (i = 0; i < 7; i++)
        probabilities[i] = 1.0 / 7;

    return;
}