#include <math.h>

#include <string.h>

#include <stdio.h>

#include <math.h>

#include <string.h>

#include <stdio.h>

# 1 
int dmsdec(int d, int m, float s, double *dec)



{
 int absdec = d;
 if (absdec<0) absdec = -absdec;
 *dec = absdec + m/60.0 + s/3600.0;
 if (d<0) *dec = -(*dec);
 if (*dec<-360.0) return 1;
 if (*dec>360.0) return 1;
 return 0;
}