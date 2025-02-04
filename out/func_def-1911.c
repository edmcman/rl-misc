#include <math.h>

# 1 
void cquat_conjugate(double *qdest, const double *qorg) {
 qdest[0] = -qorg[0];
 qdest[1] = -qorg[1];
 qdest[2] = -qorg[2];
 qdest[3] = qorg[3];
}