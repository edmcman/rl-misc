#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <float.h>

#include <ctype.h>

#include <time.h>

#include <limits.h>

#include <string.h>

#include <stdarg.h>

# 1 
int check_ellipse(double *param)
{
  double tmp;
  if (param[2]<=0||param[3]<=0) return 0;
  if (param[2]<param[3])
    {
      tmp = param[3]; param[3] = param[2]; param[2] = tmp; param[4] += 1.57079632679;
    }
  if (param[2]/param[3]>100) return 0;
  if (param[4]>1.57079632679)
    param[4] = param[4] - 3.14159265358979323846;
  if (param[4]>3.14159265358979323846)
    param[4] = param[4] - 3.14159265358979323846;
  if (param[4]<-1.57079632679)
    param[4] = param[4] + 3.14159265358979323846;
  return 1;
}