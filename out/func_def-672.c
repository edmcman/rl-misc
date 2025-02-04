#include <stdio.h>

#include <math.h>

# 1 
void UTTohhmm(double UT, int *h, int *m){


    if (UT < 0.0) {
 *h = -1.0;
 *m = -1.0;
    } else {
        *h = (int)UT;
        *m = (int)((UT-(double)(*h))*60.0+0.5);
 if (*m == 60) {




     *h += 1;
     *m = 0;
 }
    }

}