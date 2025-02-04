#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
void _CRGetIntersectionBetweenTwoLines(float *a1, float *b1, float *c1, float *a2, float *b2, float *c2, float *x, float *y) {



 float determinant = 1.0/(*a1 * (-*c2) - (-*c1) * *a2);

 float inv11 = -*c2;
 float inv12 = *c1;
 float inv21 = -*a2;
 float inv22 = *a1;

 *x = (inv11 * (-*b1) + inv12 * (-*b2)) * determinant;
 *y = (inv21 * (-*b1) + inv22 * (-*b2)) * determinant;
}