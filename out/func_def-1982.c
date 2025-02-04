#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
static void _secam_g(double *g, double f)
{
 const double f0 = 4286000;
 double lq, rq, d;

 f = f / f0 - f0 / f;

 lq = 16.0 * f;
 rq = 1.26 * f;
 d = 1.0 + rq * rq;

 g[0] = 0.115 * (1.0 + lq * rq) / d;
 g[1] = 0.115 * (lq - rq) / d;
}