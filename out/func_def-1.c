#include <math.h>

#include <string.h>

#include <stdio.h>

# 1 
void transformi(double *v, double *d) {
    int t;
    for (t=0; t<3; t++) {
 v[t] = v[t]/d[3+t] + d[t];
    }
}