#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

# 1 
static void hsv2rgb(double h, double s, double v,
   double *r, double *g, double *b)
{
    int i;
    double f, p, q, t;

    if (s <= 0.0) {
 *r = v;
 *g = v;
 *b = v;
    } else {
 if (h >= 1.0)
     h = 0.0;
 h = 6.0 * h;
 i = (int) h;
 f = h - (double) i;
 p = v * (1 - s);
 q = v * (1 - (s * f));
 t = v * (1 - (s * (1 - f)));
 switch (i) {
 case 0:
     *r = v;
     *g = t;
     *b = p;
     break;
 case 1:
     *r = q;
     *g = v;
     *b = p;
     break;
 case 2:
     *r = p;
     *g = v;
     *b = t;
     break;
 case 3:
     *r = p;
     *g = q;
     *b = v;
     break;
 case 4:
     *r = t;
     *g = p;
     *b = v;
     break;
 case 5:
     *r = v;
     *g = p;
     *b = q;
     break;
 }
    }
}