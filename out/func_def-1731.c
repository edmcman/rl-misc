#include <stdio.h>

#include <stdlib.h>

#include <stdint.h>

#include <math.h>

#include <sys/time.h>

#include <errno.h>

#include <time.h>

# 1 
void line_eqn_from_two_points(double x1, double y1, double x2, double y2,
    double *A, double *B, double *C)
{

 *A = y1 - y2;
 *B = x2 - x1;
 *C = -(x1 * y2 - x2 * y1);
}